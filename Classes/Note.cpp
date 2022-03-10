//
// Created by mabro on 3/2/2022.
//

#include <iostream>
#include "Note.h"
#include "fstream"

Note::Note(const Matiere &mat, const Etudiant &etu, float note, const string &type) : mat(mat), etu(etu), note(note),
                                                                                      type(type) {}

void Note::MoyenneMatiere(vector<Note> Ln,vector<Etudiant>& ListEtd,vector<Matiere>& ListMat,ofstream & MyFile) {
      int i=0;
      int j;
      int x=0;
      float MoyMat=0;
        while (i < ListEtd.size()) {
            if (i == ListEtd.size()) {
                break;
            } else {
                while (x < ListMat.size()) {
                    for (j = 0; j < Ln.size(); j++) {
                        if ((ListMat.at(x).getNomMat() == Ln.at(j).getMat().getNomMat()) &&
                            (ListEtd.at(i).getId() == Ln.at(j).etu.getId())) {
                            MoyMat += Ln.at(j).note;
                        }
                    }
                    float moyenne = 0;
                    moyenne = MoyMat / ListMat.at(x).getCoef();
                    MyFile << ListEtd.at(i).getId() << " " << ListEtd.at(i).getNom() << " " << ListEtd.at(i).getPrenom()
                           << " " << moyenne << " " << ListMat.at(x).getNomMat() << endl;
                    x++;
                    MoyMat = 0;
                    }
                   x=0;
                   i++;
                }
            }

    }

void Note::AjouterNote(Matiere M,int id,vector<Note>& ListNote,vector<Etudiant>& ListEtd) {
      int InputNote =0;
      Etudiant E ;
                   cout<<"***Combien du notes vous allez associer a "<<M.getNomMat()<<endl;
                   cin>>InputNote;
                   for(int i=0;i<InputNote;i++){
                       this->mat=M;
                       cout << "Donner le Type de note" << endl;
                       cin >> this->type;
                       cout << "Donner la Note du " << this->type << endl;
                       cin >> this->note;
                       this->etu=E.GetEtudiantByList(ListEtd,id);
                       ListNote.push_back(*this);
                   }
}

Note::Note() {}

void Note::MoyenneGM(GroupeModule GM, int id,vector<Matiere> ListMat,vector<GmEtudiant>& ListCustom) {
  ifstream newFile;
    GmEtudiant GME ;
  newFile.open("C:\\Users\\mabro\\\\Desktop\\Moyenne.txt",ios::app);
  if(!newFile){
      cout<<"probleme dans le fichier"<<endl;
  }else{
      string data;
      float Moy ;
      int Coef ; // Somme des coefficients
      while(getline(newFile,data)){
          for(auto G:GM.ListeMat){
              //TODO: verification d'etudiants dans le fichier
              if((G.NomMat== getMatiere(data))&&(id==stoi(getId(data)))){
                  GME.MatNom.push_back(G.NomMat);
                  for(int i=0;i<ListMat.size();i++){
                      if(ListMat.at(i).getNomMat()==G.NomMat){
                          Moy += stof(getMoy(data))*ListMat.at(i).getCoef();
                      }
                  }
              }
          }
      }
      GME.NomGM=GM.NomGM;
      GME.IdEtd=id;
      GME.coefGM=GM.CoefGM;
      Coef=GM.CoefGM;
      GME.MoyGM=Moy/Coef;
      Etudiant E ;
      ListCustom.insert(ListCustom.begin(),GME);
      newFile.close();
  }
}
string Note::getId(string line) {
    int j=0;
    int i=0;
    char res[100] ;
    while (!isspace(line[i])){
        res[j]=line[i];
        i++;
        j++;
    }
    return res ;
}

string Note::getMatiere(string line) {
    int x =0 ;
    int i =0;
    char res[100] ;
    while (i<line.length()){
        if(isspace(line[i])){
            x++;
            if(x==4){
                int k=i+1;
                int j=0 ;
                do {
                    res[j]=line[k];
                    j++;
                    k++;
                }while(line[k]!='\0');
            } else{
                i++;
            }
        }else{
            i++;
        }
    }
    return res;
}
string Note::getMoy(string line) {
    int x =0 ;
    int i =0;
    char res[100] ;
    while (i<line.length()){
        if(isspace(line[i])){
            x++;
            if(x==3){
                int k=i+1;
                int j=0 ;
                do {
                    res[j]=line[k];
                    j++;
                    k++;
                }while(!isspace(line[k]));
            } else{
                i++;
            }
        }else{
            i++;
        }
    }
    return res;
}

const Matiere &Note::getMat() const {
    return mat;
}

const Etudiant &Note::getEtu() const {
    return etu;
}

float Note::getNote() const {
    return note;
}

const string &Note::getType() const {
    return type;
}


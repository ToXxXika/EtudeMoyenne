//
// Created by mabro on 3/2/2022.
//

#include <iostream>
#include "Note.h"
#include "fstream"

Note::Note(const Matiere &mat, const Etudiant &etu, float note, const string &type) : mat(mat), etu(etu), note(note),
                                                                                      type(type) {}

void Note::MoyenneMatiere(vector<Note> Ln,ofstream & MyFile) {
    float Notes =0 ;
    for(auto x: Ln){
        Notes+=x.note;
    }
   float moyenne =0;
    moyenne=Notes/Ln.size();
    cout<<"Ajout du Moyenne dans le fichier"<<endl;
    cout<<Ln.begin()->mat.getNomMat()<<"Nom Matiere"<<endl;
    MyFile << Ln.begin()->etu.getNumInsc()<<" "<<Ln.begin()->etu.getNom()<<" "<<Ln.begin()->etu.getPrenom()<<" "<<Ln.begin()->mat.getNomMat()<<" "<<Ln.begin()->mat.getCoef()<<" "<<moyenne<<endl;
    cout<<"La Moyenne de Cet Etudiant "<<Ln.begin()->etu.getNom()<<" "<<Ln.begin()->etu.getPrenom()<<" dans cette matiere"<<Ln.begin()->mat.getNomMat()<<"est"<<moyenne;
}
void Note::AjouterNote(vector<Matiere> M,int id,vector<Etudiant> LsEtd) {
     bool res =false;
     bool i  = true ;
     while (i!=res) {
         cout<<"Donner le nom du la matiere"<<endl;
         string nomMat ;
         cin>>nomMat;
        for(auto i: LsEtd){
            cout<<"Etudiant getId \n"<<i.getId()<<endl;
            cout<<"Etudiant id \n"<<id<<endl;
            if(i.getId()==id){
                this->etu=i;
                for (auto x: M) {
                    if (x.NomMat == nomMat) {
                        this->mat=x;
                        cout << "Donner le Type de note" << endl;
                        cin >> this->type;
                        cout << "Donner la Note du " << this->type << endl;
                        cin >> this->note;
                        res= true ;
                    }else{
                        cout<<"Matiere introuvable dans la base de données"<<endl;
                    }
                }
                break;
            }else{
                cout<<"Etudiant non trouvable"<<endl ;
            }
        }
    }
}

Note::Note() {}

void Note::MoyenneGM(GroupeModule GM, int id,vector<Matiere> ListMat) {
  ifstream newFile;
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
                  for(int i=0;i<ListMat.size();i++){
                      if(ListMat.at(i).getNomMat()==G.NomMat){
                          Moy += stof(getMoy(data))*ListMat.at(i).getCoef();
                      }
                  }
              }
          }
          // coefficient du groupe module
          Coef=GM.CoefGM;
          cout<<"La Moyenne du groupe Module pour cet etudiant"<<Moy/Coef<<endl;
      }
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
    cout<<res<<endl ;
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


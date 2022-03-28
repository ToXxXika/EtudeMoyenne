#include <iostream>
#include <vector>
#include "Classes/Enseignant.h"
#include "Classes/Etudiant.h"
#include "Classes/Note.h"
#include "fstream"
vector<Etudiant> ListEtd;
vector<Enseignant> ListEns;
vector<Matiere> ListMat;
vector<Note> ListNote;
ofstream MyFile ("C:\\Users\\mabro\\Desktop\\Moyenne.txt",ios::app);
vector<Note::GmEtudiant> ListCustom ;
vector<GroupeModule> ListGRP ;
Etudiant E ;
Matiere M ;
Enseignant Ens ;

void Menu();
void AjoutEnseignants();
void AjoutEtudiants();
void ModifEtudiants();
void SuppressionEtudiants(int id);
void SuppressionEnseignant(int cnss);
void CaseEnseignants();
void AjoutMatieres();
void SuppressionMatiere(int nomMat);
void CaseMatieres();
void CaseEtudiants();
void CalculeNote();
void CalculeMoyenne();
void CaseNotes();
void AjoutGroupModule();
void CalculMoyenneGM();
void CaseGroup();
void CasePv();
int main() {

Menu();


    return 0;
}
void AjoutEnseignants(){
    int NbrEns ;
    cout<<"Combien Enseignants pour ajouter ? "<<endl;
    cin>>NbrEns;
    for(int i=0;i<NbrEns;i++){
        Ens.AjouterEnseignant();
        ListEns.push_back(Ens);
    }
    cout<<"Ajout Enseignant terminée avec success"<<endl;
}
void AjoutEtudiants(){
    int NbrEtd ;
    cout<<"Combien d'etudiants pour ajouter ?"<<endl;
    cin>>NbrEtd;
    for(int i=0;i<NbrEtd;i++){
        E.AjouterEtudiant();
        ListEtd.push_back(E);
    }
    cout<<"Ajout Terminée avec success"<<endl;
}
void ModifEtudiants(){
    cout<<"Donner Id etudiant a modifier";
    int id ;
    cin>>id;
    E.ModifierEtudiant(ListEtd,id);
}
void SuppressionEtudiants(int id){
    E.SupprimerEtudiant(ListEtd,id);

}
void SuppressionEnseignant(int cnss){
    Ens.SupprimerEnseignant(ListEns,cnss);
}
void CaseEnseignants(){
    char choix ;
    char x ;
    do{
        printf("1-Ajout des Enseignants \n"
               "2- Suppression Enseignants \n"
               "3- Modification des Enseignants \n"
               "4- Retourner au menu principal \n");
        cout<<"Donner votre Choix"<<endl;
        cin>>choix;
        x=choix;
        switch(choix){
            case '1':
                cout<<" *********Ajout des Enseignants  dans la Liste**********"<<endl;
                AjoutEnseignants();
                break;
            case '2':
                cout<<"*********** Suppression Enseignants"<<endl;
                int cnss ;
                cout<<"Donner NumCnss de l'Enseignant a supprimer "<<endl;
                cin>>cnss;
                SuppressionEnseignant(cnss);
                break;
            case '3':
                cout<<"********** Modification des Enseignants"<<endl;
                break ;
            case '4':
                Menu();
                break;

            case '0':
            default: "Choix inntrouvable";break;
        }

    }while(x !='0');
}
void AjoutMatieres(){
    cout<<"Combien du matieres vous allez Ajouter ?"<<endl;
    int NbrMat;
    cin>>NbrMat;
    for(int i=0;i<NbrMat;i++){
        M.AjouterMatiere(ListEns);
        ListMat.push_back(M);
    }
    cout<<"Ajout Terminée avec succes"<<endl;
}
void SuppressionMatiere(int nomMat){
    M.SupprimerMatiere(ListMat,nomMat);
}
void CaseMatieres(){
    char choix ;

    do{
        printf("1-Ajout des Matieres \n"
               "2- Suppression Matieres \n"
               "3- Modification des Matieres \n"
               "4- Retourner au menu principal \n");
        cout<<"Donner votre Choix"<<endl;
        cin>>choix;
        switch(choix){

            case '1':
                cout<<" *********Ajout des Matieres dans la Liste**********"<<endl;
                AjoutMatieres();
                break;
            case '2':
                cout<<"*********** Suppression Matieres"<<endl;
                int id;
                cout<<"Donner id de Matiere a supprimer "<<endl;
                cin>>id;
                SuppressionMatiere(id);
                break;
            case '3':
                cout<<"********** Modification des Matieres"<<endl;
            case '4':
                Menu();
                break ;

            case '0':
            default: "Choix inntrouvable";break;
        }

    }while(choix !='0');
}
void CaseEtudiants(){
    char x ;
    do{
        printf("1- Ajout des Etudiants \n"
               "2- Suppression Etudiants \n"
               "3- Modification des Etudiants \n"
               "4-Retourner au Menu Principal \n");
        char choix ;
        cout<<"Donner votre Choix"<<endl;
        cin>>choix;
        x=choix;
        switch(choix){
            case '1':
                cout<<" *********Ajout des Etudiants dans la Liste**********"<<endl;
                AjoutEtudiants();
                break;
            case '2':
                cout<<"*********** Suppression Etudiants"<<endl;
                int id ;
                cout<<"Donner id de l'etudiant a supprimer "<<endl;
                cin>>id;
                SuppressionEtudiants(id);
                break;
            case '3':
                cout<<"********** Modification des Etudiants"<<endl;
                ModifEtudiants();
            case '4':
                     Menu();
                     break;
            case '0':
            default: "Choix inntrouvable";break;
        }

    }while(x !='0');
}
void CalculeNote(){
    Note NN;
    cout<<"ListEtd"<<ListEtd.size()<<endl;
    cout<<"ListMat"<<ListMat.size()<<endl;
    for(int i=0;i<ListEtd.size();i++){
        for(int j=0;j<ListMat.size();j++){
            NN.AjouterNote(ListMat.at(j),ListEtd.at(i).getId(),ListNote,ListEtd);
        }

    }
}
void CalculeMoyenne(){
    Note NN ;
    NN.MoyenneMatiere(ListNote,ListEtd,ListMat,MyFile);
}
void CaseNotes(){
    char choix ;

    do{
        printf("1- Calcul de Note \n"
               "2-Calcul de Moyenne de la Classe"
               "3-Retourner au menu principal \n");
        cout<<"Donner votre Choix"<<endl;
        cin>>choix;
        switch(choix){
            case '1':
                cout<<" *********Calcul de Note pour les Etudiants **********"<<endl;
                CalculeNote();
                break;
            case '2':
                cout<<"*********** Calcule De Moyenne pour toute la classe pour les matieres "<<endl;
                CalculeMoyenne();
                break;
            case '3' : Menu();
                       break;
            case '0':
            default: "Choix inntrouvable";break;
        }

    }while(choix !='0');
}
void AjoutGroupModule(){

    //***************** Remplir GroupeModule **********//
    cout<<"Donner le nombre de module a ajouter "<<endl;
    int x3=0;
    cin>>x3;
    for(int j3=0;j3<x3;j3++){
        GroupeModule GM ;
        GM.AjouterGroupeModule(ListMat);
        ListGRP.push_back(GM);
    }
}
void CalculMoyenneGM(){
    Note N ;
    for(auto etd:ListEtd){
        for(auto GM: ListGRP){
            N.MoyenneGM(GM,etd.getId(),ListMat,ListCustom);
        }
    }
}
void CaseGroup(){
    char x;
    do{
        printf("1- Ajout des groupes modules \n"
               "2- Calcule Moyenne des groupes Modules "
               "3- Retourner au Menu Principal\n");
        char choix ;
        cout<<"Donner votre Choix"<<endl;
        cin>>choix;
        x=choix ;
        switch(choix){

            case '1':
                cout<<" *********Ajout des Groupes module dans la Liste**********"<<endl;
                AjoutGroupModule();
                break;
            case '2':
                cout<<"*********** Calcule Moyenne des groupes modules"<<endl;
                CalculMoyenneGM();
                break;
            case '3': Menu();
                   break ;

            case '0':
                exit(0);
            default: "Choix inntrouvable";break;
        }
    }while(x !='0');
}
void CasePv(){
    string data ;
    /*************** Affichage Pv ************/
    ifstream MyFile2 ("C:\\Users\\mabro\\Desktop\\Moyenne.txt",ios::app);
    string moy="";
    Note N ;
    Matiere MM;
    for(auto x: ListEtd){
        for(int i=0;i<ListCustom.size();i++){
            if(x.getId()==ListCustom.at(i).IdEtd){
                cout<<"*****"<<"Groupe Module Nom :"<<ListCustom.at(i).NomGM<<endl;
                cout<<"*****"<<"CoefficientGM :"<<ListCustom.at(i).coefGM<<endl;
                cout<<""<<x.getNumInsc()<<"/"<<x.getNom()<<"/"<<x.getPrenom();
                while(getline(MyFile2,data)){
                    for(auto M: ListCustom.at(i).MatNom){

                        string Mat =N.getMatiere(data);
                        int idFile = stoi(N.getId(data));
                        if(idFile==x.getId()){
                            if(M==Mat){
                                cout<<"***********Matiere "<<M<<endl;
                                cout<<"***********Coefficient Matiere: "<<MM.getCoefMatiere(ListMat,M)<<endl;
                                moy=N.getMoy(data);
                                cout<<"***********Moyenne Matiere: "<<moy<<endl;
                            }

                        }

                    }

                }
                cout<<"******** Moyenne General :"<<N.MoyenneGenerale(ListCustom,x.getId())<<endl;
                if(N.MoyenneGenerale(ListCustom,x.getId())>10){
                    cout<<"Admis ";
                    float x1 = N.MoyenneGenerale(ListCustom,x.getId());
                    if((x1>10)&&(x1<12)){
                        cout<<"Passable"<<endl;
                    }else if ((x1>12)&&(x1<14)){
                        cout<<"Assez Bien"<<endl;
                    }else if((x1>14)&&(x1<16)){
                        cout<<"Bien"<<endl;
                    }else if ((x1>16)&&(x1<18)){
                        cout<<"Tres Bien"<<endl;
                    }else cout<<"Excellent"<<endl;
                }else{
                    cout<<"Adjourné"<<endl;
                }

                MyFile2.clear();
                MyFile2.seekg(0);
            }
        }
    }
}
void Menu(){
    int fin;

    fin = 0;
    while(!fin)
    {
        int c;

        /* affichage menu */
        printf("1- Gestion des Etudiants \n"
               "2- Gestion des Enseignants\n"
               "3- Gestion des Matieres \n"
               "4- Gestion des Notes \n"
               "5- Gestion des Groupes Modules \n"
               "6- Gestion des Moyennes pour la Classe \n ");

        c = getchar();

        /* suppression des caracteres dans stdin */
        if(c != '\n' && c != EOF)
        {
            int d;
            while((d = getchar()) != '\n' && d != EOF);
        }

        switch(c)
        {
            case '1':
                printf("****** Gestion Des Etudiants dans la Liste \n");
                CaseEtudiants();
                break;

            case '2':
                printf("********* Gestion des Enseignants dans la Liste \n");
                CaseEnseignants();
                break;
            case '3':
                printf("********* Gestion des Matieres dans la liste \n");
                CaseMatieres();
                break;
            case '4': printf("******* Gestion des Notes ****** \n");
                CaseNotes();
                break;
            case '5': printf("***** Gestion du Groupe Modules**** \n");
                CaseGroup();
                break;
            case '6':
                printf("******* Gestion Pv dans la Classe \n");
                CasePv();
                break;

            default:
                printf("Choix errone\n");
        }
    }
}

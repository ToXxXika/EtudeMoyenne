cmake_minimum_required(VERSION 3.21)
project(EtudeMoyenne)

set(CMAKE_CXX_STANDARD 14)

add_executable(EtudeMoyenne main.cpp Classes/Matiere.cpp Classes/Matiere.h Classes/Groupe.cpp Classes/Groupe.h Classes/Note.cpp Classes/Note.h Classes/Personne.cpp Classes/Personne.h Classes/GroupleModule.cpp Classes/GroupleModule.h Classes/Etudiant.cpp Classes/Etudiant.h Classes/Enseignant.cpp Classes/Enseignant.h Classes/Database.h)

cmake_minimum_required(VERSION 3.21)
project(EtudeMoyenne)

set(CMAKE_CXX_STANDARD 14)
SET (CMAKE_C_COMPILER_WORKS 1)
SET (CMAKE_CXX_COMPILER_WORKS 1)
set (CMAKE_CXX_COMPILER_FORCED 1) 

add_executable(EtudeMoyenne main.cpp Classes/Personne.cpp Classes/Personne.h Classes/Etudiant.cpp Classes/Etudiant.h Classes/Enseignant.cpp Classes/Enseignant.h Classes/Database.h Classes/Note.cpp Classes/Note.h Classes/Matiere.cpp Classes/Matiere.h)

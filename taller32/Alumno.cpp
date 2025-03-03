#include "Alumno.h"
#include <iostream>
using namespace std;
Alumno::Alumno(const string & nombre_completo, int & id):nombre_completo(nombre_completo), id(id){}

float Alumno::getNota1()
{
    return this->calificaciones[0];
}

float Alumno::getNota2()
{
    return this->calificaciones[1];
}

float Alumno::getNota3()
{
    return this->calificaciones[2];
}

void Alumno::setNota1(const float &nota){
    this->calificaciones[0] = nota;
}
void Alumno::setNota2(const float &nota){
    this->calificaciones[1] = nota;
}
void Alumno::setNota3(const float &nota){
    this->calificaciones[2] = nota;
}

void Alumno::mostrarNotaFinal()
{
    this->calcularNotaFinal();
    cout<<"Nombre del alumno: "<<this->nombre_completo<<endl;
    cout<<"Nota final: "<<this->nota_final<<endl;
}

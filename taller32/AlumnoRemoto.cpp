#include "AlumnoRemoto.h"

AlumnoRemoto::AlumnoRemoto(const string &nombre_completo, int id):Alumno(nombre_completo, id)
{
}

void AlumnoRemoto::calcularNotaFinal()
{
    this->nota_final = ((this->calificaciones[0] + this->calificaciones[1] + this->calificaciones[2])/3)*0.8 + this->nota_foro * 0.2;
}

void AlumnoRemoto::setNotaForo(const float &nota)
{
    this->nota_foro = nota;
}
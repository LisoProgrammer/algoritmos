#include "AlumnoNocturno.h"

AlumnoNocturno::AlumnoNocturno(const string &nombre_completo, int id):Alumno(nombre_completo, id)
{
}

void AlumnoNocturno::calcularNotaFinal()
{
    this->nota_final = ((this->calificaciones[0] + this->calificaciones[1] + this->calificaciones[2])/3)*0.7 + this->nota_proyecto * 0.3;
}

void AlumnoNocturno::setNotaProyecto(const float &nota)
{
    this->nota_proyecto = nota;
}

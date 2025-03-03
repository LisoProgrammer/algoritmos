#include "AlumnoRegular.h"

AlumnoRegular::AlumnoRegular(const string &nombre_completo, int id):Alumno(nombre_completo, id)
{
}
void AlumnoRegular::calcularNotaFinal(){
    this->nota_final = (this->calificaciones[0] + this->calificaciones[1] + this->calificaciones[2]) / 3;
}
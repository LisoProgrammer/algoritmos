#include <iostream>
using namespace std;
#include "AlumnoRegular.h"
#include "AlumnoRemoto.h"
#include "AlumnoNocturno.h"

int main(){
    AlumnoRegular alumno1("Juan Perez", 101);
    AlumnoRemoto alumno2("Maria Gomez", 102);
    AlumnoNocturno alumno3("Carlos Diaz", 103);

    // Establecer calificaciones para cada alumno
    alumno1.setNota1(3);
    alumno1.setNota2(4);
    alumno1.setNota3(5);

    alumno2.setNota1(2);
    alumno2.setNota2(4);
    alumno2.setNota3(4.5);
    alumno2.setNotaForo(4);

    alumno3.setNota1(5);
    alumno3.setNota2(4);
    alumno3.setNota3(3);
    alumno3.setNotaProyecto(4.5);

    // Calcular la nota final usando polimorfismo
    Alumno* alumnos[] = {&alumno1, &alumno2, &alumno3};

    for (Alumno* alumno : alumnos) {
        alumno->calcularNotaFinal();
        alumno->mostrarNotaFinal(); // Método de la clase base
    }
    return 0;
}
/*
g++ main.cpp Alumno.cpp AlumnoRegular.cpp AlumnoRemoto.cpp AlumnoNocturno.cpp  -o main.exe
./main.exe
*/
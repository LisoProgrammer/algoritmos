#include <iostream>
using namespace std;
#include "GrupoPersonas.h"
//Se inicializa el array de personas con nullptr
grupoPersonas::grupoPersonas(int n) : cantidad(n)
{
    personas = new Persona *[cantidad];
    for (int i = 0; i < cantidad; i++)
    {
        personas[i] = nullptr;
    }
}
//Permite agregar un objeto Persona al array de personas
void grupoPersonas::agregarPersona(string nombre, float peso, float altura, int edad, int sexo)
{
    int index = this->index;
    if (index + 1 > this->cantidad)
    {
        cout<<"Limite del array alcanzado." <<endl;
    }
    else
    {
        personas[index] = new Persona(nombre, peso, altura, edad, sexo);
        this->index += 1;
    }
}
//Sobreescribe el operador [] para acceder al objeto persona
Persona *grupoPersonas::operator[](int index) const
{
    if (index >= 0 && index < cantidad)
        return personas[index];
    else
        return nullptr;
}
//Imprime las personas teniendo en cuenta la funcion amiga que sobreescribe el operador de salida << de la clase Persona
void grupoPersonas::mostrarPersonas()
{
    // cout<<"Nombre\t\tPeso(kg)\tAltura(m)\tEdad\tSexo"<<endl;
    for (int i = 0; i < index; i++)
    {
        cout << *personas[i] << endl;
    }
}

grupoPersonas::~grupoPersonas()
{
    for (int i = 0; i < cantidad; i++)
    {
        delete personas[i];
    }
    delete[] personas;
}

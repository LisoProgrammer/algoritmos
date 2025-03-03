#ifndef ALUMNO_H
#define ALUMNO_H
#include <string>
using namespace std;
class Alumno {
public:
  Alumno(const string &nombre_completo, int &id);
  virtual ~Alumno() = default; // Destructor virtual
  virtual void calcularNotaFinal() = 0;
  float getNota1();
  float getNota2();
  float getNota3();
  void setNota1(const float &nota);
  void setNota2(const float &nota);
  void setNota3(const float &nota);
  void mostrarNotaFinal();
  float nota_final = 0;
protected:
  string nombre_completo;
  int id;
  float calificaciones[3] = {0};
};

#endif // ALUMNO_H
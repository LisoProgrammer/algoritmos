#ifndef ALUMNONOC_H
#define ALUMNONOC_H
#include "Alumno.h"
#include <string>
using namespace std;
class AlumnoNocturno: public Alumno {
public:
  AlumnoNocturno(const string &nombre_completo, int id);
  virtual ~AlumnoNocturno() = default; // Destructor virtual
  virtual void calcularNotaFinal() override;
  void setNotaProyecto(const float &nota);
private:
  float nota_proyecto = 0;
};

#endif // ALUMNORE_H
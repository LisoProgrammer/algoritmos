#ifndef ALUMNOR_H
#define ALUMNOR_H
#include "Alumno.h"
#include <string>
using namespace std;
class AlumnoRegular: public Alumno {
public:
  AlumnoRegular(const string &nombre_completo, int id);
  virtual ~AlumnoRegular() = default; // Destructor virtual
  virtual void calcularNotaFinal() override;
};

#endif // ALUMNOR_H
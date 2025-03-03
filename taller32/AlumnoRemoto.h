#ifndef ALUMNORE_H
#define ALUMNORE_H
#include "Alumno.h"
#include <string>
using namespace std;
class AlumnoRemoto: public Alumno {
public:
  AlumnoRemoto(const string &nombre_completo, int id);
  virtual ~AlumnoRemoto() = default; // Destructor virtual
  virtual void calcularNotaFinal() override;
  void setNotaForo(const float &nota);
private:
  float nota_foro = 0;
};

#endif // ALUMNORE_H
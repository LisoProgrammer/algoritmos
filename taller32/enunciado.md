# Taller 3

## 1. Enunciado

Se requiere desarrollar un programa en C++ que cree una clase `Alumno`. Todos los alumnos comparten características generales como nombre, identificación y lista de calificaciones. Sin embargo, existen tres tipos de alumnos:

- Alumno Regular: Asiste de manera presencial a clases diurnas y su nota final se calcula como el promedio simple de todas sus calificaciones.

- Alumno Remoto: Asiste a clases de manera virtual y su nota final se calcula con un 80% del promedio de calificaciones y un 20% adicional basado en la participación en foros.
- Alumno Nocturno: Asiste a clases en horario nocturno y su nota final se calcula con un 70% del promedio de calificaciones y un 30% basado en un proyectos final.

Se debe implementar una clase base `Alumno` con atributos y métodos generales, y tres clases derivadas (`AlumnoRegular`, `AlumnoRemoto`, `AlumnoNocturno`) que sobrescriban el método calcularNotaFinal(), aplicando polimorfismo.

## 2. Diagrama UML de abstracción

![Diagrama UML](UML.png)

Se crearon dos clases `Persona` y `IMC`. Al crear el objeto `Persona`, se crea el objeto `IMC`, con ello, se puede acceder directamente a los atributos de `IMC` de `Persona`, pues se calculan al construirse `Persona`.

## 3. Análisis de complejidad espacial

- Análisis de la Clase `Alumno`
  - Métodos.
    1. `calcularNotaFinal()` → 0 bytes (void).
    2. `getNota1()` → 4 bytes (float).
    3. `getNota2()` → 4 bytes (float).
    4. `getNota3()` → 4 bytes (float).
    5. `setNota1()` → 0 bytes (void).
    6. `setNota2()` → 0 bytes (void).
    7. `setNota3()` → 0 bytes (void).
    8. `mostrarNotaFinal()` → 0 bytes (void).
  - Atributos.
    1. `nota_final` → 4 bytes (float).
    2. `nombre_completo` → X_1 bytes (string).
    3. `id` → 4 bytes (int).
    4. `calificaciones[3]` → 4 (3) = 12 bytes (float).
  - Ecuación de complejidad espacial.

    4(3) + 4 + X_1 + 12

    = 12 + 4 + X_1 + 12

    = 24 + X_1

- Análisis de la Clase `AlumnoRegular`
  - Métodos.
    1. `calcularNotaFinal()` → 0 bytes (void).
  - Ecuación de complejidad espacial.
    Dado que hereda de la clase `Alumno`

    24 + X_1

- Análisis de la Clase `AlumnoRemoto`
  - Métodos.
    1. `calcularNotaFinal()` → 0 bytes (void).  
  - Atributos.
    1. `nota_foro` → 4 bytes (float).
  - Ecuación de complejidad espacial.
    Dado que hereda de la clase `Alumno`

    24 + X_2 + 4

    = 28 + X_2

- Análisis de la Clase `AlumnoNocturno`
  - Métodos.
    1. `calcularNotaFinal()` → 0 bytes (void).  
  - Atributos.
    1. `nota_proyecto` → 4 bytes (float).
  - Ecuación de complejidad espacial.
  Dado que hereda de la clase `Alumno`

  24 + X_3 + 4

  = 28 + X_3

- Análisis del `main()`
  - Variables.
    1. `alumno1` → 24 + X_1 bytes (AlumnoRegular).
    2. `alumno2` → 28 + X_2 bytes (AlumnoRemoto).
    3. `alumno3` → 28 + X_3 bytes (AlumnoNocturno).
    4. `alumnos[]` → 3(24 + X_4) bytes (Alumno).
  - Ecuación de complejidad espacial.
  24 + X_1 + 28 + X_2 + 28 + X_3 + 3(24 + X_4)

  = 80 + X_1 + X_2 + X_3 + 72 + 3X_4

  = 152 + X_1 + X_2 + X_3 + 3X_4


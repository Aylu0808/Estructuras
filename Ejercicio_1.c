/* 1) Declare una estructura para almacenar datos de estudiantes (DNI y dos notas correspondientes a los dos cuatrimestres del a?o).
Haga un programa que permita ingresar los datos de 5 estudiantes en un vector de estas estructuras.
Luego de ingresar los datos se deben mostrar los DNI de cada estudiante y el promedio que tiene en sus ex?menes. */

#include <stdio.h>

struct estudiantes {
    int dni;
    float nota1;
    float nota2;
    };

int main(){
    int i = 0;
    float promedio;
    struct estudiantes estudiante[5];

    for(i=0; i<5; i++){
        printf("Ingrese el dni del estudiante %d: ", i+1);
        scanf("%d", &estudiante[i].dni);

        printf("Ingrese la primer nota del estudiante %d: ", i+1);
        scanf("%f", &estudiante[i].nota1);

        printf("Ingrese la segunda nota del estudiante %d: ", i+1);
        scanf("%f", &estudiante[i].nota2);
    }


    for(i=0; i<5; i++){

        promedio = (estudiante[i].nota1 + estudiante[i].nota2)/2;

        printf("D.N.I.: %d\tPromedio: %.2f\n", estudiante[i].dni, promedio);
    }
    return 0;
}


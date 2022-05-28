/*3) Utilice el ejercicio 1, modificándolo para que las notas del estudiante estén en un vector de
notas dentro de la estructura. Este vector de notas puede almacenar hasta 10 notas del alumno.
Los lugares no utilizados se escriben con un valor -1 para indicar que ese lugar está vacío.
De esta manera, un estudiante puede haber rendido 2 exámenes, otro 4 y otro 10, para citar algunos ejemplos.
Se pide conservar la funcionalidad del programa teniendo en cuenta esta nueva organización de la información.
 Por lo tanto, para mostrar el promedio del estudiante, habrá que considerar las notas que tiene en este vector de notas,
  teniendo cuidado en utilizar solamente las notas que existan y omitiendo los -1 que pueda haber.*/

#include <stdio.h>

struct estudiantes 
{
    int dni;
    int cantidad;
    float notas[10];
};

int main()
{
    int i = 0;
    int j = 0;
    
    float acumulador = 0;
    float promedio = 0;
    
    struct estudiantes estudiante[5];

    for(i=0; i<5; i++)
	{
        printf("Ingrese el dni del estudiante %d: ", i+1);
        scanf("%d", &estudiante[i].dni);

        printf("Ingrese cantidad de notas: ");
        scanf("%d", &estudiante[i].cantidad);

        printf("Ingrese notas del estudiante: ", i+1);
        
        for(j=0; j<10; j++)
		{
	        if(j < estudiante[i].cantidad)
			{
                scanf("%f", &estudiante[i].notas[j]);
			}
            else
			{
                estudiante[i].notas[j] = -1;
            }
        }
    }


    for(i=0; i<5; i++)
	{
        for(j=0; j<estudiante[i].cantidad; j++)
		{
            acumulador += estudiante[i].notas[j];
        }
        
        if(estudiante[i].cantidad == 0)
        {
            promedio = 0;
        }
        else
        {
            promedio = acumulador / estudiante[i].cantidad;
        }

        printf("D.N.I.: %d\tPromedio: %.2f\n", estudiante[i].dni, promedio);
    }
}


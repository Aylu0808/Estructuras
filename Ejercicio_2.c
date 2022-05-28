/* 2) Una aerolinea tiene vuelos, los cuales poseen un código alfanumérico (ejemplo: AR1500), una ciudad
de origen y una ciudad de destino. Ingrese 4 vuelos en un vector. Luego de ingresados los datos permita que el
 usuario escriba el nombre de una ciudad y muestre los vuelos que parten y los que arriban a esa ciudad.
Si no hubiera vuelos para la ciudad ingresada debe mostrarse un mensaje de error.*/

#include <stdio.h>
#include <string.h>

struct vuelo 
{
    char codigo[7];
    char origen[20];
    char destino[20];
};

int main()
{
    int i = 0;
    int vuelo_encontrado = 0;
    
    char ciudad[20];
      
    struct vuelo vuelos[4];
  
    

    for(i=0; i<4; i++)
	{
        printf("Ingrese el codigo del vuelo: ");
        scanf("%s", &vuelos[i].codigo);

        printf("Ingrese ciudad de origen: ");
        scanf("%s", &vuelos[i].origen);

        printf("Ingrese ciudad destino: ");
        scanf("%s", &vuelos[i].destino);
    }

    printf("Ingrese ciudad a buscar vuelos: ");
    scanf("%s", ciudad);


    printf("Vuelos que parten de %s:\n", ciudad);

    for(i=0; i<4; i++)
	{
        if(strcmp(ciudad, vuelos[i].origen) == 0)
		{
            printf("%s\n", vuelos[i].codigo);
            vuelo_encontrado = 1;
        }
    }

    printf("Vuelos que arriban a %s:\n", ciudad);

    for(i=0; i<4; i++)
	{
        if(strcmp(ciudad, vuelos[i].destino) == 0)
		{
            printf("%s\n", vuelos[i].codigo);
            vuelo_encontrado = 1;
        }
    }
    if(vuelo_encontrado == 0){
        printf("ERROR");
    }
    return 0;
}

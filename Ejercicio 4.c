/*4) Una ferretería tiene un listado de facturas emitidas en cierto año, con estos datos: número de factura, fecha de emisión (día y mes), nombre del cliente y monto total. Dado
 un vector de 10 facturas, se necesita mostrar en pantalla cuál fue el mejor mes (o sea, el de mayor dinero facturado). Los datos se pueden ingresar por teclado o dejarlos fijos 
 en el programa para no perder tiempo en tipear datos.*/
 
#include <stdio.h>
//Se declaran las estructuras.
struct fecha_s{
	int dia;
	int mes;
};

struct facturas_s{
	int num_factura;
	struct fecha_s fecha;
	char nombre[40];
	float monto;
};

int main(){
//Se declaran las variables
	float factura_mes[12] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; //Se declara un contador que las posiciones son los meses del año
	struct facturas_s facturas[5];
	int i, j;
	int mejor = 0;
	
	for (i=0 ; i<5 ; i++){ // Se ingresan los datos
		printf ("ingrese el numero de factura: ");
		scanf ("%d",&facturas[i].num_factura);
		
		printf ("ingrese el dia de la factura: ");
		scanf ("%d",&facturas[i].fecha.dia);
		
		printf ("ingrese el mes de la factura: ");
		scanf ("%d",&facturas[i].fecha.mes);
		
		printf ("ingrese el nombre del facturado(?): ");
		scanf("%s",facturas[i].nombre);
		
		printf ("ingrese el monto de la factura: ");
		scanf ("%f",&facturas[i].monto);
	}
	

	for (i=0 ; i<5 ; i++){//se toma el mes de la factura y se suma el monto de la misma al contador en la posicion correspondiente segun el mes.	
	
		factura_mes[--facturas[i].fecha.mes] += facturas[i].monto;		
		
	}
		
	for (i=0 ; i<12 ; i++){
		if (factura_mes[i] > factura_mes[i+1]){//se comparan las posiciones para encontrar el mes con mayor facturacion y se guarda el mismo.
			mejor = i;			
		}

	}
	printf("el mejor mes fue el %d ",++mejor); //muestra el mejor mes
	
	for (i=0 ; i<12 ; i++){
		if (factura_mes[i] == factura_mes[mejor]){ // si en la compracion son iguales muestra el valor
			printf ("y el %d ",++i);
		}
	}
	
	return 0;
}

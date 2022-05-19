/* 
Autor: Franciscomilan 
Realizado:17/02/2022
Escuela: Universidad uvm
Materia: Programacion estructurada
Profesor: Armando Cruz
Ciclo: 01/2022
Descripcion: Programa 9 en C que pide el valor de x, el cual debe estar comprendido en rango  0-10, 
el programa dice si el valor x tiene un valor valido, en caso contrario indica error para la materia
programacion estructurada
*/

//Libreria
#include<stdio.h>

//Principal
int main() {
	//Variables
	float x;
	//Ingreso de datos
	printf(" Introduce el valor de x (0<x<10): ");
	scanf("%f",&x);
	//Proceso
	if (0<x && x<10) {
		//Salida
		printf(" X se encuenctra del rando\n);
	}
	else {
		//Salida
		printf("Valor invalido, x debe estar entre el 1 y el 10\n");
	}
	//Retorno
	return 0;
}
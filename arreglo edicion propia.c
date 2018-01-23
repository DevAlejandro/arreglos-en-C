#include <stdio.h>
#include <windows.h>

int main(){
	

	int i,sumar,restar,multiplicar,tam,opc,num,exis,res;
	float div;
	
	sumar = 0;
	restar = 0;
	multiplicar=1;
	div =1;
	
	system("Color f9");
	printf("\t\t****OPERACIONES CON ARREGLO ****");
	printf("\n\t\t****Elija la dimension del arreglo para poder acceder al menu.****");
	printf("\n Dimencion: ");
	scanf("%i",&tam);
	
	printf("\n Ingrese los valores  : \n");	
	int vector[tam];
	//cargar vector 
		for(i=0;i<tam;i++){
	 printf("Valor : ");
	 scanf("%i",&vector[i]);
	}
	

	do{
		system("cls");
		printf("\t\t****OPERACIONES CON ARREGLO ****");
		printf("\n\n MENU : ");
		
		printf("\n 1. Mostrar arreglo Cargado "); printf("\t\t 2. Sumar : ");	
		printf("\n\t\t 3. restar  : ");	printf("\t\t 4.multiplicar: ");	
		printf("\n\t\t 5.Dividir : ");	printf("\t\t 6. Ver posicion del numero ");	
		printf("\n\t\t 7.Salir  : ");
		
		printf("\n\t Elija una Opcion: ");
		scanf("%i",&opc);
		
		//acciones del menu
		switch(opc) {
	
			case 1 : 	system("cls"); 
						 printf("\n\n\t\t *** Mostrar arreglo cargado *** ");
						for(i=0;i<tam;i++){
							printf("%i",vector[i]);
							printf("\t");		}
						break;
					
			case 2 :	system("cls");
						 printf("\n\t\t *** SUMAR *** ");
						for (i=0;i<tam;i++){
							sumar=vector[i]+sumar;
						}
						printf("\n\n La suma de los elementos del arreglo es igual a : %i", sumar);
						break;
							
			case 3 :	system("cls");
						 printf("\n\t\t *** RESTAR *** ");
						for (i=0;i<tam;i++){
							restar=vector[i]-restar;
						}
						printf("La resta de los elementos arreglo es igual a : %i", restar);
						break;

			case 4 :	system("cls");
						 printf("\n\t\t *** MULTIPLICAR*** ");
						for (i=0;i<tam;i++){
							multiplicar=vector[i]*multiplicar;
						}
						printf("\n La Multiplicacion del los elementos del arreglo es igual a : %i", multiplicar);
						break;

			case 5 : 	system("cls");
						printf("\n\t\t *** dividir *** ");
						for (i=0;i<tam;i++){
							div=vector[i]/div;
						}
						printf("La Division del arerglo es igual a : %2.0lf", div);
						break;
			case 6 :  	system("cls");
						printf("\n\t\t *** BUSCAR NUMERO *** ");
						printf("Digite el numero a Buscar");
						scanf("%i",&num);
						for (i=0;i<tam;i++){
							if(num ==vector[i]){
								exis=1;	
								printf("El numero %i  Se encuentra en la posicion [%i]",num,i+1);
							}else {
								exis=0;
							}
							if (exis=0){
							printf("El numero no se encuentra en el Arreglo.\n");
							}	
						}	
						break;
						
			case 7 :	system("cls");	
						printf("\n\n\t\t *** MENU CERRADO *** \n");
						break;
		
		default:("Opcion Invalida.");
		}
	printf("\n\n\t Desea volver al MENU ?.... 1 Para Si, 0 para No");
	scanf("%i",&res);
	
	}while(res==1);
	
	return 0;
}

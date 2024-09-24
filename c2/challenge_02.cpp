#include<stdio.h>
#include<stdlib.h>
int main(){
	printf("\t \t \t Conversion de la température \t \n");
	
	printf("\n\n**** \t Programme qui demande la température en Celsius et la transforme en Kelvin **** \t \n\n");
	
	//declaration des variables: 
	
	float celicius , kelvin;
	
	//traitement 
	printf("Donner Moi votre Temperature en Celicius : ");
	scanf("%f",&celicius);
	printf("\n\n");
	
	//operation de transformation 
	
	kelvin=celicius+273.15;
	printf("Votre Transformation en Kelvin est : %.2f Kelvin",kelvin);
	
	
}

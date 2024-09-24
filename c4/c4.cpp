#include<stdio.h>
#include<stdlib.h>
int main(){
	
	printf("\t\t**** Challenge 4 : Conversion de la vitesse****\t\t\n\n ");
	
	printf("Programme qui demande la vitesse en kilomètres par heure (km/h) et la transforme en mètres par seconde (m/s):  \n\n\n\n");
	
	//declaration des variables 
	
	float vitesse_km ;
	float vitesse_m;
	//demande de saisir
	printf("Donner moi Votre vitesse en kilomètres par heure (km/h): ");
	scanf("%f",&vitesse_km); printf("\n");
	
	//traitement de transformation 
	 
	vitesse_m=vitesse_km* 0.27778;
	
	//affichage de resultat
	printf("\n");
	printf("Votre Transformation en mètres par seconde est : %f (m/s) ",vitesse_m);
	
}

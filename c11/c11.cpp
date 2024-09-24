#include<stdio.h>
#include<stdlib.h>
int main(){
	printf("\t\tChallenge 11 : Surface d'un rectangle\n\n");
	
	//declaration des variables 
	
	float longueur ,largeur;
	
	//demande de saisir 
	
	printf("donner moi Votre longueur : "); scanf("%f",&longueur);
	printf("donner moi votre largeur: "); scanf("%f",&largeur);
	
	//traitement avec l'affichage 
	
	printf("\n\nLa surface de Votre  rectangle est : %.2f",longueur*largeur);
}

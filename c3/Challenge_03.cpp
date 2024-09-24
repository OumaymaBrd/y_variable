#include<stdio.h>
#include<stdlib.h>
int main(){
	
	printf("\t\t programme qui demande la distance en kilomètres et la transforme en yards\t\n\n");
	
	//declaration des variables
	
	float kilometre , yards;
	
	//demande de saisir 
	
	printf("Donner moi Votre distance en kilomètres: ");
	scanf("%f",&kilometre);
	
	//traitement de transformation 
	yards=kilometre* 1093.61;
	
	//affichage de resultat 
	
	printf("\n\nVotre Distance en yards est : %.2f ",yards);
}

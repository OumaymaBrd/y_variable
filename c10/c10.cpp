#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	
	printf("\t\tChallenge 10 : Volume d'une sph�re\n\n");
	printf(" programme pour trouver le volume d'une sph�re. Prenez le rayon de la sph�re en entr�e de l'utilisateur\n\n");
	
	//declaration variable 
	
	float rayon, volume;
	float p=3.14;
	
	printf("Donner  Moi votre rayon de la sph�re : "); scanf("%f",&rayon);
	
	//traitement de calcul 
	
	volume = (4/3) * p * pow(rayon,3);
	
	printf("\n\n Le Volume de votre Sphere est : %.2f",volume);
	
}

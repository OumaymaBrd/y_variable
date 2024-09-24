#include<stdio.h>
#include<stdlib.h>
int main(){
	printf("\t\tChallenge 6 : Calcul et affichage des résultats\n\n");
	
	//declaration des variables 
	float a,b;
	//saisir par l'utilisateur 
	
	printf("donner moi la 1 ere reel : "); scanf("%f",&a);
	printf("donner moi la 2 eme reel : "); scanf("%f",&b);
	
	//traitement decalcul avec l'affichage 
	printf("\n\n");
	printf("La somme de cette deux reelles : %.2f\n\n ",a+b);
	printf("La soustraction de cette deux reelles est : %.2f\n\n",a-b);
	printf("La Produit de cette deux reelles est : %.2f\n\n",a*b);
	printf("La division de cette deux reelles est : %.2f\n\n",a/b);
	
}

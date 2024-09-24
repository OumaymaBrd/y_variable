#include<stdio.h>
#include<stdlib.h>
int main(){
	
	printf("\t\t Challenge 5 : Affichage Température\t\t \n\n");
	
	printf("programme qui demande la température en Celsius et affiche l'état de l'eau à cette température (solide, liquide, gaz):\n\n");
	
	//declaration des variables 
	
	float tmp;
	
	//demande de saisir 
	
	printf("donner moi Votre Temperature : "); scanf("%f",&tmp);
	
	//traiter les cas a l'aide de if 
	
	if(tmp<0){
		printf("l'état de l'eau à cette température  est: solide ");
	} 
	
	else if(tmp<100){
		printf("l'état de l'eau à cette température  est:liquide");
	}
	else if(tmp>=100) {
		printf("l'état de l'eau à cette température est: gaz");
	}
	
	

}

#include<stdio.h>
#include<stdlib.h>
int main(){
	
	printf("\t\t Challenge 5 : Affichage Temp�rature\t\t \n\n");
	
	printf("programme qui demande la temp�rature en Celsius et affiche l'�tat de l'eau � cette temp�rature (solide, liquide, gaz):\n\n");
	
	//declaration des variables 
	
	float tmp;
	
	//demande de saisir 
	
	printf("donner moi Votre Temperature : "); scanf("%f",&tmp);
	
	//traiter les cas a l'aide de if 
	
	if(tmp<0){
		printf("l'�tat de l'eau � cette temp�rature  est: solide ");
	} 
	
	else if(tmp<100){
		printf("l'�tat de l'eau � cette temp�rature  est:liquide");
	}
	else if(tmp>=100) {
		printf("l'�tat de l'eau � cette temp�rature est: gaz");
	}
	
	

}

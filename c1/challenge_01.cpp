#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	
	
	printf("\t Programme qui va permettre d'afficher vos informations personnelles: \n\n");
	
	//declaration des variables 
	
	char nom[30],prenom[30], sex[12] , adresse[30];
	int age;
	
	//Demande de saisir
	printf("Donner moi Votre Nom : ");
	scanf("%s",nom);
	printf("Donner moi votre Prenom : ");
	scanf("%s",prenom);
	printf("Donner moi Votre Sex : ");
	scanf("%s",sex);
	printf("Donner moi Votre Adresse Email: ");
	scanf("%s",adresse);
	printf("Donner moi Votre Ages: ");
	scanf("%d",&age);
		
	//affichage des donner entrer 
	
	printf("\n\nVotre Donner inserer sont : \n\n");
	printf("Votre Prenom : "); puts(nom); printf("\n\n");
	printf("Votre Nom: "); puts(prenom); printf("\n\n");
	printf("Votre Sex : "); puts(sex); printf("\n\n");
	printf("Votre Age: %d\n\n",age); 
	printf("Votre Adresse est : ");puts(adresse); printf("\n\n");
	 
	
	
}


	
	 
	
	


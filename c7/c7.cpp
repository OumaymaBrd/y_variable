#include<stdio.h>
#include<stdlib.h>
int main(){
	printf("\t\t Challenge 7 : Moyenne pond�r�e de trois nombres\t\t \n\n");
	printf(" calcule de la moyenne pond�r�e de trois nombres donn�s par l'utilisateur avec les pond�rations\n\n");
	
	//declaration de trois variables 
	float a,b,c;
	float ponderation;
	//saisir 3 entier
	
	printf("Donner moi la 1 ereentier : "); scanf("%f",&a);
	printf("Donnermoi la 2 eme entier : "); scanf("%f",&b);
	printf("Donner moi le 3 eme entier: "); scanf("%f",&c);
	
	//calcul de ponderation 
	
	ponderation=((a*2)+(b*3)+(c*5)/(2+3+5));
	
	printf("\n\n\t La ponderation de trois entier est : %.2f",	ponderation);
	
	
	
}

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	
	printf("\t\t programme en C pour trouver la moyenne géométrique de trois nombres\n\n");
	
	//declaration des variables ;
	
	float a,b,c,moyenne;
	
	printf("Donner moi la 1 ere variable: ");scanf("%f",&a);
	printf("Donner moi la 2 eme variable: "); scanf("%f",&b);
	printf("Donner moi la 3 eme variables:  "); scanf("%f",&c);
	//calcul de moyenne 
	moyenne= pow((a * b * c),1/3);
	
	printf("\n\n\t La moyenne géométrique de trois nombres saisis est : %.2f",moyenne);
	
}

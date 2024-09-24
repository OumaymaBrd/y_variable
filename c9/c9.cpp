#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	
	printf("\t\t Calcul de la distance entre deux points dans un espace 3D \n\n");
	
	//declaraion des variables 
	//declaration de 1 ere composante entrer 
	float x1,y1,z1;
	//declaration de 2 eme composante
	float x2,y2,z2;
	//declaration variable de la distance 
	float distance;
	//demande la saisir par l'utilisateur 
	
	printf("Entrer les 3 composantes de 1 ere Distance :\n\n");
	printf("\t\t x1= "); scanf("%f",&x1);
	printf("\t\t y1= "); scanf("%f",&y1);
	printf("\t\t z1= "); scanf("%f",&z1);
	
	printf("\n\n\nEntrer les 3 composantes de 2 ere Distance :\n\n");
	printf("\t\t x2= "); scanf("%f",&x2);
	printf("\t\t y2= "); scanf("%f",&y2);
	printf("\t\t z2= "); scanf("%f",&z2);
	
	printf("\n\n\n\t\t");
	
	//calcul de la distance 
	distance= sqrt(   pow(x2-x1,x2-x1) +   pow(y2-y1,y2-y1)  + pow(z2-z1,z2-z1)  );
	
	printf("  La distance entre deux points donnés dans un espace 3D est : %.2f ",distance);

}

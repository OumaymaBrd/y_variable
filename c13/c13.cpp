#include<stdio.h>
#include<stdlib.h>

int main() {
	
	printf("\t\t  Affichage des valeurs binaire et hexadecimale equivalentes \n\n");
	
	printf("affichez ses valeurs equivalentes en binaire et en hexadecimal\n\n");
	
   int entier, reste, i = 0;
    int binaire[32];  

    printf("Donner moi un Entier en decimal  : ");
    scanf("%d", &entier);
    
    printf("Le nombre en hexadecimale est : %X \n",entier);
    //traitement de convertion en decimal en binaire 
  while (entier > 0) {
      reste = entier % 2;  
        binaire[i] = reste;  
       entier = entier / 2; 
	           i++;
  }

//affichage de resultat en binaire
   printf("Le nombre en binaire est : ");
   for (int j = i - 1; j >= 0; j--) {
     printf("%d", binaire[j]);
    }

    printf("\n");
    
    //affichage de resultat decimal en  hexadecimal 
    
   
    
    return 0;
}



#include<stdio.h>
#include<stdio.h>
#include<string.h>
int main(){
	printf("\t\t Challenge 12 : Nombre entier à quatre chiffres en ordre inverse \n\n");
	
	//declaration de variable
	
	char entier[4];
	
	printf("Donner moi 4  chiffe : "); scanf("%s",entier);
	
	//traitemenet de l'inverse
	printf("L'inverse de votre entier entrer est : ");
	
	for(int i=strlen(entier);i>=0;i--){
		
		printf("%c",entier[i]);
		
	}
}

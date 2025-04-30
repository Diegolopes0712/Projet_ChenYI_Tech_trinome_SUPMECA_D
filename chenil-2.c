#include "chenil.h"


typedef enum{
 chien, chat, hamster, autruche
}Espece;

typedef struct{

	int numid;
	char* nom;
	int anneenaissance;
	Espece espece;
	float poids;
	char* commentaire;

}Animal;


Animal constructeurAnimal(){
	Animal a;
	char* i;
	printf(" Numéro d'identification ? ");
	scanf("%d", &a.numid);
	printf(" Quel est son nom ? ");
	scanf("%s", a.nom);
	printf(" En quelle année est-t-il né ? ");
	scanf("%d", &a.anneenaissance);
	printf(" Quelle est son Espèce ? ");
	scanf("%s", a.espece);
	printf(" Quel est son poids ? ");
	scanf("%f", &a.poids);
	printf(" Un commentaire ? oui ou non ");
	scanf("%s", i);
	if(i=="oui"){
	   printf(" Quel commentaire ? ");
	   scanf("%s", a.commentaire);
	}
	else if(i!="oui" && i!="non"){
	        printf(" Veuillez répondre par oui ou par non s'il vous plait ! ");
		scanf("%s", i);
		if(i=="oui"){
	           printf(" Quel commentaire ? ");
	           scanf("%s", a.commentaire);
	        }
		else{
			return a;
		}
	}
	else{
		return a;
	}
}
int main(){
Animal x;
int*fichier;
fichier=fopen("chenil.txt","r");
x=constructeurAnimal();
if(fichier==NULL){
    printf("Ouverture du fichier impossible");
    exit(1);
}
FILE*fopen(Animal*"chenil.txt", Animal*"r");
return 0;
}




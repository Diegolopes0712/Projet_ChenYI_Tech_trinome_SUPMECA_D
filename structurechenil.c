#include "chenil.h"


typedef enum{ //liste des espèces présentes dans le chenil
 chien=0, chat=1, hamster=2, autruche=3
}Espece;

typedef struct{ //Caractéristique d'un animal

	int numid;
	char* nom;
	int anneenaissance;
	Espece espece;
	float poids;
	char* commentaire;

}Animal;


Animal constructeurAnimal(){ //ici on crée un animal
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

FILE* fichier=NULL;

fichier=fopen("chenil.txt","r");


if(fichier==NULL){
    printf("Ouverture du fichier impossible");
    exit(1);
}
int nombre_animal;
Animal a;
a=constructeurAnimal();
fscanf(fichier,"%d", &nombre_animal);
Animal *tab=malloc(nombre_animal*sizeof(Animal));

// on vérifie que le tableau n'est pas nul
if(tab==NULL){
	exit(2);
	}

for (int i=0; i<nombre_animal;i++){ // ici on récupère des animaux présents dans le chenil
	fscanf(fichier,"%d %s %d %d %f %s", tab[i].numid, tab[i].nom, tab[i].anneenaissance, tab[i].espece, tab[i].poids, tab[i].commentaire);
}

free(tab);

return 0;
}




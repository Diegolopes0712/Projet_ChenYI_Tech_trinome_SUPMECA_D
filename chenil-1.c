#include "chenil.h"


typedef enum{
 chien, chat, hamster, autruche;
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
	a.numid;
	a.nom;
	a.anneenaissance;
	a.espece;
	a.poids;
	a.commentaire;
	
	return a;
	}
	
int main(){

Animal x;

x=constructeurAnimal();

return 0;
}




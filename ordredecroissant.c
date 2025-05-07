#include "chenil.h"

int inv_nb_desc(int*tab){

int nbanimal=0;
int nbchat = 0;
int nbchien = 0; 
int nbautruche = 0;
int nbhamster =0;
int *c
for(int i=0; i<50; i++){
	if(espece=="chien"){
		nbchien++;
		}
	if(espece=="chat"){
		nbchat++;
		}
	if(espece=="autruche"){
		nbautruche++;
		}
	if(espece=="hamster"){
		nbhamster++;
		}
	nbanimal++;
	}
for(int j=0; j<4; j++){
if(tab[nbchien]>tab[nbchat]){
	c[i]=tab[nbchat];
	nbchat = nbchat+1
else{
 c[i]=tab[nbchien];
 nbchien=nbchien+1;
}
}
if(tab[nbautruche]>tab[nbhamster]){
	c[i]=tab[nbhamster];
	nbhamster= nbhamster+1
else{
 c[i]=tab[nbautruche];
 nbautruche=nbautruche+1;
}
  printf("%d", tab[animaux]);
}
}
printf(" nombre d'animaux : %d \n", nbanimaux);

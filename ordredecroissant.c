#include "chenil.h"

int inv_nb_desc(Animal* tab){
    int nbchat = 0;
    int nbchien = 0; 
    int nbautruche = 0;
    int nbhamster = 0;
    int c[4];
    int max=0;
    for(int i=0; i<50; i++){
       if((strcmp(tab[i].espece,"chien"))==0){
		nbchien++;
       }
       else if((strcmp(tab[i].espece,"chat"))==0){
		nbchat++;
       }
       else if((strcmp(tab[i].espece,"autruche"))==0){
		nbautruche++;
       }
       else {
            nbhamster++;
       }
    }
    c[0]=nbchien;
    c[1]=nbchat;
    c[2]=nbautruche;
    c[3]=nbhamster;
    for(int m=0; m<=2; m++){
       for(int j=0; j<=2; j++){
          max=j;
          for(int k=j+1; k<=3; k++){
             if(c[k]>c[max]){
               max=k;
	     }
          }
          if(max!=j){
            int tmp = c[j];
            c[j] = c[max];
            c[max] = tmp;
          }
       }
    }

    printf(" le classement du nombre d'animaux du refuge par espèce est : 1) %d 2) %d 3) %d 4) %d ! ", c[0], c[1], c[2], c[3]);



    


       

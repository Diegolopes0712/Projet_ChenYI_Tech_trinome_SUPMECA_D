#include <stdio.h>

void modifier_animal(Animal a){
     int choix,numid,anneenaissance,espece;
     char nom[100];
     float poids;
     char commentaire[1000];
     printf(" Que voulez-vous modifier sur l'animal ? \n Tapez 1 pour modifier le numéro d'identification \n Tapez 2 pour modifier le nom \n Tapez 3 pour modifier l'année de naissance \n Tapez 4 pour modifier l'espèce \n Tapez 5 pour modifier le poids \n Tapez 6 pour modifier le commentaire \n ");
     scanf("%d", &choix);
     if(choix==1){
       printf(" Quel est son nouveau numéro d'identification ? \n ");
       scanf("%d", &numid);
       if(numid>=1){
         a.numid=numid;
       }
       else{
           printf(" Veuillez saisir un nombre entier supérieur ou égal à 1 ! \n ");
           modifier_animal(a);
       } 
     }
     else if(choix==2){
       printf(" Quel est son nouveau nom ? \n ");
       scanf("%s", nom);
       a.nom=nom;
     }
     else if(choix==3){
       printf(" Quel est sa nouvelle année de naissance ? \n ");
       scanf("%d", &anneenaissance);
       if(anneenaissance>=2000){
         a.anneenaissance=anneenaissance;
       }
       else{
           printf(" Veuillez saisir un nombre entier supérieur ou égal à 2000 ! \n ");
           modifier_animal(a);
       } 
     }
     else if(choix==4){
       printf(" Quel est sa nouvelle espèce ? \n ");
       scanf("%d", &espece);
       if(espece>=0 && espece<=3){
         a.espece=espece;
       }
       else{
           printf(" Veuillez saisir un nombre entier supérieur ou égal à 0 et inférieur ou égal à 3 ! \n ");
           modifier_animal(a);
       } 
     }
     else if(choix==5){
       printf(" Quel est son nouveau poids ? \n ");
       scanf("%f", &poids);
       if(poids>0.0){
         a.poids=poids;
       }
       else{
           printf(" Veuillez saisir un nombre décimal strictement supérieur à 0.0 ! \n ");
           modifier_animal(a);
       } 
     }
     else if(choix==6){
       printf(" Quel est son nouveau commentaire ? \n ");
       scanf("%s", commentaire);
       a.commentaire=commentaire;
     }
     else{
         printf(" Veuillez saisir un nombre entier situé entre 1 et 6 inclus ! \n ");
         modifier_animal(a);
     }
}   
  
int main(){
    Animal a;
    constructeurAnimal(a);
    printf(" %d \n %s \n %d \n %d \n %f \n %s \n ",a.numid,a.nom,a.anneenaissance,a.espece,a.poids,a.commentaire);
    modifier_animal(a);
    printf(" %d \n %s \n %d \n %d \n %f \n %s \n ",a.numid,a.nom,a.anneenaissance,a.espece,a.poids,a.commentaire);
return 0;
}
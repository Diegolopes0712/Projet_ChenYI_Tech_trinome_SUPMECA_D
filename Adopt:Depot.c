#include<chenil.h>
 
 //fonction pour adopter un animal//
 Animal adoptAnimal(Espece espece){
    int nbAnimal;
    printf
 }
 
 //fonction pour déposer un animal//
 Animal depotAnimal(int numid, char* nom, Espece espece, int anneenaissance, float poids, char* commentaire){
   int nbAdepot, nbAnimal;
   printf("Combien d'animaux voulez-vous déposer ? \n");
   scanf("%d",&nbAdepot);
    if(nbAnimal==50){
       printf("Désolé, mais le chenYl est plein ! \n Revenez demain ! \n");
       exit(0);
    }
    else{
       if(nbAdepot=1 && nbAnimal+nbAdepot<=50){
       printf("Votre animal a bien été déposé. \n");
       nbAnimal+=nbAdepot;
        return nbAnimal;
       }
       else if(nbAdepot>1 && nbAnimal+nbAdepot<=50){
       printf("Vos animaux ont bien été déposés. \n");
       nbAnimal+=nbAdepot;
        return nbAnimal;
       }
       else{
       
    }   
 }
 
 
 
 
 int main(){
    int nbAnimal, choix, Action1, Action2;
    printf("Quelle action voulez vous effectuer ? \n 1:Adopter ou 2:déposer ? \n");
    scanf("%d",&choix);
       if(choix==1){
          printf("Quelle belle action ! \n Quel animal voulez vous adopter ? \n");
          Action1 = adoptAnimal()
       }
       else if(choix==2){
          printf("Voyons voir... \n");
          Action2 = depotAnimal()
       }
 return 0;
 }
 
 

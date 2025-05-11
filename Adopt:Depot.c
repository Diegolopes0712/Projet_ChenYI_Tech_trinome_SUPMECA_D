#include "chenil.h"
 
 //fonction pour adopter un animal//
 Animal adoptAnimal(Espece chxa){
    int nbAnimal;
    printf("Choisissez 0 ou 1 ou 2 ou 3 respectivement pour chien, chat, hamster, autruche \n et indiquez 4, "stop" pour arrêter la demande \n ");
    scanf("%d", &chxA);
       switch(chxA){
        case 0:
           printf("Vous avez choisi l'animal: chien \n");
              
           nbAnimal--;
           break;
        case 1:
           printf("Vous avez choisi l'animal: chat \n");
           nbAnimal--;
           break;
        case 2:
           printf("Vous avez choisi l'animal: hamster \n");
           nbAnimal--;
           break;
        case 3:
           printf("Vous avez choisi l'animal: autruche \n");
           nbAnimal--;
           break;
        case 4:
           printf("Vous venez d'arrêter la demande d'adoption. \n");
           break;
        default:
           printf("La valeur entrée ne correspond à aucun des choix possibles" \n);
           exit(2);
           break;
       } 
  
 }
 



 //fonction pour déposer un animal//
 Animal depotAnimal(int numid, char* nom, Espece espece, int anneenaissance, float poids, char* commentaire){
   int nbAdepot, nbAnimal, sûr?;
   printf("Combien d'animaux voulez-vous déposer ? \n");
   scanf("%d",&nbAdepot);
       
       if(nbAdepot=1 && nbAnimal+nbAdepot<=50){  //Pour déposer 1 animal//
       printf("Votre animal a bien été déposé. \n");
       nbAnimal+=nbAdepot;
        return nbAnimal;
       }
       else(nbAdepot>1){
           if(nbAnimal+nbAdepot<=50){
             printf("Vos animaux ont bien été déposés ! \n");
             nbAnimal+=nbAdepot;
             return nbAnimal;
           }
           else{
             nbAdepot=(nbAnimal+nbAdepot)-50;
             printf("Vous pouvez déposer %d animaux à cause du manque de place ! \n, nbAdepot");
             printf("Voulez-vous quand même les déposer ? \n oui:1 ou non:2 \n");
             scanf("%d",&sür?);
               if(sür?==1){
                  printf("Vos animaux ont bien été déposés ! \n");
                  nbAnimal=50;
                  return nbAnimal;
               }
               else if(sur?==2){
                  printf("Vos animaux rentrent avec vous aujourd'hui ! \n");
                  return nbAnimal;
               } 
               else{
                  printf("Veuillez saisir une valeur cohérente: 1 ou 2 \n");
                  exit(1); 
           }
       }
       
  
   
  
    /* if(nbAdepot=1 && nbAnimal+nbAdepot<=50){  //Pour déposer 1 animal//
       printf("Votre animal a bien été déposé. \n");
       nbAnimal+=nbAdepot;
        return nbAnimal;
       }
       else if(nbAdepot>1 && nbAnimal+nbAdepot<=50){  //Pour déposer plusieurs animaux//
       printf("Vos animaux ont bien été déposés. \n");
       nbAnimal+=nbAdepot;
        return nbAnimal;
       }
       else{
       
       } */
 
      }
 
 
 int main(){
    int nbAnimal, choix, Action1, Action2;
    printf("Vous voulez un chat, un chien, un hamster, ou même une autruche ?!?! \n ChenYl Tech est là pour vous !! \n);
    printf("Quelle action voulez vous effectuer ? \n 1:Adopter ou 2:déposer ? \n");
    scanf("%d",&choix);
       if(choix==1){
          printf("Quelle belle action ! \n Quel animal voulez vous adopter ? \n");
          Action1 = adoptAnimal()
       }
       else if(choix==2){
          printf("Voyons voir... \n");
          scanf(
          Action2 = depotAnimal()
       }
 return 0;
 }
 
 

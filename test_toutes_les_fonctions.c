#include"chenil.h"


//fonction pour adopter un animal//
 Animal adoptAnimal(int chxA){
    int nbAnimal;
    printf("Choisissez 0 ou 1 ou 2 ou 3 respectivement pour chien, chat, hamster, autruche \n et indiquez 4(stop), pour arrêter la demande. \n ");
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
           printf("La valeur entrée ne correspond à aucun des choix possibles \n");
           exit(2);
           break;
       } 
  
 }
 



 //fonction pour déposer un animal//
 Animal depotAnimal(int numid, char nom, Espece espece, int anneenaissance, float poids, char commentaire){
   int nbAdepot, nbAnimal, sûr;
   printf("Combien d'animaux voulez-vous déposer ? \n");
   scanf("%d",&nbAdepot);
       
       if(nbAdepot==1 && nbAnimal+nbAdepot<=50){  //Pour déposer 1 animal//
       printf("Votre animal a bien été déposé. \n");
       nbAnimal+=nbAdepot;
        printf("Il y a %d animaux dans le refuge. \n", nbAnimal);
       }
       else if(nbAdepot>1){
           if(nbAnimal+nbAdepot<=50){
             printf("Vos animaux ont bien été déposés ! \n");
             nbAnimal+=nbAdepot;
             printf("Il y a %d animaux dans le refuge. \n", nbAnimal);
           }
           else{
             nbAdepot=(nbAnimal+nbAdepot)-50;
             printf("Vous pouvez déposer %d animaux à cause du manque de place ! \n", nbAdepot);
             printf("Voulez-vous quand même les déposer ? \n oui:1 ou non:2 \n");
             scanf("%d",&sûr);
               if(sûr==1){
                  printf("Vos animaux ont bien été déposés ! \n");
                  nbAnimal=50;
                  printf("Il y a %d animaux dans le refuge. \n", nbAnimal);
               }
               else if(sûr==2){
                  printf("Vos animaux rentrent avec vous aujourd'hui ! \n");
                  printf("Il y a %d animaux dans le refuge. \n", nbAnimal);
               } 
               else{
                  printf("Veuillez saisir une valeur cohérente: 1 ou 2 \n");
                  exit(1); 
               }
            }
 
      }
    }



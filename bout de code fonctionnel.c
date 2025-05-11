#include"chenil.h"
//#include"fonctions.c"



typedef enum{ //liste des espèces présentes dans le chenil
    chien=0, 
    chat=1, 
    hamster=2, 
    autruche=3
}Espece;

typedef struct{ //Caractéristiques d'un animal

	int numid;
	char nom[100];
	int anneenaissance;
	Espece espece;
	float poids;
	char commentaire[1000];

}Animal;


//fonction pour adopter un animal//
 Animal adoptAnimal(int chxA){
    int nbAnimal;
    printf(" Choisissez 0 ou 1 ou 2 ou 3 respectivement pour chien, chat, hamster, autruche \n et indiquez 4(stop), pour arrêter la demande. \n\n ");
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
    
    
    
    
    
    
    Animal constructeurAnimal(){ //ici on crée un animal
	Animal a;
	char Com[1000];
	int nbE, rep, chien, chat, hamster, autruche;
	a.espece=nbE;
    a.commentaire[1000]=Com[1000];

	printf(" Numéro d'identification ? (6 chiffres) \n ");
	  scanf("%d", &a.numid);
	printf(" Quel est son nom ? \n");
	  scanf("%s", a.nom);
	printf(" En quelle année est-t-il né ? \n ");
	  scanf("%d", &a.anneenaissance);
	    while(a.anneenaissance<=2000 || a.anneenaissance>=2025){ //ici on est en 2025
	       printf(" Veuillez saisir une année de naissance cohérente ! \n");
	         scanf("%d", &a.anneenaissance);
	    }
	    
	printf(" Quelle est son Espèce ? 0/chien 1/chat 2/hamster 3/autruche \n");
	  scanf("%d", &nbE);
	  if(nbE==0){
	      nbE=chien;
	  }
	  else if(nbE==1){
	      nbE=chat;
	  }
	  else if(nbE==2){
	      nbE=hamster;
	  }
	  else{
	      nbE=autruche;
	  }
	  
	printf(" Quel est son poids ? \n");
	  scanf("%f", &a.poids);
	    while(a.poids<=0.0 || a.poids>=200.0){
	       printf("Veuillez saisir un poids cohérent ! \n");
	         scanf("%f", &a.poids);
	    }
	    
	printf(" Un commentaire ? oui/0 ou non/1 \n");
	  scanf("%d", &rep);
	  while(rep!=0 && rep!=1){
	      printf(" Veuillez répondre par oui ou par non s'il vous plait ! \n");
		      scanf("%d", &rep);
	  }
	  
	  if(rep==0){
	       printf(" Quel commentaire ? \n");
	       scanf("%s", &Com[1000]);
	    }
		else{
			printf("\nL'animal enregistré est: \n\n %d\n %s\n %d\n %d\n %f\n  ", a.numid, a.nom, a.anneenaissance, nbE, a.poids); 
		}
	printf("\nL'animal enregistré est: \n\n %d\n %s\n %d\n %d\n %f\n %s\n ", a.numid, a.nom, a.anneenaissance, nbE, a.poids, &Com[1000]); 
    }



float day_food(Animal* tab, int taille){
    float qtn=0;
    for(int i=0;i<taille;i++){
       if(tab[i].nom=="autruche"){
         qtn+=2.5;
       }
       else if(tab[i].nom=="hamster"){
              qtn+=0.02;
       }
       else{
           if((2025-tab[i].anneenaissance)<2){
             qtn+=0.5;
           }
           else{
               qtn+=(10/100)*tab[i].poids;
           }
       }
    }
}




int liste(int listA){
    
    FILE* F = NULL;
     // ouverture du fichier chenil.txt en lecture seule
    F = fopen("chenil.txt", "r");
    if (F == NULL){
       printf("Ouverture du fichier impossible");
    }
    else{
       char ligne[100];
       while(fgets(ligne, 100, F)!= NULL){
           printf("%s", ligne);
       }
    fclose(F);
    }

}




void modifier_animal(Animal a){
     int choix,numid,anneenaissance,espece;
     float poids;
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
       scanf("%s", a.nom);
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
       if(poids>0.0 && poids<200.0){
         a.poids=poids;
       }
       else{
           printf(" Veuillez saisir un nombre décimal strictement supérieur à 0.0 ! \n ");
           modifier_animal(a);
       } 
     }
     else if(choix==6){
       printf(" Quel est son nouveau commentaire ? \n ");
       scanf("%s", a.commentaire); 
     }
     else{
         printf(" Veuillez saisir un nombre entier situé entre 1 et 6 inclus ! \n ");
         modifier_animal(a);
     }
}   


int main(){
    int nb, rep, repC2c3, nbPu, nbPl, code, A;
    int nbAnimal, choix, C, numid, anneenaissance, nbE;
    float poids;
    Espece espece;
    char commentaire, nom, Com[1000];
    Animal  Action1, Action2, a;
    int taille=50;
    float df;
    Animal tab[taille];
    df = day_food(tab,taille);
    
printf("    _____ _                      _   _            _  \n ");    
printf("  / ____| |                    | | | |          | | \n ");   
printf(" | |    | |__   ___ _ __  _   _| | | |_ ___  ___| |__ \n ");  
printf(" | |    | '_  |/ _ | '_  | | | | | | __/ _ |/ __| '_  | \n "); 
printf(" | |____| | | |  __/ | | | |_| | | | ||  __/ (__| | | | \n ");
printf(" | _____|_| |_| ___|_| |_| __, |_| | __ ___| ___|_| |_| \n ");
printf("                           __/ |                        \n ");
printf("                          |___/                         \n\n ");

    
    printf("Bienvenue dans CHENYL TECH !! \n\n");
    printf("============== MENU ============== \n\n");
    printf("1) Accès publique. \n");
    printf("2) Accès au personnel.  \n");
    printf("3) Quitter le jeu ?  \n\n");
    printf("================================== \n\n");
    printf("Entrez votre choix: \n");
       scanf("%d",&nb);
    
    while(nb != 1 || nb != 2 || nb != 3){
   
    switch(nb){
        case(1):
           
           printf("Votre choix: %d \n\n" , nb);
           printf("Vous voulez un chat, un chien, un hamster, ou même une autruche ?!?! \n ChenYl Tech est là pour vous !! \n====================================================================\n\n");
            printf("========= Accès=publique ========= \n\n");
            printf("1) Voir nos pensionnaires. \n");
            printf("2) Adopter ou déposer un animal.  \n");
            printf("3) Précédent.  \n\n");
            printf("================================== \n\n");
            printf("Entrez une action: \n");
               scanf("%d",&nbPu);
    
            while(nbPu != 1 || nbPu != 2 || nbPu != 3){
   
            switch(nbPu){
               case(1):
                  printf("Votre action: %d \n\n" , nbPu);
                  printf("================================== \n\n");
                    int listA;
                    A=liste(listA);  
                  return 0;
                  break;
        
               case(2):
                  printf("Votre action: %d \n\n" , nbPu);
                  printf("================================== \n\n");
                  printf("Quelle action voulez vous effectuer ? \n\n 1:Adopter ou 2:déposer ? \n");
                  scanf("%d",&choix);
                    if(choix==1){
                       printf(" Quelle belle action ! \n Quel animal voulez vous adopter ? \n\n");
                       Action1 = adoptAnimal(C);
                    }
                    else if(choix==2){
                       printf("Voyons voir... \n");
                       Action2 = depotAnimal(numid,nom,espece,anneenaissance,poids,commentaire);
                    }
                  return 0;
                  break;
        
               case(3):
                  printf("Votre action: %d \n\n" , nbPu);
                  printf("================================== \n\n");
                  return 0;
                  break;
        
               default:
                  printf("Aucun cas ne correspond !\n Recommencez ! \n" );
                  scanf("%d", &nbPu);
                  break;
            }
            }
           
        return 0;
        break;
        
        
        case(2):
           printf("Votre choix: %d \n" , nb);
           printf("Entrez le code secret pour accéder à ce menu ! \n");
              scanf("%d", &code);
                 if(code==1234){
                     
                    printf("======= Accès=au=personnel ======= \n\n");
                    printf("1) Voir les pensionnaires. \n");
                    printf("2) Alimentation.  \n");
                    printf("3) Modifier un animal.  \n");
                    printf("4) Précédent.  \n\n");
                    printf("================================== \n\n");
                    printf("Entrez une action: \n");
                       scanf("%d",&nbPl);
    
                    while(nbPl != 1 || nbPl != 2 || nbPl != 3 || nbPl != 4){
   
                    switch(nbPl){
                       case(1):
                          printf("Votre action: %d \n" , nbPl);
                          return 0;
                          break;
        
                       case(2):
                          printf("Votre action: %d \n" , nbPl);
                           printf(" La quantité de nourriture par jour est : %f ", df);
                          return 0;
                          break;
        
                       case(3):
                          printf("Votre action: %d \n" , nbPl);
                             printf("Voulez vous entrer un nouvel animal ou modifier un animal ? 0/pour entrer ou 1/pour modifier \n");
                             scanf("%d", &repC2c3);
                                if(repC2c3==0){
                                    constructeurAnimal(a);
                                }
                                else{
                                    modifier_animal(a);
                                }
                          return 0;
                          break;
                
                       case(4):
                          printf("Votre action: %d \n" , nbPl);
                          return 0;
                          break;  
        
                       default:
                          printf("Aucun cas ne correspond !\n Recommencez ! \n" );
                          scanf("%d", &nbPl);
                          break;
                    }
                    }
            
                 }
                 else{
                     printf("Oups, ce n'est pas le bon code !! \n Vous n'avez pas accès à cette page ! \n");
                     exit(0);
                 }
                 
           return 0;
           break;
        
        case(3):
           printf("Votre choix: %d \n" , nb);
              printf("Êtes-vous sûr de vouloir quitter le jeu ? \n oui:0/non:1 \n");
              scanf("%d", &rep);
                 
                while(rep != 0 && rep != 1){
                        printf("Veuillez répondre par 0 ou 1 \n"); 
                        scanf("%d", &rep); 
                }        
                if(rep==0){  
                       printf("Vous avez quitté le jeu ! \n"); 
                }
                else if(rep==1){ 
                       printf("Vous n'avez pas quitté le jeu ! \n");
                } 
                        
           return 0;
           break;
        
        default:
           printf("Aucun cas ne correspond !\n Recommencez ! \n" );
           scanf("%d", &nb);
           
           break;
    }
    }
    
    
return 0;
}

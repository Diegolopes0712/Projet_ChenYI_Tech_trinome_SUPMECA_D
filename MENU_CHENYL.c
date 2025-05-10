#include"chenil.h"

int liste(int listA){
    
    FILE* F = NULL;
     // ouverture du fichier chenil-1.txt en lecture seule
    F = fopen("chenil-1.txt", "r");
    if (F == NULL){
    printf("Ouverture du fichier impossible");
    // exit(1);
    }
    fclose(F);

}




int main(){
    int nb, rep, nbPu, nbPl, code, A;

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
                  printf("Votre action: %d \n" , nbPu);
                    int listA;
                    A=liste(listA);  
                  return 0;
                  break;
        
               case(2):
                  printf("Votre action: %d \n" , nbPu);
                  
                  return 0;
                  break;
        
               case(3):
                  printf("Votre action: %d \n" , nbPu);
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
                          return 0;
                          break;
        
                       case(3):
                          printf("Votre action: %d \n" , nbPl);
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

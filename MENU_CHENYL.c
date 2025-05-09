//MENU CHENYL !!!//
#include<stdio.h>
#include<stdlib.h>




int main(){
    int nb, rep ;
    
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
           printf("Votre choix: %d \n" , nb);
           return 0;
           break;
        
        case(2):
           printf("Votre choix: %d \n" , nb);
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

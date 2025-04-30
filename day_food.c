#include"day_food.h"

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

int main(){
    int taille=50;
    float df;
    Animal* tab[taille];
    df = day_food(tab,taille);
    printf(" La quantité de nourriture par jour est : %f ");
    return 0;
}
     
      
           


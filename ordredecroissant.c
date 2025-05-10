#include"chenil.h"

int inv_nb_desc(Animal** tab){
    int nbchat = 0;
    int nbchien = 0; 
    int nbautruche = 0;
    int nbhamster = 0;
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
    int c[4]={nbchien,nbchat,nbautruche,nbhamster};
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
    char c1[10];
    char c2[10];
    char c3[10];
    char c4[10];
    if(c[0]==nbhamster){
      char c1="hamster";
    }
    else if(c[0]==nbautruche){
           char c1="autruche";
    }
    else if(c[0]==nbchat){
           char c1="chat";
    }
    else{
        char c1="chien";
    }
    if(c[1]==nbhamster){
      char c2="hamster";
    }
    else if(c[1]==nbautruche){
           char c2="autruche";
    }
    else if(c[1]==nbchat){
           char c2="chat";
    }
    else{
        char c2="chien";
    }
    if(c[2]==nbhamster){
      char c3="hamster";
    }
    else if(c[2]==nbautruche){
           char c3="autruche";
    }
    else if(c[2]==nbchat){
           char c3="chat";
    }
    else{
        char c3="chien";
    }
    if(c[3]==nbhamster){
      char c4="hamster";
    }
    else if(c[3]==nbautruche){
           char c4="autruche";
    }
    else if(c[3]==nbchat){
           char c4="chat";
    }
    else{
        char c4="chien";
    }
    printf(" le classement du nombre d'animaux du refuge par espèce est : 1) %d %s 2) %d %s 3) %d %s 4) %d %s ! ", c[0], c1, c[1], c2, c[2], c3, c[3], c4);
}




    


       

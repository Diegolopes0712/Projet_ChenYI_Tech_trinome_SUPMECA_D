int chercheAnimal(Animal a){
    printf("que voulez vous chercher ?");
    scanf("%s" ,b);
    if(b=="age"){
    if(a.anneenaissance >= 2023){ //Les animaux nés en 2023 ont 2 ans en 2025
        printf("animal jeune");
    }
    else if (a.anneenaissance <= 2015){ // Les animaux nés en 2015 ont 10 ans en 2025
        printf("animal sénior");
    }
    else {
        printf("animal adulte");
    }
    }
  else if(b=="espece"){
  if(a.espece == 1){ // 1 correspond à l'espèce présente
      printf("%s", a.espece);
  }
      else{
          printf("erreur");
          chercheAnimal(a);
      }
  }
  else if(b=="nom"){
      if(a.nom==1){ // ici 1 correspond au nom existant
          printf("%s", a.nom);
      }
      else{
          printf("erreur");
          chercheAnimal(a);
      }
    }
 else{
      printf("erreur");
      chercheAnimal(a);
    }
}

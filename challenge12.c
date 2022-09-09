#include <stdio.h>
#include <stdlib.h>

int main (){
//variable :
int a , b , c , d;

 printf("veuillez entrer la valeur de a : ");
 scanf("%d", &a);
 printf("veuillez entrer la valeur de b : ");
 scanf("%d", &b);
 printf("veuillez entrer la valeur de c : ");
 scanf("%d", &c);

 //traitment :
 d=a;
 a=b;
 b=c;
 c=d;
  //resultat :
  printf("la resultat est : %d %d %d" , a, b , c  );
  }

#include <stdio.h>

int main() {
  //variable :
  float f , c ;
  printf("veuillez entrer la temperateur en fahrenheit :");
  scanf("%f" ,&f);
  //traitment :
  c = (f-32)/1.8;
  printf("la valeur en degre Celsius est : %.2f\n" , c);
  if (c>=100)
    printf("si tres chaude ");
  else if (c>=40)
  printf("si chaude ");
  else if (c>=10)
    printf("l'air froid ");
  else
    printf("il fait tres froid ");
  return 0;
}



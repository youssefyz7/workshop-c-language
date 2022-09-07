#include <stdio.h>


void main(){
    //variable
    char name[20];
    char prenom[20];
    int age;
    int numero_de_telephone;
    char sexe[10];
    //traitment
    printf("veuillez entrer le nom : ");
    scanf("%s",&name);
    printf("veuillez entrer votre prenom : ");
    scanf("%s",&prenom);
    printf("veuillez entrer l'age : ");
    scanf("%d",&age);
    printf("veuillez entrer le numero de telephone : ");
    scanf("%d",&numero_de_telephone);
    printf("veuillez saisir le sexe : ");
    scanf("%s",&sexe);
     // resultate

    printf("Je mappelle %s et mon nom de famille est %s. J ai %d ans. Mon numero de telephone est le %d et mon sexe est %S. ", name , prenom , age , numero_de_telephone , sexe);

}

#include <stdio.h>

int main(){
    int n,x,somme=0,cpt=0,i;
    do{
    printf("veuillez saisir n entier");
    scanf("%d",&n);
    }while(n<0);
    for(i=0;i<n;i++){
        do{
            printf("saisir une valeur negatif");
            scanf("%d",&x);
        }while(n>0);
        printf("le nombre que vous avez saisie est :%d",x);

    }
    if(x%2==0){
            somme+=x;
            cpt++;
            moy=somme/cpt;
        printf("la moyenne des pairs est %d",moy);
    }
    }










}


#include <stdio.h>
int pozycja=0;
int zycia=4;
int tab[5]={1,2,3,4,5};

int main(){
    for(int i=0;i<4;i++){
printf("Podaj liczbe \n");
scanf("%d",&pozycja);
tab[pozycja-1]=0;
printf("nie poprawna liczba zostało ci %d żyć\n",zycia);
zycia--;}
    for(int i=0;i<5;i++){
        if(tab[i]!=0){
            printf("Poprawna liczba to: %d\n",tab[i]);
            break;
        }
    }
}
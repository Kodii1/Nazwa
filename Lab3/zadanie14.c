#include<stdio.h>
int liczba=3;
int twoja;
int zycia= 3;
int main(){
do{
printf("Podaj liczbe \n");
scanf("%d",&twoja);
if(twoja==liczba){
    printf("\nPodałeś poprawną liczbę :)");
    break;
}else 
    zycia--;
    printf("\nPodałeś nie poprawną liczbę, zostały ci %d życie/a",zycia);
}while(zycia>0);
}
#include <stdio.h>
int licz(int liczba,int suma);
int main(){
    int liczba;
    printf("Podaj liczbe");
    scanf("%d",&liczba);
    licz(liczba,0);

}


int licz(int liczba,int suma){


    if(liczba>0){
    suma=suma+liczba%10;
    licz(liczba/10,suma);
    printf("%d",suma);
    }
    if(!liczba>0){
    printf("%d",suma);
    }
}

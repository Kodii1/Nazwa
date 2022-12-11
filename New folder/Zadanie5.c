#include <stdio.h>

int binar(int liczba);
int wypisz(int liczba);

int main(){
    int liczba;
    printf("Podaj liczbe");
    scanf("%d",&liczba);

    binar(liczba);
}


int binar(int liczba){
    if(liczba>0){
    binar(liczba/2);
    printf("%d",liczba%2);
    }
}

#include <stdio.h>
int x;

int main()
{
    printf("podaj liczbę \n");
    scanf("%d",&x);

    if(x%1==0)
    {
    printf("podzielna przez 1");
    }else if (x%2==0){
    printf("podzielna przez 2");
    }else if (x%3==0){
    printf("podzielna przez 3");
    }else if (x%4==0){
    printf("podzielna przez 4");
    }else if (x%5==0){
    printf("podzielna przez 5");
    }else 
    printf("liczba nie jest podzielna przez liczby z zakresu od 1-5");















}
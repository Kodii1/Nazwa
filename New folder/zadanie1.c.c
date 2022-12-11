#include <stdio.h>

    int licz(int liczba);
    int suma;
int main(){
    int x;
    printf("Podaj N");
    scanf("%d",&x);
    suma=x;
    licz(x-1);
    printf("%d",suma);
}
 int licz(int liczba){
    if(liczba>0){
    suma=suma*liczba;
    liczba--;
    licz(liczba);}
    else
    return 0;
 }

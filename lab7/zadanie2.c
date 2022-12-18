#include <stdio.h>
int tab[10];
int zmienna=0;
void tablica();

int main(){

tablica();
}


void tablica(){
static int x =10;
if(x-1>=0){
x--;
printf("Podaj liczbę do tablicy");
scanf("%d",&zmienna);
*(tab+x)=zmienna;
printf("%d",tab[x]);
tablica();}
}
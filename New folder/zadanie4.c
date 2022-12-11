#include <stdio.h>
int pierwsza=1;
int kolejna=1;
int n;
int loop=1;
int licz(int liczba);

int main(){

printf("Podaj N");
scanf("%d",&n);

licz(n);
}



int licz(int liczba){
if(liczba>loop){
kolejna=kolejna+pierwsza;
pierwsza=kolejna-pierwsza;
liczba--;
licz(liczba);}

if(liczba==loop){
printf("%d",kolejna);}

loop++;
}

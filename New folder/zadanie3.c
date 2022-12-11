#include <stdio.h>

int licz(int x);


int main(){
int n;
printf("podaj N");
scanf("%d",&n);

licz(n);



}


int licz(int x){
static int liczba=1;
if(liczba<=x){
printf("%d,",liczba);
liczba++;
licz(x);}


}

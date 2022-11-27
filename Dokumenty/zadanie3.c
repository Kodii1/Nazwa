#include <stdio.h>

int liczba;
char tekst[10];

int main(){
printf("Napisz wyraz ");
scanf("%s",tekst);
printf("\n");
printf("wybierz liczbe ");
scanf("%d",&liczba);
printf("\n");
printf("%c",tekst[liczba-1]);

}
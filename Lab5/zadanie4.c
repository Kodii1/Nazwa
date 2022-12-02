#include <stdio.h>
#include <string.h>
int liczba;
char tekst[10];
int main(){
printf("Napisz wyraz ");
scanf("%s",tekst);
printf("\n");

if(tekst[0]==tekst[4]){//dla 5 znakow
if(tekst[1]==tekst[3]){
    printf("wyraz jest palindormen");}

}else 
    printf("wyraz nie jest palindormen");

}
#include <stdio.h>
char a;
char b;
int c;
int main() {  
    printf("Wpisz znak ");
    scanf("%s", &a);  
    printf("Wpisz 2 znak ");
    scanf("%s", &b);
    if(a==b){
    printf("Znaki są takie same\n");
    c=1;
    }else {
    printf("Znaki nie są takie same\n");
    c=0;}
    printf("%d",c);

}
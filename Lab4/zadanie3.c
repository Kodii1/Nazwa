#include <stdio.h>
int a;
int b;
int c=1;

int main(){
    printf("Podaj a: \n");
    scanf("%d",&a);   
    printf("Podaj b: \n");
    scanf("%d",&b);
    int suma=a;

while(b>suma){

c++;
suma= suma*a;

}


printf("wynik "c": %d:\n",c);
printf("wynik "potegi": %d:\n",suma);

}
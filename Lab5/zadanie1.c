#include<stdio.h>
int a;
int b;
int c;
int main(){
printf("Podaj dwie liczby ");
scanf("%d %d",&a,&b);
printf(" 1 - dodawanie\n 2 - odejmowanie\n 3 - mnozenie\n 4 - dzielenie\n");
scanf("%d",&c);

void dodawanie(int c, int d){
printf("%d",c+d);}

void odejmowanie(int c,int d){
printf("%d",c-d);}

void mnozenie(int c, int d){
printf("%d",c*d);}

void dzielenie(int c,int d){
printf("%d",c/d);}

switch(c)
{
case 1:
dodawanie(a,b);
break;
case 2:
odejmowanie(a,b);
break;
case 3: 
mnozenie(a,b);
break;
case 4: 
dzielenie(a,b);
break;
default:
printf("Wybrałeś złą liczbe;");
    break;
}
 
}

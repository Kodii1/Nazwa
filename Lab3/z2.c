#include <stdio.h>
int main()
{
int x;
int y;

printf("Podaj 1 liczbe ");
scanf("%d",&x);
printf("Podaj 2 licze ");
scanf("%d",&y);

int d=x*y;
printf("mnożenie=%d \n",d);
int p=x+y;
printf("dodwanie=%d \n",p);
int f=x-y;
printf("odejmowanie=%d \n",f);
int m=x/y;
printf("dzielenie=%d \n",m);
int w=x-(m*y);
printf("reszta z dzielenia=%d \n",w);
}
#include <stdio.h>
int n;
int main(){
printf("Podaj ilosc liczb: \n");
scanf("%d",&n); 
int tab[n];

for(int i=1;i<=n;i++)
{
    int x=0;
    printf("Podaj liczbe: \n");
    scanf("%d",&x); 

    tab[i]=x;
    printf("%d: \n",tab[i]);

}

}
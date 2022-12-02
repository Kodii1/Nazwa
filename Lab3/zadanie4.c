#include <stdio.h>
int x;
int y;
int z;
int main()
{
    printf("podaj pierwszą liczbę \n");
                scanf("%d",&x);
                printf("podaj drugą liczbę \n");
                scanf("%d",&y);
                printf("podaj trzecią liczbę \n");
                scanf("%d",&z);
                if(x<y){
                    if(y<z){
                printf("największa liczba to %d",z);}
                else{
                    printf("największa liczba to %d",y);}
                }else if(x<z){
                printf("największa liczba to %d",z);}
                else{
                    printf("największa liczba to %d",x);}


                }
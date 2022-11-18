#include <stdio.h>
int x;
int y;
int main(){
printf("podaj pierwszą liczbę \n");
scanf("%d",&x);
printf("podaj drugą liczbę \n");
scanf("%d",&y);
if(x<y){

printf("liczba %d jest większa od %d\n",y,x);

}else 
printf("liczba %d jest większa od %d\n",x,y);
}
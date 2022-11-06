#include <stdio.h>
int main()
{
int x;
printf("Podaj liczbe");
scanf("%d",&x);
if(x<5){
printf("Liczba %d jest mniejsa od5\n",x);
}else if(x==5){
printf("Liczba %d jest równa 5\n",x);
}
else{
    printf("Liczba %d jest wieksza od 5\n",x);
    }
    
}

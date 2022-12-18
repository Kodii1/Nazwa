#include<stdio.h>

int tab[20];


int main(){
int a=3;
int *x=&tab[0];
int b=15;
int *y=&tab[19];
long suma=(y-x);
 
printf("%ld\n",suma);

for(int i=0;i<suma;i++){
    tab[i]=i+1;
    printf("%d\n",tab[i]);
}
}
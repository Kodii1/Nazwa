#include <stdio.h>


void sortowanie(int *q,int *w,int *e){//2 1 3
int x;
// printf("Posortowane %i,%i,%i",*q,*w,*e);

if(*q>*w){
int *temp;
temp=q;
q=w;
w=temp;
}

if(*w>*e){
int *temp;
temp=w;
w=e;
e=temp;
}
printf("%i,%i,%i\n",*q,*w,*e);

if(*q<*w && *w<*e){
printf("%i,%i,%i",*q,*w,*e);
}

}

int main(){
int a=200;
int b=15;
int c=30;  

int *d=&a;
int *e=&b;
int *f=&c;

sortowanie(d,e,f);
}
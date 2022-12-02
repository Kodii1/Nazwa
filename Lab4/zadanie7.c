#include <stdio.h>
int test=0;
int licz;
int main(){
printf("Podaj liczbe ");
scanf("%d",&licz);


for(int i=2;i<licz;i++){


if(licz<2){
printf("Liczba nie moze byc mniejsza niz 2\n");

}else if(licz%i != 0) { 

}else if (licz%i == 0){


    test=1;

}
}
if(test==0){

printf("liczba jest pierwsza");



}else
printf("liczba nie jest pierwsza");
 





}
#include <stdio.h>



void year(int g){
if(g%4==0){

    printf("Rok jest przestępny");

}else

    printf("Rok jest nie jest przestępny");




}

int main(){
int r;
printf("Podaj rok ");
scanf("%d",&r);
year(r);
}
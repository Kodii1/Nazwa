#include <stdio.h>
int am[]={1,3,5,7,8,10,12};
int bm[]={4,6,9,11};
int cm=2;


void miesiac(int m,int d,int r){

if(m>12 || d>31){
printf("Data nie jest poprawna");
}else

for(int i=0;i<7;i++){

    if(m==am[i] && d<32){

        printf("Data jest poprawna");
        break;}

    else if(m==bm[i] && d<31){

        printf("Data jest poprawna");
        break;}

    else if(m==cm){

        if(r%4==0 && d<30){
        printf("Data jest poprawna");}

            else if(d<29){
            printf("Data jest poprawna");}

break;}}}


int main(){
int a,b,c;
printf("Podaj Miesiąc Dzień Rok ");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
miesiac(a,b,c);
}
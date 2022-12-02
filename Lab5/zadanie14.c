#include <stdio.h>
int am[]={1,3,5,7,8,10,12};
int bm[]={4,6,9,11};
int cm=2;
int wynik=0;
int wynik2=0;
int stop=0;
int poprawnosc=0;
int v=0;

void sprawdz_poprawnosc(int m,int d,int r){

for(int i=0;i<7;i++){

    if(m==am[i] && d<32){
        poprawnosc=1;
        }

    else if(m==bm[i] && d<31){

        poprawnosc=1;
        }

    else if(m==cm){

        if(r%4==0 && d<30){
        poprawnosc=1;}

            else if(d<29){
            poprawnosc=1;}

break;}}
}





void sprawdz(int a, int b,int rok){
if(rok==0){
wynik=wynik+(365*rok);}
if(rok==1){
wynik=wynik+(366*rok);}
do{
switch(b){
    case 2:
        if(a==0){
        wynik=wynik+28;
         break;
        }else if(a==1)
        wynik=wynik+29;
        break;


default:

for(int i=0;i<7;i++){
    if(b==am[i]){
    wynik=wynik+31;
    }
    if(b==bm[i]){
    wynik=wynik+30;
    }
}
break;
}
b++;

}while(b<13);

if(stop==0){
wynik2=wynik;}
if(stop==1 && poprawnosc==1){
    unsigned int koncowy_wynik=wynik2-wynik;
printf("\n%d",koncowy_wynik);}
stop++;
if(poprawnosc==0){
    printf("Data jest nie poprawna \n");
    v=2;
}
}


void year(int g,int c){
if(g%4==0){

    sprawdz(1,c,g);
    }
    else if(g%4!=0){

    sprawdz(0,c,g);
    }
}



int main(){
    do{
    wynik=0;
    int r,m,d;
    printf("Podaj rok i miesiąc dzien \n");
    scanf("%d",&r);
    scanf("%d",&m);
    scanf("%d",&d);
    wynik=wynik-d;
    sprawdz_poprawnosc(m,d,r);
    year(r,m);
    v++;
    }while(v<2);
}
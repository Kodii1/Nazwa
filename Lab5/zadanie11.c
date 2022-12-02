#include <stdio.h>
int am[]={1,3,5,7,8,10,12};
int bm[]={4,6,9,11};
int wynik=0;



void sprawdz(int a, int b){
do{
switch(b){
    case 2:
        if(a==0){
        printf("28\n");
        wynik=wynik+28;
         break;
        }else if(a==1)
        printf("29\n");
        wynik=wynik+29;
        break;


default:

for(int i=0;i<7;i++){
    if(b==am[i]){
    printf("31\n");
    wynik=wynik+31;
    }
    if(b==bm[i]){
    printf("30\n");
    wynik=wynik+30;
    }
}
break;
}
b++;
}while(b<13);
printf("%d",wynik);
}


void year(int g,int c){
if(g%4==0){

    printf("Rok jest przestępny ");
    sprawdz(1,c);
    }
    else if(g%4!=0){

    printf("Rok jest nie jest przestępny ");
    sprawdz(0,c);
    }
}



int main(){
    int r,m,d;
    printf("Podaj rok i miesiąc dzien ");
    scanf("%d",&r);
    scanf("%d",&m);
    scanf("%d",&d);
    wynik=wynik-d;
        printf("%d",wynik);

    year(r,m);
}
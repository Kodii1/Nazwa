#include <stdio.h>
    int pomocnicza00=1;
    int pomocnicza01=0;
    int pomocnicza10=0;
    int pomocnicza11=1;
    int pierwsza;
    int druga;
    int przejscie=1;
    int dzielenie2;
int licz(int jeden,int dwa);
int main(){
printf("Podaj Liczby");
scanf("%d",&pierwsza);
scanf("%d",&druga);
licz(pierwsza,druga);

}

int licz(int jeden,int dwa){
    int dzielenie=pierwsza%druga;
    int calosci=pierwsza/druga;

    if(przejscie%2==1){
    pomocnicza00=pomocnicza00*calosci*-1;
    pomocnicza01=pomocnicza01*calosci*-1;}
    if(przejscie%2==0){
    pomocnicza10=pomocnicza10*calosci*-1;
    pomocnicza11=pomocnicza11*calosci*-1;}
    pierwsza=druga;
    druga=dzielenie;
    przejscie++;
    if(dzielenie>0){
    dzielenie2 = dzielenie;
    licz(pierwsza,druga);
    }
    if(!dzielenie>0){
    printf("NWD %d",dzielenie2);
    }
}

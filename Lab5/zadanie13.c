#include <stdio.h>
int loop=0;
int loop2=0;
int loop3=0;
int rok2;
int miesiac2;
int dzien2;
int wynik=0;



void dzien(int dzien){
if(loop3==1){
if(dzien2>dzien){

}if(dzien>dzien2){
wynik=2;

}else if(dzien2==dzien){
wynik=1;
}
}
if(loop3==0){
dzien2=dzien;
loop3++;
}
if(wynik==1){
printf("Druga data jest wcześniejsza");

}else if(wynik==2){
printf("Pierwsza data jest wcześniejsza");

}else if(wynik==0){
printf("Daty są takie same");

}
}

void miesiac(int miesiac){
if(loop2==1){
if(miesiac2>miesiac){

}if(miesiac>miesiac2){
wynik=2;

}else if(miesiac2==miesiac){
wynik=1;
}
}
if(loop2==0){
miesiac2=miesiac;
loop2++;
}
}


void rok(int rok){
if(loop==1){
if(rok2>rok){

}if(rok>rok2){
wynik=2;

}else if(rok2==rok){
wynik=1;
}
}
if(loop==0){
rok2=rok;
loop++;
}
}



int main(){
int v=0;
do{
int a,b,c;
printf("Podaj rok miesiac dzien ");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
rok(a);
miesiac(b);
dzien(c);
v++;
}while(v<2);
}
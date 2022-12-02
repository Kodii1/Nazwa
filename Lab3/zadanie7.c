#include <stdio.h>
int rok;
int rok2;
int miesiac;
int miesiac2;
int dzien;
int dzien2;
int main(){
    printf("Podaj 1 rok ");
    scanf("%d",&rok);
    printf("Podaj 2 rok ");
    scanf("%d",&rok2);
    printf("Podaj 1 miesiac ");
    scanf("%d",&miesiac);
    printf("Podaj 2 miesiac ");
    scanf("%d",&miesiac2);
    printf("Podaj 1 dzien ");
    scanf("%d",&dzien);
    printf("Podaj 2 dzien ");
    scanf("%d",&dzien2);


int wynikr = rok-rok2;
int wynikm = miesiac-miesiac2;
int wynikd = dzien-dzien2;

if(wynikr < 0){
wynikr= wynikr*-1;
printf("rózmnica lat %d\n",wynikr);
}else
printf("różnica lat %d\n",wynikr);


if(wynikm < 0){
wynikm= wynikm*-1;
printf("różnica miesięcy %d\n",wynikm);
}else
printf("różnica miesięcy %d\n",wynikm);



if(wynikd < 0){
wynikd= wynikd*-1;
printf("różnica dni %d\n",wynikd);
}else
printf("różnica dni %d\n",wynikd);

}
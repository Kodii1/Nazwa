#include <stdio.h>
int tab[9]={1,2,3,4,5,6,7,8,9,10};
int poczatek=0;
void licz(int liczba,int pozycja);

void bin(int liczba,int pozycja,int pozcyja2);

int main(){
int liczba;
printf("Podaj liczbe ");
scanf("%d",&liczba);
bin(liczba,0,9);
licz(liczba,1);
}


void licz(int liczba,int pozycja){
if(liczba==tab[pozycja-1]){
    printf("liczba jest w tablicy");
}else


licz(liczba,pozycja+1);
}

void bin(int liczba,int pozycja,int pozcyja2){
    int przedzial;
    przedzial=(pozcyja2 + pozycja)/2; //wartpsc 4


    if(przedzial<liczba && liczba<pozcyja2){
    pozycja=przedzial;
       printf("%XD",pozcyja2);

    if(przedzial == liczba && liczba == pozcyja2){
       printf("%d1\n",pozcyja2);
       printf("%d2\n",przedzial);


       }

    }
    if(pozycja>liczba && liczba>przedzial){

    pozcyja2=przedzial;
       printf("%XD2",pozcyja2);


    if(pozycja == liczba && liczba == przedzial){



       printf("%d3\n",pozycja);
       printf("%d4\n",przedzial);}}

bin(liczba,pozycja,pozcyja2);

}


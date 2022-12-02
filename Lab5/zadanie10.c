#include <stdio.h>
int am[]={1,3,5,7,8,10,12};
int bm[]={4,6,9,11};


void sprawdz(int a, int b){

switch(b){
    case 2:
        if(a==0){
        printf("28\n");
        }else if(a==1)
        printf("29\n");
        break;


default:

for(int i=0;i<12;i++){
    if(b==am[i]){
    printf("31\n");
    break;
    }

    else if(b==bm[i]){
    printf("30\n");
    break;
    }
}
}
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
    int r,m;
    printf("Podaj rok i miesiąc ");
    scanf("%d",&r);
    scanf("%d",&m);

    year(r,m);
}
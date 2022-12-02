#include <stdio.h>

int x=5;
int y;
int stop=0;
int main(){
y=x;
for(int b=1;x<10;b++){
for(int i=1;i<11;i++){
    if(stop==10){
    system("PAUSE");    
    return 0;
    }
    if(y==i && x==i &&b < 11 && i <11){
        printf("O");
    }else if(b<11 && i<11){

        printf("_");}}
        printf("\n");
        x++;
        y++;
        stop++;
}
for(int b=1;x>2;b++){
for(int i=1;i<10;i++){
    if(stop==10){
    system("PAUSE");    
    return 0;
    }
    if(y==i && x==i &&b < 11 && i <11){
    printf("O");
}else if(b<11 && i <11){
    printf("_");}}
    printf("\n");
x--;
y--;
stop++;
}
}
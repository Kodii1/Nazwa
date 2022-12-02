#include <stdio.h>
int x;
int y;
int x2;
int y2;
int x3;
int y3;

int main(){
printf("Podaj dane 1 wieszchołka\n");
scanf("%d %d",&x,&y);



printf("Podaj dane 2 wieszchołka\n");
scanf("%d  %d",&x2,&y2);




if(x<0)// x jest mniejszy od 0
{
if(x2<0) //x2 jest mniejszy od 0
{
    if(x<x2){ 
printf("%d\n",(x-x2)*-1);
x3 = (x-x2)*-1; 
printf("%dz\n",x3);
    }else  
printf("%d\n",(x2-x)*-1);
x3 = (x2-x)*-1; 
printf("%d\n",x3);


}else if(x<=x2){
printf("%d\n",x2-x);
x3 = x2-x;
printf("%d\n",x3);
}else printf("nie wiem cos sie buguje");


}else if (x2>0){ // xjest wiekszy od 0 x2 jest wiekszy od 0
    if(x>x2){
printf("%d\n",x-x2);
x3 = x-x2;
printf("%d\n",x3);
    }else 
printf("%d\n",x2-x);
x3 = x2-x;
printf("%d\n",x3);
}else if(x2<=0){
printf("%d\n",x-x2);
x3 = x-x2;
printf("%d\n",x3);
}else printf("nie wiem co sie buguje");





if(y<0)// x jest mniejszy od 0
{
if(y2<0) //x2 jest mniejszy od 0
{
    if(y<y2){ 
printf("%d\n",(y-y2)*-1);
y3 = (y-y2)*-1; 
    }else  
printf("%d\n",(y2-y)*-1);
y3 = (y2-y)*-1; 



}else 
printf("%d\n",y2-y);
y3 = y2-y;



}else if (y2>0){ // xjest wiekszy od 0 x2 jest wiekszy od 0
    if(y>y2){
printf("%d\n",y-y2);
y3 = y-y2;
    }else 
printf("%d\n",y2-y);
y3 = y2-y;
}else if(y2<=0){
printf("%d\n",y-y2);
y3 = y-y2;
}else printf("nie wiem co sie buguje");





printf("Obwód = %d",(x3*2)+(y3*2));
printf("Pole = %d",y3*x3);




}
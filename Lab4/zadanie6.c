#include <stdio.h>
int tab[2][2]= {{1,0},{0,1}};
int b=0;
int x=2;
int y=0;
int h=0;
int iksde =0;
int main(){
    printf("|--|\n");
    printf("|");

while(iksde<2)
{


if(tab[y][h]==1){
printf("x");
x++;
h++;


}else if(tab[y][h]==0){
    printf("-");
    x++;
    h++;

}
if(x%3!=0){
printf("|");
 printf(" \n");
 printf("|");
 y++;
 h=0;
 iksde++;
 x=2;
}
}
printf("--|\n");
}
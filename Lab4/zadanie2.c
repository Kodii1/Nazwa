#include <stdio.h>
int a;
int b;
int main(){
    printf("Podaj a: \n");
    scanf("%d",&a);   
    printf("Podaj b: \n");
    scanf("%d",&b);
    int suma=a;
for(int i=1;i<b;i++){
suma= suma*a;

}
printf("wynik: %d:\n",suma);
}
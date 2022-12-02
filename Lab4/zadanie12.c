#include <stdio.h>
int wysokość;
int szerokość;
int x=0;
int y=1;
int main (){
    printf("Podaj wysokość: ");
    scanf("%d",&wysokość);
    printf("\n");
    szerokość=wysokość-1;
    while(szerokość>0){
        while(x<szerokość){
            printf(" ");
            x++;
        }
        for(int i=0;i<y;i++){
            printf("^");
        }
        printf("\n");
        y=y+2;
        x=0;
        szerokość--;
    }
}
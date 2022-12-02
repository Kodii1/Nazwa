#include <stdio.h>
int n;
int suma=0;
int main(){
    printf("Podaj n: \n");
    scanf("%d",&n);
int tab [n];
for(int i=1;i<=n;i++){
tab[i]=i*i;
}



for(int i=1;i<=n;i++) {
suma = suma+tab[i];
}

printf("%d\n",suma);
}

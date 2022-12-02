#include <stdio.h>
int n;
int main(){
printf("Podaj a: \n");
scanf("%d",&n); 
int tab[n];
for(int i=1;i<=n;i++)
{
    tab[i]=i*i;
    printf("%d: \n",tab[i]);

}




}
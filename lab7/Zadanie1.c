#include <stdio.h>

int globalna =2;


void adresy(int jeden,int dwa);

int main(){

int lokalna=globalna;
printf("%p\n",&lokalna);
printf("%p\n",&globalna);
adresy(lokalna,globalna);
}

void adresy(int jeden,int dwa){
    printf("%p\n",&jeden);
    printf("%p\n",&dwa);

}

#include <stdio.h>
int dzien;
int miesiac;
int rok;
int main(){

    printf("Podaj dzien ");
    scanf("%d",&dzien);
    printf("Podaj miesiac ");
    scanf("%d",&miesiac);
    printf("Podaj rok ");
    scanf("%d",&rok);

//(miesiac ==2 )
//(miesiac == 1,3,5,7,8,10,12 )
//(miesiac == 4,6,9,11 )


    if(rok%4==0){
        if(miesiac==2){
        if(dzien<29){
        printf("data jest poprawna");
        }else{
        printf("data nie jest poprawna");}
        }switch (miesiac)
{
    case 1: 
    case 3:
    case 5:
    case 6:
    case 8:
    case 10:
    case 12:
    
    
    
    if(dzien<31){
    printf("data jest poprawna");
    }else
    printf("data nie jest poprawna");

    break;

    default:
    if(dzien<30){
    printf("data jest poprawna");
    }else
    printf("data nie jest poprawna");

    break;
}
}else{


    if(miesiac==2){
        if(dzien<29){
        printf("data jest poprawna");
        }else{
        printf("data nie jest poprawna");}
        }else{

        switch (miesiac)
{
    case 1: 
    case 3:
    case 5:
    case 6:
    case 8:
    case 10:
    case 12:
    
    
    
    if(dzien<31){
    printf("data jest poprawna");
    }else
    printf("data nie jest poprawna");

    break;

    default:
    if(dzien<30){
    printf("data jest poprawna");
    }else
    printf("data nie jest poprawna");

    break;
}
}
}
}

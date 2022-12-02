#include <stdio.h>
int a[2] = {2,29};
int b[2] = {20,40};
int c[2];
int main(){
if(a[0]>b[0]){
c[0]=a[0];}

if(a[0]<b[0]){
c[0]=b[0];}


if(a[1]>b[1]){
c[1]=b[1];}

if(a[1]<b[1]){
c[1]=a[1];}

if(c[0]>c[1]){
printf("zbior nie istnieje");}

else{printf("%d",c[1]);}

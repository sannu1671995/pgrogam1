#include<stdio.h>
#include<string.h>
void main(){
char a[20],b[20],c[50];
int i,j,x,y,l;
printf("Enter string 1 \n");
scanf("%s",a);
printf("Enter string 2 \n");
scanf("%s",b);
x=strlen(a);
y=strlen(b);
l=x+y;
for(i=0;i<x;i++){
c[i]=a[i];
}
for(i=x;i<l;i++){
c[i]=b[i-x];}
printf("Concatenated string is \t ");
for(i=0;i<l;i++){
printf("%c",c[i]);
}
getch();
}

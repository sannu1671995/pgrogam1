#include<stdio.h>
#include<math.h>
void main(){
char a[10];
printf("Enter the String \n");
scanf("%s",&a);
if(isdigit(a[0])==0){
printf("False \n");
}
else{
printf("True");}
getch();
}

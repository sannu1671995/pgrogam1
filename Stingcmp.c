#include<stdio.h>
#include<string.h>
void main(){
char a[20],b[20];
int i,j,x,y,l,c;
printf("Enter string 1 \n");
scanf("%s",&a);
printf("Enter string 2 \n");
scanf("%s",&b);
x=strlen(a);
y=strlen(b);
if(x>y){
l=x;}
else{
l=y; }
c=0;
for(i=0;i<l;i++){
if(!(a[i]==b[i])){
printf("The sting are not equal \n"); c=c+1;    break;
}
}
if(c==0){
printf("The strings are equal \n");
	 }
getch();
}

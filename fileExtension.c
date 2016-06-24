#include<stdio.h>
#include<string.h>
void main(){
char a[20];
int x=0,i,j;
printf("input the file name \n ");
scanf("%s",&a);
j=strlen(a);
for(i=0;i<j;i++){
if(a[i]=='.'){
x=i;break;
}
}
printf("File extension is \n");
for(i=x+1;i<j;i++){
printf("%c",a[i]);
}
getch();
}

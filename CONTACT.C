#include<stdio.h>
#include<conio.h>
void main(){
char number[10];
char name[20];
FILE *fp;
clrscr();
fp=fopen("contact.txt","a");
if(fp==NULL){
    printf("file is not exitst");
    return;
  }
printf("enter the name : ");
gets(name);
fprintf(fp,"%s\t",name);
printf("enter the mobile no : ");
gets(number);
fprintf(fp,"%s\n",number);
fclose(fp);
getch();
}
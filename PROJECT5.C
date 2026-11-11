#include<stdio.h>
int main()
{
char ch;
FILE *fp;
fp=fopen("data.txt","w");
fprintf(fp,"few days ago,i am weak in coding c.\nbut now iam little clearin coding ");
fclose(fp);
fp=fopen("data.text","a");
fprintf(fp,"in my opinion sir teaches good");
fclose(fp);
fp=fopen("data.txt","r");
while((ch=fgetc(fp))!=EOF)
{
printf("%c",ch);
}
fclose(fp);
return 0;
}
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
void get(int);
void add(int);
void check(int);
int s=0;
void main()
{
char str[100];
int i,l;
clrscr();
cout<<"\nEnter Card Number:";
cin>>str;
l=strlen(str);
for(i=1;i<l;i+=2)
{
get(str[i]-'0');
}
for(i=0;i<l;i+=2)
{
add(str[i]-'0');
}
check(s);
getch();
}
void get(int x)
{
int db;
db=x*2;
while(db!=0)
{
s=s+db%10;
db=db/10;
}
}
void add(int x)
{
s=s+x;
}
void check(int x)
{
if(x%10==0)
cout<<"\nThe Card Is Legit";
else
cout<<"\nCard Is Not Legit";
}
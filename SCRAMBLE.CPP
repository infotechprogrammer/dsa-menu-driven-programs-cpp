#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;
int main()
{
char word[50];
int i,n, fact=1;
cout<<"Enter the string:\n";
cin>>word;
n=strlen(word);
for(i=1;i<=n;i++){
fact=fact*i;
}
cout<<"Number of ways of scrambling word "<<word<<" "<<fact;
getch();
return 0;
}

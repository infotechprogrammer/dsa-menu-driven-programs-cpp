#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
unsigned long long int n,i, fact=1;
cout<<"Enter the number whose factorial you want ";
cin>>n;
for(i=1;i<=n;i++)
{
fact=fact*i;
}
cout<<"Factorial = "<<fact;
getch();
}
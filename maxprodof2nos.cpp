#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int arr[50], n, insert, i, pos;
cout<<"Enter Array Size : ";
cin>>n;
cout<<"Enter positive array elements : \n";
for(i=1; i<=n; i++)
{
cin>>arr[i]; 
}
for(i=1; i<=n; i++)
{
for(int j=1; j<=n; j++)
{
if(arr[j]>arr[j+1])
{
int temp = arr[j];
arr[j] = arr[j+1];
arr[j+1] = temp;
}
}
}
cout<<"Maximum Product of distinct number is :\n";
long int mul= arr[n]*arr[n-1];
cout<<mul;
}
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int arr[50], size, insert, i, pos;
cout<<"Enter Array Size : ";
cin>>size;
cout<<"Enter array elements : \n";
for(i=1; i<=size; i++)
{
cin>>arr[i];
}
cout<<"Enter element to be insert : \n";
cin>>insert;
cout<<"At which position (Enter index number starts from 0 end upto array size) ?\n ";
cin>>pos;
// now create a space at the required position
for(i=size; i>pos; i--)
{
arr[i]=arr[i-1];
}
arr[pos]=insert;
cout<<"Element inserted successfully..!!\n";
cout<<"Now the new array is : \n";
for(i=1; i<size+1; i++)
{
cout<<arr[i]<<" ";
}
getch();
}
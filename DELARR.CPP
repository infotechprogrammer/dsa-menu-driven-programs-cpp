#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int arr[50], size, i, pos;
cout<<"Enter Array Size : ";
cin>>size;
cout<<"Enter array elements : \n";
for(i=0; i<=size; i++)
{
cin>>arr[i];
}
cout<<"Element deletion position (Enter Index number: starts from 0 end upto array size) ?\n ";
cin>>pos;
if(pos>size)
{
cout<<"This value is out of range";
}else
{
--pos;
for(i=pos; i<=size+1; i++)
{
arr[i]=arr[i+1];
}
cout<<"Element Deleted successfully..!!\n";
cout<<"Now the new array is : \n";
for(i=0; i<size; i++)
{
cout<<arr[i]<<" ";
}
}
getch();
}
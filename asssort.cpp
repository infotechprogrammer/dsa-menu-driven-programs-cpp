#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    long int i, j, temp, no[100], n;
    cout<<"Enter number of elements: \n";
    cin>>n;
    cout<<"Enter elements: \n";
    for(i=0;i<n;i++)
    {
        cin>>no[i];
        if(no[i]<0){
            cout<<"Negative element is not allowed";
            exit(1);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(no[i]>no[j])
            {
                temp = no[i];
                no[i] = no[j];
                no[j] = temp;
            }
        }
    }
    cout<<"Sorted Elemets listed below:\n";
    for(i=0;i<n;i++)
    {
        cout<<no[i]<<" ";
    }
getch();
}
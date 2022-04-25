//Money Change Problem
//Algorithm:
//Step-1: Set w (Input given by user)
//Step-2: Set t=0 AND
//Step-3: Repeat while(w MOD 10)
//        a) t++
//        b) w=w-10
//Step-4: Repeat while(w MOD 5)
//        a) t++
//        b) w=w-5
//Step-5: Repeat while(w MOD 1)
//        a) t++
//        b) w=w-1
//Step-6: Set n=t+w
//Step-7: Result = n
//Step-8: Exit

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int w;
cout<<"Enter the total amount \n";
cin>>w;
int t=0,n;
while(w/10>0)
{
t++;
w=w-10;
}
while(w/5>0)
{
t++;
w=w-5;
}
while(w/1>0)
{
t++;
w=w-1;
}
n=t+w;
cout<<"Minimum no of coins needed="<<n;
getch();
}
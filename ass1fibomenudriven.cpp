#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;
//declare functions here below:
void fibo();
void lfibo();
void llfibo();
void lsfibo();
void lsqlfibo();
void fact();
void scramble();

int main()
{
    long int a,b;
    again:
    cout<<"\n Enter the number of that operation that you want to perform:\n";
    cout<<"0:\tExit\n";
    cout<<"1:\tFibonacci Series\n";
    cout<<"2:\tLast element of Fibonacci Series\n";
    cout<<"3:\tLast digit of largest Fibonacci Series\n";
    cout<<"4:\tLast digit of sum of Fibonacci Series\n";
    cout<<"5:\tLast digit of sum of square of Fibonacci Series\n";
    cout<<"6:\tPrint Factorial of a number\n";
    cout<<"7:\tNumber of ways a given word can scrambled\n";

    cin>>a;

    switch(a)
    {
        case 0: goto endst;
        case 1: fibo(); break;
        case 2: lfibo(); break;
        case 3: llfibo(); break;
        case 4: lsfibo(); break;
        case 5: lsqlfibo(); break;
        case 6: fact(); break;
        case 7: scramble(); break;
        default: cout<<"\n Enter a valid number:";
    }
    end:
    cout<<"\n Do you want to Continue then press 1 for Yes and 0 for No:";
    cin>>b;
    if(b==1){
        goto again;
    }else if(b==0){
        endst:
        exit(8);
    }else{
        cout<<"\n PLease Enter Valid number";
        goto end;
    }    
getch();
}
void fibo(){
   long int n, t1 = 0, t2 = 1, nextTerm = 0;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i)
    {
        // Prints the first two terms.
        if(i == 1)
        {
            cout << " " << t1 << " ";
            continue;
        }
        if(i == 2)
        {
            cout << t2 << " ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        
        cout << nextTerm << " ";
    }
}
void lfibo(){
long int a,b,i,n,k;
cout<<"Enter no of elements in series:\n";
cin>>n;
a= -1;
b= 1;
for(k=1;k<=n;k++)
{
    i=b;
    b=a+b;
    a=i;
}
cout<<"Last Element of Fibonicci Series is: "<<b;
}

void llfibo(){
long int a,b,i,n,k;
cout<<"Enter no of elements in series:\n";
cin>>n;
a= -1;
b= 1;
for(k=0;k<n;k++)
{
    i=b;
    b=(a+b);
    a=i;
}
b=b%10;
cout<<"Last Digit of largest Fibonicci Series is: "<<b;
}
void lsfibo(){

        long int a,b,i,n,k,sum=0;
cout<<"Enter no of elements in series:\n";
cin>>n;
a= -1;
b= 1;
for(k=0;k<n;k++)
{
    i=b;
    b=(a+b);
    a=i;
    sum=(sum+b);
}
sum=sum%10;
cout<<"Last digit of Sum of fibonicci Series : \n"<<sum;

//     long int a,b,i,n,k,sum=0;
// cout<<"Enter no of elements in series:\n";
// cin>>n;
// a= -1;
// b= 1;
// for(k=0;k<n;k++)
// {
//     i=b;
//     b=(a+b);
//     a=i;
//     sum=(sum+b);
// }
// cout<<"Sum of fibonicci Series \n: "<<sum;
    //  long int sum=1, n, t1 = 0, t2 = 1, nextTerm = 0;

    // cout << "Enter the number of terms: ";
    // cin >> n;

    // cout << "Fibonacci Series: ";

    // for (int i = 1; i <= n; ++i)
    // {
    //     // Prints the first two terms.
    //     if(i == 1)
    //     {
    //         cout << " " << t1 << " ";
    //         continue;
    //     }
    //     if(i == 2)
    //     {
    //         cout << t2 << " ";
    //         continue;
    //     }
        
    //     nextTerm = t1 + t2;
    //     t1 = t2;
    //     t2 = nextTerm;
    //     sum = sum + nextTerm;
    //     cout << nextTerm << " ";        
    // }
    // cout << "Sum of fibonicci Series \n"  << sum;
}

void lsqlfibo()
{
    long int a,b,i,n,k,sum=0;
cout<<"Enter no of elements in series:\n";
cin>>n;
a= -1;
b= 1;
for(k=0;k<n;k++)
{
    i=b;
    b=(a+b);
    a=i;
    sum=(sum+(b*b));
}
long int sumsq=sum%10;
cout<<"Last digit of sum of square of Fibonacci Series: \n"<<sumsq;
}

void fact(){
  unsigned long long int n,i, fact=1;
cout<<"Enter the number whose factorial you want ";
cin>>n;
for(i=1;i<=n;i++)
{
fact=fact*i;
}
cout<<"Factorial = "<<fact;  
}

void scramble(){
    char word[50];
int i,n, fact=1;
cout<<"Enter the string:\n";
cin>>word;
n=strlen(word);
for(i=1;i<=n;i++){
fact=fact*i;
}
cout<<"Number of ways of scrambling word "<<word<<" "<<fact;
}
#include<iostream>
#include<conio.h>
using namespace std;

int queue[10], n = 10, front = - 1, rear = - 1;


    //declared functions here below:

void insq();
void delq();
void qempty();
void qfull();
void printq();


int main()
{
    long int a,b;
    again:
    cout<<"\n Enter the number of that operation that you want to perform:\n";
    cout<<"1:\tInsertion into queue\n";
    cout<<"2:\tDeletion from the queue\n";
    cout<<"3:\tQueue_Is_Empty\n";
    cout<<"4:\tQueue_Is_Full\n";
    cout<<"5:\tPrint the elements in queue\n";
    cout<<"6:\tExit\n";
    cin>>a;

    switch(a)
    {
        case 0: goto endst;
        case 1: insq(); break;
        case 2: delq(); break;
        case 3: qempty(); break;
        case 4: qfull(); break;
        case 5: printq(); break;
        case 6: goto endst; break;
        

        default: cout<<"\n Enter a valid number:";
    }
    end:
    cout<<"\n Do you want to Continue then press 1 for Yes and 0 for No:";
    cin>>b;
    if(b==1){
        goto again;
    }else if(b==0){
        endst:
        exit(7);
    }else{
        cout<<"\n PLease Enter Valid number";
        goto end;
    }    
getch();
}

void insq() {
   int val;
   if (rear == n - 1)
   cout<<"Queue Overflow"<<endl;
   else {
      if (front == - 1)
      front = 0;
      cout<<"Insert the element in queue : "<<endl;
      cin>>val;
      rear++;
      queue[rear] = val;
   }
}
void delq() {
   if (front == - 1 || front > rear) {
      cout<<"Queue Underflow ";
      return ;
   } else {
      cout<<"Element deleted from queue is : "<< queue[front] <<endl;
      front++;;
   }
}
void printq() {
   if (front == - 1)
   cout<<"Queue is empty"<<endl;
   else {
      cout<<"Queue elements are : ";
      for (int i = front; i <= rear; i++)
      cout<<queue[i]<<" ";
         cout<<endl;
   }
}

void qempty()
{
   if (front == - 1 || front > rear) {
      cout<<"Queue is empty ";
   }else{
       cout<<"Queue has elements in it";
   }
}

void qfull()
{
   if (rear == n - 1){
   cout<<"Queue is Full"<<endl;
   }else{
       cout<<"Queue is not full";
   }
}
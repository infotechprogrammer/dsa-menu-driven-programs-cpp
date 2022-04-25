#include<iostream>
#include<conio.h>
using namespace std;

struct node {
   int info;
   struct node *link;
};
struct node* front = NULL;
struct node* rear = NULL;
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
    cout<<"2:\tDeletion fromthe queue\n";
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
void insq()
{
    int val;
    cout<<"Insert the element in queue : "<<endl;
    cin>>val;
    struct node *new_node = new node;
    new_node->info = val;
    new_node->link = NULL;
    if (rear == NULL) {
       front = rear = new_node;
    } else { 
      rear->link = new_node;
      rear = new_node;
    }
}

void delq()
{
   struct node *new_node = new node; 
   new_node = front;
   if (front == NULL) {
      cout<<"Underflow"<<endl;
      return;
   }
   else
   if (new_node->link != NULL) {
      new_node = new_node->link;
      cout<<"Element deleted from queue is : "<<front->info<<endl;
      delete(front);
      front = new_node;
   } else {
      cout<<"Element deleted from queue is : "<<front->info<<endl;
      delete(front);
      front = NULL;
      rear = NULL;
   }
}

void qempty()
{
    if ((front == NULL) && (rear == NULL)) {
      cout<<"Queue is Empty"<<endl;
   }else{
       cout<<"Queue is not Empty";
   }

}

void qfull()
{
    //if(){
    //    cout<<"Queue is full";
    //}else{
    //    cout<<"Queue is not full";
    //}
}

void printq()
{
   struct node *new_node = new node; 
   new_node = front;
   if ((front == NULL) && (rear == NULL)) {
      cout<<"Queue is empty"<<endl;
      return;
   }
   cout<<"Queue elements are: ";
   while (new_node != NULL) {
      cout<<new_node->info<<" ";
      new_node = new_node->link;
   }
   cout<<endl; 
}
#include<iostream>
#include<conio.h>
using namespace std;

struct node {
   int info,pr;
   node *link;
};
struct node *front = NULL;
    //declared functions here below:

void inspq();
void delpq();
void pqempty();
void pqfull();
void printpq();


int main()
{
    long int a,b;
    again:
    cout<<"\n Enter the number of that operation that you want to perform:\n";
    cout<<"1:\tInsertion into priority queue\n";
    cout<<"2:\tDeletion from the priority queue\n";
    cout<<"3:\tPQueue_Is_Empty\n";
    cout<<"4:\tPrint the elements of the priority queue\n";
    cout<<"5:\tExit\n";
    cin>>a;

    switch(a)
    {
        case 0: goto endst;
        case 1: inspq(); break;
        case 2: delpq(); break;
        case 3: pqempty(); break;
        case 4: printpq(); break;
        case 5: goto endst; break;
        

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

void inspq()
{
    int item, priority;
    cout<<"Enter element to be added in the queue : ";
    cin>>item;
    cout<<"Enter its priority : ";
    cin>>priority;
    node *tmp, *q;
    tmp = new node;
    tmp->info = item;
    tmp->pr = priority;
    if (front == NULL || priority < front->pr)
    {
        tmp->link = front;
        front = tmp;
    }
    else
    {
        q = front;
        while (q->link != NULL && q->link->pr <= priority)
        q=q->link;
        tmp->link = q->link;
        q->link = tmp;
    }    
}

void delpq()
{
    node *tmp;
    if(front == NULL)
        cout<<"Queue Underflow\n";
    else
    {
        tmp = front;
        cout<<"Deleted item is: "<<tmp->info<<endl;
        front = front->link;
        delete(tmp);
    }
}

void printpq()
{
    node *ptr;
    ptr = front;
    if (front == NULL)
    cout<<"Queue is empty\n";
    else
    {	
        cout<<"Queue is :\n";
        cout<<"Priority       Item\n";
        while(ptr != NULL)
        {
            cout<<ptr->pr<<"               "<<ptr->info<<endl;
            ptr = ptr->link;
        }
    }
}

void pqempty()
{
    if (front == NULL)
    cout<<"PQueue is empty\n";
    else
    {
        cout<<"PQueue has some elements in it";
    }
}
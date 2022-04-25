#include<iostream>
#include<conio.h>
using namespace std;

struct node {
    int info;
    node *link;
};
struct node *top = NULL;

    //declared functions here below:

void push();
void pop();
void display();
void empty();
void full();


int main()
{
    long int a,b;
    again:
    cout<<"\n Enter the number of that operation that you want to perform:\n";
    cout<<"1:\tCheck Stack is Empty or not\n";
    cout<<"2:\tInsertion into stack (push)\n";
    cout<<"3:\tDeletion into stack (pop)\n";
    cout<<"4:\tDisplay the elements of stack (traversing)\n";
    cout<<"5:\tCheck the stack is full\n";
    cout<<"6:\tExit\n";
    cin>>a;

    switch(a)
    {
        case 0: goto endst;
        case 1: empty(); break;
        case 2: push(); break;
        case 3: pop(); break;
        case 4: display(); break;
        case 5: full(); break;
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

void empty()
{
    if(top == NULL)
    {
        cout<<"No Element Stack (Empty)";
    }else{
        cout<<"Stack has elements in it";
    }
}

void full()
{
    //if(top>=10){
    cout<<"Stack is Full"<<endl;
    //}else{
        //cout<<"Stack has elements in it";    
    //}
}


void push()
{
    long int value;
    cout<<"Enter the element you want to push in the stack\n";
        cout<<"Data:";
        cin>>value;
        struct node *new_node = new node;
        new_node ->info =value;
        // new_node ->link = NULL;
        // start = new_node;
    if(top == NULL){
       new_node ->link = NULL;
       top = new_node; 
    }
    else{
       new_node ->link=top;
       top = new_node;
         }
}

void pop()
{

if(top == NULL){
    cout<<"List is Empty Stack Underflow";
    }
    top=top->link;
    cout<<"Element Deleted"<<endl;

}

void display()
{
    if(top == NULL)
    {
        cout<<"No Element Stack";
    }else{
cout<<"Elements in Linked list: ";
    struct node *new_node;
    new_node=top;
   while (new_node != NULL) {
      cout<< new_node->info <<" ";
      new_node = new_node->link;
      }
}
}
#include<iostream>
#include<conio.h>
using namespace std;

struct node {
   int info;
   node *link;
};
struct node *start = NULL;

//declare functions here below:
void createll();
void displayll();
void llbeg();
void llloc();
void sll(); 
void dllloc();
void dllelement();

int main()
{
    long int a,b;
    again:
    cout<<"\n Enter the number of that operation that you want to perform:\n";
    cout<<"1:\tCreate a Linked List\n";
    cout<<"2:\tDisplay the elements of Linked List\n";
    cout<<"3:\tInsert a element in Linked List at beginning\n";
    cout<<"4:\tInsert a element in Linked List at location\n";
    cout<<"5:\tSearching an element in Linked List\n";
    cout<<"6:\tDelete a node from Linked List when Location is given\n";
    cout<<"7:\tDelete a node from Linked List when element is give\n";
    cout<<"8:\tExit\n";
    cin>>a;

    switch(a)
    {
        case 0: goto endst;
        case 1: createll(); break;
        case 2: displayll(); break;
        case 3: llbeg(); break;
        case 4: llloc(); break;
        case 5: sll(); break;
        case 6: dllloc(); break;
        case 7: dllelement(); break;
        case 8: goto endst; break;

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

void createll()
{
    long int value,n,i=0;
    cout<<"Enter no of elements to insert in Linked List\t";
    cin>>n;
    cout<<"Enter the elements in the Linked List\n";
    while(i<n){
        cout<<"Data:";
        cin>>value;
        struct node *new_node = new node;
        new_node ->info =value;
        // new_node ->link = NULL;
        // start = new_node;
    if(start == NULL){
       new_node ->link = NULL;
       start = new_node; 
    }
    else{
       new_node ->link=start;
       start = new_node;
         }
         i++;
}
}

void displayll()
{
    if(start == NULL)
    {
        cout<<"No Element in Linked List";
    }else{
cout<<"Elements in Linked list: ";
    struct node *new_node;
    new_node=start;
   while (new_node != NULL) {
      cout<< new_node->info <<" ";
      new_node = new_node->link;
      }
}
}

void llbeg()
{
    displayll();
    long int element;
    cout<<"\nEnter the element to insert at beginning: ";
    cin>>element;
    struct node *new_node = new node;
    new_node ->info =element;
    if(start == NULL){
       new_node ->link = NULL;
       start = new_node; 
    }
    else{
       new_node ->link=start;
       start = new_node;
         }
    cout<<"Element Inserted at beginning"<<endl;
    displayll();
}

void llloc()
{
    displayll();
    long int element,pos,counter = 0;
    cout<<"\nEnter the element to insert : ";
    cin>>element;
    cout<<"\nEnter the position of value to be inserted: ";
    cin>>pos;    
    struct node *new_node, *ptr;
    new_node = start;
    struct node *temp = new node;
    temp ->info =element;
    if (pos == 1)
    {
    if(start == NULL){
       new_node ->link = NULL;
       start = new_node; 
    }
    else{
       new_node ->link=start;
       start = new_node;
         }
    }
    else
    {
        while (new_node != NULL)
        {
            new_node = new_node->link;
            counter++;  
        }
        if (pos > 0 && pos <= counter)
        {
            new_node = start;
            for (int i = 1;i < pos;i++)
            {
                ptr = new_node;
                new_node = new_node->link;
            }          
            ptr->link = temp;
            temp->link = new_node;  
        }
    }
    
    cout<<"Element Inserted at Given position"<<endl;    
    displayll();
}

void sll()
{
//createll();
//displayll();
long int val,pos=0;
bool flag = false;

if(start == NULL){
    cout<<"List is Empty";
    }
cout<<"\nEnter the value you want to search:"<<endl;
cin>>val;
struct node *new_node;
new_node = start;
while(new_node !=NULL)
{
    pos++;
    if(new_node->info == val)
    {
        flag = true;
        cout<<"Element "<<val<<" is found at position: "<<pos<<endl;
    }
    new_node=new_node->link;
}
if(!flag)
{
    cout<<"Element "<<val<<" not found in the list: So Location =0"<<endl;
}
}

void dllloc()
{
displayll();

int pos, i, counter = 0;
    if (start == NULL)
    {
        cout<<"List is empty"<<endl;
        return;
    }
    cout<<"\nEnter the position of value to be deleted: ";
    cin>>pos;
    struct node *new_node, *ptr;
    new_node = start;
    if (pos == 1)
    {
        start = new_node->link;
    }
    else
    {
        while (new_node != NULL)
        {
            new_node = new_node->link;
            counter++;  
        }
        if (pos > 0 && pos <= counter)
        {
            new_node = start;
            for (i = 1;i < pos;i++)
            {
                ptr = new_node;
                new_node = new_node->link;
            }
            ptr->link = new_node->link;
        }
        else
        {
            cout<<"Position out of range"<<endl;
        }
        delete(new_node);
        cout<<"Element Deleted"<<endl;
    }
displayll();
}

void dllelement()
{

displayll();
long int i,val,pos=0,counter=0;
bool flag = false;

if(start == NULL){
    cout<<"List is Empty";
    }
cout<<"\nEnter the value you want to Delete:"<<endl;
cin>>val;
struct node *new_node;
new_node = start;
while(new_node !=NULL)
{
    pos++;
    if(new_node->info == val)
    {
        flag = true;
        break;
    }
    new_node=new_node->link;
}
if(!flag)
{
    cout<<"Element "<<val<<" not found in the list"<<endl;
}

        struct node *del_node, *ptr;
    del_node = start;
    if (pos == 1)
    {
        start = del_node->link;
    }
    else
    {
        while (del_node != NULL)
        {
            del_node = del_node->link;
            counter++;  
        }
        if (pos > 0 && pos <= counter)
        {
            del_node = start;
            for (i = 1;i < pos;i++)
            {
                ptr = del_node;
                del_node = del_node->link;
            }
            ptr->link = del_node->link;
        }
        else
        {
            cout<<"Position out of range"<<endl;
        }
        delete(del_node);
        cout<<"Element Deleted"<<endl;
    }

displayll();
}



/*  We can also do like this also to display element:  
    struct node *ptr;
    ptr=start;
   while (ptr != NULL) {
      cout<< ptr->info <<" ";
      ptr = ptr->link; */
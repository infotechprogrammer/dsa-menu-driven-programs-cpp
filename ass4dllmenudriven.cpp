#include<iostream>
#include<conio.h>
using namespace std;

struct node {
   int info;
   node *back;
   node *forw;
};
struct node *first = NULL;
struct node *last = NULL;

//declare functions here below:
void createllb();
void llbeg();
void displayll();
void insertdllatloc();
void deldllelement();
void deldllloc();

int main()
{
    long int a,b;
    again:
    cout<<"\n Doubly Linked List : \n";
    cout<<"\n Enter the number of that operation that you want to perform:\n";
    cout<<"1:\tCreate a Doubly Linked List\n";
    cout<<"2:\tInsert element at a location after a node in DLL\n";
    cout<<"3:\tDisplay the elements of DLL\n";
    cout<<"4:\tDelete the element of DLL\n";
    cout<<"5:\tDelete the element at a particular location of DLL\n";
    cout<<"6:\tExit\n";
    cin>>a;

    switch(a)
    {
        case 0: goto endst;
        case 1: createllb(); break;
        case 2: insertdllatloc(); break;
        case 3: displayll(); break;
        case 4: deldllelement(); break;
        case 5: deldllloc(); break;
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
        cout<<"\n Please Enter Valid number";
        goto end;
    }    
getch();
}

void createllb()
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
    if(first == NULL && last == NULL ){
       new_node->forw = NULL;
       new_node->back = NULL;
       first = new_node; 
       last = new_node;
    }
    else if(last == NULL){
       new_node->forw = NULL; 
    }
    else{
       new_node ->forw=first;
       new_node ->back= NULL;
       first ->back = new_node;
       first = new_node;
         }
         i++;
}
cout<<"Two way Link list created with "<<n<<" elements";
}


void displayll()
{
    if(first == NULL && last == NULL )
    {
        cout<<"No Element in Linked List";
    }else{
cout<<"Elements in Linked list: ";
    struct node *new_node;
    new_node=first;
   while (new_node != NULL) {
      cout<< new_node->info <<" ";
      new_node = new_node->forw;
      }
}
}

void insertdllatloc()
{
    long int value, pos;
    cout<<"Enter the element: ";
    cin>>value;
    cout<<"Insert Element after postion: ";
    cin>>pos;
    pos--;    
    if (first == NULL && last == NULL)
    {
        cout<<"First Create the list."<<endl;
        return;
    }
    struct node *tmp, *q;
    int i;
    q = first;
    for (i = 0;i < pos - 1;i++)
    {
        q = q->forw;
        if (q == NULL)
        {
            cout<<"There are less than ";
            cout<<pos<<" elements."<<endl;
            return;
        }
    }
    tmp = new(struct node);
    tmp->info = value;
    if (q->forw == NULL)
    {
        q->forw = tmp;
        tmp->forw = NULL;
        tmp->forw = q;      
    }
    else
    {
        tmp->forw = q->forw;
        tmp->forw->back = tmp;
        q->forw = tmp;
        tmp->back = q;
    }
    cout<<"Element Inserted"<<endl;
    displayll();
}

void deldllelement()
{
    if (first == NULL && last == NULL)
    {
        cout<<"First Create the list."<<endl;
        cout<<"No element in DLL (Underflow)"<<endl;
        return;
    }
    long int value;
    cout<<"Enter the element: ";
    cin>>value;
    struct node *tmp, *q;
     /*first element deletion*/
    if (first->info == value)
    {
        tmp = first;
        first = first->forw;  
        first->back = NULL;
        cout<<"Element Deleted"<<endl;
        free(tmp);
        displayll();
        return;
    }
    q = first;
    while (q->forw->forw != NULL)
    {   
        /*Element deleted in between*/
        if (q->forw->info == value)  
        {
            tmp = q->forw;
            q->forw = tmp->forw;
            tmp->forw->back = q;
            cout<<"Element Deleted"<<endl;
            free(tmp);
            displayll();
            return;

        }
        q = q->forw;
    }
     /*last element deleted*/
    if (q->forw->info == value)    
    { 	
        tmp = q->forw;
        free(tmp);
        q->forw = NULL;
        cout<<"Element Deleted"<<endl;
        return;
        displayll();
    }
    cout<<"Element "<<value<<" not found"<<endl;
}

void deldllloc()
{
    if (first == NULL && last == NULL)
    {
        cout<<"First Create the list."<<endl;
        cout<<"No element in DLL (Underflow)"<<endl;
        return;
    }
    int pos;
    cout<<"Enter postion of the element to delete: ";
    cin>>pos;
    pos--;
    struct node *temp;
    int i;
    temp = first;
    for(i=0; i<pos; i++)
    {
    temp = temp->forw;
    }
    if(temp != NULL)
    {
    temp->back->forw = temp->forw;   // Assign the next pointer of node to be deleted to its previous node's prev pointer
    temp->forw->back = temp->back;   // Assign the prev pointer of the node to be deleted to its next node's next pointer
    free(temp); // Delete the temp node
    cout<<"Element deleted";
    displayll();
    }
    else
    {
    cout<<"Invalid position!\n";
    } 
}
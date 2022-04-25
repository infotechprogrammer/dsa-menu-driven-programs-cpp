#include<iostream>
#include<conio.h>
using namespace std;

struct node {
   int info;
   node *link;
};
struct node *start = NULL;
int main()
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
if(start == NULL)
    {
        cout<<"No Element in Linked List";
    }else{
cout<<"Elements in Linked list: ";
    struct node *new_node;
    new_node=start;
   while (new_node != NULL) {
      cout<< new_node->info <<"->";
      new_node = new_node->link;
      }
}
    int item1=20 , item2=18, item3=15, item4=6, item5=5;
    struct node*current;
    current = start;  
    int count1=0, count2=0, count3=0, count4=0, count5=0;  
    while (current != NULL)  
    {  
        if (current->info == item1){  
        count1++;  
        }
        if (current->info == item2){  
        count2++;
        }     
        if (current->info == item3){  
        count3++;   
        }
        if (current->info == item4){  
        count4++;    
        }
        if (current->info == item5){  
        count5++;  
        }
        current = current->link;    
    } 
    cout<<"NULL"; 
    cout<<"\nFreq(20)="<<count1;  
    cout<<"\nFreq(18)="<<count2;  
    cout<<"\nFreq(15)="<<count3;  
    cout<<"\nFreq(6)="<<count4;  
    cout<<"\nFreq(5)="<<count5;  
 
getch();
}



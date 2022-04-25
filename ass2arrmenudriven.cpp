#include<iostream>
#include<conio.h>
using namespace std;
//declare functions here below:
void traverse();
void sort(); 
void lsearch(); 
void bsearch();
void insatbeg();
void insatend();
void insert();
void sortedinsert(); 
void delloc(); 
void delelement(); 
void uniquearr(); 
void uniqueaarratatime();

int main()
{
    long int a,b;
    again:
    cout<<"\n Enter the number of that operation that you want to perform:\n";
    cout<<"0:\tExit\n";
    cout<<"1:\tTraversing an Array\n";
    cout<<"2:\tSorting an Array using bubble sort\n";
    cout<<"3:\tTo perform Linear Search on Array\n";
    cout<<"4:\tTo perform Binary Search on Array\n";
    cout<<"5:\tInsert a element in Unsorted Array at beginning\n";
    cout<<"6:\tInsert a element in Unsorted Array at end\n";
    cout<<"7:\tInsert a element in Unsorted Array at given location\n";
    cout<<"8:\tInsert a element in Sorted Array at given location\n";
    cout<<"9:\tDelete element whose location is given\n";
    cout<<"10:\tDelete a given element from Array\n";
    cout<<"11:\tCreate array with unique Elements\n";
    cout<<"12:\tCreate array with unique Elements at runtime\n";

    cin>>a;

    switch(a)
    {
        case 0: goto endst;
        case 1: traverse(); break;
        case 2: sort(); break;
        case 3: lsearch(); break;
        case 4: bsearch(); break;
        case 5: insatbeg(); break;
        case 6: insatend(); break;
        case 7: insert(); break;
        case 8: sortedinsert(); break;
        case 9: delloc(); break;
        case 10: delelement(); break;
        case 11: uniquearr(); break;
        case 12: uniqueaarratatime(); break;

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

void traverse() //Traversing an Array
{
unsigned long long int size, i;
cout<<"Enter Array Size : ";
cin>>size;
int *arr = new int[size];
cout<<"Enter array elements : \n";
for(i=0; i<size; i++)
{
    cin>>arr[i];
}
cout<<"Now the traversed array is : \n";
for(i=0; i<size; i++)
{
    cout<<arr[i]<<" ";
}
}

void sort() //Sorting an Array
{
unsigned long long  int size, i;
cout<<"Enter Array Size : ";
cin>>size;
int *arr = new int[size];
cout<<"Enter array elements : \n";
for(i=0; i<size; i++)
{
    cin>>arr[i];
}
for(i=0; i<size; i++)
{
    for(int j=0; j<size; j++)
    {
        if(arr[j]>arr[j+1])
        {
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
        }

    }
}
cout<<"Data After Sorting :\n";
for(int j=0;j<size;j++)
{
    cout<<"\n"<<arr[j];
}
}

void lsearch() //To perform Linear Search on Array
 {
unsigned long long int size, i, element;
cout<<"Enter Array Size : ";
cin>>size;
int *arr = new int[size];
cout<<"Enter array elements : \n";
for(i=0; i<size; i++)
{
    cin>>arr[i];
}
cout<<"Now the entered array is : \n";
for(i=0; i<size; i++)
{
    cout<<arr[i]<<" ";
}
     cout<<"\n Enter element you want to search in this array:\n";
     cin>>element;
     for(i=0;i<size;i++)
     {
         if(element==arr[i])
         {
             cout<<"\n Element exist at location: "<<i+1;
             break;  
         }
     }
     if(element!=arr[i])
     cout<<"\n Element doesnot exists";
}

void bsearch() //To perform Binary Search on Array
{
unsigned long long int  size, i;
cout<<"Enter Array Size : ";
cin>>size;
int *arr = new int[size];
cout<<"Enter array elements : \n";
for(i=0; i<size; i++)
{
    cin>>arr[i];
}
cout<<"Now the entered array is : \n";
for(i=0; i<size; i++)
{
    cout<<arr[i]<<" ";
}
unsigned long long int lb=0, ub, mid, element;
ub=size-1;
cout<<"\n Enter the element you want to search :\n";
cin>>element;
while(lb<=ub){
    mid=(lb+ub)/2;
    if(arr[mid]==element)
    {
      cout<<"Element exists at location: "<<mid+1;
      break;
    }  
    else if(arr[mid]<element){
        lb=mid+1;
    }else{
        ub=mid-1;
         }
         if(lb>ub)
        {
            cout<<"Element donot exist in this array";
            break;
        }
}
}

void insatbeg() ////Insert a element in Unsorted Array at beginnig
{
unsigned long long int size, insert, i, pos=1;
cout<<"Enter Array Size : ";
cin>>size;
int *arr = new int[size];
cout<<"Enter array elements : \n";
for(i=0; i<size; i++)
{
    cin>>arr[i];
}
cout<<"Now the entered array is : \n";
for(i=0; i<size; i++)
{
    cout<<arr[i]<<" ";
}
cout<<"\nEnter element to be insert at beginning : \n";
cin>>insert;
// now create a space at the required position
for(i=size; i>=pos; i--)
{
    arr[i]=arr[i-1];
}
arr[pos-1]=insert;
cout<<"Element inserted successfully..!!\n";
cout<<"Now the new array is : \n";
for(i=0; i<size; i++)
{
    cout<<arr[i]<<" ";
}
}

void insatend() //Insert a element in Unsorted Array at the end
{
unsigned long long int size, insert, i;
cout<<"Enter Array Size : ";
cin>>size;
int pos=size;
int *arr = new int[size];
cout<<"Enter array elements : \n";
for(i=0; i<size; i++)
{
    cin>>arr[i];
}
cout<<"Now the entered array is : \n";
for(i=0; i<size; i++)
{
    cout<<arr[i]<<" ";
}
cout<<"\nEnter element to be insert at end : \n";
cin>>insert;
// now create a space at the required position
for(i=size; i>=pos; i--)
{
    arr[i]=arr[i-1];
}
arr[pos-1]=insert;
cout<<"Element inserted successfully..!!\n";
cout<<"Now the new array is : \n";
for(i=0; i<size; i++)
{
    cout<<arr[i]<<" ";
}
}

void insert(){ //Insert a element in Unsorted Array at given location
unsigned long long int size, insert, i, pos;
cout<<"Enter Array Size : ";
cin>>size;
int *arr = new int[size];
cout<<"Enter array elements : \n";
for(i=0; i<size; i++)
{
cin>>arr[i];
}
cout<<"Now the entered array is : \n";
for(i=0; i<size; i++)
{
    cout<<arr[i]<<" ";
}
cout<<"\nEnter element to be insert : \n";
cin>>insert;
cout<<"At which position:\n ";
cin>>pos;
// now create a space at the required position
for(i=size; i>=pos; i--)
{
    arr[i]=arr[i-1];
}
arr[pos-1]=insert;
cout<<"Element inserted successfully..!!\n";
cout<<"Now the new array is : \n";
for(i=0; i<size; i++)
{
    cout<<arr[i]<<" ";
}
}

void sortedinsert() //Insert a element in Sorted Array at given location
 {
unsigned long long int size, insert, i, pos;
cout<<"Enter Array Size : ";
cin>>size;
int *arr = new int[size];
cout<<"Enter array elements : \n";
for(i=0; i<size; i++)
{
    cin>>arr[i];
}
for(i=0; i<size; i++)
{
    for(int j=0; j<size; j++)
    {
        if(arr[j]>arr[j+1])
        {
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
}
cout<<"\nData After Sorting :\n";
for(int j=0;j<size;j++)
{
    cout<<"\n"<<arr[j];
}
cout<<"\nEnter element to be insert : \n";
cin>>insert;
cout<<"\nAt which position:\n ";
cin>>pos;
// now create a space at the required position
for(int j=size; j>=pos; j--)
{
    arr[j]=arr[j-1];
}
arr[pos-1]=insert;
cout<<"Element inserted successfully..!!\n";
cout<<"Now the new array is : \n";
for(int j=0; j<size; j++)
{
    cout<<arr[j]<<" ";
}
}

void delloc() //Delete element whose location is given
{
unsigned long long int size, i, pos;
cout<<"Enter Array Size : ";
cin>>size;
int *arr = new int[size];
cout<<"Enter array elements : \n";
for(i=0; i<size; i++)
{
    cin>>arr[i];
}
cout<<"Element deletion position :\n ";
cin>>pos;
if(pos>size)
{
    cout<<"This value is out of range";
}else
{
    --pos;
    for(i=pos; i<size; i++)
    {
        arr[i]=arr[i+1];
    }
    size=size-1;
    cout<<"Element Deleted successfully..!!\n";
    cout<<"Now the new array is : \n";
    for(i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
}
}

void delelement() //Delete a given element from Array
{
unsigned long long int size, i, element;
int found=0,pos;
cout<<"Enter Array Size : ";
cin>>size;
int *arr = new int[size];
cout<<"Enter array elements : \n";
for(i=0; i<size; i++)
{
    cin>>arr[i];
}
cout<<"Now the entered array is : \n";
for(i=0; i<size; i++)
{
    cout<<arr[i]<<" ";
}
cout<<"\nEnter element you want to delete :\n ";
cin>>element;
    for(i = 0; i < size; i++)
    {
        if(arr[i] == element)
        {
            found = 1;
            pos = i;
            break;  // terminate the loop
        }
    }
if(found == 1) // the element to be deleted exists in the array
    {
        for(i = pos; i < size-1; i++)
            arr[i] = arr[i+1];
    }
    else{
        cout<<"\nElement not found in the array\n";
        }
    cout<<"\n Resultant array is: \n";
    for(i = 0; i < size-1; i++){ 
    cout<<arr[i]<<" ";
    }

}

void uniquearr() //Create array with unique Elements
 {
int i, j, size;
    cout<<"\nEnter array size: ";
    cin>>size;
int *arr = new int[size];
cout<<"\nEnter array elements:\n";
for(i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Unique array elements are :\n";
        for(i=0;i<size;i++)
        {
            for(j=0;j<size;j++)
            {
            if(arr[i]==arr[j])
            break;
            }        
            if(i==j)
            {
            cout<<arr[i]<<" ";
            }        
        }  
}

void uniqueaarratatime() //Create array with unique Elements at runtime
{
long int i, j, size;
cout<<"\nEnter array size: ";
cin>>size;
int *arr = new int[size];
int n;
bool isUsed[999999] = {0};
for(int i = 0; i < size; i++) 
{
    cout << "Enter Number " << (i + 1)<<"\n";
    cin >> n;

      if (isUsed[n] == false)
      {
        arr[i] = n;
        isUsed[n] = true;
      }

      else
      {
        cout << "Number has already been used.\n";
        i--;
      }
} 
cout<<"The array of unique elements is below:\n";
for(int i = 0; i < size; i++){
cout<<arr[i]<<" ";
    }
}
#include <iostream>
#include <conio.h>
using namespace std;

//declared functions here below:

void inssort();
void selsort();
void bubblesort();

int main()
{
    long int a, b;
again:
    cout << "\n Enter the number of that operation that you want to perform:\n";
    cout << "1:\tTo implement Insertion Sort Algorithm\n";
    cout << "2:\tTo implement Selection Sort Algorithm\n";
    cout << "3:\tTo implement Bubble Sort Algorithm\n";
    cout << "4:\tExit\n";
    cin >> a;

    switch (a)
    {
    case 0:
        goto endst;
    case 1:
        inssort();
        break;
    case 2:
        selsort();
        break;
    case 3:
        bubblesort();
        break;
    case 4:
        goto endst;
        break;

    default:
        cout << "\n Enter a valid number:";
    }
end:
    cout << "\n Do you want to Continue then press 1 for Yes and 0 for No:";
    cin >> b;
    if (b == 1)
    {
        goto again;
    }
    else if (b == 0)
    {
    endst:
        exit(7);
    }
    else
    {
        cout << "\n PLease Enter Valid number";
        goto end;
    }
    getch();
}

void inssort()
{
    int size, i;
    int *arr = new int[size];
    cout << "Enter Array Size : ";
    cin >> size;
    cout << "Enter array elements : \n";
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Before Insertion sort: \n";

    int target, j;
    for (i = 1; i < size; i++)
    {
        target = arr[i];
        j = i - 1;

        /* Here the elements in b/w arrary[0 to i-1]
        which are greater than target are moved
        ahead by 1 position each*/
        while (j >= 0 && arr[j] > target)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = target;
    }
    cout << "After Insertion sort: \n";
    for (int i = 0; i < size; i++)
        cout << arr[i] << "\t";
    cout << "\n";
}

void selsort()
{
    int size;
    int *arr = new int[size];
    cout << "Enter Array Size : ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int i, j, imin;
    for (i = 0; i < size - 1; i++)
    {
        imin = i; //get index of minimum data
        for (j = i + 1; j < size; j++)
            if (arr[j] < arr[imin])
                imin = j;
        //placing in correct position
        int temp;
        temp = arr[i];
        arr[i] = arr[imin];
        arr[imin] = temp;
    }
    cout << "After Selection sort: \n";
    for (int i = 0; i < size; i++)
        cout << arr[i] << "\t";
    cout << "\n";
}

void bubblesort()
{
    int arr[50], size, insert, i, pos;
    cout << "Enter Array Size : ";
    cin >> size;
    cout << "Enter array elements : \n";
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "Data After Sorting :\n";
    for (int j = 0; j < size; j++)
    {
        cout << arr[j] << "\t";
    }
}
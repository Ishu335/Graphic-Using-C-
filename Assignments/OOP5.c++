#include <iostream>
using namespace std;
template <class X> void Selctionsort( X *arr, int count)
{
    int i,j,min_pos;
    X min;
    for (i=0; i<count-1; i++)
    {
        min = arr[i];
        for (j=i+1; j<count; j++)
        {
            if (min > arr[j])
            {
            min = arr[j];
            min_pos = j;
            }
    }
        arr[min_pos] = arr[i];
        arr[i] = min;
    }
}
template <class Y> void input(Y *arr, int count)
{
    for(int i=0;i<count;i++)
        cin>>arr[i];
}

template <class Z> void display(Z *arr, int count)
{
    for(int i=0;i<count;i++)
        cout<<"\t"<<arr[i];
}

int main()
{
    int iarray[5];
    double darray[5];
    cout <<"\nEnter integer array:";
    input(iarray,5);
    Selctionsort(iarray,5);
    cout << "\nHere is sorted integer array: \n";
    display(iarray,5);
    cout << "\nEnter double array: ";
    input(darray,5);
    Selctionsort(darray,5);
    cout << "\nHere is sorted double array: \n";
    display(darray,5);
    return 0;
}

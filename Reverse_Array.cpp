//Aurthor: Kumar Abhijeet
//Date: 03-01-2021
/* Problem approach: In reverse1 function we are printing the array in reverse order
                     whereas in reverse2 function we are swaping the nth position element with s-nth position
                     considering s as the last position.
                     Reverse1 method is not actually reversing the array but just printing it in reverse order,
                     whereas in reverse2 method it actually reversing an array*/
#include <iostream>
using namespace std;

//Declaring a function reverse1
void Reverse1(int A[30], int n);
//function declaration reverse 2
void Reverse2(int A[30],int n);
int main()
{
    int a[10], s;
    cout<<"\nEnter the size of array: ";
    cin>>s;
    cout<<endl<<"Enter "<<s<<" elements in array: ";
    for(int i=0;i<s;i++)
        cin>>a[i];
    cout<<endl<<"Printing Array ";
    cout<<endl;
    for(int i =0;i<s;i++)
        cout<<a[i]<<" ";
    Reverse1(a,s);
    Reverse2(a,s);
    return 0;
}
void Reverse1(int A[30], int n)
{
    cout<<endl;
    cout<<"\nPrinting Reverse1 array: ";
    cout<<endl;
    for(int i=n-1;i>=0;i--)
        cout<<A[i]<<" ";
}
void Reverse2(int A[30], int n)
{
    cout<<endl;
    int beg=0, last = n-1;
    while(beg<last)
    {
        int t = A[beg];
        A[beg]=A[last];
        A[last]=t;
        beg++;
        last--;
    }
    cout<<endl;
    cout<<"\nPrinting Reverse2 array: ";
    cout<<endl;
    for(int i=0;i<n;i++)
        cout<<A[i]<<" ";
}

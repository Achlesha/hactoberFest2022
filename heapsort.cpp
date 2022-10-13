#include <iostream>
using namespace std;

void Heapify(int a[],int n,int i)
{
    int largest=i,t,l,r;
    l=2*i+1;
    r=2*i+2;
    if(l<n && a[largest]<a[l])
    largest=l;
    if(r<n && a[largest]<a[r])
    largest=r;
    if(largest!=i)
    {t=a[i];
    a[i]=a[largest];
    a[largest]=t;
    Heapify(a,n,largest);}
}

void heap_sort(int a[],int n)
{
    int t,i;
    for(i=n/2-1;i>=0;i--)
    {
        Heapify(a,n,i);
    }
    for(int i=n-1;i>=1;i--)
    {
        t=a[i];
        a[i]=a[0];
        a[0]=t;
        Heapify(a,i,0);
    }
}
void printArray(int a[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << a[i] << " ";
    cout << "\n";
}

int main()
{
    int n;
    int a[]={40,10,20,50,30};
    n=sizeof(a)/sizeof(a[0]);
    heap_sort(a,n);
    cout<<"Sorted array is : ";
    printArray(a,n);
    
    return 0;
}

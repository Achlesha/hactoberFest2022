#include<bits/stdc++.h>
using namespace std;

void MergingSortedArrays(int *a,int l,int r)
{
    int mid=(l+r)/2;

    int i=l,j=mid+1;
    vector<int>v;
    while(i<=mid && j<=r)
    {
        if(a[i]<a[j])
        {
            v.push_back(a[i]);
            i++;
        }else
        {
            v.push_back(a[j]);
            j++;
        }
    }

    while(i<=mid)
    {
        v.push_back(a[i++]);
    }
    while(j<=r)
    {
        v.push_back(a[j++]);
    }
    int p=0;
    for(int k=l;k<=r;k++)
    {
        a[k]=v[p];
        p++;
    }
    v.clear();
}

void mergesort(int *a,int l,int r)
{
    if(l>=r)
    return;

    int mid=(l+r)/2;
    mergesort(a,l,mid);
    mergesort(a,mid+1,r);

    MergingSortedArrays(a,l,r);
}

int main ()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];

    mergesort(a,0,n-1);

    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}
#include<iostream>
using namespace std;
void display(int [],int);
void bubblesort(int [],int);
int recbinary(int [],int,int,int);

int main()
{
    int a[30],n,i,key,res;

    cout<<"enter the size of array :";
    cin>>n;
    for(i=0; i<n; i++)
    {
        cout<<"enter elem at pos ["<<i<<"]:";
        cin>>a[i];
    }
    display(a,n);

    //bubble sort
    bubblesort(a,n);
    cout<<"\nSORTED LIST:\n";
    display(a,n);

    cout<<"\nenter the element to be searched :";
    cin>>key;

    res=recbinary(a,0,n-1,key);
    if(res==-1)
    {
        cout<<"element not found";
    }
    else
    {
        cout<<"element found at pos:"<<res+1;
    }
    return 0;
}

void display(int a[],int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<"\t";
    }
}

void bubblesort(int a[],int n)
{
    int i,j,flag;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(a[i]<a[j])
            {
                flag=a[j];
                a[j]=a[i];
                a[i]=flag;
            }
        }
    }
}

int recbinary(int a[],int low,int high,int key)
{
    int mid;
    mid=(low+high)/2;
    if(low<=high)
    {
        if(a[mid]==key)
        {
            return mid;
        }
        else if(key<a[mid])
        {
            return recbinary(a,low,mid-1,key);
        }
        else if(key>a[mid])
        {
            return recbinary(a,mid+1,high,key);
        }
    }
    return -1;
}
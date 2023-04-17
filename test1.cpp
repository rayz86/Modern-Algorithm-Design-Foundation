#include<iostream>
using namespace std;
void display(int [],int);
void bubblesort(int [],int);
int binary(int [],int,int);
int main()
{
    int i,a[20],n,res;
    int key;
    cout<<"enter the size of array :";
    cin>>n;

    for(i=0;i<n;i++)
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

    int low=0,mid,high=n-1,flag=0,temp[10];
    while(low<=high)
    {
        mid=(low+high)/2;
        if(key>a[mid])
        {
            low=mid+1;
        }

        else if(key<a[mid])
        {
            high=mid-1;
        }

        else if(key==a[mid])
        {
            flag==1;
            for(i=0;i<=n;i++)
            {
                temp[i]=mid;
            }
        }
    }
    if(flag==0)
    {
        cout<<"element not found";
    }
    else
    {
        cout<<"element"<<key<< "found at pos ";
        for(i=0;i<=n;i++)
        {
            cout<<temp[i];
        }
    }
    return 0;
}

void display(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
}

void bubblesort(int a[],int n)
{
    int i,j,flag;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
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

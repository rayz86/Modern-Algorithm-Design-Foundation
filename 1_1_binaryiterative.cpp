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
    res=binary(a,n,key);
    if(res==-1)
    {
        cout<<"\n\nelement not found";
    }
    else
    {
        cout<<"\n\nelement "<<key<<" found at position: "<<res+1;
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

int binary(int a[],int n,int key)
{
    int low=0,mid,high=n-1;
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

        else if(a[mid]==key)
        {
            return mid;
        }
    }
    return -1;
}

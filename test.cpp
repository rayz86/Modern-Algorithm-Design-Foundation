#include<iostream>
#include<string>
using namespace std;

int a[50];

void bubblesort(int arr[],int n)
{
    for (int i=0; i< n; i++)
    {
        for (int j=0; j< n-1-i; j++)
        {
            if ( arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}


void display(int arr[],int n)
{
    int i;

    for (i=0; i<n; i++)
    {
        cout<< arr[i]<<"\t";
    }
}


int main()
{
    int arr[50],n,i,found=1;
    cout<<endl<<"Enter the nos of elements in the array\t:";
    cin>>n;

    arr[n];

    for (i=0; i< n; i++)
    {
        cout<<endl<<"Enter the element at index["<<i<<"]:\t";
        cin>>arr[i];
    }

    display(arr,n);
    bubblesort(arr,n);
    cout<<endl<<"Sorted:  "<<endl;
    display(arr,n);


    int low=0,high=n-1,key;
    cout<<endl<<"Enter the elemenet to be searched:\t";
    cin>>key;

    while(low<=high)
    {
        int mid=(low+high)/2;

        if (arr[mid] == key)
        {
            if (arr[0] == key)
            {
                a[0]=-1;
            }
            
            for (i=1;i<n;i++)
            {
                if (arr[i] == key)
                {
                    a[i]=i;
                }
            }
            found=0;
            break;
        }
        else if ( key < arr[mid])
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }

    if (found==0)
    {
         cout<<endl<<"Element"<<key<<" found at index's  ";
         if (a[0] == -1)
            {
                cout<<"0 ";
            }
        for (i=0; i<n; i++)
        {
            
            if (a[i]>0 )
            {
                cout<< a[i]<<" ";
            }

        }
        cout<<"and at position  ";
        if (a[0] == -1)
            {
                cout<<"1 ";
            }
        for (i=0; i<n; i++)
        {
            
            if (a[i]>0 )
            {
                cout<< a[i] + 1<<" ";
            }

        }
    }
    else
    {
        cout<<endl<<"Element not found";
    }
       

    return 0;
}
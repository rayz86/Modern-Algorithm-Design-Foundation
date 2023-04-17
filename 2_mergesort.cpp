#include<iostream>
using namespace std;
int a[20];
void mergesort(int, int);
void merge(int, int, int);

int main()
{
    int n,i;

    cout<<"enter the size of array:";
    cin>>n;

    for(i=0; i<n; i++)
    {
        cout<<"enter element at pos["<<i<<"] :";
        cin>>a[i];
    }
    cout<<"\nbefore sorting:\n";
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<"\t";
    }

    mergesort(0, n-1);

    cout<<"\nafter sorting:\n";
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<"\t";
    }
    return 0;
}

void mergesort(int start, int end)
{
    if(start<end)
    {
        int mid=(start+end)/2;
        //1st division
        mergesort(start, mid);
        //2nd division
        mergesort(mid+1, end);
        //conquer
        merge(start, mid, end);
    }
}

void merge(int start, int mid, int end)
{
    int i=start,j=mid+1,k=0,temp[20];

    //to traverse till the ends of each sub-divided array
    while(i<=mid && j<=end)
    {
        //comparing each single element
        if(a[i]<=a[j])
        {
            temp[k]=a[i];
            k++;
            i++;
        }
        else
        {
            temp[k]=a[j];
            k++;
            j++;
        }
    }

    //to add the reamining elements
    //left side
    while(i<=mid)
    {
        temp[k]=a[i];
        k++;
        i++;
    }
    //right side
    while(j<=end)
    {
        temp[k]=a[j];
        k++;
        j++;
    }
    //to copy the elements from temp array to original array
    for(i=start;i<=end;i++)
    {
        a[i]=temp[i-start];
    }
}



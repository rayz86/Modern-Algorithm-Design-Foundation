#include<iostream>
using namespace std;
int a[20];
void display(int);
void quicksort(int,int);
int partition(int,int);

int main()
{
    int i,n;

    cout<<"enter the max size of array:";
    cin>>n;

    for(i=0;i<n;i++)
    {
        cout<<"enter element at pos["<<i<<"]:";
        cin>>a[i];
    }

    cout<<"before sorting";
    display(n);
    quicksort(0,n-1);
    cout<<"sorted array";
    display(n);
    return 0;
}

void quicksort(int lb,int ub)
{
    if(lb<ub)
    {
        int loc;
        loc=partition(lb,ub);
        quicksort(lb,loc-1);
        quicksort(loc+1,ub);
    }
    else
    {
        return;
    }
}

int partition(int lb,int ub)
{
    int pivot,start,end,temp;
    start=lb;
    pivot=start;
    end=ub;

    while(start<end)
    {
        while(a[start]<=a[pivot] && start<end)
            start++;
        while(a[end]>a[pivot])
            end--;
        if(start<end)
        {
            temp=a[start];
            a[start]=a[end];
            a[end]=temp;
        }
    }
    temp=a[lb];
    a[lb]=a[end];
    a[end]=temp;
    return end;
}

void display(int n)
{
    int i;
    cout<<"\n--------------------------\n";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<"\n--------------------------\n";
}

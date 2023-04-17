#include<iostream>
using namespace std;

void knapsack (int n,int cap,int w[],int p[])
{
    int i,j,k[n][cap];
    for(i=0;i<n;i++)
    {
        for(j=0;j<cap;j++)
        {
            if((i==0)||(j==0))
                k[i][j]=0;
            else if(j<=w[i])
                k[i][j]=k[i-1][j];
            else
                k[i][j]=max(k[i-1][j-w[i]]+p[i], k[i-1][j]);
        }
    }
    display_final(k);
    cout<<"profit="<<k[n][cap];
}

int max(int a, int b)
{ return (a > b) ? a : b; }

void display_final(int k[][])
{
    cout<<"final profits:\n";

}

int main()
{
    int cap, n, p[n], w[n];

    cout<<"Enter total number of items : ";
    cin>>n;

    cout<<"Enter max capacity of knpasack : ";
    cin>>cap;

    cout<<"Enter the Weights : ";
    for(int i=0;i<n;i++)
    {
        cin>>w[i];
    }

    cout<<"Enter the Profits : ";
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }

    knapsack(n,cap,w,p);
}


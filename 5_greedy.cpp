#include <iostream>

using namespace std;
int a[20][20];
int dist[20];

/*
void shortestpath(int v,int cost,int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        bool s[i]=false;
        dist[i]=cost[v,i];
    }
    s[v]=true;
    dist[v]=0.0;
    for(num=2;num<=n-1;num++)ṇ
    {
        s[u]=true;
        for(s[w]=false)
        {

        }
    }
}
*/

int main()
{
    int i,j,n;
    cout<<"enter the number of vertices:";
    cin>>n;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<"enter weight for location ["<<i<<","<<j<<"]: ";
            cin>>a[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }

   // shortestpath(0,);
}

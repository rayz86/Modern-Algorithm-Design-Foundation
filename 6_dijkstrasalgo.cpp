#include<iostream>
#include<stdbool.h>
#include <limits.h>
using namespace std;
#define inf 99999
#define n 6
int  a[n][n]={
        { 0,50,45,10,inf,inf },
        { inf,0,10,15,inf,inf },
        { inf,inf,0,inf,30,inf },
        { 20,inf,inf,0,15,inf },
        { inf,20,35,inf,0,inf },
        { inf,inf,inf,inf,3,0 }
    };

void dijkstra(int);
int mindist(int [n],bool [n]);
void final(int [n]);

//dijkstra's algo
void dijkstra(int src)
{
    int i,dist[n];
    bool setTF[n];

    for(i=0;i<n;i++)
    {
        dist[i]=inf;
        setTF[i]=false;
    }

    //init first node
    dist[src]=0;

    for(int count=0;count<n-1;count++)
    {
        int u=mindist(dist,setTF);

        setTF[u]=true;

        for(int v=0;v<n;v++)
        {
            if(!setTF[v] && a[u][v] && dist[u]!=inf && dist[u]+a[u][v]<dist[v])
                dist[v]=dist[u]+a[u][v];
        }

    }
    final(dist);
}

//checks if the node is visited or not and gives the min dist
int mindist(int dist[],bool setTF[])
{
    int min=inf, min_index;
    for(int v=0;v<n;v++)
    {
        if(setTF[v]==false && dist[v]<=min)
        {
            min=dist[v]; 
            min_index=v;
        }
    }
    return min_index;
}

void final(int dist[])
{
    int i;
    cout<<"\nFINAL DISTANCES:\n";
    for(i=0;i<n;i++)
    {
        cout<<"0---->"<<i<<"="<<dist[i]<<endl;
    }

}

//driver code
int main()
{
    dijkstra(0);
    return 0;
}
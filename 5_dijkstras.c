#include<stdio.h>
#include<stdbool.h>
#include <limits.h>
#define n 6
void dijkstra(int [n][n],int);
int mindist(int [n],bool [n]);
void final(int [n]);


//dijkstra's algo
void dijkstra(int a[n][n],int src)
{
    int i,dist[n];
    bool setTF[n];

    for(i=0;i<n;i++)
    {
        dist[i]=INT_MAX;
        setTF[i]=false;
    }

    //init first node   
    dist[src]=0;

    for(i=0;i<n-1;i++)
    {
        int u;
        u=mindist(dist,setTF);

        setTF[u]=true;

        for(int v=0;v<n;v++)
        {
            if(!setTF[v] && a[u][v] && dist[u]!=INT_MAX && dist[u]+a[u][v]<dist[v])
            {
                dist[v]=dist[u]+a[u][v];
            }
        }

    }
    final(dist);
}

//checks if the node is visited or not and gives the min dist
int mindist(int dist[],bool setTF[])
{
    int min=INT_MAX, min_index;
    for(int v=0;v<n;v++)
    {
        if(setTF[v]==false && dist[v]<=min)
            min=dist[v];
            min_index=v;
    }
    return min_index;
}

void final(int dist[])
{
    int i;
    printf("\nFINAL DISTANCES:\n");
    for(i=0;i<n;i++)
    {
        printf("0---->%d=%d\n",i,dist[i]);
    }

}

//driver code
int main()
{
    int a[n][n]={
        { 0,50,45,10,0,0 },
        { 0,0,10,15,0,0 },
        { 0,0,0,0,30,0 },
        { 20,0,0,0,15,0 },
        { 0,20,35,0,0,0 },
        { 0,0,0,0,3,0 }
    };

    dijkstra(a,0);
    return 0;
}
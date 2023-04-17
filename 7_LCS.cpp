#include<iostream>
#include<string.h>
using namespace std;
int len1=7,len2=5;
int lcs(char [],char[]);
int max(int,int);
int LCS[20][20];

int main()
{
    char str1[len1]="LONGEST", str2[len2]="STONE";
    lcs(str1,str2);

    for(int j=0;j<=len2;j++)
    {
        for(int i=0;i<=len1;i++)
        {
            cout<<LCS[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}

int lcs(char str1[7], char str2[5])
{
    int i,j;
    for(i=0;i<=len1;i++)
        LCS[i][0]=0;
 
    for(j=0;j<=len2;j++)
        LCS[0][j]=0; 
 
    for(i=1;i<=len1;i++)
    {
        for(j=1;j<=len2;j++)
        {
            if(str1[i-1]==str2[j-1])
            {
                LCS[i][j]=1+LCS[i-1][j-1];
            }
 
            else
            {
                LCS[i][j]=max(LCS[i-1][j],LCS[i][j-1]);
            }
        }
    }
}

int max(int a, int b)
{ return (a > b) ? a : b; }
#include<iostream>
using namespace std;
int bruteforce(char [],int ,char [],int);

int main()
{
    int i,n,m,ans;
    char str[20],srh[20];

    cout<<"enter number of letters: ";
    cin>>n;

    cout<<"\nenter the string:";
    for(i=0;i<n;i++)
    {
        cin>>str[i];
    }

    //searching
    cout<<"\n\nenter number of letters in searching string: ";
    cin>>m;

    cout<<"\nenter the string:";
    for(i=0;i<m;i++)
    {
        cin>>srh[i];
    }

    //printing
    cout<<"\nentered string:\n";
    for(i=0;i<n;i++)
    {
        cout<<str[i]<<"\t";
    }

    cout<<"\nentered searching string:\n";
    for(i=0;i<m;i++)
    {
        cout<<srh[i]<<"\t";
    }

    ans=bruteforce(str,n,srh,m);
    if(ans==-1)
        cout<<"\nstring not found";
    else
        cout<<"\nstring found at location "<<ans;
}

int bruteforce(char str[], int n, char srh[], int m)
{
    int i,j;

    for(i=0;i<=n-m;i++)
    {
        j=0;
        while(j<m && srh[j]==str[i+j])
        {
            j=j+1;
        }
        if(j==m)
            return i;
    }
    return -1;
}

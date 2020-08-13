#include<iostream>
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
int solution()
{
    int m;
    cin>>m;
    int *ar = new int[m];
    int j=0;
    for(j=0;j<m;j++)
    {
        cin>>ar[j];
    }
    sort(ar,ar+m);
    for(j=0;j<m-1;j++)
    {
        if(ar[j+1]-ar[j]>1)
        {
            cout<<"no"<<endl;
            return 0;
        }

    }
    cout<<"yes"<<endl;

}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        solution();
    }

}


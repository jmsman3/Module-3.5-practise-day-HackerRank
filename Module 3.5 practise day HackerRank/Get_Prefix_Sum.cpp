#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; cin>>n;
    vector<long long int > A(n);
    for( int i= 0; i<n ; i++)
    {
        cin>>A[i];
    }
    for( int i= 1; i<n ; i++)
    {
        A[i] =  A[i]+  A[i-1];
    }

    for( int i = n-1; i>=0 ; i --)
    {
        cout <<A[i]<<" ";
    }

    return 0;
}

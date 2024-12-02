#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n ,m;
    int a ;
    cin >> n >> m ;
    int f[m+1]={0};
    for(long long i = 0 ; i < n ; i++)
    {

       cin >> a ;
       f[a]++;
    }
    for(long long i = 1 ; i <= m ; i++)
    {
        cout << f[i] << endl ;
    }


    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    int t[10000];
    int ok = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> t[i];
        if(t[i] == 1)
        {
            ok = 1;
        }
    }
    if(ok == 1)
    {
        cout << "HARD";
    }
    else
    {
        cout << "EASY";
    }

}
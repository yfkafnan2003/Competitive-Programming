#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int p[1000],q[1000];
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> p[i] >> q[i];
        if(p[i] != q[i] && p[i]+2 <= q[i])
        {
            count++;
        }
    }
    cout << count;

}
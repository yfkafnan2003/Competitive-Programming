#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int count = 0;
    for(int i = 1;i < n; i=i+2)
    {
        count = count - i;
    }
    for(int i = 2; i < n; i=i+2)
    {
        count = count + i;
    }
    if(n % 2 == 0)
    {
        count = count + n;
    }
    else
    {
        count = count - n;
    }
    cout << count;
}
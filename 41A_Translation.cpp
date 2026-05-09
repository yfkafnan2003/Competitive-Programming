#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    cin >> s >> t;
    string g;
    int count = 0;
    for(int i = s.size()-1; i >= 0; i--)
    {
        g = s[i];
    }
    if(g==t)
    {
         count++;
    }
    cout << count;
    if(count == t.size())
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
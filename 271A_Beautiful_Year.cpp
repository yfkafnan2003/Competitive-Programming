#include<bits/stdc++.h>
using namespace std;
int main(){
    int y;
    cin >> y;
    int ok = 0;
    int a,b,c,d;
    int x;
    while(ok != 1)
    {
        y = y + 1;
        a = y % 10;
        b = (y/10) % 10;
        c = (y/100) % 10;
        d = (y/1000) % 10;
        if(a != b && a != c && a != d && b != c && b != d && c != d)
        {
            ok = 1;
        }
    }
    cout << y;

}
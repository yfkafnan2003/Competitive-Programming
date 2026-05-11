#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin >> x >> y;
    int n[x];
    int count = 0;
    for(int i = 0; i < x; i++)
    {
        cin >> n[i];
        if(n[i] > y)
        {
            count = count + 2;
        }
        else{
            count++;
        }
    }
    cout << count;
}
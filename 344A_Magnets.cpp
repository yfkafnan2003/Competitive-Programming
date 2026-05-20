#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int num[n];
    int m = 0, count = 0;
    int t=0, o = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> num[i];       
    }
    for(int i = 0; i < n; i++)
    {
        if(num[i] == 10 && t == 0)
        {
            count++;
            t = 1;
            o = 0;
        }
        else if(num[i] == 01 && o == 0)
        {
            count++;
            o = 1;
            t = 0;
        }     
    }
    
    cout << count;


}
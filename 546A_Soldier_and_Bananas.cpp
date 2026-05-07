#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,n,w;
    int i;
    int price = 0;
    cin >> k >> n >> w;
    for(i=1; i <= w; i++)
    {
        price = price + (i * k); 
    }
    int borrow;
    if(price > n)
    {
        borrow = price - n;
    }
    else{
        borrow = 0;
    }

    cout << borrow;
    return 0;
}
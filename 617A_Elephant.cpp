#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long count = 0;
    count += n/5;

    if(n % 5 != 0){
        count += 1;
    }
    cout<<count;
    return 0;
}
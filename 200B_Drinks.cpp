#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    double num[n];
    double count = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> num[i];       
        count = count + num[i];
    }
    double result = double(count * 100)/ double(n * 100);
    cout << fixed << setprecision(12) << result;


}
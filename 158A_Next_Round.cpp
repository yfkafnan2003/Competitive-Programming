#include <iostream>
using namespace std;
int main ()
{
    int n,k;
    cin >> n >> k;
    int count = 0;
    int a[n];
    int i = 0;
    while(n--)
    {
        cin >> a[i];
        i++;
    }
    for(int j = 0; j < n; j++)
    {
        if(a[i] >= a[k])
        {
            count++;
        }
    }
    cout << count;
}
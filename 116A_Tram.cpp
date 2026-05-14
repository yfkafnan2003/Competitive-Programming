#include <iostream>
#include <set>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    int i,a,b;
    int min = 0;
    int c = 0;
    for(i = 0; i < n; i++)
    {
        cin >> a >> b;
        c = (b - a) + c;
        if(c > min)
        {
            min = c;
        }
    }
    cout << min;
}
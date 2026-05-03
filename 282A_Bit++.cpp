#include <iostream>
using namespace std;
int main ()
{
    int n;
    int count = 0;
    cin >> n;
    while(n--)
    {
        string x;
        cin >> x;
        if(x == "X++" || x =="++X")
        {
            count++;
        }
        else if(x == "X--" || x == "--X")
        {
            count--;
        }
    }
    cout << count;
}
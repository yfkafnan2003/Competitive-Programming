#include <iostream>
#include <cctype>
using namespace std;
int main ()
{
    string p;
    cin >> p;
    int count = 0;
    for(int i = 0; i < p.size();i++)
    {
        count++;
        if(p[i]==p[i])
        {
            count--;
        }
    }

    cout << count;
}
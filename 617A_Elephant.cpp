#include <iostream>

using namespace std;
int main()
{
    long long int x;
    cin >> x;
    long long int count = 0;
    long long int i =0;
    while(i<x)
    {
        if(x >= 5 && i+5 <= x)
        {
            i = i + 5;
            count++;
        }
        if(x >= 4 && i+4 <= x)
        {
            i = i + 4;
            count++;
        }
        if(x >= 3 && i+3 <= x)
        {
            i = i + 3;
            count++;
        }
        if(x >= 2 && i+2 <= x)
        {
            i = i + 2;
            count++;
        }
        if(x >= 1 && i+1 <= x)
        {
            i = i + 1;
            count++;
        }
    }
    

    cout << count;
}
#include <iostream>

using namespace std;
int main()
{
    int l,b;
    cin >> l >> b;
    int count = 0;
    for(int i = l;i <= b; i = i * 3,b = b * 2)
    {
        count++;
    }
    cout << count;
}
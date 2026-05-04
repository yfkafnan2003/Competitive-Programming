#include <iostream>
#include <cstdlib>
using namespace std;
int main ()
{
    int m[5][5];
    int count = 0;
    for(int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> m[i][j];
        }
    }
    for(int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(m[i][j] == 1)
            {
                count = abs(i-2) + abs(j-2);
            }
        }
    }
    cout << count;
}
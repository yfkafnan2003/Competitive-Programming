#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int count = 0;
    char c[100]; 
    for(int i = 0; i< N; i++)
    {
        cin >> c[i];
    }
    for(int i = 0; i< N; i++)
    {
        if(c[i] == c[i+1])
        {
            count++;
        }
    }
    cout << count;
}
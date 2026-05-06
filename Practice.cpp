#include <bits/stdc++.h>
using namespace std;
int main()
{
    double N;
    while(cin >> N && N != 0)
    {
        int c1 = (int)(N / 90); 
        int c2 = (int)ceil((7*N)/90);
        cout << "Brasil " << c1 << " x " << "Alemanha " << c2 << endl;
    }
    
}
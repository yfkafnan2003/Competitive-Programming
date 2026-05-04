#include <iostream>
#include <cctype>
using namespace std;
int main ()
{
    string p,q;
    cin >> p >> q;
    for(char &c : p)
    {
        c = tolower(c);
    }
    for(char &v : q)
    {
        v = tolower(v);
    }
    if(p > q)
    {
        printf("1");
    }
    else if(p < q)
    {
        printf("-1");
    }
    else 
    {
        printf("0");
    }
}
#include <iostream>
#include <set>
using namespace std;
int main ()
{
    string s;
    cin >> s;
    set<char> p;
    for(char c : s)
    {
        p.insert(c);
    }
    if(p.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!" ;
    }
    else
    {
        cout << "IGNORE HIM!" ;
    }

}
#include <iostream>
#include <cctype>

using namespace std;
int main()
{
    string s;
    cin >> s;
    char c = toupper(s[0]);
    cout << c;
    for (int i = 1; i < s.size(); i++)
    {
        cout << s[i];
    }
}
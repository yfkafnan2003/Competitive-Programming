#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<char> st;
    for(char c : s)
    {
        if(c != '+')
        st.push_back(c);
    }
    sort(st.begin(), st.end());

    for(int i = 0 ; i < st.size();i++)
    {
        if(i > 0) cout << "+";
        cout << st[i];
    }

}
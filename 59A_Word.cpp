#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int c_low = 0;
    int c_high = 0;
    for(char c : s)
    {
        if(c == tolower(c))
        {
            c_low++;
        }
        else if(c == toupper(c))
        {
            c_high++;
        }
    }
    for(char c : s)
    {
        if(c_low > c_high || c_low == c_high)
        {
            c = tolower(c);
            cout << c;
        }
        else if(c_low < c_high)
        {
            c = toupper(c);
            cout << c;
        }
    }
    
}
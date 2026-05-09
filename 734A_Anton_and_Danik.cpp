#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    cin >> n >> s;
    int count1 = 0;
    int count2 = 0;
    for(char c : s)
    {
        if(c == 'A')
        {
            count1++;
        }
        else if(c == 'D')
        {
            count2++;
        }
    }
    if(count1 > count2)
    {
        cout << "Anton";
    }
    else if(count1 < count2)
    {
        cout << "Danik";
    }
    else if(count1 == count2)
    {
        cout << "Friendship";
    }

}
#include <iostream>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    string name[n];
    for(int i=0;i<n;i++)
    {
        cin >> name[i];
    }
    for(int i=0;i<n;i++)
    {
        if(name[i].size() > 10)
        {
            cout << name[i].front() <<name[i].size()-2 <<name[i].back() << endl;
        }
        else
        {
            cout << name[i] << endl;
        }  
    }
}
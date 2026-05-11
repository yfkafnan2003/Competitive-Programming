#include<bits/stdc++.h>
using namespace std;
int main(){
  string a,b;
  cin>>a>>b;
  int size = a.size();
  int okay = 1;
  for(int i = 0, j = size-1; i < j ;i++,j--){
    if(a[i] != b[j]){
      okay = 0;
      break;
    }
  }
  if(!okay){
    cout<<"NO"<<endl;
  }
  else{
    cout<<"YES"<<endl;
  }
}
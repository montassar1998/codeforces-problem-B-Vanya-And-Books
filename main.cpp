#include<bits/stdc++.h>
using namespace std;
int main(){
  unsigned long long int n,res=0;
  //cout<<"n)=";
  cin>>n;
  //cout<<'n'<<n<<endl;
  for(int i=1;i<=n;i*=10){
    //cout<<'\n'<<i;
    res+=(n-i+1);
  }
  cout<<res;
  return 0;
}

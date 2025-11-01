#include<iostream>
using namespace std;
int main(){
    int n=7;
    int f=1;
  
    for(int x=0;x<=n;x++){
  for(int k=1;k<=n-x;k++){
    cout<<k;
  }
  for(int j=0;j<x;j++){
    cout<<" ";
  }
  for(int z=n-x;z>=1;z--){
    cout<<z;
  }
    cout<<endl;
    }
        
        
    

    return 0;
}
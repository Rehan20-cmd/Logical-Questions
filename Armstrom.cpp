#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter your number"<<endl;
    cin>>n;
    int t=n;
    int m;
    int a,sum=0;
    while(n!=0){
 a=n%10;
m=a*a*a;
sum=sum+m;

     n=n/10;

    }
  if(t==sum){
cout<<"Number is Armstrom"<<endl;
  }
  else{
    cout<<"Number is not Armstrom"<<endl;
  }
  

    
    return 0;
}
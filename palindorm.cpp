#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter your number"<<endl;
    cin>>n;
    int t=n;
    int a,sum=0;
    while(n!=0){
 a=n%10;

 sum=sum*10 +a;

     n=n/10;

    }
  if(t==sum){
cout<<"Number is palindoram"<<endl;
  }
  else{
    cout<<"Number is not palindrome"<<endl;
  }
  

    return 0;
}
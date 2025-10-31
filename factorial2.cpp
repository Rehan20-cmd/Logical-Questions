#include<iostream>
using namespace std;
#include<string.h>
int main(){
int n;
cout<<"Enter your number"<<endl;
cin>>n;

int fac=0;
int f=n;
for(int i=n-1;i>=1;i--){
  
 f=f*i;


}
 cout<<"Factorial of given number is"<<f<<endl;

return 0;
}
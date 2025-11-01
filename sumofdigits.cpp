#include<iostream>
using namespace std;

int main(){
    int n=12348;
    int sum=0;
    for(int i=1;i<=4;i++){
int a=n%10;
   sum=sum+a;
     n=n/10;


    }
   cout<<"Sum of number is "<<sum;

    return 0;
}
#include<iostream>
using namespace std;
#include<string.h>
int main(){
  
 int n=6; 
  int factorial=n;
  int sum=0;
 for (int i = 1; i<n; i++)
 {
   cout<<factorial<<"*"<<i<<"=";
  
 factorial=factorial*i;
cout<<factorial<<endl;

 }
 cout<<factorial;


return 0;
}


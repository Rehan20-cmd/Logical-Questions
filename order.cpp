#include<iostream>
using namespace std;
int main(){
    int i;
   int sum=0;
    for(i=1;i<=10;i++){
        
        if(i%2==0){
            cout<<-i;
    
        }
        else{
            cout<<" +"<<i;
        }

        
    }
    cout<<"=";
        return 0;
        
}
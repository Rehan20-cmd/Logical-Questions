#include<iostream>
using namespace std;
int r,a=9,b=6,hcf;


int main(){
    while(true){
        hcf=b;
r=a%b;
a=b;
b=r;
if(b==0){
break;
}


}
cout<<"Hcf is "<<hcf;
        return 0;
}

#include<iostream>
using namespace std;




int main (){
    int i,n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    for ( i = 2; i < n; i++)
    {
        /* code */
        if (n%i==0)
        {
            /* code */
            cout<<"This is not a Prime number";
            break;

        }
        
    }

    if (i==n)
    {
        cout<<"THis is a prime number"<<endl;
    }
    


    return 0;
}
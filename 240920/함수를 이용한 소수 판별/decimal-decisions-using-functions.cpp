#include <iostream>
using namespace std;

int isPrime(int n){
    for(int i=2; i<n; i++){
        if(n%i==0){
            return false;
        }
    }
    return n;
}

int main() {
    int a,b;
    cin>>a>>b;
    int res=0;
    
    for(int i=a; i<=b; i++){
        res+=isPrime(i);
    }

    cout<<res;
    return 0;
}
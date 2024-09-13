#include <iostream>

using namespace std;

#define MAX 10000

int find(int n){
    int block[MAX];
    for(int i=0; i<n; i++){
        cin>>block[i];
    }

    int sum=0;
    for(int i=0; i<n; i++){
        sum+=block[i];
    }

    int avg=sum/n;
    int ans=0;

    for(int i=0; i<n; i++){
        if(block[i]>avg){
            ans+=block[i]-avg;
        }
    }
    return ans;
}

int main() {
    int n;
    
    cin>>n;
    cout<<find(n);
    return 0;
}
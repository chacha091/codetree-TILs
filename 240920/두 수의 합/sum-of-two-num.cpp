#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int numOfSum(int n, int k){
    unordered_map<int, int> hashmap;
    int cnt=0;

    for(int i=0; i<n; i++){
        int num;
        cin>>num;

        int cmpl=k-num;

        if(hashmap.find(cmpl)!=hashmap.end()){
            cnt+=hashmap[cmpl];
        }
        hashmap[num]++;
    }

    
    return cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, k;
    cin>>n>>k;

    cout<<numOfSum(n,k);
    
    return 0;
}
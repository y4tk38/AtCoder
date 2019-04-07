using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <map> // pair
#define ll long long

int main(){

    ll N;
    ll minv = 100000000000000000;
    int pos = 0;

    cin >> N;
    for(int i=0;i<5;i++){
        ll tmp;
        cin >> tmp;
        if(minv>tmp){
            minv = tmp;
            pos = i;
        }
    }

    ll ans = 0;
    
    if(N%minv==0){
        ans = ans = long(N/minv) + (5-pos) + pos - 1;
    }else{
    ans = long(N/minv) + (5-pos) + pos;
    }
    cout << ans << endl;
    
    
    return 0;
}

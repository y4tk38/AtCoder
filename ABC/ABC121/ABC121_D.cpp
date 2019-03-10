using namespace std;
#include <iostream>
#define ll long long

ll xorxor(ll a){
    ll ret = 0;
    for(int n=0; n<49; n++){
        if(a >> n & 1){
            if(a%2==0){
                ret +=  (1 << n);
            }
        }
    }
    return ret;
}

int main(){
    ll A,B;

    cin >> A >> B;

    ll ans;
    ans = xorxor(A-1);
    cout << ans << endl;
    
    ans ^= xorxor(B);
    cout << ans << endl;
    
    cout << ans << endl;
    
    return 0;
}

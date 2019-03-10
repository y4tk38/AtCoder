#include <bits/stdc++.h>
using namespace std;
#include <iostream>
#define ll long long

/*
ll xorxor(ll a){
    ll ret = ((a + 1) / 2) % 2;
    for(int n=0; n<59; n++){
        if((a >> n) & 1){
            if(a%2==0){
                ret |= (1 << n);
            }
        }
    }
    return ret;
}
*/
long long xorxor(long long  val) {
	long long ret = ((val + 1) / 2) % 2;
	for (int i = 0; i <= 59; i++) if ((val >> i) % 2) ret |= (1 ^ (val % 2)) << i;
	return ret;
}

int main(){
    ll A,B;

    cin >> A >> B;

    //cout << A << endl;
    //cout << B << endl;


    ll ans_A, ans_B;
    ans_A = xorxor(A-1);
    //cout << ans_A << endl;
    

    ans_B = xorxor(B);
    //cout << ans_B << endl;
    
    ll ans;
    ans = ans_A ^ ans_B;

    if(A >= 1){
        cout << ans << endl;
    }else{cout << ans_B << endl;}
    
    return 0;
}

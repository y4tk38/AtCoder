using namespace std;
#include <iostream>
#include <algorithm>
#define ll long long
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#include <queue>

int main(){
    
    int X, Y, Z, K;
    cin >> X >> Y >> Z >> K;
    ll A[X], B[Y], C[Z];
    rep(i,X) cin >> A[i];
    rep(i,Y) cin >> B[i];
    rep(i,Z) cin >> C[i];
    sort(C, C + Z, greater<ll>());
    priority_queue<pair<ll,int>> pairs;
    
    rep(i,X){
        rep(j,Y){
            pairs.push(make_pair(A[i] + B[j] + C[0], 0));
        }
    }

    for(int i = 0; i < K; i++){
        auto top = pairs.top();
        pairs.pop();
        cout << top.first << endl;
        if(top.second == Z - 1){
            continue;
        }
        pairs.push({top.first - C[top.second] + C[top.second + 1], top.second + 1});
    }



    return 0;
}

using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <map> // pair

int main(){

    //int size = 100000;
    vector<pair<long long,long long>> v;

    long long N,M;
    cin >> N >> M;

    for(long long i=0;i<N;i++){
        long long a,b;
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }    
    
    
    sort(v.begin(), v.end());
    
    long long i = 0;
    long long ans = 0;

    while(M>0){
        if(v[i].second <= M){
            M -= v[i].second;
            ans += v[i].first * v[i].second;
        }else{
            ans += v[i].first * M;
            M = 0;
        }
        i++;
    }

    cout << ans << endl;
    return 0;
}

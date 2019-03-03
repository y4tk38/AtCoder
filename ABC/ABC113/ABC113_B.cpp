#include <iostream>
using namespace std;
#include <cmath>

int main(){
    int N,T,A;

    cin >> N;
    cin >> T >> A;

    int x[N];
    double diff[N];
    double min_diff = 9999999.0;
    int ans;

    for(int i=0; i<N; i++){
        cin >> x[i];
        diff[i] = abs(A-(T - 0.006*float(x[i])));
        if(diff[i]<min_diff){
            min_diff = min(diff[i],min_diff);
            ans = i;
        }
    }

    cout << ans+1 << endl;
    
    return 0;

}
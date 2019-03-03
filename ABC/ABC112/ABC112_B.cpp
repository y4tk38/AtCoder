#include <iostream>
using namespace std;

int main(){
    int N,T;
    cin >> N >> T;

    int c[N], t[N];
    for(int i=0; i<N; i++){
        cin >> c[i] >> t[i];
    }

    int c_min = 999999;

    for(int i=0; i<N; i++){
        if(t[i] <= T){
            c_min = min(c_min, c[i]);
        }
    }
    
    if(c_min == 999999){
        cout << "TLE" << endl;
    }else{
        cout << c_min << endl;
    }

    return 0;

}
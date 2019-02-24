#include <iostream>
using namespace std;

int main(){

    int N;
    int t[3];
    int l[N+10000];
    int c;

    cin >> N >> t[0] >> t[1] >> t[2];
    

    // 1 //
    for(int i=0; i<N; i++)
    {
        cin >> l[i];
        c++;
    }

    // 2 //
    for(int i0=0; i0<N; i0++){
        for(int i1=0; i1<N; i1++){
            l[c+1] = l[i0] + l[i1];
            c++;
        }
    }




    return 0;
}


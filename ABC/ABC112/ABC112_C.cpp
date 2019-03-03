#include <iostream>
using namespace std;

int main(){

    int N;
    cin >> N;

    int x[N],y[N],h[N];
    for(int i=0; i<N; i++){
        cin >> x[i] >> y[i] >> h[i];
    }

    for(int ix=0; ix<=100; ix++){
        for(int iy=0; iy<=100; iy++){

            int h_top = 0;

            for(int ih=0; ih<N; ih++){
                if(h[ih]>0){
                    int h_tmp = h[ih] + abs(ix-x[ih]) + abs(iy-y[ih]);
                    h_top = max(h_top,h_tmp);
                }
            }

            for(int ih=0; ih<N; ih++){
                int h_cur = h[ih] + abs(ix-x[ih]) + abs(iy-y[ih]);
                if (h_top > h_cur){break;}
                
                if (ih == N-1){ cout << ix << " " << iy << " "<< h_top << endl;}
            }
        }
    }

    return 0;

}
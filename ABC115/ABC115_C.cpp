#include <iostream>
#include <algorithm>
using namespace std;
 
int main(){
	int N, K;
	cin >> N >> K;

    int h[N];
    for(int i=0; i<N; i++){cin >> h[i];}

    sort(h,h+N);
	
    int sub_min;
    int sub_prev;
    for(int i=0; i<N-(K-1); i++){
        if(i==0){
            int sub_init=0;
            for(int j=0; j<(K-1); j++){
                sub_init += h[j+1]-h[j];
            }
            sub_min  = sub_init;
            sub_prev = sub_init;
        }else{

            int sub_curr;
            sub_curr = sub_prev + (h[i+K-1]-h[i+K-2]) - (h[i]-h[i-1]);

            if(sub_min > sub_curr){sub_min=sub_curr;}

            sub_prev = sub_curr;
        }
    }

    cout << sub_min << endl;

    return 0;
}
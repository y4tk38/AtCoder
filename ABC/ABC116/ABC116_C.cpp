#include <iostream>
using namespace std;
 
int main() {
    int N;
    cin >> N;
  
    int h0, h1;
    int pos_sum = 0;
    for(int i=0; i<N; i++){
        if(i==0){
            cin >> h0;
            pos_sum += h0;
        }else{
            cin >> h1;
            if(h1-h0>0){pos_sum += h1-h0;}
            h0 = h1;
        }
    }

    cout << pos_sum << endl;

    return 0;

}



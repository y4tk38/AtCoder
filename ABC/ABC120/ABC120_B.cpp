#include <iostream>
using namespace std;

int main(){
    int A,B, K;
    cin >> A >> B >> K;

    int count = 0;
    int i=0;
    while(count < K){
        i++;
        if(A%i == 0 && B%i == 0){count++;}
        
    }

    cout << i << endl;
    return 0;

}
using namespace std;
#include <iostream>


int main(){

    int N,M,C;

    cin >> N >> M >> C;

    int B[M];
    for(int i=0;i<M;i++){
        cin >> B[i];
    }

    int count = 0;
    for(int i=0;i<N;i++){
        int A[M];
        int sum = 0;
        for(int j=0;j<M;j++){
            cin >> A[j];
            sum += A[j]*B[j];
        }
        sum += C;
        if(sum>0){count++;}
    }
    
    cout << count << endl;

    return 0;
}

#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    int N;
    cin >> N;
  
    int A[N];
    for(int i=0; i<N; i++){cin >> A[i];}

    sort(A,A+N);
    
    int i = 0;

    while(1){
        A[i+1] = A[i+1] % A[i];

        if(A[i+1]<A[i]){ 
            int tmp;
            tmp = A[i];
            A[i] = A[i+1];
            A[i+1] = tmp;
        }

        if(A[i]<1){i++;}

        if(A[N-2]==0){break;}
    }

    cout << A[N-1] << endl;

    return 0;

}



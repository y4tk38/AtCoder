#include <iostream>
using namespace std;
 
int main(){
	int N,M;
	cin >> N >> M;

    int K;
    int food_like[N][M];

    int tmp;

    for(int i=0; i<M; i++){
        for(int j=0; j<N; j++){
            food_like[j][i]=0;
        }
        
    }

    for(int i=0; i<N; i++){
        cin >> K;
        for(int j=0; j<K; j++){
            cin >> tmp;
            food_like[i][tmp-1] = 1;
        }
    }
    
    int count = 0;

    for(int i=0; i<M; i++){
        int sum = 0;
        for(int j=0; j<N; j++){
            sum += food_like[j][i];
        }
        if(sum==N){count++;}
    }

    cout << count << endl;

    return 0;
    

    
}
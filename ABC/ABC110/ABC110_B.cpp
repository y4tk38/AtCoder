using namespace std;
#include <iostream>


int main(){

    int N,M,X,Y;
    cin >> N >> M >> X >> Y;

    int x[N],y[M];

    int x_max = X;
    for(int i=0;i<N;i++){
        cin >> x[i];
        x_max = max(x[i],x_max);
    }
    int y_min = Y;
    for(int i=0;i<M;i++){
        cin >> y[i];
        y_min = min(y[i],y_min);
    }
    
    if(x_max>=y_min){ cout << "War" << endl;}
    else{cout << "No War" << endl;}
    
    return 0;
}

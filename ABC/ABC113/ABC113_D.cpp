#include <iostream>
using namespace std;

int dfs(int n, int x){

    if(n==0) return 1;

    if(x==1) return dfs(n-1,0);
    if(x==0) return dfs(n-1,0) + dfs(n-1,1);

}

int main(){
    int H,W,K;
    cin >> H >> W >> K;

    cout << dfs(3,0) << endl;

    return 0;

}
using namespace std;
#include <iostream>
#define M_SIZE (10^9+10)
#define N_SIZE (10^5+10)
#include <cstring>
int dp[N_SIZE][M_SIZE];
#include <map>

int dfs(int n, int m){

    if(dp[n][m]>0) {return dp[n][m];}
    if(m==1) {dp[n][m]=1;
            return 1;}
    if(n==1){ return 1;}

    
    map<int, int> pdn;

    int a = 2;
    while(m>=a){
        if(m%a==0){
            pdn[a]++;
            m /= a;
        }
        a++;
    }

    int ret = 0;

    for(auto it: pdn){
        
    }

    
    dp[n][m] = ret;

    return ret;
}


int main(){

    int N,M;
    cin >> N >> M;

    memset(dp,0,sizeof(dp));
    
    cout << dfs(N,M) << endl;

    return 0;
}
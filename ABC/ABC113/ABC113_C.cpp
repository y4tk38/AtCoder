#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define SIZE 100010

int main(){

    int N,M;
    cin >> N >> M;
    vector<pair<int,int>> city[SIZE];

    for(int i=0; i<M; i++){
        int name_tmp, year_tmp;
        cin >> name_tmp >> year_tmp;
        city[name_tmp-1].push_back({year_tmp,i});
    }

    char ans[SIZE][13];

    for(int i=0;i<N;i++){
        sort(city[i].begin(), city[i].end());
 
        for(int j=0;j<city[i].size();j++){
            sprintf(ans[city[i][j].second], "%06d%06d", i+1, j+1);
        }
    }

    for(int i=0; i<M; i++){
        printf("%s\n", ans[i]);
    }

    return 0;
}






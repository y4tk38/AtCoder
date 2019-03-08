using namespace std;
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#define N_MAX (100010)

int main(){

    int n;
    int v[N_MAX];
    
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> v[i];              
    }

    map<int, int> mp1, mp2;
    for(int i = 0; i < n; i += 2) mp1[v[i]]++;
    for(int i = 1; i < n; i += 2) mp2[v[i]]++;
    
    int mp1_1st_v = 0;
    int mp1_1st_c = 0;
    int mp1_2nd_v = 0;
    int mp1_2nd_c = 0;

    for(auto it : mp1){
        if(it.second > mp1_1st_c){
            mp1_1st_v = it.first;
            mp1_1st_c = it.second;
        }
    }

    mp1.erase(mp1_1st_v);

    for(auto it : mp1){
        if(it.second > mp1_2nd_c){
            mp1_2nd_v = it.first;
            mp1_2nd_c = it.second;
        }
    }

    //cout << mp1_1st_v << " " << mp1_1st_c << endl;
    //cout << mp1_2nd_v << " " << mp1_2nd_c << endl;

    int mp2_1st_v = 0;
    int mp2_1st_c = 0;
    int mp2_2nd_v = 0;
    int mp2_2nd_c = 0;

    for(auto it : mp2){
        if(it.second > mp2_1st_c){
            mp2_1st_v = it.first;
            mp2_1st_c = it.second;
        }
    }

    mp2.erase(mp2_1st_v);

    for(auto it : mp2){
        if(it.second > mp2_2nd_c){
            mp2_2nd_v = it.first;
            mp2_2nd_c = it.second;
        }
    }

    //cout << mp2_1st_v << " " << mp2_1st_c << endl;
    //cout << mp2_2nd_v << " " << mp2_2nd_c << endl;


    int ans;

    if(mp1_1st_v == mp2_1st_v){
        ans = min(n-(mp1_1st_c+mp2_2nd_c),n-(mp1_2nd_c+mp2_1st_c));
    }else{
        ans = n-(mp1_1st_c+mp2_1st_c);
    }

    cout << ans << endl;

    return 0;
}


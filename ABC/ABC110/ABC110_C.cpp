using namespace std;
#include <iostream>
#include <string>
#include <algorithm>
#include <map>

int main(){

    string s,t;
    map<char, int> sm,tm;

    cin >> s;
    cin >> t;

    for(int i=0;i<s.length();i++){
        sm[s[i]]++;
    }
    for(int i=0;i<t.length();i++){
        tm[t[i]]++;
    }
    
    bool ans = 1;
    for(auto it1: sm){
        char tmpc = it1.first;
        int  tmpi = it1.second;

        for(auto it2: tm){
            if(it2.first == tmpc){
                if(it2.second != tmpi){
                    ans = 0;
                    break;
                }
            }
        }
    }

    int sc[26];
    int tc[26];

    for(int i=0;i<26;i++){
        sc[i] = 0;
        tc[i] = 0;
    }

    for(auto it1: sm){
        sc[it1.first-'a']++;
    }
    for(auto it2: tm){
        tc[it2.first-'a']++;
    }

    sort(sc,sc+26);
    sort(tc,tc+26);

    for(int i=0;i<26;i++){
        if(sc[i]!=tc[i]) {ans=0;}
    }


    if(ans){cout << "Yes" << endl;}
    else{cout << "No" << endl;}

    return 0;
}

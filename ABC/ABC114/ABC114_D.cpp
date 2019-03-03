#include <iostream>
using namespace std;
#include <stdio.h>
#include <string.h>

int main(){
    int N;
    cin >> N;

    int prime[25] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
    int count[25];

    memset(count,0,sizeof(count));

    for(int i=1; i <= N; i++){
        int cur = i;
        for(int j=0; j<25; j++){
            
            int prime_tmp = prime[j];
            while (cur % prime_tmp == 0){
                cur /= prime_tmp;
                count[j] += 1;
            }
        }
    }

    //cout << count[0] << endl;
    //cout << count[1] << endl;
    //cout << count[2] << endl;
    //cout << count[3] << endl;

    int ans = 0;

    //1: 2*24 //
    int c_2 = 0;
    int c_24 = 0;
    for(int j=0; j<25; j++){
        if(count[j] >= 2){c_2++;}
        if(count[j] >= 24){c_24++;}
    }

    //ans += (c_2-c_24) * c_24 + (c_24 * (c_24-1)/2);
    ans += (c_2-1) * c_24; 

    //2: 2*4*4 //
    c_2 = 0;
    int c_4 = 0;
    for(int j=0; j<25; j++){
        if(count[j] >= 2){c_2++;}
        if(count[j] >= 4){c_4++;}
    }

    ans += (c_2-2) * (c_4*(c_4-1)/2);
    
    //3: 74 //
    int c_74 = 0;
    for(int j=0; j<25; j++){
        if(count[j] >= 74){c_74++;}
    }
    ans += c_74;

    //4: 14*4 //
    int c_14 = 0;
    c_4 = 0;
    for(int j=0; j<25; j++){
        if(count[j] >= 14){c_14++;}
        if(count[j] >= 4){c_4++;}
    }
    ans += (c_4-1) * c_14;

    
    cout << ans << endl;

    return 0;

}
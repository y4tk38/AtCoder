using namespace std;
#include <vector>
#include <iostream>
#include <algorithm>

int main(){
    vector<int> v;
    int ans = 0;
    int z = 10;
    for(int i=0;i<5;i++){
        int tmp;
        cin >> tmp;
        if(tmp%10 == 0){
            ans += tmp;
        }else{
            ans += tmp + 10 - (tmp%10);
            z = min(z,tmp%10);
        }
    }

    cout << ans-10+z << endl;
    
    return 0;
}

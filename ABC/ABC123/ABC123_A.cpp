using namespace std;
#include <vector>
#include <iostream>
#include <algorithm>

int main(){
    vector<int> v;
    int k;

    for(int i=0;i<5;i++){
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }

    cin >> k;

    sort(v.begin(),v.end());
    
    if(v[4]-v[0]>k){ cout << ":(" << endl;}
    else{cout << "Yay!" << endl;}
    
    return 0;
}

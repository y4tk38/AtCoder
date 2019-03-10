using namespace std;
#include <iostream>


int main(){

    int H,W,h,w;

    cin >> H >> W;
    cin >> h >> w;

    cout << H*W - (h*W+w*H-(w*h)) << endl;
    
    return 0;
}

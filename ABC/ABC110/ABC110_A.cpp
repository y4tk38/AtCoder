using namespace std;
#include <iostream>


int main(){

    int a,b,c;
    cin >> a >> b >> c;

    int max_v = max(max(a,b),c);

    cout << max_v*9 + a + b + c << endl;

    return 0;
}

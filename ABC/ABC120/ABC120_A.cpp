#include <iostream>
using namespace std;

int main(){
    int A,B,C;
    cin >> A >> B >> C;

    cout << min(int(B/A),C) << endl;

    return 0;

}
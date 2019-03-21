using namespace std;
#include <iostream>


int main(){

    int A,B,C;

    cin >> A >> B >> C;

    cout << min(A+B+1,C) + B << endl;
    
    return 0;
}

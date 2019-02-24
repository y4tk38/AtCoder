#include <iostream>
using namespace std;


int main(){
	char s[10];
    int  t[10];
    for (int i=0;i<10;i++){
        cin >> s[i];
        t[i] = s[i] - '0';
    }

	if(t[0]*1000+t[1]*100+t[2]*10+t[3] <= 2019){
        if(t[5]*10+t[6]*1 <= 4){
            cout << "Heisei" << endl;
            return 0; 
        }
    }

    cout << "TBD" << endl;
    return 0; 

}
#include <iostream>
using namespace std;
#include <string>
 
int main(){
    string u;
  	int minTmp = 9999999;
  
  	cin >> u;
    for (int i=0; i<u.length()-2; i++){
        int tmp = (u[i]-'0')*100 + (u[i+1]-'0')*10 + (u[i+2]-'0') -753;
        minTmp = min(abs(tmp),minTmp);    
    }  
  
    cout << minTmp << endl;

    return 0; 
}
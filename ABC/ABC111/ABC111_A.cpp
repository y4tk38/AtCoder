using namespace std;
#include <string>
#include <iostream>

int main(){
    string u;
  
  	cin >> u;
    for (int i=0; i<u.length(); i++){
        if(u[i] == '1') {u[i] = '9';}
        else
        {
            u[i] = '1';
        }
            
    }  
  
    cout << u << endl;

    return 0; 
}





#include <iostream>
using namespace std;
#include <string>
#include <stack>

int main(){
	string u;
  	cin >> u;
    
    
    int count = 0;

    stack<char> S;

    for(int i = 0; i<u.size();i++){
        char x = u[i];

        if(S.size()==0){
            S.push(x);
        }else{
            if(S.top() == x){
                S.push(x);
            }else{
                S.pop();
                count += 2;
            }
        }
    }

    cout << count << endl;
  
    return 0; 
}
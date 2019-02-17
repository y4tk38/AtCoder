#include <iostream>
using namespace std;
 
int main(){
	int s;
	cin >> s;

    int prev = s;
    int curr;
    
    int i = 0;

    int stack[10000];

    stack[0] = prev;

    while(1){
        if(prev%2==0){
            curr = prev / 2;
        }else
        {
            curr = 3 * prev + 1;
        }
        i++;
        stack[i] = curr;

        for(int j=0; j<i;j++){
            if(stack[j] == curr){cout << i+1 << endl; return 0;}
        }        
        prev = curr;

    }

    

    
}
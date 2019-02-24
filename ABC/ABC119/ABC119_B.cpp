#include <iostream>
using namespace std;
#include <string>

int main(){
	int N;
    double x;
    string u;
  	double sum=0.0;
  
  	cin >> N;
    for (int i=0;i<N;i++){
        cin >> x >> u;      	
      
      	if(u=="JPY"){
        	sum += x;
        }else{
        	sum += 380000*x;	
        }
    }  
  	cout << sum << endl;
  
    return 0; 
}
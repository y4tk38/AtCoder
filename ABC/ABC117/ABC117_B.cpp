#include <algorithm>
#include <iostream>
using namespace std;
 
int main() {
  int N;
  cin >> N;
  int l[N];  
  for(int i=0; i<N; i++){ 
    cin >> l[i];
  }
  
  int l_max = 0;
  for(int k=0; k<N; k++){
  	if(l_max<l[k]){
    	l_max = l[k];
    }
  }
  
  int l_rest = l_max;
  
  for(int j=0; j<N; j++){
  	l_rest = l_rest - l[j];
  	//cout << l_rest << endl;
    if(l_rest < -l_max){
    	cout << "Yes" << endl;
        return 0;
    }  
  }
  
  cout << "No" << endl;
  return 0;
}
#include <algorithm>
#include <iostream>
#include <cmath>
using namespace std;

long int XOR(long int a, long int b){
  int max_bit = 50;
  int a_bit[max_bit];
  int b_bit[max_bit];
  
  for(int i=max_bit-1; i>=0; i--){
  	if(a >= pow(2.0,i)){
      a = a - pow(2.0,i);
      a_bit[i]=1;
    }else{a_bit[i]=0;}
    
    if(b >= pow(2.0,i)){
      b = b - pow(2.0,i);
      b_bit[i]=1;
    }else{b_bit[i]=0;}
  }
  
  long int xor_tmp = 0;
  
  for(int i=0; i<max_bit; i++){
    if(a_bit[i] != b_bit[i]){
  		xor_tmp += pow(2.0,i);
    }
  }  
  return xor_tmp;
}

int main() {
  long int N, K;
  cin >> N >> K;
  
  long int A[N];
  
  for(int i=0; i<N; i++){
    cin >> A[i];
  }
  
    
  long int xor_max = 0;
  
  for(long int i=0; i<=K; i++){
    long int xor_sum = 0;
    
    for(long int j=0; j<N; j++){
    	xor_sum += XOR(i,A[j]);
    }
  	
    //cout << xor_sum << endl;
    if(xor_sum > xor_max){
    	xor_max = xor_sum;
    }    
  }
  
  cout << xor_max << endl;
  
    
  return 0;
}

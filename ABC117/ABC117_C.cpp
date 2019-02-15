#include <algorithm>
#include <iostream>
using namespace std;
 
int main() {
  int N, M;
  cin >> N >> M;
  
  if(M==1){cout << 0 << endl; return 0;}
  
  int points[M];
  
  for(int i=0; i<M; i++){cin >> points[i];}
  
  sort(points,points+M);
  
  int dist[M-1];
  int sorted_dist[M-1];
  
  for(int i=0; i<M-1; i++){
    dist[i] = points[i+1]-points[i];
    sorted_dist[i] = points[i+1]-points[i];
  }
  
  sort(sorted_dist,sorted_dist+M-1);
  
  int sum = 0;
  
  for(int i=0;i<M-N;i++){sum = sum + sorted_dist[i];}
  
  cout << sum << endl;
  return 0;
}
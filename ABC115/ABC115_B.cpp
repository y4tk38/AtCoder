#include <iostream>
#include <algorithm>
using namespace std;
 
int main(){
	int N;
	cin >> N;

    int p[N];
    for(int i=0; i<N; i++){cin >> p[i];}

    sort(p,p+N);
	
    int max_p = p[N-1];

    int sum=0;

    for(int i=0; i<N; i++){
        sum += p[i];
    }

    cout << sum-int(max_p/2) << endl;

    return 0;
}
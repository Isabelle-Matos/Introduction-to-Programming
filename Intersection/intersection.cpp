#include<iostream>
using namespace std;

int main(){
  int n, m;
   cin >> n >> m;
   int A[n];
   int B[m];
   int inter = 0, count = 0, i, j;

   for(i=0; i<n; i++){cin >> A[i];}
    for(i=0; i<m; i++){cin >> B[i];}

        cout <<"{ ";

    for(i=0; i<n; i++){
        count = 0;
    for(j=0; j<m; j++){
        if(A[i] == B[j]){
            inter = A[i];
            count ++;
            }
        }
        if(count == 1)
        cout << A[i] <<" ";
    }
    cout << "}";

	return 0;
}

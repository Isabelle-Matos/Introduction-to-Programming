#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int V[n];
    int i, j, X, count = 0;
    bool sum = false;

    for(i=0; i<n; i++){cin >> V[i];}
    cin >> X;

    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
        if((V[i]+ V[j]) == X)
               count++;
        }
    }
        if(count >= 2){sum = true;}

    sum ? cout<<"Yes"<<endl : cout <<"No"<<endl;
    return 0;
}

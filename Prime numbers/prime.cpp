#include <iostream>

using namespace std;

int main()
{
    int N;
    int i;
    int div = 0;

    cin >> N;

    for(i = 1; i <=N; i++)
    {
        if(N%i == 0)
            div++;
    }
    cout << "Is "<< N << " a prime number?"<<endl;
    if(div == 2){cout << "Yes." << endl;}
    else if ( div > 2){cout << "No." << endl;}

    return 0;
}

#include <iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main()
{
	int a;
	long long int total = 1;
	cin >> a;

	for(int i = 1; i <= a; i++){
		total = total * i;
	}

	cout << total << endl;


    return 0;
}

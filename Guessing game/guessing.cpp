#include <iostream>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

using namespace std;

int main()
{
    char *p = NULL;
    int i = rand();
    srand(time(NULL));
    int n;
    int attempts = 0;
    char answ;
    int randomic;
    do{
        randomic = (rand())%9;
        cout << "What number did I think of?" <<endl;
        cin >> n;
        cout << randomic << endl;

        if(n == randomic)
            cout<< "Correct! You got it right!" << endl;
        else
            {cout << "You missed!" << endl;
        attempts++;
        }

    cout << "Number of attempts: " << attempts << endl;
    cout << "Play again?(y/n)" << endl;
    cin >> answ;
    }while(answ != 'n');
    
    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    int day, month;
    //enter the day and the month you want to know the season
    //this program doesn't recognize invalid months or days
    //consider that February containing 28 days
    cin >> month >> day;

        if(month == 12)
        {
            cout << day << " of december" << endl;
            cout << "Winter" << endl;
        }
        else if(month == 1)
        {
            cout << day << " of january" << endl;
            cout << "Winter" << endl;
        }
        else if(month == 2 && day <=28)
        {
            cout << day << " of february" << endl;
            cout << "Winter" << endl;
        }
        else if  (month == 3)
        {
            cout << day << " of march" << endl;
            cout << "Spring" << endl;
        }
        else if (month == 4)
        {
            cout << day << " of april" << endl;
            cout << "Spring" << endl;
        }
        else if  (month == 5)
        {
            cout << day << " of may" << endl;
            cout << "Spring" << endl;
        }
        else if (month == 6)
        {
            cout << day << " of june" << endl;
            cout << "Summer" << endl;
        }
        else if (month == 7)
        {
            cout << day << " of july" << endl;
            cout << "Summer" << endl;
        }
        else if (month == 8)
        {
            cout << day << " of august" << endl;
            cout << "Summer" << endl;
        }
        else if (month == 9)
        {
            cout << day << " of september" << endl;
            cout << "Autumn" << endl;
        }
        else if (month == 10)
        {
            cout << day << " of october" << endl;
            cout << "Autumn" << endl;
        }
        else if (month == 11)
        {
            cout << day << " of november" << endl;
            cout << "Autumn" << endl;
        }

    return 0;
}

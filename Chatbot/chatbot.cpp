#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include<cstring>

using namespace std;

void goodbye()
{
    srand(time(NULL));
    char farewell[4][50] = {"See you later!", "Bye!", "Have a nice day!", "Catch you later!"};
    cout << farewell[rand()%4] << endl;
}
void sign(int n)//search the sign according to the number
{
    if(n == 1)//sign for Aries
    {
        cout<<"The first sign of the zodiac, Aries represents warriors and working people."<<endl;
        cout<<"Born between March 21 and April 19, Aryans are known as the most irritable ones."<<endl;
        cout<<"Among the personalities of this sign that stand out are Emma Watson, Lady Gaga, and the Brazilian Anitta."<<endl;
    }
    else if(n == 2)//sign for Taurus
    {
        cout<<"Earth sign, Taurus brings possessive and realistic individuals."<<endl;
        cout<<"Born between April 20 and May 21, Taureans usually like to accumulate and cling to situations and people."<<endl;
        cout<<"Gal Gadot and Sam Smith are some of the celebrities of this sign."<<endl;
    }
    else if(n == 3)//sign for Gemini
    {
        cout<<"Initiating the air element, Geminis have rationalistic, communicative, and fickle traits."<<endl;
        cout<<"Born between May 20 and June 20, Geminis are marked by their instability and unpredictability."<<endl;
        cout<<"Ivete Sangalo and Donald Trump are some of the famous people that represent this sign."<<endl;
    }
    else if(n == 4)//sign for Cancer
    {
        cout<<"One of the most challenging signs of the zodiac, Cancer is deeply intuitive and sentimental."<<endl;
        cout<<"Born between June 21 and July 22, Cancerians care about their family."<<endl;
        cout<<"They are friendly and very attached to the people around them."<<endl;
        cout<<"Artists like Gisele Bündchen, Ariana Grande, and Marina Ruy Barbosa fit these characteristics."<<endl;
    }
    else if(n == 5)//sign for Leo
    {
       cout<<"A fire sign, Leo represents powerful and self-confident people."<<endl;
       cout<<"Born between July 23 and August 22, Leo is bossy and vain of the zodiac."<<endl;
       cout<<"Among the personalities of this sign that stand out, are Kylie Jenner, Shawn Mendes, and Meghan Markle."<<endl;
    }
    else if(n == 6)//sign for Virgo
    {
        cout<<"Virgo's keywords are organization and discipline."<<endl;
        cout<<"Born between August 23 and September 22, Virgos tend to have a high critical sense, although they are also very delicate."<<endl;
        cout<<"Prince Harry, Beyoncé, and Giovanna Ewbank are part of one of the most careful signs of the zodiac."<<endl;
    }
    else if(n == 7)//sign for Libra
    {
        cout<<"Fascinated by balance and symmetry, Librans hate loneliness and injustice."<<endl;
        cout<<"Born September 23 to October 22, they believe that quality is more important than quantity."<<endl;
        cout<<"Kim Kardashian and Zac Efron are part of this sign."<<endl;
    }
    else if(n == 8)//sign for Scorpio
    {
        cout<<"A water sign, Scorpio represents strong, observant individuals who take everything seriously."<<endl;
        cout<<"Born between October 23 and November 21, Scorpios are the most possessive, sensual, and intense of the zodiac."<<endl;
        cout<<"Leonardo DiCaprio, Kendall Jenner, and Miley Cyrus are some of the best-known Scorpios."<<endl;
    }
    else if(n == 9)//sign for Sagittarius
    {
        cout<<"Closing the circle of fire, Sagittarius is an optimistic, cheerful, and creative sign."<<endl;
        cout<<"Born between November 22 and December 21, Sagittarius is the most adventurous of the zodiac and cherish freedom."<<endl;
        cout<<"These characteristics can be found in personalities like Britney Spears, Jay-Z, and Nicki Minaj."<<endl;
    }
    else if(n == 10)//sign for Capricorn
    {
        cout<<"Considered one of the most serious signs of the zodiac, Capricorn loves professionalism and traditional values."<<endl;
        cout<<"Born between December 22 and January 19, Capricorns have independence, self-control, and the potential to be great leaders."<<endl;
        cout<<"Kate Middleton, Larissa Manoela, and Michelle Obama stand out in these aspects."<<endl;
    }
    else if(n == 11)//sign for Aquarius
    {
        cout<<"Shy and quiet. Aquarius is an air sign and, as such, uses your mind at every opportunity."<<endl;
        cout<<"Born between January 20 and February 18, Aquarians are profound thinkers and highly intellectual people that enjoy helping others."<<endl;
        cout<<"The artists that stand out in these characteristics are Sandy, Neymar, and Sabrina Sato."<<endl;
    }
    else if(n == 12)//sign for Pisces
    {
        cout<<"Friendly and dreamy, Pisces is a water sign characterized by empathy and expressed emotional capacity."<<endl;
        cout<<"Born between 19 February and 20 March, Pisces are always willing to help others without receiving anything in return and are very intuitive."<<endl;
        cout<<"Adam Levine, Rihanna, and Millie Bobby Brown are celebrities of this sign."<<endl;
    }
}
void changeUppercase(char month[12][13])//change the first word of the month to uppercase
{
    for(int i =0; i<12; i++)
    {
        for(int j=0; j<13; j++)
        {
           month[i][0] = toupper(month[i][0]);
        }
    }

}
void lowercase(char month[12][13])//converts the user entry "month" to lowercase
{
    for(int i =0; i<12; i++)
    {
        for(int j=0; j<13; j++)
        {
           month[i][j] = tolower(month[i][j]);
        }
    }
}
void answerlowercase(char answer[])//converts the user entry "answer" to lowercase
{
    for(int i=0; answer[i]!='\0'; i++)
        {
            answer[i] = tolower(answer[i]);
        }
}
void name(char phrase[],char nameperson[])//returns only the name of the person
{
    char *p;
    p = strtok(phrase," ");
    while(p != NULL)
    {
    	strcpy(nameperson,p);
    	p = strtok(NULL," ");
	}
}
void presentation()
{
    char *ph = NULL;
    char nameperson[50];
    char phrase[50];
    char arraypa[50];
    char robot[] = "ZeckBot";
    char presentations[4][30] = {"Hello!", "Hi!", "How is it going?", "Greetings!"};
    srand(time(NULL));
    cout<<presentations[rand()%3]<<" My name is "<< robot << ". I can talk about zodiac signs."<<endl;
    cout<<"What's your name?"<<endl;
    cin.getline(nameperson, 50);
    name(nameperson, phrase);
    phrase[0] = toupper(phrase[0]);
    cout << "Hello " <<phrase <<". ";

}
int main()
{
    int day;
    char month[12][13] = {"january", "february", "march", "april", "may", "june",
                          "july", "august", "september", "october", "november", "december"};

    char signs[12][13] = {"aries", "taurus", "gemini", "cancer", "leo", "virgo", "libra",
                          "scorpio", "sagittarius", "capricorn", "aquarius", "pisces"};
    char answer[50];
    char *p = NULL;
    presentation();
    while((p= strstr(answer, "bye")) == NULL)
    {
        cout<<"Tell me a sign or a month of the year."<<endl;
        cin.getline(answer, 50);

        answerlowercase(answer);

        if((p = strstr(answer, "bye")) != NULL)
        {
            goodbye();//call the goodbye function only if the word "bye" appears
        }
    else
    {
        //search forthe signs
        for(int i = 0; i<12; i++)
        {
            p = strstr(answer, signs[i]);
            if(p != NULL)
            {
                //each sign represents a number
                if ((p = strstr(signs[i], "aries")) != NULL){sign(1);}
                else if ((p = strstr(signs[i], "taurus")) != NULL){sign(2);}
                else if ((p = strstr(signs[i], "gemini")) != NULL){sign(3);}
                else if ((p = strstr(signs[i], "cancer")) != NULL){sign(4);}
                else if ((p = strstr(signs[i], "leo")) != NULL){sign(5);}
                else if ((p = strstr(signs[i], "virgo")) != NULL){sign(6);}
                else if ((p = strstr(signs[i], "libra")) != NULL){sign(7);}
                else if ((p = strstr(signs[i], "scorpio")) != NULL){sign(8);}
                else if ((p = strstr(signs[i], "sagittarius")) != NULL){sign(9);}
                else if ((p = strstr(signs[i], "capricorn")) != NULL){sign(10);}
                else if ((p = strstr(signs[i], "aquarius")) != NULL){sign(11);}
                else if ((p = strstr(signs[i], "pisces")) != NULL){sign(12);}
            }
        }
        //search for the months
        for(int i =0; i<12; i++)
        {
            p = strstr(month[i], answer);
            if(p != NULL)
            {
                cout<<"Tell me a day."<<endl;
                cin>>day;
                cin.ignore();

                //using conditionals for each month under 31 days
                if(( p = strstr(month[i], "february")) != NULL)
                {
                    while(day < 1 || day > 29)
                    {
                        cout<<"February doesn't have "<< day <<" days. Tell me a day of February."<<endl;
                        cin>>day;
                        cin.ignore();
                    }
                    if(day <=18){sign(11);}
                    else if(day>=19){sign(12);}
                }
                else if(( p = strstr(month[i], "april")) != NULL)
                {
                    while(day < 1 || day > 30 )
                    {
                        cout<<"April doesn't have "<< day <<" days. Tell me a day of April."<<endl;
                        cin>>day;
                        cin.ignore();
                    }
                    if(day <=20){sign(1);}
                    else if(day>=21){sign(2);}
                }
                else if(( p = strstr(month[i], "june")) != NULL)
                {
                    while(day < 1 || day > 30 )
                    {
                        cout<<"June doesn't have "<< day <<" day. Tell me a day of June."<<endl;
                        cin>>day;
                        cin.ignore();
                    }
                    if(day <=20){sign(3);}
                    else if(day>=21){sign(4);}
                }
                else if(( p = strstr(month[i], "september")) != NULL)
                {
                    while(day < 1 || day > 30 )
                    {
                        cout<<"September doesn't have "<< day <<" days. Tell me a day of September."<<endl;
                        cin>>day;
                        cin.ignore();
                    }
                    if(day <=22){sign(6);}
                    else if(day>=23){sign(7);}
                }
                else if(( p = strstr(month[i], "november")) != NULL)
                {
                    while(day < 1 || day > 30 )
                    {
                        cout<<"November doesn't have "<< day <<" days. Tell me a day of November."<<endl;
                        cin>>day;
                        cin.ignore();
                    }
                    if(day <=21){sign(8);}
                    else if(day>=22){sign(9);}
                }
                //months that have 31 days
                else
                {
                    changeUppercase(month);

                    while(day <1 || day > 31)
                    {
                        cout<< month[i] <<" doesn't " << day <<" days. Tell me a day of " << month[i] <<endl;
                        cin>>day;
                        cin.ignore();
                    }
                    lowercase(month);

                    if(( p = strstr(month[i], "january")) != NULL)
                    {
                        if(day <=20){sign(10);}
                        else if(day>=21){sign(11);}
                    }
                    if(( p = strstr(month[i], "march")) != NULL)
                    {
                        if(day <=20){sign(12);}
                        else if(day>=21){sign(1);}
                    }
                    if(( p = strstr(month[i], "may")) != NULL)
                    {
                        if(day <=20){sign(2);}
                        else if(day>=21){sign(3);}
                    }
                    if(( p = strstr(month[i], "july")) != NULL)
                    {
                        if(day <=22){sign(4);}
                        else if(day>=23){sign(5);}
                    }
                    if(( p = strstr(month[i], "august")) != NULL)
                    {
                        if(day <=22){sign(5);}
                        else if(day>=23){sign(6);}
                    }
                    if(( p = strstr(month[i], "october")) != NULL)
                    {
                        if(day <=22){sign(7);}
                        else if(day>=23){sign(8);}
                    }
                    if(( p = strstr(month[i], "december")) != NULL)
                    {
                        if(day <=21){sign(9);}
                        else if(day>=22){sign(10);}
                    }
                }
            }
        }
    }
    cout<<endl;
 }
    return 0;
}

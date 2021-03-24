#include <iostream>

using namespace std;

int main()
{
   int N; // number of readings (1<=N && N<=1000)
   int C; // capacity (1<=C && C<=1000)

   int n_exits; 
   int n_entries;
   int total_people = 0, totalentries = 0, totalexits = 0;

   bool over = false; 

   int i= 0; //total readings
   cin >> N >> C;

   while(i<N)
   {
       cin >> n_exits;
       cin >> n_entries;
       totalentries += n_entries;
       totalexits += n_exits;
       total_people = totalentries - totalexits;

       if(total_people >C)
       {
           over = true;
       }
       i++;
   }
   if(over==true){cout<< "Y" << endl;}
   else{cout <<"N"<< endl;}

    return 0;
}

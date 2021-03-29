#include <iostream>

using namespace std;


void fracsum(int na, int da, int nb, int db, int &nr, int &dr)
{
    int simplifica;
    int i;
    if(da==db)
    {
        nr = na+nb;
        dr = da;
    }
    else if(da!=db)
    {
        dr = da*db;
        nr = ((dr/da)*na) + ((dr/db)*nb);
    }
     if(nr>=dr)
    {
        for(i=1; i<=nr; i++)
        {
            if(nr%i == 0 && dr%i == 0)
                simplifica = i;
        }
     }
     else if(dr>=nr)
     {
         for(i=1; i<=dr; i++)
         {
             if(dr%i==0 && nr%i==0)
                simplifica = i;
         }
     }
    dr = dr/simplifica;
    nr = nr/simplifica;

}
int main()
{
    int a, b, c, d, nr=0, dr=0;
    char e;
    cin>>a>>e>>b>>c>>e>>d; //put the entry in the fraction format.Ex: 1/3, 1/5...
    fracsum(a,b,c,d, nr, dr);
    cout <<a<<"/"<<b<<"+"<<c<<"/"<<d<<"="<< nr <<"/" <<dr << endl;
    return 0;
}

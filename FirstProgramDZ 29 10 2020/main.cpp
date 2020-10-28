#include <iostream>
#include <vector>
#define A unsigned short int

using namespace std;

A o1,o2,v,e,m,s,otv;

int main()
{
    freopen("INPUT.TXT", "r", stdin);
    freopen("OUTPUT.TXT", "w", stdout);
    cin >> v;
    cin >> o1 >> o2;
    m=v+1;
    vector< vector<bool> > g(v, vector<bool>(v, 0));
    for(A i = 0; i < v-1; i++)
    {
       cin >> e;
       if (e != 1)
       {
           g[e-1][i+1] = 1;
           for(A j = 0; j < v; j++)
           {
               if (g[j][e-1] == 1) g[j][i+1] = 1;
           }
       }
       else
       {
           g[e-1][i+1] = 1;
       }
       g[i][i] = 1;
    }
    for(A i = 0; i < v; i++)
    {
        s = 0;
        if (g[i][o1-1] == 1 && g[i][o2-1] == 1)
        {
            for(A j = 0; j < v; j++)
            {
               s+=g[i][j];
            }
            if (m > s)
            {
                m = s;
                otv = i;
            }
        }
    }
    cout << otv+1 << endl;
    return 0;
}

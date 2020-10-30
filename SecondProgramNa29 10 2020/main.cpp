#include <iostream>
#include <fstream>

using namespace std;

int i,j,k;
char mas[10][10];
int Func(int i,int j)
{
    char c;
    c=mas[i][j];
    mas[i][j] = ' ';
    if ((c=='W')&&(mas[i+1][j]=='B')){Func(i+1,j);}
    if ((c=='B')&&(mas[i+1][j]=='W')){Func(i+1,j);}
    if ((c=='W')&&(mas[i-1][j]=='B')){Func(i-1,j);}
    if ((c=='B')&&(mas[i-1][j]=='W')){Func(i-1,j);}
    if ((c=='W')&&(mas[i][j+1]=='B')){Func(i,j+1);}
    if ((c=='B')&&(mas[i][j+1]=='W')){Func(i,j+1);}
    if ((c=='W')&&(mas[i][j-1]=='B')){Func(i,j-1);}
    if ((c=='B')&&(mas[i][j-1]=='W')){Func(i,j-1);}
}

int main()
{
    setlocale(LC_ALL, "rus");
    fstream text;
    ofstream file;
    file.open("output.txt");
    text.open("input.txt");
    for (int i=1;i<9;i++)
    {
        for (int j=1;j<9;j++)
        {
            text>>mas[i][j];
        }
    }
    for (int i=1;i<9;i++)
    {
        mas[0][i]= ' ';
        mas[9][i]= ' ';
        mas[i][0]= ' ';
        mas[i][9]= ' ';
    }
    k=0;
    for (int i=1;i<9;i++)
    {
        for (int j=1;j<9;j++)
        {
            if(mas[i][j]!=' ')
            {
                k= k+1;
                Func(i,j);
            }
        }
    }
    file<<k;
    cout<< ""<<endl;
    text.close();
    file.close();
    return 0;
}

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    fstream text;
    ofstream file;
    text.open("INPUT.txt");
    file.open("OUTPUT.txt");
    int kol1;
    text>>kol1;
    int kol2;
    text>>kol2;
    int otv = kol2;
    for (int i=1;i<kol1;i++)
    {
        otv= otv*(kol2-1);
    }
    file<<otv;
    cout<<"посмотрите результат в файле OUTPUT"<<endl;
    text.close();
    file.close();
    return 0;
}

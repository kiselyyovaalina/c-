#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    ofstream file;
    fstream text;
    text.open("INPUT.txt");
    file.open("OUTPUT.txt");
    char a;
    char b;
    text>>a;
    text>>b;
    int sum=0;
    while(a!=b)
    {
        sum++;
        a=b;
        text>>b;
    }
    file<<sum+1;
    cout<<"посмотрите результат в файле OUTPUT"<<endl;
    text.close();
    file.close();
    return 0;
}

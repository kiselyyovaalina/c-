#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int k=0,m=0;
    ofstream file;
    fstream text;
    text.open("INPUT.txt");
    file.open("OUTPUT.txt");

    string word;
    text>>word;

    for (int i=0;i<word.size();i++)
    {
        if (word[i]!=word[i-1])
        {
            k++;
            m = max(k,m);
        }
        else
            {
                k=0;
            }
    }
    file<<m;
    cout<<"посмотрите результат в файле OUTPUT"<<endl;
    text.close();
    file.close();
    return 0;
}


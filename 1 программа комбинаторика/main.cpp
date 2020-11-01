#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL,"rus");
    ofstream file;
    fstream text;
    text.open("INPUT.txt");
    file.open("OUTPUT.txt");
    int kol;
    text>>kol;

    string word;
    text>>word;

    int sum = 0;
    for (int i=0;i<word.size()-1;i++)
    {
        for (int j=i+1;j<word.size();j++)
        {
            if (word[i]==word[j])
            {
                word[j]='0';
            }
        }
    }
    for (int i=0;i<word.size();i++)
    {
        if(word[i]!='0')
        {
            sum++;
        }
    }

    int otv=0;
    if (sum>=kol){
            otv=1;
    for (int i=0;i<kol;i++)
    {
        otv=otv*(sum);
        sum=sum-1;
    }
    }

    file<<otv;
    cout<<"посмотрите результат в файле OUTPUT"<<endl;
    text.close();
    file.close();
    return 0;
}

#include <iostream>
#include <windows.h>
#include <clocale>
#include <grammar.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int time;
    cin>>time;
    while(time)
    {
        cout<<"�������� ������ "<<time<<form(time)<<endl;
        time--;
        Sleep(1000);
    }
    cout<<"���! ����� �����!!!"<<endl;
}

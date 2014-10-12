#include <iostream>
#include <windows.h>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int time;
    cin>>time;
    while(time)
    {
        cout<<"Осталось чихать "<<time<<" раз(-а)"<<endl;
        time--;
        Sleep(1000);
    }
    cout<<"Ура! Время вышло!!!"<<endl;
}

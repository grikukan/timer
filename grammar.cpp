#include<grammar.h>
string form(int x)
{
    int form=0;
    x=x%100;
    if(x<=20)
    {
        if(x>=2 && x<=4)
        {
            form=1;
        }
        else
        {
            form=2;
        }
    } else
    if(x%10>=2 && x%10<=4)
    {
        form=1;
    } else
    {
        form=2;
    }
    if(form==1)
    {
        return " раза.";
    } else
    {
        return " раз.";
    }


}

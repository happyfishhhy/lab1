#ifndef loop
#define loop

#include <iostream>
using namespace std;
int a;

void Loop(int a)
{
        while(a!=1)
        {
                if(a%2==1)
                {
                        a=3*a+1;
                }
                else
                {
                        a=a/2;
                }
                cout<<" "<<a;
        }
}

#endif


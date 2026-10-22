// 1. Shutdown Windows/Linux Shutdown Machine. [#include to be used for system () function] 

#include <stdlib.h>

int main()
{
    system("shutdown /s /t 0");
    return 0;
}
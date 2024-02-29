#include <stdio.h>
#include <iostream>
#include <memory.h>
#include <string.h>
#include <cstring>
using namespace std;

char* insert(char* str, const char* spos, int pos) {
    int len = strlen(str);
    int cnt = strlen(spos);
    memmove(str + pos + cnt, str + pos, len + cnt);
    strncpy(str + pos, spos, cnt);
    return str;
}

int main(void)
{
    {
        int i, lenn, maxlen;
        const char* str = "010011000111001";
        for (i = 1, lenn = maxlen = 1; str[i]; i++)
            if (str[i] == str[i - 1])
            {
                lenn++;
                maxlen = lenn > maxlen ? lenn : maxlen;
            }
            else
                lenn = 1;
        cout << maxlen << endl;
    }
	system("pause");
    {
       
            char str[32];
            strcpy(str, "subaru wrx.");

            puts(insert(str, "-impreza", 6));

            getchar();
            return 0;
       
    }
}

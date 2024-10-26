#include <stdio.h>
#include <locale.h>
#include <wchar.h>
#include <wctype.h>

int main()
{
    setlocale(LC_ALL, "");

    for (wint_t i = 0; i <= 0x10FFFF; i++)
    {
        if (i < 0xD800 || i > 0xDFFF) // Skip invalid surrogate pairs
        {
            if (iswprint(i)) // Only print printable characters
                wprintf(L"%lc ", i);
        }
    }
    return 0;
}

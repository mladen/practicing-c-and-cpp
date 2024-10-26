#include <stdio.h>
#include <locale.h>
#include <wchar.h>
#include <wctype.h>

void print_range(const wchar_t *title, wint_t start, wint_t end)
{
    wprintf(L"\n%ls:\n", title); // Print the full title
    for (wint_t i = start; i <= end; i++)
    {
        if (iswprint(i))
        {
            wprintf(L"%lc ", i);
        }
    }
    wprintf(L"\n\n");
}

int main()
{
    setlocale(LC_ALL, "");

    // Latin Characters
    print_range(L"Latin Characters (Basic Latin and Latin-1 Supplement)", 0x0000, 0x00FF);

    // Greek Characters
    print_range(L"Greek Characters (Greek and Coptic)", 0x0370, 0x03FF);

    // Mathematical Symbols and Operators
    print_range(L"Mathematical Symbols and Operators", 0x2200, 0x22FF);

    // Box Drawing and Block Elements
    print_range(L"Box Drawing", 0x2500, 0x257F);
    print_range(L"Block Elements", 0x2580, 0x259F);

    // Miscellaneous Symbols
    print_range(L"Miscellaneous Symbols", 0x2600, 0x26FF);

    return 0;
}

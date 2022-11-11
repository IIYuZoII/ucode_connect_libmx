#include "../inc/libmx.h"

void mx_print_unicode(wchar_t c) {
    setlocale(LC_CTYPE, "");
    wprintf(L"%lc\n", c);
}






/* strlen example */
#include <stdio.h>
#include <string.h>

int main ()
{
    char szInput[256];
    printf ("Enter a sentence: ");
    //gets(szInput);
    printf("=======lvshuiku:%d=========%d========\n",sizeof(szInput),strlen(szInput));
    //printf ("The sentence entered is %u characters long.\n",(unsigned)strlen(szInput));
    return 0;
}

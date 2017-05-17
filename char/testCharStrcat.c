/* strcat example */
#include <stdio.h>
#include <string.h>

int main ()
{
    char str[80];
    strcpy (str,"these ");
    strcat (str,"strings ");
    strcat (str,"are ");
    strcat (str,"concatenated_lsklsk_test.");
    puts (str);
    return 0;
}

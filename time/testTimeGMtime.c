/* gmtime example */
/// Uses the value pointed by timer to fill a tm structure with the values that represent the corresponding time, expressed as a UTC time (i.e., the time at the GMT timezone).
#include <stdio.h>      /* puts, printf */
#include <time.h>       /* time_t, struct tm, time, gmtime */

#define MST (-7)
#define UTC (0)
#define CCT (+8)

int main ()
{
    time_t rawtime;
    struct tm * ptm;

    time ( &rawtime );

    ptm = gmtime ( &rawtime );

    puts ("Current time around the World:");
    printf ("Phoenix, AZ (U.S.) :  %2d:%02d\n", (ptm->tm_hour+MST)%24, ptm->tm_min);
    printf ("Reyvik (Iceland) : %2d:%02d\n", (ptm->tm_hour+UTC)%24, ptm->tm_min);
    printf ("Beijing (China) :     %2d:%02d\n", (ptm->tm_hour+CCT)%24, ptm->tm_min);

    return 0;
}

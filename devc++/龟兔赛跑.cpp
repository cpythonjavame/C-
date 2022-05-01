#include <stdio.h>

int main (void){
    int time = 0,run = 1,sleeptime = 0;
    scanf ("%d",&time);
    int gui = 0,rabbit = 0,i = 0;
    for (i = 1;i <= time;++i)
    {
        gui += 3;
        if (run == 1)
            rabbit += 9;
        if ((i % 10 == 0) && (rabbit > gui) && (run == 1))
        {
            run = 0;
            sleeptime = i;
        }
        if (i == sleeptime + 30)
        {
            run = 1;
        }
    }
    if (rabbit > gui)
        printf ("^_^ %d",rabbit);
    if (rabbit == gui)
        printf ("-_- %d",rabbit);
    if (rabbit < gui)
        printf ("@_@ %d",gui);
    return 0;
}

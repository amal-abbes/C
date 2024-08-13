#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<time.h>
#include <windows.h>
#include <string.h>

char * get_time()
{
    time_t     now;
    struct tm *ts;
    char       buf[160];

    /* Get the current time */
    now = time(NULL);

    /* Format and print the time, "ddd yyyy-mm-dd hh:mm:ss zzz" */
    ts = localtime(&now);
    strftime(buf, sizeof(buf), "%Y/%m/%d-%H:%M:%S", ts);

    return buf;
}

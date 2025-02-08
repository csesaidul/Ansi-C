// Write a C program that print the current system date and time.

#include <stdio.h>
#include <time.h>

int main() {
    time_t t;
    time(&t);
    printf("Today date: %s", ctime(&t));
    printf("Current time: %s", ctime(&t));
    printf("Time in seconds: %ld\n", t);
    printf("Time in hours: %ld\n", t / 3600);
    printf("Time in days: %ld\n", t / 86400);
    printf("Current year: %d\n", 1900 + localtime(&t)->tm_year);
    printf("Current month: %d\n", 1 + localtime(&t)->tm_mon);
    printf("Current day: %d\n", localtime(&t)->tm_mday);
    printf("Current hour: %d\n", localtime(&t)->tm_hour);
    printf("Current minute: %d\n", localtime(&t)->tm_min);
    printf("Current second: %d\n", localtime(&t)->tm_sec);
    time_t tomorrow = t + 86400;
    time_t yesterday = t - 86400;
    time_t next_week = t + 604800;
    time_t last_week = t - 604800;
    time_t next_month = t + 2592000;
    time_t last_month = t - 2592000;
    time_t next_year = t + 31536000;

    printf("Tomorrow date: %s", ctime(&tomorrow));
    printf("Yesterday date: %s", ctime(&yesterday));
    printf("Next week date: %s", ctime(&next_week));
    printf("Last week date: %s", ctime(&last_week));
    printf("Next month date: %s", ctime(&next_month));
    printf("Last month name: %s", ctime(&last_month));
    printf("Next year: %s", ctime(&next_year));
    printf("Tomorrow day: %d\n", (localtime(&tomorrow)->tm_wday));
    printf("Yesterday day name: %s", ctime(&yesterday));
    return 0;
}
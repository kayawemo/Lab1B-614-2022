/*
 *  File Name: lab1exe_B.cpp
 *  Assignment: ENSF 614 Lab 1, Exercise E
 *  Completed by: Kayode Awe
 *  Submission Date: Sept 21, 2022.
 */


#include <iostream>
using namespace std;

void time_convert(int ms_time, int *minutes_ptr, double *seconds_ptr);
/*
 * Converts time in milliseconds to time in minutes and seconds.
 * For example, converts 123400 ms to 2 minutes and 3.4 seconds.
 * REQUIRES:
 *    ms_time >= 0.
 *    minutes_ptr and seconds_ptr point to variables.
 * PROMISES:
 *    0 <= *seconds_ptr & *seconds_ptr < 60.0
 *    *minutes_ptr minutes + *seconds_ptr seconds is equivalent to
 *    ms_time ms.
 */

int main(void)
{
    int millisec;
    int minutes;
    double seconds;
    int nscan;

    cout << "Enter a time interval as an integer number of milliseconds: ";

    // printf("Enter a time interval as an integer number of milliseconds: ");
    cin >> millisec;

    if (!cin) {
        cout << "Unable to convert your input to an int.\n";
        exit(1);
    }

    cout << "Doing conversion for input of " <<  millisec <<" milliseconds ... \n", millisec;

    /* MAKE A CALL TO time_convert HERE. */
    time_convert(millisec, &minutes, &seconds);
    cout << "That is equivalent to " << minutes << " minute(s) and " << seconds << " second(s).\n";
    return 0;
}

/* PUT YOUR FUNCTION DEFINITION FOR time_convert HERE. */

void time_convert(int millisec, int *minutes_ptr, double *seconds_ptr) {


    double ms_sec = (double) (millisec / 1000.00);
    *minutes_ptr = (ms_sec / 60);
    *seconds_ptr = ms_sec - ( *minutes_ptr * 60);

}
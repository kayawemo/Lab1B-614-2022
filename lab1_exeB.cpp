/*
 *  File Name: lab1exe_B.cpp
 *  Assignment: ENSF 614 Lab 1, Exercise B
 *  Completed by: Kayode Awe
 *  Submission Date: Sept 21, 2022.
 */

#include <iostream>
#include <cmath>
using namespace std;

const double G = 9.8;   /* gravitation acceleration 9.8 m/s^2 */
const double PI = 3.141592654;

void create_table(double v);
double Projectile_travel_time(double a, double v);
double Projectile_travel_distance(double a, double v);
double degree_to_radian(double d);

//int main(void)
//{
//    int n;
//    double velocity;
//
//    cout << "Please enter the velocity at which the projectile is launched (m/sec): ";
//    cin >> velocity;
//
//    if(!cin)  // means if cin failed to read
//    {
//        cout << "Invlid input. Bye...\n";
//        exit(1);
//    }
//
//    while (velocity < 0 )
//    {
//        cout << "\nplease enter a positive number for velocity: ";
//        cin >> velocity;
//        if(!cin)
//        {
//            cout << "Invlid input. Bye...";
//            exit(1);
//        }
//    }
//
//    create_table(velocity);
//
//    return 0;
//}

// Function definitions
void create_table(double v) {

    printf("%5s%12s%16s\n", "Angle", "t", "d");
    printf("%7s%14s%14s\n", "(deg)", "(sec)", "(m)");
    for (double i = 0; i <= 90; i = i + 5) {
        printf("%-14lf %-14lf %-14lf\n", i, Projectile_travel_time(i, v), Projectile_travel_distance(i, v));

    }
}

double Projectile_travel_time(double a, double v) {
    return (2 * v * sin(degree_to_radian(a) )) / G;
}

double Projectile_travel_distance(double a, double v) {
    return (pow(v, 2) * sin(2 * (degree_to_radian(a)))) / G;
}

double degree_to_radian(double d) {
    return d * PI / 180;
}



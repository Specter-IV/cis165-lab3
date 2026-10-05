#include <iostream>
using namespace std;

int main()
{
    int level_one_minutes = 78;
    int level_two_minutes = 144;
    int minutes_per_hour = 60;

    // Divide by 60 for hours and use the remainder for leftover minutes.
    int level_one_hours = level_one_minutes / minutes_per_hour;
    int level_one_remainder = level_one_minutes % minutes_per_hour;
    int level_two_hours = level_two_minutes / minutes_per_hour;
    int level_two_remainder = level_two_minutes % minutes_per_hour;

    int level_time_difference = level_two_minutes - level_one_minutes;
    int level_time_difference_hours = level_time_difference / minutes_per_hour;
    int level_time_difference_minutes = level_time_difference % minutes_per_hour;

    cout << "Level one took " << level_one_hours << " hour(s) and "
         << level_one_remainder << " minute(s)." << endl;
    cout << "Level two took " << level_two_hours << " hour(s) and "
         << level_two_remainder << " minute(s)." << endl;
    cout << "Level two took " << level_time_difference_hours << " hour(s) and "
         << level_time_difference_minutes << " minute(s) longer than level one." << endl;

    return 0;
}

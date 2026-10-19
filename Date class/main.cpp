#include <iostream>
#include "Date.h"

using namespace std;

int main()
{
    Date date1;
    Date date2(12, 25, 2021);
    Date date3(2, 29, 2024);
    Date date4(2, 30, 2025);

    cout << "Default Date: " << date1.formatNumeric() << endl;

    cout << "\nDate Formats:" << endl;
    cout << date2.formatNumeric() << endl;
    cout << date2.formatMonthFirst() << endl;
    cout << date2.formatDayFirst() << endl;

    cout << "\nLeap Year Tests:" << endl;
    cout << boolalpha;
    cout << "2024: " << date3.isLeapYear() << endl;
    cout << "2025: " << date3.isLeapYear(2025) << endl;

    cout << "\nLast Day Tests:" << endl;
    cout << "February 2024: " << date3.lastDay() << endl;
    cout << "April 2025: " << date3.lastDay(4, 2025) << endl;

    cout << "\nInvalid Date Test:" << endl;
    cout << date4.formatNumeric() << endl;

    cout << "\nAccessor Tests:" << endl;
    cout << "Month: " << date2.getMonth() << endl;
    cout << "Day: " << date2.getDay() << endl;
    cout << "Year: " << date2.getYear() << endl;

    date2.setDate(7, 4, 2026);

    cout << "\nUpdated Date: " << date2.formatNumeric() << endl;


    Date test6(5, 0, 2025);

    cout << "\nInvalid Day Zero Test:" << endl;
    cout << "Expected: 1/1/1900" << endl;
    cout << "Actual: " << test6.formatNumeric() << endl;

    Date test7(8, 15, -2025);

    cout << "\nInvalid Year Test:" << endl;
    cout << "Expected: 1/1/1900" << endl;
    cout << "Actual: " << test7.formatNumeric() << endl;


    return 0;
}
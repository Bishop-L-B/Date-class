/*
Purpose: Stores and manages calendar dates.

Class Invariant:
Month must be between 1 and 12.
Year must be at least 1.
Day must be valid for the month and year.
*/


#ifndef DATE_H
#define DATE_H
#include <string>
using namespace std;

class Date
{
private:
	int month;
	int day;
	int year;

public:

public:
    /*
    Purpose: Creates a Date object.
    Input: Month, day, and year.
    Preconditions: None.
    Postconditions: Stores a valid date or resets to January 1, 1900.
    Output: None.
    */
    Date(int m = 1, int d = 1, int y = 1900);

    /*
    Purpose: Changes the stored date.
    Input: Month, day, and year.
    Preconditions: None.
    Postconditions: Stores a valid date or resets to January 1, 1900.
    Output: None.
    */
    void setDate(int m, int d, int y);

    /*
    Purpose: checks if the stored year is a leap year.
    Input: None.
    Preconditions: None.
    Postconditions: Date stays the same.
    Output: True if leap year, otherwise false.
    */
    bool isLeapYear() const;

    /*
    Purpose: Checks if a given year is a leap year.
    Input: Year to check.
    Preconditions: Year must be at least 1.
    Postconditions: date stays the same.
    Output: True if leap year, otherwise false.
    */
    bool isLeapYear(int year) const;

    /*
    Purpose: Finds the number of days in the stored month.
    Input: None.
    Preconditions: None.
    Postconditions: Date stays the same.
    Output: Number of days in the month.
    */
    int lastDay() const;

    /*
    Purpose: Finds the number of days in a given month.
    Input: Month and year.
    Preconditions: Month is 1-12 and year is at least 1.
    Postconditions: Date stays the same.
    Output: Number of days, or 0 if the month is invalid.
    */
    int lastDay(int m, int y) const;

    /*
    Purpose: Gets the stored month.
    Input: None.
    Preconditions: None.
    Postconditions: Date stays the same.
    Output: Month as an integer.
    */
    int getMonth() const;

    /*
    Purpose: Gets the stored day.
    Input: None.
    Preconditions: None.
    Postconditions: Date stays the same.
    Output: Day as an integer.
    */
    int getDay() const;

    /*
    Purpose: Gets the stored year.
    Input: None.
    Preconditions: None.
    Postconditions: Date stays the same.
    Output: Year as an integer.
    */
    int getYear() const;

    /*
    Purpose: Displays the date in number format.
    Input: None.
    Preconditions: None.
    Postconditions: Date stays the same.
    Output: Date in MM/DD/YYYY format.
    */
    string formatNumeric() const;

    /*
    Purpose: Displays the date with the month first.
    Input: None.
    Preconditions: none.
    Postconditions: Date stays the same.
    Output: Date like December 25, 2021.
    */
    string formatMonthFirst() const;

    /*
    Purpose: Displays the date with the day first.
    Input: None.
    Preconditions: none.
    Postconditions: Date stays the same.
    Output: Date like 25 December 2021.
    */
    string formatDayFirst() const;

};

#endif
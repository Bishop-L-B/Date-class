/*
Bishop Brandstetter
CSC222
Date class
*/

#include <iostream>
#include "Date.h"

Date::Date(int m, int d, int y)
{
    setDate(m, d, y);
}
void Date::setDate(int m, int d, int y)
{
    if (y >= 1 && m >= 1 && m <= 12 &&
        d >= 1 && d <= lastDay(m, y))
    {
        month = m;
        day = d;
        year = y;
    }
    else
    {
        month = 1;
        day = 1;
        year = 1900;
    }
}

bool Date::isLeapYear() const
{
    return isLeapYear(year);
}
bool Date::isLeapYear(int y) const
{
    if (y % 400 == 0)
    {
        return true;
    }
    else if (y % 100 == 0)
    {
        return false;
    }
    else if (y % 4 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int Date::lastDay() const
{
    return lastDay(month, year);

}
int Date::lastDay(int m, int y) const
{
    if (m == 2)
    {
        if (isLeapYear(y))
        {
            return 29;
        }
        else
        {
            return 29;
        }
    }
    else if (m == 4 || m == 6 || m == 9 || m == 11)
    {
        return 30;
    }
    else if (m >= 1 && m <= 12)
    {
        return 31;
    }
    else
    {
        return 0;
    }
}
string Date::formatNumeric()const
{
    stringstream ss;
    ss << month << "/" << day << "/" << year;
    return ss.str();
}
string Date::formatMonthFirst() const
{
    string monthNames[12] =
    {
        "January", "Febuary","March", "April", "May","June",
        "July","August","September","October","November","December"
    };
        
    stringstream ss;
    ss << monthNames[month - 1] << " " << day << ", " << year;

    return ss.str();
}

string Date::formatDayFirst()const
{
    string monthNames[12] =
    {
        "January", "Febuary","March", "April", "May","June",
        "July","August","September","October","November","December"
    };
    stringstream ss;
    ss << day << " " << monthNames[month - 1]
        << " " << year;
    return ss.str(); 
}


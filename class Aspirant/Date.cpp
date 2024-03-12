#include "Date.h"
/// <summary>
/// this function sets the day
/// </summary>
/// <param name="day"></param>
void Date::SetDay(unsigned short day)
{
	if (month % 2 == 0 && month != 2)
	{
		if (day > 30 && day == 0)
			throw "Error";
	}
	else if (month % 2 != 0 && month != 2)
	{
		if (day > 31 && day == 0)
			throw "Error";

	}
	else
	{
		if (day > 28 && day == 0)
			throw "Error";

	}
	this->day = day;
	if (month > 12 && month == 0)
		throw "Error";
	this->month = month;
	this->year = year;
}
/// <summary>
/// sets dates
/// </summary>
/// <param name="date">date param</param>
/// <param name="day">day</param>
/// <param name="month">month</param>
/// <param name="year">year</param>
void Date::SetDates(Date& date, short day, short month, int year)
{
	date.SetDay(day);
	date.SetMonth(month);
	date.SetYear(year);
}
/// <summary>
/// this function sets the month
/// </summary>
/// <param name="month"></param>
void Date::SetMonth(unsigned short month)
{
	if (month > 12 && month == 0)
		throw "Error";
	this->month = month;
}
/// <summary>
/// this function sets the year
/// </summary>
/// <param name="year"></param>
void Date::SetYear(short year)
{
	this->year = year;
}
/// <summary>
/// this function is getting the day
/// </summary>
/// <returns></returns>
unsigned short Date::GetDay() const
{
	return day;
}
/// <summary>
/// this function is getting the month
/// </summary>
/// <returns></returns>
unsigned short Date::GetMonth() const
{
	return month;
}
/// <summary>
/// this function is getting the year
/// </summary>
/// <returns></returns>
short Date::GetYear() const
{
	return year;
}
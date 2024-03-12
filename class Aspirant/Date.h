#pragma once

class Date {
	unsigned short day : 5;
	unsigned short month : 4;
	short year;

public:
	void SetDates(Date& date, short day, short month, int year);
	void SetDay(unsigned short day);
	void SetMonth(unsigned short month);
	void SetYear(short year);
	unsigned short GetDay() const;
	unsigned short GetMonth() const;
	short GetYear() const;
};

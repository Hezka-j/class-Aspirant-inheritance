#include <iostream>
#include<ctime>
#include"Date.h"
#include"Student.h"
using namespace std;
istream& operator >> (const istream& i, Student& student)
{
	cout << "Enter phone number - ";
	cin >> student.number;
	return cin;
}

ostream& operator << (const ostream& o, const Student& student)
{
	student.Print();
	return cout;
}
class Aspirant : public Student {
	string theme;
public:
	Aspirant() : Aspirant(" ") {}
	Aspirant(string theme)/* : Student()*/{
		SetTheme(theme);
	}
	Aspirant(string name, string surname, string number, string theme) : Student(name, surname, number){
		SetTheme(theme);
	}
	void SetTheme(string theme) 
	{
		this->theme = theme;
	}
	string GetTheme()
	{
		return theme;
	}
	void Print()
	{
		Student::Print();
		cout << "Theme: " << theme << "\n";
	}
};
int main()
{
	Aspirant first("karl", "karlov", "064342223", "organic");
	first.Print();
}

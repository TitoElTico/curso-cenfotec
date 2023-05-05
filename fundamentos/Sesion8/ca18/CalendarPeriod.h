#pragma once

#include <string>

using namespace std;

//Lo que es publico -> Pascal Case
//Lo que es privado -> Camel Case

namespace CPPCompany::Billing 
{
	enum class Months
	{
		January = 1, February, March,
		April, May, June, July,
		August, September, October,
		November, December
	};

	//Constructor
	//Deconstructor

	class CalendarPeriod
	{
		int year;
		Months month;
	public:
		CalendarPeriod();
		CalendarPeriod(int pYear, Months pMonth);
		~CalendarPeriod();
		string ToString();
		void Next();
		void Previous();
	};
}
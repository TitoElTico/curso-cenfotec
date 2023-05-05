#include "CalendarPeriod.h"
#include <ctime>
#include <iostream>
#include <format>
#include <string>


using namespace std;

namespace CPPCompany::Billing
{
	CalendarPeriod::CalendarPeriod()
	{
		cout << "Constructor CPPCompany::Billing::CalendarPeriod";

		// current date/time based on current system
		struct tm newtime;
		time_t now = time(0);
		localtime_s(&newtime, &now);

		year = 1900 + newtime.tm_year;
		month = static_cast<Months>(1 + newtime.tm_mon);
	}

	CalendarPeriod::CalendarPeriod(int pYear, Months pMonth)
	{
		year = pYear;
		month = pMonth;
	}
	CalendarPeriod::~CalendarPeriod()
	{
		cout << "Destructor CPPCompany::Billing::CalendarPeriodo";
	}
	
	string CalendarPeriod::ToString()
	{
		return format("{:d}/{:d}", static_cast<short>(month), year);
	}

	// DRY
	void CalendarPeriod::Next() {
		short nmonth = static_cast<short>(month);
		year = nmonth == 12 ? ++year : year;
		month = nmonth == 12 ? Months::January : static_cast<Months>(++nmonth);
	}

	void CalendarPeriod::Previous() {
		short nmonth = static_cast<short>(month);
		year = nmonth == 1 ? --year : year;
		month = nmonth == 1 ? Months::December : static_cast<Months>(--nmonth);
	}
}
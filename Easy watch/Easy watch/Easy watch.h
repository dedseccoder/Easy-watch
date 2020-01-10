#pragma once
#pragma warning(disable : 4996)
#include <time.h>
/*
	use this code for more easy work with time.
*/

class Timer
{
public:

	int getSeconds() { return sec; };
	int getMinutes() { return min; };
	int getHours() { return hour; };
	int getDay() { return day; };
	int getMonth() { return month; };
	int getYear() { return year; };

	void getDate(std::string country, bool update)
	{
		do
		{
			system("cls");
			srand(time(NULL));
			pointer = time(NULL);
			timer = gmtime(&pointer);
			sec = timer->tm_sec;
			min = timer->tm_min;
			hour = timer->tm_hour + 3;
			day = timer->tm_mday;
			month = timer->tm_mon + 1;
			year = timer->tm_year + 1900;
			std::cout << "time: " << hour << ':' << min << ':' << sec << std::endl;
			if (country == "RUS" || country == "rus")
			{
				std::cout << "Date (RUS): " << day << '.' << month << '.' << year << std::endl;
			}
			else if (country == "USA" || country == "usa")
			{
				std::cout << "Date (USA): " << month << '.' << day << '.' << year << std::endl;
			}
			else { std::cout << "nothing was entered" << std::endl; }
			std::cout << std::endl;
		} while (update);
	};

private:
	int sec, min, hour, day, month, year;
	time_t pointer;
	struct tm* timer;
};
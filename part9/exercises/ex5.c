#include <stdio.h>
#include <stdbool.h>

struct date
	{
		int month;
		int day;
		int year;
	};

struct time
{
	int hour;
	int minutes;
	int seconds;
};

struct dateAndTime
{
	struct date sdate;
	struct time stime;
};
/*
bool isMidnight (struct time t)
{
	if (t.hour == 0 && t.minutes == 0 && t.seconds == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
};

struct time timeUpdate (struct time t)
{
	struct time updated = 
	{
		
	}
}
*/
struct time timeUpdate (struct time now);
struct date dateUpdate (struct date today);
int numberOfDays (struct date d);
struct dateAndTime clockKeeper (struct dateAndTime dt);
// Here is a sample main routine and output:
int main (void)
{
	struct dateAndTime dt1 = { { 12, 31, 2004 }, { 23, 59, 59 } };
	struct dateAndTime dt2 = { { 2,  28, 2008 }, { 23, 59, 58 } };

	printf ("Current date and time is %.2i/%.2i/%.2i %.2i:%.2i:%.2i\n", dt1.sdate.month, dt1.sdate.day, dt1.sdate.year, dt1.stime.hour, dt1.stime.minutes, dt1.stime.seconds);
	dt1 = clockKeeper (dt1);
	printf ("Updated date and time is %.2i/%.2i/%.2i %.2i:%.2i:%.2i\n\n", dt1.sdate.month, dt1.sdate.day, dt1.sdate.year, dt1.stime.hour, dt1.stime.minutes, dt1.stime.seconds);
	printf ("Current date and time is %.2i/%.2i/%.2i %.2i:%.2i:%.2i\n", dt2.sdate.month, dt2.sdate.day, dt2.sdate.year, dt2.stime.hour, dt2.stime.minutes, dt2.stime.seconds);
	dt2 = clockKeeper (dt2);
	printf ("Updated date and time is %.2i/%.2i/%.2i %.2i:%.2i:%.2i\n\n", dt2.sdate.month, dt2.sdate.day, dt2.sdate.year, dt2.stime.hour, dt2.stime.minutes, dt2.stime.seconds);
	printf ("Current date and time is %.2i/%.2i/%.2i %.2i:%.2i:%.2i\n", dt2.sdate.month, dt2.sdate.day, dt2.sdate.year, dt2.stime.hour, dt2.stime.minutes, dt2.stime.seconds);
	dt2 = clockKeeper (dt2);
	printf ("Updated date and time is %.2i/%.2i/%.2i %.2i:%.2i:%.2i\n\n", dt2.sdate.month, dt2.sdate.day, dt2.sdate.year, dt2.stime.hour, dt2.stime.minutes, dt2.stime.seconds);
	return 0;
}

struct time timeUpdate (struct time now)
{
	++now.seconds;
	if(now.seconds == 60)
	{
		now.seconds = 0;
		++now.minutes;
		if(now.minutes == 60)
		{
			now.minutes = 0;
			++now.hour;
			if(now.hour == 24)
			{
				now.hour = 0;
			}
		}
	}
return now;
}
int numberOfDays (struct date d)
{
	int days;
	bool isLeapYear (struct date d);
	const int daysPerMonth[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	
	if(isLeapYear && d.month == 2)
	{
		days = 29;
	}
	else
	{
		days = daysPerMonth[d.month -1];
	}
	return days;
}

//function of finding out tomorrow's date
struct date dateUpdate (struct date today)
{
	struct date tomorrow;
	int numberOfDays (struct date today);
	
	if (today.day != numberOfDays(today) )
	{
		tomorrow.day = today.day + 1;
		tomorrow.month = today.month;
		tomorrow.year = today.year;
	}
	else if(today.month == 12)
	{
		tomorrow.day = 1;
		tomorrow.month = 1;
		tomorrow.year = today.year + 1;
	}
	else
	{
		tomorrow.day = 1;
		tomorrow.month = today.month + 1;
		tomorrow.year = today.year;
	}
	return tomorrow;
}
struct dateAndTime clockKeeper (struct dateAndTime dt)
{
	struct time timeUpdate (struct time now);
	struct date dateUpdate (struct date today);

	dt.stime = timeUpdate (dt.stime);

// see if we have to go to the next day

	if (dt.stime.hour == 0 && dt.stime.minutes == 0 && dt.stime.seconds == 0)
	{
		dt.sdate = dateUpdate (dt.sdate);
	}
	return dt;
}

struct dateAndTime clockKeeper (struct dateAndTime dt)
{ 
	struct time timeUpdate (struct time now);
	struct date dateUpdate (struct date today);

	dt.stime = timeUpdate (dt.stime);

// see if we have to go to the next day
	if ( dt.stime.hour == 0 && dt.stime.minutes == 0 && dt.stime.seconds == 0 )
	{
		dt.sdate = dateUpdate (dt.sdate);
	}

	return dt;
}

// Here is a sample main routine and output:
int main (void)
{
	struct dateAndTime dt1 = {{ 12, 31, 2004 }, { 23, 59, 59 }};
	struct dateAndTime dt2 = {{ 2,  28, 2008 }, { 23, 59, 58 }};
	printf ("Current date and time is %.2i/%.2i/%.2i " "%.2i:%.2i:%.2i\n", dt1.sdate.month, dt1.sdate.day, dt1.sdate.year, dt1.stime.hour, dt1.stime.minutes, dt1.stime.seconds);
	dt1 = clockKeeper (dt1);
	printf ("Updated date and time is %.2i/%.2i/%.2i " "%.2i:%.2i:%.2i\n\n", dt1.sdate.month, dt1.sdate.day, dt1.sdate.year, dt1.stime.hour, dt1.stime.minutes, dt1.stime.seconds);
	printf ("Current date and time is %.2i/%.2i/%.2i " "%.2i:%.2i:%.2i\n", dt2.sdate.month, dt2.sdate.day, dt2.sdate.year, dt2.stime.hour, dt2.stime.minutes, dt2.stime.seconds);
	dt2 = clockKeeper (dt2);
	printf("Updated date and time is %.2i/%.2i/%.2i " "%.2i:%.2i:%.2i\n\n", dt2.sdate.month, dt2.sdate.day, dt2.sdate.year, dt2.stime.hour, dt2.stime.minutes, dt2.stime.seconds);
	printf("Current date and time is %.2i/%.2i/%.2i " "%.2i:%.2i:%.2i\n", dt2.sdate.month, dt2.sdate.day, dt2.sdate.year, dt2.stime.hour, dt2.stime.minutes, dt2.stime.seconds);
	dt2 = clockKeeper (dt2);
	printf("Updated date and time is %.2i/%.2i/%.2i " "%.2i:%.2i:%.2i\n\n", dt2.sdate.month, dt2.sdate.day, dt2.sdate.year, dt2.stime.hour, dt2.stime.minutes, dt2.stime.seconds);

	return 0;
}

#include <stdio.h>

struct time
{
	int hour;
	int minutes;
	int seconds;
};

int main (void)
{
	struct time timeDiff (struct time time1, struct time time2);
	struct time time1, time2, diff;
	printf("Enter the time (hh:mm:ss): ");
	scanf("%i:%i:%i", &time1.hour, &time1.minutes, &time1.seconds);
	printf("Enter another time (hh:mm:ss): ");
	scanf("%i:%i:%i", &time2.hour, &time2.minutes, &time2.seconds);
	diff = timeDiff (time1, time2);
	printf("time difference is %.2i:%.2i:%.2i\n", diff.hour, diff.minutes, diff.seconds);
	
	return 0;
}
//3:45:15 - 9:44:03 = 5: 58: 48
struct time timeDiff (struct time time1, struct time time2)
{
	struct time diff;
	int seconds1, seconds2, res;
	seconds1 = time1.hour*3600 + time1.minutes*60 + time1.seconds;
	seconds2 = time2.hour*3600 + time2.minutes*60 + time2.seconds;
	res = seconds1 - seconds2;
	if(res < 0)
	{
		res = -res;
	};
	diff.hour = res / 3600;
	//res -= diff.hour * 3600;
	diff.minutes = res / 60 % 60;
	//res -= diff.minutes * 60;
	diff.seconds = (res % 60)%60;
	return diff;
}







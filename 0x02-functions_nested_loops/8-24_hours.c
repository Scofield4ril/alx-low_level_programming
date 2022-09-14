1 #include "main.h"
2
3 /**
4 * jack_bauer - func that prints every minute of the day of Jack Bauer, starti
5 * n from 00:00 to 23:59, min loop counts mins, while hour loop counts hours
6 * and resets mins
7 * Return: 0
8 */
9 void jack_bauer(void)
10{
11	int hours = 0;
12	int minutes = 0;
13	int hours_reminder;
14	int mins_reminder;
15
16	while (hours <= 23)
17	{
18	while (minutes <= 59)
19	{
20	mins_reminder = minutes % 10;
21	hours_reminder = hours % 10;
22	_putchar(hours / 10 + '0');
23	_putchar(hours_remainder + '0');
24	_putchar(':');
25	_putchar(minutes / 10 + '0');
26	_putchar(mins_remainder + '0');
27	minutes++;
28	_putchar('\n');
29	}
30	hours++;
31	minutes = 0;
32}
33}

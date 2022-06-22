#include <regx52.h>
#define led P2
void delay(unsigned int xms);
int main()
{
	while (1)
	{
		led = 0xfe; // 11111110
		delay(5);
		led = 0xfc; // 11111100
		delay(5);
		led = 0xf9; // 11111001
		delay(5);
		led = 0xf3; // 11110011
		delay(5);
		led = 0xe7; // 11100111
		delay(5);
		led = 0xcf; // 11001111
		delay(5);
		led = 0x9f; // 10011111
		delay(5);
		led = 0x3f; // 00111111
		delay(5);
		led = 0x7f; // 01111111
		delay(5);
	}
}
void delay(unsigned int xms)
{
	unsigned char i, j;
	while (xms)
	{
		i = 2;
		i = 239;
		do
		{
			while (--j)
				;
		} while (--i);
		xms = --xms;
	}
}

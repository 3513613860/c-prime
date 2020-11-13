#include<stdio.h>

int main()
{
	for (int a = 1; a <= 5; a++)
	{
		for (int b = 1; b <= 5; b++)
		{
			for (int c = 1; c <= 5; c++)
			{
				for (int d = 1; d <= 5; d++)
				{
					for (int e = 1; e <= 5; e++)
					{
						if ((a * b * c * d * e) == 120)
						{
							if (((a == 3) + (b == 2))==1 &&\
								((b == 2) + (e == 4))==1 &&\
								((c == 1) + (d == 2))==1 &&\
								((c == 5) + (d == 3))==1 &&\
								((a == 1) + (e == 4))==1)
							{
								printf("A£º%d\n", a);
								printf("B£º%d\n", b);
								printf("C£º%d\n", c);
								printf("D£º%d\n", d);
								printf("E£º%d\n", e);
								break;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
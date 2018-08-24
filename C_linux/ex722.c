/*************************************************************************
	> File Name: ex722.c
	> Author: Alex
	> Mail: jpz20084186@126.com
	> Created Time: Thu 16 Aug 2018 05:35:56 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct rational
{
	int x, y;
} z, z1, z2;


int gcd(int a, int b)
{
	int c = a % b;

	while(c != 0)
	{
		a = b;
		b = c;
		c = a % b;
	}
	
	return b;
}

int rational_P(struct rational z)
{
	int a, b;
	a = z.x / gcd(z.x, z.y);
	b = z.y / gcd(z.x, z.y);
	if(a == 0)
	{
		printf("0\n");
	}
	else if(b == 0)
	{
		printf("error!\n");
	}
	else if(a == b)
	{
		print("1\n");
	}
	else
	{
		printf("&d/%d\n", a, b);
	}

	return 0;
}

struct rational add_rational(struct rational z1, struct rational z2)
{
	z.x = (z1.x * z2.y) + (z2.x * z1.y);
	z.y = z1.y * z2.y;
	return z;
}

struct rational sub_rational(struct rational z1, struct rational z2)
{
	z.x = (z1.x * z2.y) - (z2.x * z1.y);
	z.y = z1.y * z2.y;
	return z;
}

struct rational mul_rational(struct rational z1, struct rational z2)
{
	z.x = z1.x * z2.x;
	z.y = z1.y * z2.y;
	return z;
}

struct rational div_rational(struct rational z1, struct rational z2)
{
	z.x = z1.x * z2.y;
	z.y = z2.x * z1.y;
	return z;
}

int print_rational()
{


}

int make_rational()
{


}

int main(void)
{
	struct rational a = make_rational(1, 8);    /* a=1/8 */
	struct rational b = make_rational(-1, 8);  /* b=-1/8 */
	print_rational(add_rational(a, b));
	print_rational(sub_rational(a, b));
	print_rational(mul_rational(a, b));
	print_rational(div_rational(a, b));

	return  0;
}












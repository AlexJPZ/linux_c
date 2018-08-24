/*************************************************************************
	> File Name: gcd.c
	> Author: Alex
	> Mail: jpz20084186@126.com
	> Created Time: Wed 22 Aug 2018 02:16:35 PM CST
 ************************************************************************/
#include <stdio.h>
#include <stdlib.h>

/* 求最大公约数和最小公倍数                                             */
/************************************************************************/
/* 算法一：辗转相除法，又名欧几里德算法（Euclid）：                     */
/* Algorithm Description:                                               */
/* >1. a%b得余数r;                                                      */
/* >2. 若r=0, 则b即为俩数的最大公约数                                   */
/* >3. 若r!=0, 则a=b.b=r,再回去执行1                                    */

int gcd_Euclid(int a, int b)
{
    int r;    
	while(b != 0)
	{
		r = a % b;
		a = b;
		b = r;
	}
	return a;

#if 0
	int r = a % b;
	while (r != 0)
	{
		a = b;
		b = r;
		r = a % b;
	}
	return b;
#endif
}

/* 算法二：更相减损法                                                   */
/* Algorithm Description:                                               */
/* >1. 若a>b,则a=a-b;                                                   */
/* >2. 若a<b,则b=b-a;                                                   */
/* >3. 若a=b,则a即为俩数的最大公约数；                                  */
/* >4. 若a!=b,则再回去执行1；                                           */

int gcd_MD(int a, int b)
{
	while(a != b)
	{
		if(a > b)
		{
			a -= b;
		}
		else 
		{
			b -= a;
		}
	}
	return a;
}

int main(void)
{
	int m;
	int n;
	printf("Please input two integer number:\n");
	scanf("%d%d", &m, &n);
	printf("The greatest common divisor(Euclid):%d\n", gcd_Euclid(m, n));
	printf("The greatest common divisor(MD):%d\n", gcd_MD(m, n));
	printf("The Least common multiple(Euclid):%d\n", ((m * n) / gcd_Euclid(m, n)));
	exit(0);
}






#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<time.h>
#include "Header.h"

#define M_PI 3.1415926535897932384626433832795

//������� 1
int composeNumber(int *m2, int *m1, int *m0)
{
	return *m2 * 100 + *m1 * 10 + *m0;
}

//������� 2

int overloadFuntcion(int x)
{
	return x * x;
}

int overloadFuntcion(int x, int y)
{
	return x + y;
}

float overloadFuntcion(float x)
{
	return x + x;
}

float overloadFuntcion(float x, float y)
{
	return x + y;
}

//������� 3
int sum(int *x,int *y)
{
	return *x + *y;
}

float mult(float *a, float *b)
{
	return *a**b;
}

//������� 4
void rightTriangle1(float c, float q, float *a, float *b)
{
	float radian = (q*M_PI) / 180;
	*a = c*cos(radian);
	*b = c*sin(radian);
}

//������� 5
void rightTriangle(float *c, float *q, float *a, float *b)
{
	float radian = (*q*M_PI) / 180;
	*a = *c * cos(radian);
	*b = *c * sin(radian);
}

//������� 6

float arithProgAn(float a0, float d, float n)
{
	if (n >= 2)
		return arithProgAn(a0, d, (n - 1)) + d;
	else
		return a0;
}

float arithProgSn(float a0, float d, float n)
{
	if (n >= 1)
	{
		return a0 + arithProgSn(a0, d, (n - 1)) + d * (n - 1);
	}
	else
		return 0;
}

// ������� 7
float geomProgBn(float b0, float q, float n)
{
	if (n == 1)
		return b0;
	else
		return q*geomProgBn(b0, q, (n - 1));
}

float geomProgSn(float b0, float q, float n)
{
	if (n == 1)
		return b0;
	else
		return b0*pow(q, (n-1)) + geomProgSn(b0, q, n - 1);
}


// ������� 8
int maxElementArray(int *mas, int n, int i, int *max)
{
	*max = mas[n - i];
	if (i != 0)
	{
		*max = maxElementArray(mas, n, i - 1, max);
		if (*max < mas[n - i])
			*max = mas[n - i];
	}
	return *max;
}

// ������� 9
int maxIndexArray(int *mas, int n, int i, int *max, int *index)
{

	*max = mas[n - i];
		if (i != 0)
		{
			*max = maxElementArray(mas, n, i - 1, max);
			if (*max < mas[n - i])
				*max = mas[n - i];			
		}

		for (int j = 0; j < n; j++)
		{
			if (mas[j] == *max) *index = j;
		}
	
	return *index;
}

//������� 10
int sumArray(int *mas, int *len)
{
	int sum = 0;
	for (int i = 0; i < *len; i++)
	{
		sum += mas[i];
	}
	
	return sum;
}

//������� 11

int gcd(int x, int y)
{
	/*��������� ������������ ����� ���������� ��������� ������� ���������� 
	����������� ������ �������� ��� ���� ����� �����.
	�������� ������������ �� �����, ��� ��� ���� ����� ����� x � y, �����
	x>y, ��������� � ��� ����� y � x �� ������ y (������� �� ������� x �� y).*/

		/*if (y == 0) return x;
		return gcd(y, x % y);*/

		return y ? gcd(y, x % y) : x;

}

int lcm(int x, int y)
{
	/*���������� ����������� ������ �������� (least common multiplier)
	�������� � ���������� gcd ��������� ������� lcm(x, y) = (x*y)/(gcd(x,y)*/

	return x / gcd(x, y)*y;
}



void fillArrayInteger(int * mas, int len, int *min, int *max)
{
	for (int i = 0; i < len; i++)
		mas[i] = rand() * (*max - *min) / RAND_MAX + *min;
}

void printArray(int * mas, int len)
{
	for (int i = 0; i < len; i++)
		printf("%d  ", mas[i]);
}
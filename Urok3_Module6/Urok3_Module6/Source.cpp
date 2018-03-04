#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<time.h>
#include "Header.h"


#define M_PI 3.1415926535897932384626433832795

//using namespace std;

int sum(int *x, int *y); // Задание 3
float mult(float *a, float *b); // Задание 3
void rightTriangle1(float c, float q, float *a, float *b); // Задание 4
void rightTriangle(float *c, float *q, float *a, float *b); // Задание 5
float arithProgAn(float a0, float d, float n); // Задание 6
float arithProgSn(float a0, float d, float n); // Задание 6
float geomProgBn(float b0, float q, float n); // Задание 7
float geomProgSn(float b0, float q, float n); // Задание 7
int maxElementArray(int *mas, int n, int i, int *max); // Задание 8
int maxIndexArray(int *mas, int n, int i, int *max, int *index); //Задание 9
int sumArray(int *mas, int *len); // Задание 10
int gcd(int x, int y); // Задание 11
int lcm(int x, int y); // Задание 11

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int n;
		do
		{
			printf("Работа содержит 11 заданий.\n");
			printf("Для выхода наберите 0.\n");
			printf("Введите n = ");
			scanf("%d", &n);
		
				switch (n)
				{
					case 1:
					{
						/*1. Напишите функцию int f(int m2, int m1, int m0), в которой заданы значения всех трех параметров по умолчанию.
						Это функция вычисляет и возвращает натуральное число, первая (сотни), вторая (десятки) и третья (единицы) 
						цифры которого равны соответственно m2, m1, m0. Требуется определить функцию так, чтобы после выполнения 
						оператора x=f() значение x равнялось 567.*/

						int x, y, z, number;

						printf("Введите количество сотен: ");
						scanf("%d",&x);
						
						printf("Введите количество десятков: ");
						scanf("%d",&y);
						
						printf("Введите количество единиц: ");
						scanf("%d",&z);
						
						number = composeNumber(&x, &y, &z);

						printf("Введенное Вами число: %d\n", number);
				
						printf("\nЗададим количество сотен равным 5:\n");
						x=5;

						printf("Зададим количество десятков равным 6:\n");
						y=6;

						printf("Зададим количество единиц равным 7:\n");
						z=7;

						number = composeNumber(&x, &y, &z);

						printf("Введенное Вами число: %d\n", number);
						printf("\n");
						system("pause");
						system("cls");
					}break;

					case 2:
					{
						/*2. Напишите несколько функций с одним именем int f(…) и с разными наборами параметров. 
						Продемонстрируйте работу перегруженных функций*/

						int x, y;
						float a, b;

						printf("Введите значения для целых чисел x и y:\n");

						printf("x = ");
						scanf("%d", &x);
						printf("y = ");
						scanf("%d", &y);
						
						printf("Введите значения для вещественных чисел a и b:\n");
						printf("a = ");
						scanf("%f", &a);
						printf("b = ");
						scanf("%f", &b);

						printf("\nint overloadFuntcion(int %d) = %d\n", x, overloadFuntcion(x));
						printf("int overloadFuntcion(int %d, int %d) = %d\n", x, y, overloadFuntcion(x, y));
						printf("float overloadFuntcion(float %f) = %f\n", a, overloadFuntcion(a));
						printf("float overloadFuntcion(float %f, float %f) = %f\n", a, b, overloadFuntcion(a, b));
						
						printf("\n");
						system("pause");
						system("cls");
					}break;

					case 3:
					{
						/*3. Операторы int u=f(3, 4); double v=f(20.5, 10.5); myofs<<”u=”<<u<<” v=”<<v<<endl; дают в результате u=7 v=10 
						(т.е. соответственно сумму и произведение своих параметров). Напишите функции f(…,…).*/
						
						int x, y, z;
						float a, b, c;

							printf("Введите целые числа x и y:\n");
							printf("x = ");
							scanf("%d", &x);
							printf("y = ");
							scanf("%d", &y);

							printf("\nВведите вещественные числа a и b:\n");
							printf("a = ");
							scanf("%f", &a);
							printf("b = ");
							scanf("%f", &b);

								z = sum(&x, &y);
								c = mult(&a, &b);

									printf("\nСумма x+y: u=%d;  произведение a*b: v=%f",z,c);
	
						printf("\n");
						system("pause");
						system("cls");

					}break;

					case 4:
					{
						/*4. Напишите функцию f(double& a, double& b, double c, double q), которая возвращает катеты прямоугольного треугольника, 
						гипотенуза которого равна с, а острый угол q (градусов).  */

						float a, b, c, q, x, y;

						printf("Введите значение гипотенузы с: ");
						scanf("%f", &c);

						printf("Введите значение в градусах острого угла q: ");
						scanf("%f", &q);

						rightTriangle1(c, q, &a, &b);

						x = a;
						y = b;
						
						printf("\n");

						printf("Значение катета а = %f, значение катета b = %f",a,b);
						
						printf("\n");
						system("pause");
						system("cls");

					}break;

					case 5:
					{
						/*5. Напишите функцию f(double* a, double* b, double c, double q), которая возвращает катеты прямоугольного треугольника,
						гипотенуза которого равна с, а острый угол q (градусов).*/
						float a, b, c, q;

						printf("Введите значение гипотенузы с: ");
						scanf("%f", &c);

						printf("Введите значение в градусах острого угла q: ");
						scanf("%f", &q);

						rightTriangle(&c, &q, &a, &b);

						printf("\n");

						printf("Значение катета а = %f, значение катета b = %f", a, b);

						printf("\n");
						system("pause");
						system("cls");
					}break;

					case 6:
					{
						/*6. Даны первый член и разность арифметической прогрессии. Написать рекурсивную функцию для нахождения:
								a.	n-го члена прогрессии;
								b.	суммы n первых членов прогрессии.  */

						float a0, d, an, sn=0, ancheck, sncheck;
						int n;

						printf("Введите первый член арифметической прогрессии a0: ");
						scanf("%f", &a0);
						
						printf("Введите разность арифметической прогрессии d: ");
						scanf("%f", &d);
				
						printf("Введите номер прогрессии n: ");
						scanf("%d", &n);

						an = arithProgAn(a0, d, n);
						sn = arithProgSn(a0, d, n);

						ancheck = a0 + (n - 1)*d;
						sncheck = (2 * a0 + d * (n - 1))*n / 2;

						printf("\nn-ый член арифметической прогрессии an = %f\n",an);
						printf("Сумма n первых членов арифметической прогрессии sn = %f\n", sn);
						printf("\nПроверка: n-ый член арифметической прогрессии: %f\n", ancheck);
						printf("Проверка: сумма n первых членов арифметической прогрессии: %f\n", sncheck);

						printf("\n");
						system("pause");
						system("cls");
					}break;

					case 7:
					{
						/*7. Даны первый член и знаменатель геометрической прогрессии. Написать рекурсивную функцию: 
								a.	нахождения n-го члена прогрессии
								b.	нахождения суммы n первых членов прогрессии */

						float b0, q, bn, sn, bncheck, sncheck;
						int n;

						printf("Введите первый член геометрической прогрессии b0: ");
						scanf("%f", &b0);

						printf("Введите разность геометрической прогрессии q: ");
						scanf("%f", &q);

						printf("Введите номер прогрессии n: ");
						scanf("%d", &n);

						bn = geomProgBn(b0, q, n);
						sn = geomProgSn(b0, q, n);

						bncheck = b0 * pow(q, n - 1);
						sncheck = b0 * (1 - pow(q, n)) / (1 - q);

						printf("\nn-ый член геометрической прогрессии bn: %f\n", bn);
						printf("Сумма n первых членов прогрессии sn: %f\n\n", sn);
						printf("Проверка: n-ый член геометрической прогрессии: %f\n", bncheck);
						printf("Проверка: сумма n первых членов прогрессии: %f\n", sncheck);

						printf("\n");
						system("pause");
						system("cls");
					}break;

					case 8:
					{
						/*8. Написать рекурсивную функцию для вычисления максимального элемента массива из n элементов*/

						int A[10], len = 10, i = 10, maxNumb, minA = 10, maxA = 50, maxElement, a;

						printf("Исходный массив:\n");
						fillArrayInteger(A, len, &minA, &maxA);
						printArray(A, len);

						a = maxElementArray(A, len, i, &maxElement);

						printf("\nМаксимальный элемент массива: %d\n", a);

						system("pause");
						system("cls");
					}break;

					case 9:
					{
						/*9. Написать рекурсивную функцию для вычисления индекса максимального элемента массива из n элементов*/

						int A[10], len = 10, i = 10, minA = 10, maxA = 50, maxElement, maxIndex, a;

						printf("Исходный массив:\n");
						fillArrayInteger(A, len, &minA, &maxA);
						printArray(A, len);

						a = maxIndexArray(A, len, i, &maxElement, &maxIndex);

						printf("\n\nМаксимальный элемент массива: %d\n", maxElement);
						printf("Максимальный индекс массива: %d\n", maxIndex);
						printf("A[%d]=%d\n", maxIndex, maxElement);

						system("pause");
						system("cls");
					}break;

					case 10:
					{
						/*10. Дан массив целых чисел A. Найти суммы положительных и отрицательных элементов массива,
						используя функцию определения суммы*/
						
						int A[5], B[5] = {0}, C[5] = { 0 }, len = 5, minA = -10, maxA = 20, sumPositive = 0, sumNegative = 0;
								
						fillArrayInteger(A, len, &minA, &maxA);
						printf("Исходный массив: ");
						printArray(A, len);

							for (int i = 0; i < len; i++)
							{
								if (A[i] > 0) B[i]=A[i];
								else if (A[i] < 0) C[i] = A[i];
							}
						
							sumPositive = sumArray(B, &len);
							sumNegative = sumArray(C, &len);

							printf("\nСумма положительный элементов массива: %d\n", sumPositive);
							printf("Сумма отрицательных элементов массива: %d\n", sumNegative);
							printf("\n");
						system("pause");
						system("cls");

					}break;

					case 11:
					{
						/*11. Даны два натуральных числа. Найти наименьшее общее кратное этих чисел, 
						используя функцию реализующую алгоритм Евклида. */

						int x, y, gcdn, lcmn;
				
						printf("Введите два натуральных числа x и y (x>y):\n");

						printf("x = ");
						scanf("%d", &x);

						printf("y = ");
						scanf("%d", &y);

							gcdn = gcd(x, y);
							lcmn = lcm(x, y);

							printf("Наибольший Общий Делитель = %d, Наименьшее Общее Кратное = %d", gcdn, lcmn);

						printf("\n");
						system("pause");
						system("cls");
					}break;

				}
		} while (n != 0);



}


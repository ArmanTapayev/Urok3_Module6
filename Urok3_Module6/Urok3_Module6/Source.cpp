#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<time.h>
#include "Header.h"


#define M_PI 3.1415926535897932384626433832795

//using namespace std;

int sum(int *x, int *y); // ������� 3
float mult(float *a, float *b); // ������� 3
void rightTriangle1(float c, float q, float *a, float *b); // ������� 4
void rightTriangle(float *c, float *q, float *a, float *b); // ������� 5
float arithProgAn(float a0, float d, float n); // ������� 6
float arithProgSn(float a0, float d, float n); // ������� 6
float geomProgBn(float b0, float q, float n); // ������� 7
float geomProgSn(float b0, float q, float n); // ������� 7
int maxElementArray(int *mas, int n, int i, int *max); // ������� 8
int maxIndexArray(int *mas, int n, int i, int *max, int *index); //������� 9
int sumArray(int *mas, int *len); // ������� 10
int gcd(int x, int y); // ������� 11
int lcm(int x, int y); // ������� 11

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int n;
		do
		{
			printf("������ �������� 11 �������.\n");
			printf("��� ������ �������� 0.\n");
			printf("������� n = ");
			scanf("%d", &n);
		
				switch (n)
				{
					case 1:
					{
						/*1. �������� ������� int f(int m2, int m1, int m0), � ������� ������ �������� ���� ���� ���������� �� ���������.
						��� ������� ��������� � ���������� ����������� �����, ������ (�����), ������ (�������) � ������ (�������) 
						����� �������� ����� �������������� m2, m1, m0. ��������� ���������� ������� ���, ����� ����� ���������� 
						��������� x=f() �������� x ��������� 567.*/

						int x, y, z, number;

						printf("������� ���������� �����: ");
						scanf("%d",&x);
						
						printf("������� ���������� ��������: ");
						scanf("%d",&y);
						
						printf("������� ���������� ������: ");
						scanf("%d",&z);
						
						number = composeNumber(&x, &y, &z);

						printf("��������� ���� �����: %d\n", number);
				
						printf("\n������� ���������� ����� ������ 5:\n");
						x=5;

						printf("������� ���������� �������� ������ 6:\n");
						y=6;

						printf("������� ���������� ������ ������ 7:\n");
						z=7;

						number = composeNumber(&x, &y, &z);

						printf("��������� ���� �����: %d\n", number);
						printf("\n");
						system("pause");
						system("cls");
					}break;

					case 2:
					{
						/*2. �������� ��������� ������� � ����� ������ int f(�) � � ������� �������� ����������. 
						����������������� ������ ������������� �������*/

						int x, y;
						float a, b;

						printf("������� �������� ��� ����� ����� x � y:\n");

						printf("x = ");
						scanf("%d", &x);
						printf("y = ");
						scanf("%d", &y);
						
						printf("������� �������� ��� ������������ ����� a � b:\n");
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
						/*3. ��������� int u=f(3, 4); double v=f(20.5, 10.5); myofs<<�u=�<<u<<� v=�<<v<<endl; ���� � ���������� u=7 v=10 
						(�.�. �������������� ����� � ������������ ����� ����������). �������� ������� f(�,�).*/
						
						int x, y, z;
						float a, b, c;

							printf("������� ����� ����� x � y:\n");
							printf("x = ");
							scanf("%d", &x);
							printf("y = ");
							scanf("%d", &y);

							printf("\n������� ������������ ����� a � b:\n");
							printf("a = ");
							scanf("%f", &a);
							printf("b = ");
							scanf("%f", &b);

								z = sum(&x, &y);
								c = mult(&a, &b);

									printf("\n����� x+y: u=%d;  ������������ a*b: v=%f",z,c);
	
						printf("\n");
						system("pause");
						system("cls");

					}break;

					case 4:
					{
						/*4. �������� ������� f(double& a, double& b, double c, double q), ������� ���������� ������ �������������� ������������, 
						���������� �������� ����� �, � ������ ���� q (��������).  */

						float a, b, c, q, x, y;

						printf("������� �������� ���������� �: ");
						scanf("%f", &c);

						printf("������� �������� � �������� ������� ���� q: ");
						scanf("%f", &q);

						rightTriangle1(c, q, &a, &b);

						x = a;
						y = b;
						
						printf("\n");

						printf("�������� ������ � = %f, �������� ������ b = %f",a,b);
						
						printf("\n");
						system("pause");
						system("cls");

					}break;

					case 5:
					{
						/*5. �������� ������� f(double* a, double* b, double c, double q), ������� ���������� ������ �������������� ������������,
						���������� �������� ����� �, � ������ ���� q (��������).*/
						float a, b, c, q;

						printf("������� �������� ���������� �: ");
						scanf("%f", &c);

						printf("������� �������� � �������� ������� ���� q: ");
						scanf("%f", &q);

						rightTriangle(&c, &q, &a, &b);

						printf("\n");

						printf("�������� ������ � = %f, �������� ������ b = %f", a, b);

						printf("\n");
						system("pause");
						system("cls");
					}break;

					case 6:
					{
						/*6. ���� ������ ���� � �������� �������������� ����������. �������� ����������� ������� ��� ����������:
								a.	n-�� ����� ����������;
								b.	����� n ������ ������ ����������.  */

						float a0, d, an, sn=0, ancheck, sncheck;
						int n;

						printf("������� ������ ���� �������������� ���������� a0: ");
						scanf("%f", &a0);
						
						printf("������� �������� �������������� ���������� d: ");
						scanf("%f", &d);
				
						printf("������� ����� ���������� n: ");
						scanf("%d", &n);

						an = arithProgAn(a0, d, n);
						sn = arithProgSn(a0, d, n);

						ancheck = a0 + (n - 1)*d;
						sncheck = (2 * a0 + d * (n - 1))*n / 2;

						printf("\nn-�� ���� �������������� ���������� an = %f\n",an);
						printf("����� n ������ ������ �������������� ���������� sn = %f\n", sn);
						printf("\n��������: n-�� ���� �������������� ����������: %f\n", ancheck);
						printf("��������: ����� n ������ ������ �������������� ����������: %f\n", sncheck);

						printf("\n");
						system("pause");
						system("cls");
					}break;

					case 7:
					{
						/*7. ���� ������ ���� � ����������� �������������� ����������. �������� ����������� �������: 
								a.	���������� n-�� ����� ����������
								b.	���������� ����� n ������ ������ ���������� */

						float b0, q, bn, sn, bncheck, sncheck;
						int n;

						printf("������� ������ ���� �������������� ���������� b0: ");
						scanf("%f", &b0);

						printf("������� �������� �������������� ���������� q: ");
						scanf("%f", &q);

						printf("������� ����� ���������� n: ");
						scanf("%d", &n);

						bn = geomProgBn(b0, q, n);
						sn = geomProgSn(b0, q, n);

						bncheck = b0 * pow(q, n - 1);
						sncheck = b0 * (1 - pow(q, n)) / (1 - q);

						printf("\nn-�� ���� �������������� ���������� bn: %f\n", bn);
						printf("����� n ������ ������ ���������� sn: %f\n\n", sn);
						printf("��������: n-�� ���� �������������� ����������: %f\n", bncheck);
						printf("��������: ����� n ������ ������ ����������: %f\n", sncheck);

						printf("\n");
						system("pause");
						system("cls");
					}break;

					case 8:
					{
						/*8. �������� ����������� ������� ��� ���������� ������������� �������� ������� �� n ���������*/

						int A[10], len = 10, i = 10, maxNumb, minA = 10, maxA = 50, maxElement, a;

						printf("�������� ������:\n");
						fillArrayInteger(A, len, &minA, &maxA);
						printArray(A, len);

						a = maxElementArray(A, len, i, &maxElement);

						printf("\n������������ ������� �������: %d\n", a);

						system("pause");
						system("cls");
					}break;

					case 9:
					{
						/*9. �������� ����������� ������� ��� ���������� ������� ������������� �������� ������� �� n ���������*/

						int A[10], len = 10, i = 10, minA = 10, maxA = 50, maxElement, maxIndex, a;

						printf("�������� ������:\n");
						fillArrayInteger(A, len, &minA, &maxA);
						printArray(A, len);

						a = maxIndexArray(A, len, i, &maxElement, &maxIndex);

						printf("\n\n������������ ������� �������: %d\n", maxElement);
						printf("������������ ������ �������: %d\n", maxIndex);
						printf("A[%d]=%d\n", maxIndex, maxElement);

						system("pause");
						system("cls");
					}break;

					case 10:
					{
						/*10. ��� ������ ����� ����� A. ����� ����� ������������� � ������������� ��������� �������,
						��������� ������� ����������� �����*/
						
						int A[5], B[5] = {0}, C[5] = { 0 }, len = 5, minA = -10, maxA = 20, sumPositive = 0, sumNegative = 0;
								
						fillArrayInteger(A, len, &minA, &maxA);
						printf("�������� ������: ");
						printArray(A, len);

							for (int i = 0; i < len; i++)
							{
								if (A[i] > 0) B[i]=A[i];
								else if (A[i] < 0) C[i] = A[i];
							}
						
							sumPositive = sumArray(B, &len);
							sumNegative = sumArray(C, &len);

							printf("\n����� ������������� ��������� �������: %d\n", sumPositive);
							printf("����� ������������� ��������� �������: %d\n", sumNegative);
							printf("\n");
						system("pause");
						system("cls");

					}break;

					case 11:
					{
						/*11. ���� ��� ����������� �����. ����� ���������� ����� ������� ���� �����, 
						��������� ������� ����������� �������� �������. */

						int x, y, gcdn, lcmn;
				
						printf("������� ��� ����������� ����� x � y (x>y):\n");

						printf("x = ");
						scanf("%d", &x);

						printf("y = ");
						scanf("%d", &y);

							gcdn = gcd(x, y);
							lcmn = lcm(x, y);

							printf("���������� ����� �������� = %d, ���������� ����� ������� = %d", gcdn, lcmn);

						printf("\n");
						system("pause");
						system("cls");
					}break;

				}
		} while (n != 0);



}


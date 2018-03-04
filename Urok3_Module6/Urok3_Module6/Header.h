#pragma once

int composeNumber(int *m2, int *m1, int *m0); // ������� 1
int overloadFuntcion(int x); //������� 2
int overloadFuntcion(int x, int y); //������� 2
float overloadFuntcion(float x); //������� 2
float overloadFuntcion(float x, float y); //������� 2
int sum(int *x, int *y); // ������� 3
float mult(float *a, float *b);	// ������� 3
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

void fillArrayInteger(int * mas, int len, int *min, int *max);
void printArray(int *mas, int len);
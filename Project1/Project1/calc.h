#pragma once
// calc.h

#ifndef M_PI // ���� �������� �ʾ�����..
#define M_PI 3.14159265358997323846 // �����ϱ�
#endif

// �Լ� ���� �����ϱ�
double sum(double, double);
double sub(double, double);
double mul(double, double);
double div(double, double);
int rem(int, int);

// �߰� �Լ�
double power(double base, double exponent);
double squareRoot(double num);
double areaOfCircle(double radius);
double circumferenceOfCircle(double radius);
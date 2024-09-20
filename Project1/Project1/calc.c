// calc.c 
#include <stdio.h>
#include <math.h> // M_PI�� ���⿡ �־�� ������ ������..
#include "calc.h" // ū ����ǥ ���

// �� ���
int main(void) {
	double x = 2, y = 0;

	printf("x:%.1f + y:%.1f = %.1f\n", x, y, sum(x, y));  // ���ϱ� ���
	printf("x:%.1f - y:%.1f = %.1f\n", x, y, sub(x, y));  // ���� ���
	printf("x:%.1f * y:%.1f = %.1f\n", x, y, mul(x, y));  // ���ϱ� ���
	printf("x:%.1f / y:%.1f = %.1f\n", x, y, div(x,y));  // ������ ���
	printf("x:%d %% y:%d = %d\n\n", (int)x, (int)y, rem(x, y));  // ������ ���

	// �߰� �Լ� ���
	printf("x: %.1f ^ y: %.1f = %.1f\n",x, y, power(x, y));
	printf("sqrt of x: %.1f = %.1f\n",x,squareRoot(x));
	printf("area of y: %.1f = %.1f\n",y, areaOfCircle(y));
	printf("circ of y: %.1f = %.1f\n",y, circumferenceOfCircle(y));

	return 0;
}

// �Լ� �����ϱ�
double sum(double value1, double value2) { //���ϱ�
	return value1 + value2;
}
double sub(double value1, double value2) { //����
	return value1 - value2;
}
double mul(double value1, double value2) { //���ϱ�
	return value1 * value2;
}
double div(double value1, double value2) { //������
	if (value2 != 0) return value1 / value2;
	else {
		printf("Error: Divede by 0!");
		return 0;
	}
}
int rem(int value1, int value2) { //������
	if (value2 != 0) return value1 % value2;
	else {
		printf("Error: Divide by 0!");
		return 0;
	}
}

// �߰� �Լ� �����ϱ�
double power(double base, double exponent) { //����
	return pow(base, exponent); // pow() �Լ�?? -> <math.h>
}
double squareRoot(double num) { //������
	if (num >= 0) {
		return sqrt(num); // math.h���� �ִ� sqrt() �Լ�
	}
	else {
		printf("Error: Negative number!");
		return -1;
	}
}
double areaOfCircle(double radius) { //�� ����
	return M_PI * radius * radius; // M_PI �����ؾ���
}
double circumferenceOfCircle(double radius) { //�� �ѷ�
	return 2 * M_PI * radius;
}
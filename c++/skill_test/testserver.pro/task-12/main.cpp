/*
 * Вам необходимо разработать функцию, вычисляющую значения углов треугольника 
 * по длинам его сторон. При вызове данной функции должна предоставляться 
 * возможность указывать константы в качестве длин сторон, а возвращаемые 
 * значения должны записываться по определенному адресу в памяти. Какой 
 * прототип из представленных ниже удовлетворяет всем условиям?
 * 1) void CalcAngle(const float& a, const float& b, const float& c, float* alpha, float* beta, float* gamma); (x)
 * 2) void CalcAngle(const float* a, const float* b, const float* c, float* alpha, float* beta, float* gamma);
 * 3) void CalcAngle(float a, float b, float c, const float* alpha, const float* beta, const float* gamma);
 * 4) void CalcAngle(float& a, float& b, float& c, float* alpha, float* beta, float* gamma);
 * 5) void CalcAngle(float& a, float& b, float& c, float& alpha, float& beta, float& gamma);
 */
#include<iostream>
#include<cmath>
using namespace std;
void CalcAngle(const float& a, const float& b, const float& c, float* alpha, float* beta, float* gamma){
	if(!alpha||!beta||!gamma) return;
	*alpha=*beta=*gamma=2.;
	if( (a+b<c) || (b+a<c) || (a+c<b) ) return;
	*alpha = acos((a*a+c*c-b*b)/(2*a*c))*180.0/M_PI;
	*beta  = acos((a*a+b*b-c*c)/(2*a*b))*180.0/M_PI;
	*gamma = acos((b*b+c*c-a*a)/(2*c*b))*180.0/M_PI;
}
int main(){
	float a=6.2, b=3.4, c=5.6;
	float alpha, beta, gamma;
	float *pa=&alpha, *pb=&beta, *pg=&gamma;
	CalcAngle(a, b, c, pa, pb, pg);
	cout<<"Для теругольника с сторонами "<<a<<", "<<b<<", "<<c<<"\n";
	cout<<"Углы равны "<<alpha<<", "<<beta<<", "<<gamma<<"\ns";
	return 0;
}

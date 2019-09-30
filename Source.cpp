#include<iostream>   
#include<chrono>  
#include<iomanip>  
#include<algorithm>   
#include"Header.h"  

using namespace std;

Percent intResult[4];
Percent doubleResult[4];
Percent charResult[4];
Percent llResult[4];
Percent floatResult[4];

double charTime[4];
double intTime[4];
double doubleTime[4];
double floatTime[4];
double llTime[4];
char sign[4] = { '+','-','*','/' };

int int_value = 1;
double double_value = 1;
char char_value = 1;
long long ll_value = 1;
float float_value = 1;

void RunTest()
{
	double timeEmptyCycle = GetTimeEmptyCycle();
	double timeAssigment = (GetTimeOperationAssigment(int_value) - timeEmptyCycle) / 10 / iterations;

	intTime[0] = 1 / ((GetTimeOperationAdd(int_value) - timeEmptyCycle) / 10 / iterations - timeAssigment);
	intTime[1] = 1 / ((GetTimeOperationSubstraction(int_value) - timeEmptyCycle) / 10 / iterations - timeAssigment);
	intTime[2] = 1 / ((GetTimeOperationMultiplication(int_value) - timeEmptyCycle) / 10 / iterations - timeAssigment);
	intTime[3] = 1 / ((GetTimeOperationDiv(int_value) - timeEmptyCycle) / 10 / iterations - timeAssigment);

	doubleTime[0] = 1 / ((GetTimeOperationAdd(double_value) - timeEmptyCycle) / 10 / iterations - timeAssigment);
	doubleTime[1] = 1 / ((GetTimeOperationSubstraction(double_value) - timeEmptyCycle) / 10 / iterations - timeAssigment);
	doubleTime[2] = 1 / ((GetTimeOperationMultiplication(double_value) - timeEmptyCycle) / 10 / iterations - timeAssigment);
	doubleTime[3] = 1 / ((GetTimeOperationDiv(double_value) - timeEmptyCycle) / 10 / iterations - timeAssigment);

	charTime[0] = 1 / ((GetTimeOperationAdd(char_value) - timeEmptyCycle) / 10 / iterations - timeAssigment);
	charTime[1] = 1 / ((GetTimeOperationSubstraction(char_value) - timeEmptyCycle) / 10 / iterations - timeAssigment);
	charTime[2] = 1 / ((GetTimeOperationMultiplication(char_value) - timeEmptyCycle) / 10 / iterations - timeAssigment);
	charTime[3] = 1 / ((GetTimeOperationDiv(char_value) - timeEmptyCycle) / 10 / iterations - timeAssigment);

	floatTime[0] = 1 / ((GetTimeOperationAdd(float_value) - timeEmptyCycle) / 10 / iterations - timeAssigment);
	floatTime[1] = 1 / ((GetTimeOperationSubstraction(float_value) - timeEmptyCycle) / 10 / iterations - timeAssigment);
	floatTime[2] = 1 / ((GetTimeOperationMultiplication(float_value) - timeEmptyCycle) / 10 / iterations - timeAssigment);
	floatTime[3] = 1 / ((GetTimeOperationDiv(float_value) - timeEmptyCycle) / 10 / iterations - timeAssigment);

	llTime[0] = 1 / ((GetTimeOperationAdd(ll_value) - timeEmptyCycle) / 10 / iterations - timeAssigment);
	llTime[1] = 1 / ((GetTimeOperationSubstraction(ll_value) - timeEmptyCycle) / 10 / iterations - timeAssigment);
	llTime[2] = 1 / ((GetTimeOperationMultiplication(ll_value) - timeEmptyCycle) / 10 / iterations - timeAssigment);
	llTime[3] = 1 / ((GetTimeOperationDiv(ll_value) - timeEmptyCycle) / 10 / iterations - timeAssigment);

	GetPercent();
	Result();
}

template < typename T>

double GetTimeOperationAssigment(T a) // OPERATION =  
{
	a = 0;
	T b = 1;
	chrono::duration <double> duration;
	auto begin = chrono::system_clock::now();

	for (int i = 1; i <= iterations; i++)
	{
		a = b;
		a = b;
		a = b;
		a = b;
		a = b;
		a = b;
		a = b;
		a = b;
		a = b;
		a = b;
	}

	duration = chrono::system_clock::now() - begin;
	return duration.count();
}


double GetTimeEmptyCycle() // OPERATION for()  
{
	chrono::duration<double> duration;
	auto begin = chrono::system_clock::now();

	for (int i = 1; i <= iterations; i++)
	{
	}

	duration = chrono::system_clock::now() - begin;
	return duration.count();
}


template < typename T>

double GetTimeOperationAdd(T a) //OPERATION +  
{
	a = 0;
	T b = 1;

	chrono::duration<double> duration;
	auto begin = chrono::system_clock::now();

	for (int i = 1; i <= iterations; i++)
	{
		a += b;
		a += b;
		a += b;
		a += b;
		a += b;
		a += b;
		a += b;
		a += b;
		a += b;
		a += b;
	}

	duration = chrono::system_clock::now() - begin;
	return duration.count();
}

template < typename T>

double GetTimeOperationSubstraction(T a) //OPERATION -  
{
	a = 1e9;
	T b = 1;

	chrono::duration<double> duration;
	auto begin = chrono::system_clock::now();

	for (int i = 1; i <= iterations; i++)
	{
		a -= b;
		a -= b;
		a -= b;
		a -= b;
		a -= b;
		a -= b;
		a -= b;
		a -= b;
		a -= b;
		a -= b;
	}

	duration = chrono::system_clock::now() - begin;
	return duration.count();
}


template < typename T>

double GetTimeOperationMultiplication(T a) //OPERATION *  
{
	a = 1;
	T b = 2;

	chrono::duration<double> duration;
	auto begin = chrono::system_clock::now();

	for (int i = 1; i <= iterations; i++)
	{
		a *= b;
		a *= b;
		a *= b;
		a *= b;
		a *= b;
		a *= b;
		a *= b;
		a *= b;
		a *= b;
		a *= b;
	}

	duration = chrono::system_clock::now() - begin;
	return duration.count();
}


template < typename T>

double GetTimeOperationDiv(T a) //OPERATION /  
{
	a = 0;
	T b = 1;

	chrono::duration<double> duration;
	auto begin = chrono::system_clock::now();

	for (int i = 1; i <= iterations; i++)
	{
		a /= b;
		a /= b;
		a /= b;
		a /= b;
		a /= b;
		a /= b;
		a /= b;
		a /= b;
		a /= b;
		a /= b;
	}

	duration = chrono::system_clock::now() - begin;
	return duration.count();
}

void Result() //19 14 26 36 17  
{
	cout << "|-------------------|--------------|--------------------------|------------------------------------|-----------------|" << '\n';
	cout << "|" << setw(14) << "OPERATION" << setw(6) << "|" << setw(9) << "TYPE" << setw(6) << "|" << setw(18) << "OP/PER/SEC" << setw(9)
		<< "|" << setw(20) << "X...X" << setw(17) << "|" << setw(12) << "PERCENT" << setw(6) << "|" << '\n';
	cout << "|-------------------|--------------|--------------------------|------------------------------------|-----------------|" << '\n';

	for (int i = 0; i <= 3; i++) //INT   
	{
		cout << "|" << setw(10) << sign[i] << setw(10) << "|" << setw(8) << "int" << setw(7) << "|" << setw(18) << intTime[i] << setw(9) << "|"
			<< setw(intResult[i].p * 36 / 100) << intResult[i].X << setw(37 - (intResult[i].p * 36 / 100)) << "|" << setw(9) << intResult[i].p << setw(9) << "|" << '\n';
	}

	cout << "|-------------------|--------------|--------------------------|------------------------------------|-----------------|" << '\n';

	for (int i = 0; i <= 3; i++) //CHAR   
	{
		cout << "|" << setw(10) << sign[i] << setw(10) << "|" << setw(9) << "char" << setw(6) << "|" << setw(18) << charTime[i] << setw(9) << "|"
			<< setw(charResult[i].p * 36 / 100) << charResult[i].X << setw(37 - (charResult[i].p * 36 / 100)) << "|" << setw(9) << charResult[i].p << setw(9) << "|" << '\n';
	}

	cout << "|-------------------|--------------|--------------------------|------------------------------------|-----------------|" << '\n';

	for (int i = 0; i <= 3; i++) // LONG LONG    
	{
		cout << "|" << setw(10) << sign[i] << setw(10) << "|" << setw(12) << "long long" << setw(3) << "|" << setw(18) << llTime[i] << setw(9) << "|"
			<< setw(llResult[i].p * 36 / 100) << llResult[i].X << setw(37 - (llResult[i].p * 36 / 100)) << "|" << setw(9) << llResult[i].p << setw(9) << "|" << '\n';;
	}

	cout << "|-------------------|--------------|--------------------------|------------------------------------|-----------------|" << '\n';

	for (int i = 0; i <= 3; i++) //DOUBLE   
	{
		cout << "|" << setw(10) << sign[i] << setw(10) << "|" << setw(10) << "double" << setw(5) << "|" << setw(18) << doubleTime[i] << setw(9) << "|"
			<< setw(doubleResult[i].p * 36 / 100) << doubleResult[i].X << setw(37 - (doubleResult[i].p * 36 / 100)) << "|" << setw(9) << doubleResult[i].p << setw(9) << "|" << '\n';;
	}

	cout << "|-------------------|--------------|--------------------------|------------------------------------|-----------------|" << '\n';

	for (int i = 0; i <= 3; i++) //FLOAT   
	{
		cout << "|" << setw(10) << sign[i] << setw(10) << "|" << setw(9) << "float" << setw(6) << "|" << setw(18) << floatTime[i] << setw(9) << "|"
			<< setw(floatResult[i].p * 36 / 100) << floatResult[i].X << setw(37 - (floatResult[i].p * 36 / 100)) << "|" << setw(9) << floatResult[i].p << setw(9) << "|" << '\n';
	}

	cout << "|-------------------|--------------|--------------------------|------------------------------------|-----------------|" << '\n';
}

void GetPercent()
{
	double mx = 0;
	for (int i = 0; i < 4; i++)
	{
		mx = max(mx, max(intTime[i], max(doubleTime[i], max(charTime[i], max(llTime[i], floatTime[i])))));
	}

	for (int i = 0; i < 4; i++)
	{
		intResult[i].p = intTime[i] / mx * 100;
		llResult[i].p = llTime[i] / mx * 100;
		charResult[i].p = charTime[i] / mx * 100;
		doubleResult[i].p = doubleTime[i] / mx * 100;
		floatResult[i].p = floatTime[i] / mx * 100;
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 1; j <= intResult[i].p * 36 / 100; j++)
			intResult[i].X += 'X';
		for (int j = 1; j <= charResult[i].p * 36 / 100; j++)
			charResult[i].X += 'X';
		for (int j = 1; j <= llResult[i].p * 36 / 100; j++)
			llResult[i].X += 'X';
		for (int j = 1; j <= doubleResult[i].p * 36 / 100; j++)
			doubleResult[i].X += 'X';
		for (int j = 1; j <= floatResult[i].p * 36 / 100; j++)
			floatResult[i].X += 'X';
	}
}

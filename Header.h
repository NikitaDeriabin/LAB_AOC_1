#pragma once
using namespace std;


struct Percent
{
	string X = "";
	int p = 0;
};

const int iterations = 1e7;
const int X = 36;

void RunTest();
double GetTimeEmptyCycle();
template<typename T>
double GetTimeOperationAssigment(T a);
template<typename T>
double GetTimeOperationAdd(T a);
template<typename T>
double GetTimeOperationSubstraction(T a);
template<typename T>
double GetTimeOperationMultiplication(T a);
template<typename T>
double GetTimeOperationDiv(T a);
void Result();
void GetPercent();

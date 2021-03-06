/*
	File name: arithmeticOp.cc
	Author: Geun-Hyung Kim

*/
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int testVarA = 10, testVarB = 20, testVarC = 30, testVarD =40;
	float resultVarA = 0.1, resultVarB = 0.2, resultVarC = 0.3;


	cout << "resultVarA: " << resultVarA << endl;
	resultVarB = testVarA / testVarC;				// 정수 / 정수
	resultVarC = testVarA / (float)testVarC;		// 정수 / 실수 
	cout << "resultVarB: " << resultVarB << endl;
	cout << "resultVarC: " << resultVarC << endl;
	cout << "나머지 연산 (30%4): " << testVarC % 4 << endl;  // 결과: 2
	cout << "나머지 연산 (10%6): " << testVarA % 6 << endl;  // 결과: 4

	return 0;
}

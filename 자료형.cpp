#include <iostream>
#include <stdio.h>
#include <climits> 	//
using namespace std;

int main(){
	
	int n_int = INT_MAX;
	int m_int = INT_MIN;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long m_long = LONG_MIN;
	long long n_llong = LLONG_MAX;
	long long m_llong = LLONG_MIN;
	short m_short = SHRT_MIN;
	
	cout << "int is " << sizeof n_int << " byte." << endl;
	cout << "maximum is " << n_int << endl ;
	cout << "minimun is "  << m_int << endl ;
	cout << "short is " << sizeof n_short << " byte." << endl;
	cout << "maximum is " << n_short << endl;
	cout << "minimum is "  << m_short << endl;
	cout << "long is "  << sizeof n_long << " byte." << endl;
	cout << "maximum is " << n_long <<endl;
	cout<<"minimum is "<<m_long<<endl;
	cout << "long long is " << sizeof n_llong << " byte." << endl;
	cout << "maximum is " << n_llong << endl;
	cout << "minimum is " << m_llong << endl;
	printf("minimun is %d",m_llong);
	
	float a = 3.141592;
	int b =3.141592;
	cout << endl;
	cout << a << " " << b << endl;
	
	return 0;
}
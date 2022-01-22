#include <iostream>
#include <stdio.h>
using namespace std;
/* function to reverse digits of num*/
int reversDigits(int num)
{
int reverse_num = 0;
	while (num > 0) {
		reverse_num = reverse_num * 10 + num % 10;
		num = num / 10;
	}
	return reverse_num;
}

/*reversDigits*/
int main()
{
int num = 1234;
	cout << "Reverse of no. is " << reversDigits(num);
	getchar();
	return 0;
}

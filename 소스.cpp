#include<iostream>
using namespace std;

int addArray(int a[], int size);
void makeDouble(int a[], int size);

int main()
{
	cout << "2020305039 유하영" << endl;
	int n[] = { 1,2,3,4,5 };
	int sum = addArray(n, 5);
	cout << "배열 n의 합은 " << sum << "입니다.\n";
	
	makeDouble(n, 5);
	int i;
	for (i = 0; i < 5; i++)
		cout << n[i] << ' ';
	cout << '\n';

}
int addArray(int a[], int size)
{
	int i, sum = 0;
	for (i = 0; i < size; i++)
		sum += a[i];
	return sum;
}
void makeDouble(int a[], int size)
{
	int i;
	for (i = 0; i < size;i++)
		a[i] *= 2;
}
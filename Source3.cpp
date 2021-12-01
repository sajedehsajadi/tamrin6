#include<iostream>
#include<conio.h>
using namespace std;
int binarysearch(int low, int high, int x, int a[])
{
	int mid;
	if (low > high)
		return (-1);
	else
	{
		mid = (low + high) / 2;
		if (x == a[mid])
			return mid;
		else if (x < a[mid]) {
			return binarysearch(low, mid-1, x, a);
			high = mid - 1;
		}
		else {
			return binarysearch(mid+1, high, x, a);
			low = mid + 1;
		}
	}
}
int main()
{
	int i, x, z, l = 0, h = 10, a[10];
	cout << "Enter 10 numbers:" << '\n';
	for (i = 0; i < 10; i++)
	{
		cout << "number " << i + 1 << " :";
		cin >> a[i];
	}
	cout << "Enter the number Search" << endl;
	cin >> x;
	z = binarysearch(l, h, x, a);
	if (z == (-1))
		cout << "not found!!";
	else
		cout << "The place :" << z + 1;
	return 0;
}
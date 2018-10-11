#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <ctime>
#include <largeint.h>
#include <algorithm>

using namespace std;

void MSort(int arr[], int l, int r)
{
	if (l < r)
	{
		int m = l + (r - l) / 2;
		MSort(arr, l, m);
		MSort(arr, m + 1, r);
		MAlgo(arr, l, m, r);
	}
}

int * Random(int SIZE) {
	srand(time(NULL));
	int * Arr = new int[SIZE];
	for (int i = 0; i<SIZE; i++) {
		Arr[i] = rand() % 100 + 1;
	}
	return Arr;

void BubbleAlgo(int * x, int SIZE) {
	for (int i = SIZE - 1; i >= 1; i--) {
		for (int j = 0; j <= i - 1; j++) {
			if (x[j]>x[j + 1]) {
				SwapAlgo(&x[j], &x[j + 1]);
			}
		}
	}
}

void MAlgo(int a[], int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;
	int L[n1], R[n2];
	for (i = 0; i < n1; i++)
		L[i] = a[l + i];
	for (j = 0; j < n2; j++)
		R[j] = a[m + 1 + j];
	i = 0;
	j = 0;
	k = l;
	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j])
		{
			a[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}
	while (i < n1)
	{
		arr[k] = L[i];
		i++;
		k++;
	}
	while (j < n2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
}

void SwapAlgo(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void SelectAlgo(int * a, int SIZE) {
	for (int i = SIZE - 1; i >= 0; i--) {
		int MAX = i;
		for (int j = 0; j <= i - 1; j++) {
			if (a[j]>a[MAX]) {
				MAX = j;
			}
		}
		SwapAlgo(&a[i], &a[MAX]);
	}
}

void InsertAlgo(int * a, int SIZE) {
	for (int i = 1; i <= SIZE - 1; i++) {
		int key = a[i];
		int j = i - 1;
		while (j >= 0 && a[j]>key) {
			a[j + 1] = a[j];
			j = j - 1;
		}
		a[j + 1] = key;
	}
}



}

int main()
{
	int a[5] = { 2,3,1,4,0 };
	sort(a, a + 5, greater<int>());
	cout << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << " " << a[4] << endl;

	int* x = new int[100];
	x = Random(100);
	LARGE_INTEGER frequency;
	LARGE_INTEGER t1, t2;
	double elapsedTime;
	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&t1);
	BubbleAlgo(x, 100);
	QueryPerformanceCounter(&t2);
	time= (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
	cout << "AVG of BubbleAlgo sort on array of 100: " << time<< endl << endl;

	x = Random(100);
	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&t1);
	SelectAlgo(x, 100);
	QueryPerformanceCounter(&t2);
	time= (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
	cout << "AVG of SelectAlgo sort on array of 100: " << time<< endl << endl;

	x = Random(100);
	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&t1);
	InsertAlgo(x, 100);
	QueryPerformanceCounter(&t2);
	time= (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
	cout << "AVG of InsertAlgo sort on array of 100: " << time<< endl << endl;

	x = Random(100);
	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&t1);
	MSort(x, 0, 99);
	QueryPerformanceCounter(&t2);
	time= (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
	cout << "AVG of MAlgo sort on array of 100: " << time<< endl << endl;

	int * y = new int[1000];
	y = Random(1000);
	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&t1);
	BubbleAlgo(y, 1000);
	QueryPerformanceCounter(&t2);
	time= (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
	cout << "AVG of BubbleAlgo sort on array of 1000: " << time<< endl << endl;

	y = Random(1000);
	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&t1);
	SelectAlgo(y, 1000);
	QueryPerformanceCounter(&t2);
	time= (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
	cout << "AVG of SelectAlgo sort on array of 1000: " << time<< endl << endl;

	y = Random(1000);
	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&t1);
	InsertAlgo(y, 1000);
	QueryPerformanceCounter(&t2);
	time= (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
	cout << "AVG of InsertAlgo sort on array of 1000: " << time<< endl << endl;

	y = Random(1000);
	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&t1);
	MSort(y, 0, 999);
	QueryPerformanceCounter(&t2);
	time= (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
	cout << "AVG of MAlgo sort on array of 1000: " << time<< endl << endl;

	int * z = new int[10000];
	z = Random(10000);
	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&t1);
	BubbleAlgo(z, 10000);
	QueryPerformanceCounter(&t2);
	time= (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
	cout << "AVG of BubbleAlgo sort on array of 10000: " << time<< endl << endl;

	z = Random(10000);
	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&t1);
	SelectAlgo(z, 10000);
	QueryPerformanceCounter(&t2);
	time= (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
	cout << "AVG of SelectAlgo sort on array of 10000: " << time<< endl << endl;

	z = Random(10000);
	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&t1);
	InsertAlgo(z, 10000);
	QueryPerformanceCounter(&t2);
	time= (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
	cout << "AVG of InsertAlgo sort on array of 10000: " << time<< endl << endl;

	z = Random(10000);
	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&t1);
	MSort(z, 0, 9999);
	QueryPerformanceCounter(&t2);
	time= (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
	cout << "AVG of MAlgo sort on array of 10000: " << time<< endl << endl;

	int * w = new int[100000];
	w = Random(100000);
	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&t1);
	BubbleAlgo(w, 100000);
	QueryPerformanceCounter(&t2);
	time= (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
	cout << "AVG of BubbleAlgo sort on array of 100000: " << time<< endl << endl;

	w = Random(100000);
	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&t1);
	SelectAlgo(w, 100000);
	QueryPerformanceCounter(&t2);
	time= (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
	cout << "AVG of SelectAlgo sort on array of 100000: " << time<< endl << endl;

	w = Random(100000);
	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&t1);
	InsertAlgo(w, 100000);
	QueryPerformanceCounter(&t2);
	time= (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
	cout << "AVG of InsertAlgo sort on array of 100000: " << time<< endl << endl;

	w = Random(100000);
	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&t1);
	MSort(w, 0, 99999);
	QueryPerformanceCounter(&t2);
	time= (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
	cout << "AVG of MAlgo sort on array of 100000: " << time<< endl << endl;

	int * v = new int[1000000];
	v = Random(1000000);
	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&t1);
	BubbleAlgo(v, 1000000);
	QueryPerformanceCounter(&t2);
	time= (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
	cout << "AVG of BubbleAlgo sort on array of 1000000: " << time<< endl << endl;

	v = Random(1000000);
	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&t1);
	SelectAlgo(v, 1000000);
	QueryPerformanceCounter(&t2);
	time= (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
	cout << "AVG of SelectAlgo sort on array of 1000000: " << time<< endl << endl;

	v = Random(1000000);
	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&t1);
	InsertAlgo(v, 1000000);
	QueryPerformanceCounter(&t2);
	time= (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
	cout << "AVG of InsertAlgo sort on array of 1000000: " << time<< endl << endl;

	v = Random(1000000);
	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&t1);
	MSort(v, 0, 999999);
	QueryPerformanceCounter(&t2);
	time= (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
	cout << "AVG of MAlgo sort on array of 1000000: " << time<< endl << endl;










	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&t1);
	BubbleAlgo(x, 100);
	QueryPerformanceCounter(&t2);
	time= (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
	cout << "BEST of BubbleAlgo sort on array of 100: " << time<< endl << endl;

	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&t1);
	SelectAlgo(x, 100);
	QueryPerformanceCounter(&t2);
	time= (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
	cout << "BEST of SelectAlgo sort on array of 100: " << time<< endl << endl;

	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&t1);
	InsertAlgo(x, 100);
	QueryPerformanceCounter(&t2);
	time= (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
	cout << "BEST of InsertAlgo sort on array of 100: " << time<< endl << endl;

	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&t1);
	MSort(x, 0, 99);
	QueryPerformanceCounter(&t2);
	time= (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
	cout << "BEST of MAlgo sort on array of 100: " << time<< endl << endl;

	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&t1);
	BubbleAlgo(y, 1000);
	QueryPerformanceCounter(&t2);
	time= (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
	cout << "BEST of BubbleAlgo sort on array of 1000: " << time<< endl << endl;

	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&t1);
	SelectAlgo(y, 1000);
	QueryPerformanceCounter(&t2);
	time= (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
	cout << "BEST of SelectAlgo sort on array of 1000: " << time<< endl << endl;

	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&t1);
	InsertAlgo(y, 1000);
	QueryPerformanceCounter(&t2);
	time= (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
	cout << "BEST of InsertAlgo sort on array of 1000: " << time<< endl << endl;

	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&t1);
	MSort(y, 0, 999);
	QueryPerformanceCounter(&t2);
	time= (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
	cout << "BEST of MAlgo sort on array of 1000: " << time<< endl << endl;

	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&t1);
	BubbleAlgo(z, 10000);
	QueryPerformanceCounter(&t2);
	time= (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
	cout << "BEST of BubbleAlgo sort on array of 10000: " << time<< endl << endl;

	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&t1);
	SelectAlgo(z, 10000);
	QueryPerformanceCounter(&t2);
	time= (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
	cout << "BEST of SelectAlgo sort on array of 10000: " << time<< endl << endl;

	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&t1);
	InsertAlgo(z, 10000);
	QueryPerformanceCounter(&t2);
	time= (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
	cout << "BEST of InsertAlgo sort on array of 10000: " << time<< endl << endl;

	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&t1);
	MSort(z, 0, 9999);
	QueryPerformanceCounter(&t2);
	time= (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
	cout << "BEST of MAlgo sort on array of 10000: " << time<< endl << endl;

	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&t1);
	BubbleAlgo(w, 100000);
	QueryPerformanceCounter(&t2);
	time= (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
	cout << "BEST of BubbleAlgo sort on array of 100000: " << time<< endl << endl;

	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&t1);
	SelectAlgo(w, 100000);
	QueryPerformanceCounter(&t2);
	time= (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
	cout << "BEST of SelectAlgo sort on array of 100000: " << time<< endl << endl;

	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&t1);
	InsertAlgo(w, 100000);
	QueryPerformanceCounter(&t2);
	time= (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
	cout << "BEST of InsertAlgo sort on array of 100000: " << time<< endl << endl;

	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&t1);
	MSort(w, 0, 99999);
	QueryPerformanceCounter(&t2);
	time= (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
	cout << "BEST of MAlgo sort on array of 100000: " << time<< endl << endl;

	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&t1);
	BubbleAlgo(v, 1000000);
	QueryPerformanceCounter(&t2);
	time= (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
	cout << "BEST of BubbleAlgo sort on array of 1000000: " << time<< endl << endl;

	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&t1);
	SelectAlgo(v, 1000000);
	QueryPerformanceCounter(&t2);
	time= (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
	cout << "BEST of SelectAlgo sort on array of 1000000: " << time<< endl << endl;

	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&t1);
	InsertAlgo(v, 1000000);
	QueryPerformanceCounter(&t2);
	time= (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
	cout << "BEST of InsertAlgo sort on array of 1000000: " << time<< endl << endl;

	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&t1);
	MSort(v, 0, 999999);
	QueryPerformanceCounter(&t2);
	time= (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
	cout << "BEST of MAlgo sort on array of 1000000: " << time<< endl << endl;









	sort(x, x + 100, greater<int>());
	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&t1);
	BubbleAlgo(x, 100);
	QueryPerformanceCounter(&t2);
	time= (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
	cout << "worst of BubbleAlgo sort on array of 100: " << time<< endl << endl;

	sort(x, x + 100, greater<int>());
	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&t1);
	SelectAlgo(x, 100);
	QueryPerformanceCounter(&t2);
	time= (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
	cout << "worst of SelectAlgo sort on array of 100: " << time<< endl << endl;

	sort(x, x + 100, greater<int>());
	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&t1);
	InsertAlgo(x, 100);
	QueryPerformanceCounter(&t2);
	time= (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
	cout << "worst of InsertAlgo sort on array of 100: " << time<< endl << endl;

	sort(x, x + 100, greater<int>());
	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&t1);
	MSort(x, 0, 99);
	QueryPerformanceCounter(&t2);
	time= (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
	cout << "worst of MAlgo sort on array of 100: " << time<< endl << endl;

	sort(y, y + 1000, greater<int>());
	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&t1);
	BubbleAlgo(y, 1000);
	QueryPerformanceCounter(&t2);
	time= (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
	cout << "worst of BubbleAlgo sort on array of 1000: " << time<< endl << endl;

	sort(y, y + 1000, greater<int>());
	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&t1);
	SelectAlgo(y, 1000);
	QueryPerformanceCounter(&t2);
	time= (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
	cout << "worst of SelectAlgo sort on array of 1000: " << time<< endl << endl;

	sort(y, y + 1000, greater<int>());
	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&t1);
	InsertAlgo(y, 1000);
	QueryPerformanceCounter(&t2);
	time= (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
	cout << "worst of InsertAlgo sort on array of 1000: " << time<< endl << endl;

	sort(y, y + 1000, greater<int>());
	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&t1);
	MSort(y, 0, 999);
	QueryPerformanceCounter(&t2);
	time= (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
	cout << "worst of MAlgo sort on array of 1000: " << time<< endl << endl;

	sort(z, z + 10000, greater<int>());
	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&t1);
	BubbleAlgo(z, 10000);
	QueryPerformanceCounter(&t2);
	time= (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
	cout << "worst of BubbleAlgo sort on array of 10000: " << time<< endl << endl;

	sort(z, z + 10000, greater<int>());
	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&t1);
	SelectAlgo(z, 10000);
	QueryPerformanceCounter(&t2);
	time= (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
	cout << "worst of SelectAlgo sort on array of 10000: " << time<< endl << endl;

	sort(z, z + 10000, greater<int>());
	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&t1);
	InsertAlgo(z, 10000);
	QueryPerformanceCounter(&t2);
	time= (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
	cout << "worst of InsertAlgo sort on array of 10000: " << time<< endl << endl;

	sort(z, z + 10000, greater<int>());
	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&t1);
	MSort(z, 0, 9999);
	QueryPerformanceCounter(&t2);
	time= (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
	cout << "worst of MAlgo sort on array of 10000: " << time<< endl << endl;

	sort(w, w + 100000, greater<int>());
	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&t1);
	BubbleAlgo(w, 100000);
	QueryPerformanceCounter(&t2);
	time= (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
	cout << "worst of BubbleAlgo sort on array of 100000: " << time<< endl << endl;

	sort(w, w + 100000, greater<int>());
	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&t1);
	SelectAlgo(w, 100000);
	QueryPerformanceCounter(&t2);
	time= (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
	cout << "worst of SelectAlgo sort on array of 100000: " << time<< endl << endl;

	sort(w, w + 100000, greater<int>());
	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&t1);
	InsertAlgo(w, 100000);
	QueryPerformanceCounter(&t2);
	time= (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
	cout << "worst of InsertAlgo sort on array of 100000: " << time<< endl << endl;

	sort(w, w + 100000, greater<int>());
	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&t1);
	MSort(w, 0, 99999);
	QueryPerformanceCounter(&t2);
	time= (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
	cout << "worst of MAlgo sort on array of 100000: " << time<< endl << endl;

	sort(v, v + 1000000, greater<int>());
	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&t1);
	BubbleAlgo(v, 1000000);
	QueryPerformanceCounter(&t2);
	time= (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
	cout << "worst of BubbleAlgo sort on array of 1000000: " << time<< endl << endl;

	sort(v, v + 1000000, greater<int>());
	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&t1);
	SelectAlgo(v, 1000000);
	QueryPerformanceCounter(&t2);
	time= (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
	cout << "worst of SelectAlgo sort on array of 1000000: " << time<< endl << endl;

	sort(v, v + 1000000, greater<int>());
	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&t1);
	InsertAlgo(v, 1000000);
	QueryPerformanceCounter(&t2);
	time= (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
	cout << "worst of InsertAlgo sort on array of 1000000: " << time<< endl << endl;

	sort(v, v + 1000000, greater<int>());
	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&t1);
	MSort(v, 0, 999999);
	QueryPerformanceCounter(&t2);
	time= (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
	cout << "worst of MAlgo sort on array of 1000000: " << time<< endl << endl;
}

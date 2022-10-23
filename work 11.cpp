#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	//series 1
	/*double sum = 0;
	int i = 1;
	double x;
	while (i <= 10) {
		cin >> x;
		sum = sum + x;
		i += 1;
	}
	cout << sum << endl;*/
	//series 2
	/*double sum = 1;
	int i = 1;
	double x;
	while (i <= 10) {
		cin >> x;
		sum = sum * x;
		i += 1;
	}
	cout << sum << endl;*/
	//series 3
	/*double sum = 0;
	int i = 1;
	double x;
	while (i <= 10) {
		cin >> x;
		sum = sum + x / 10;
		i += 1;
	}
	cout << sum << endl;*/
	//series 4
	/*double sum = 0, ymn = 1;
	int n;
	double vesh;
	cin >> n;
	for (int i = 1; i <= n; i++){
		cin >> vesh;
		sum = sum + vesh;
		ymn = ymn * vesh;
	}
	cout << sum << " " << ymn << endl;*/
	//series 5
	/*int n, sum = 0;
	double vesh;
	cin >> n;
	for (int i = 1; i <= n; i+= 1) {
		cin >> vesh;
		cout << (int)vesh << endl;
		sum = sum + vesh;	
	}
	cout << sum << endl;*/
	//series 6
	/*int n;
	double vesh, sum = 1;
	cin >> n;
	for (int i = 1; i <= n; i += 1) {
		cin >> vesh;
		cout << vesh-(int)vesh << endl;
		sum = sum * (vesh - (int)vesh) * (-1);
	}
	cout << sum << endl;*/
	return 0;
}
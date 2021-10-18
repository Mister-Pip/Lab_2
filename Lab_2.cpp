#include <iostream>
#include <vector>
using namespace std;

int main() {		
vector <int> a = {2, 3, 4, 6, 9, 10, 12, 15, 17, 18, 20, 22, 25};
int n = a.size(), check = 24;

/*
На случай, если придется заполнять вектор через консоль
int n, check;
cin >> n >> check;
for (i = 0; i < n; i++) {
	cin >> a[i];
}
*/

for (int c = 0; c < n - 1; c++) {
	for (int i = 1; i < n; i++) {
		if (a[c] + a[c + i] == check) {
		cout << a[c] << ", " << a[c + i];
		cout << endl;
		}
	}
}

// Результат выполнения
// 2, 22
// 4, 20
// 6, 18
// 9, 15
	return 0;
}
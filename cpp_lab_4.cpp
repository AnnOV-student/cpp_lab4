#include <iostream>
using namespace std;

int main() {
	long n;
	cin >> n;
	if (n % 4 == 0 || n % 4 == 3) {
		cout << "YES" << endl;
		if (n % 4 == 0) {
			cout << n / 2 << endl;
			int k = 1;
			for (int i = n; i > n / 2; i -= 2) {
				cout << i << " " << k << " ";
				k += 2;
			}
			cout << endl << n / 2 << endl;
			k = 2;
			for (int i = n - 1; i > n / 2; i -= 2) {
				cout << i << " " << k << " ";
				k += 2;
			}
		} else {
			long s = n;
			long sum = 0;
			while (sum < (n +1)*n/ 4) {
				sum += s;
				s--;
			}
			cout << n - s << endl;
			sum = 0;
			s = n;
			while (sum + s < (n + 1) * n / 4) {
				cout << s << " ";
				sum += s;
				s--;
			}
			cout << (n + 1) * n / 4 - sum << endl << s - 1 << endl;
			s = 0;
			long k = (n + 1) * n / 4 - sum;
			sum = 0;
			while (sum < (n + 1) * n / 4) {
				s++;
				if (s == k)
					continue;
				sum += s;
				cout << s << " ";
			}
		}
	}
	else
		cout << "NO";
}
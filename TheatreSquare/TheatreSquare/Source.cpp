#include <iostream>
using namespace std;
int main(){
	double n;
	double m;
	double a;
	cin >> n >> m >> a;
	long long result = (long long)ceil(n / a) * (long long)ceil(m / a);
	cout << result << endl;
	

	system("pause");
	return 0;
}
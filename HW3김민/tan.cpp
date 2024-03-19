#include <iostream>   
#include <cmath>
using namespace std;
int main() {
	double C, c, dt, t, a, b, N, h;

	// differentiation
	cout << "What is the value of C and c ?" << endl;
	cin >> C >> c;
	cout << "What is the value of t and dt ?" << endl;
	cin >> t >> dt;
	double exact_value = C * c / (cos(c * t) * cos(c * t));
	double approximate_value = (tan(c * (t + dt)) - tan(c * t)) / dt;
	cout << "exact_value = " << exact_value << endl << "approximate_value = " << approximate_value << endl;

	// error rate
	cout << "error rate = " << abs((approximate_value - exact_value)) / exact_value * 100 << '%';
	approximate_value = 0;


	//integration
	cout << endl << "What is the value of a, b and N ?" << endl;
	cin >> a >> b >> N;
	h = (b - a) / N;
	exact_value = C / c * log(abs(cos(c * a) / cos(c * b)));
	for (int i = 0; i < N; i++) {
		approximate_value += tan(c * (a + h * i)) * h;
	}
	cout << "exact_value = " << exact_value << endl << "approximate_value = " << approximate_value << endl;

	// error rate
	cout << "error rate = " << abs((approximate_value - exact_value)) / exact_value * 100 << '%';
	return 0;
}
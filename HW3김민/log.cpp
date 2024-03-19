#include <iostream>   
#include <cmath>
using namespace std;

void log_function();


int main() {
	log_function();
	return 0;
}

void log_function() {
	double C, c, dt, t, a, b, N, h;

	// differentiation
	cout << "What is the value of C and c ?" << endl;
	cin >> C >> c;
	cout << "What is the value of t and dt ?" << endl;
	cin >> t >> dt;
	double exact_value = C / t;
	double approximate_value = C * log((t + dt) / t) / dt;
	cout << "exact_value = " << exact_value << endl << "approximate_value = " << approximate_value << endl;

	// error rate
	cout << "error rate = " << abs((approximate_value - exact_value)) / exact_value * 100 << '%';
	approximate_value = 0;


	//integration
	cout << endl << "What is the value of a, b and N ?" << endl;
	cin >> a >> b >> N;
	h = (b - a) / N;
	exact_value = C * log(c) + C * (t * log(t) - t);
	for (int i = 0; i < N; i++) {
		approximate_value += C * log(c * (a + i * h));
	}
	approximate_value = approximate_value * h;
	cout << "exact_value = " << exact_value << endl << "approximate_value = " << approximate_value << endl;

	// error rate
	cout << "error rate = " << abs((approximate_value - exact_value)) / exact_value * 100 << '%';
}
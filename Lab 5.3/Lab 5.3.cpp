#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double s(double x);

int main()
{
	double tp, tk, o;
	int n;
	cout << "gp = "; cin >> tp;
	cout << "gk = "; cin >> tk;
	cout << "n = "; cin >> n;

	cout << fixed;
	cout << "-------------------------------------------------" << endl;
	cout << "|" << setw(7) << "qp" << " |"
		<< setw(10) << "qk" << " |"
		<< setw(10) << "z" << " |"
		<< setw(10) << "q" << " |"
		<< endl;
	cout << "-------------------------------------------------" << endl;

	double dk = (tk - tp) / n;
	double t = tp;
	while (t <= tk)
	{
		o = s(2*t + 1) + 2 *	s(pow(t, 2)) +sqrt(s(1));
		cout << "|" << setw(7) << setprecision(2) << tp << " |"
			<< setw(10) << setprecision(5) << tk << " |"
			<< setw(10) << o << " |"
			<< setw(10) << t << " |"
			<< endl;
		t += dk;

	}
	return 0;
}

double s(const double x)
{
	if (abs(x) >= 1 && x == 0)
		return (pow(cos(x), 2) + 1) / exp(x);
	else
	{
		double S = 0;
		int k = 0;
		double a = x;
		S = a;
		do
		{
			k++;
			double g = (2 * pow(x, 2)) / (2 * pow(k, 2) + k);
			a *= g;
			S += a;
		} while (k <= 4);
		return (1 / sin(2*x)) * S;
	}
}
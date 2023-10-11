#include <iostream>
using namespace std;

int main() {

	int a = 12345;
	const int c = 12345;

	int x[4] = { 10,2,300,-4 };
	for (int i = 0; i < 100; i++) {
		cout << "x[" << i << "]=" << x[i] << endl;
	}
	
	std::string s = "‚µ‚Þ‚ç";
	cout <<s<<
		sizeof(int) << "," <<
		numeric_limits<int>::lowest() << "," <<
		numeric_limits<int>::max() << endl;
	cout <<
		sizeof(long) << "," <<
		numeric_limits<long>::lowest() << "," <<
		numeric_limits<long>::max() << endl;
	cout <<
		sizeof(float) << "," <<
		numeric_limits<float>::lowest() << "," <<
		numeric_limits<float>::max() << endl;
	cout <<
		sizeof(double) << "," <<
		numeric_limits<double>::lowest() << "," <<
		numeric_limits<double>::max() << endl;

}
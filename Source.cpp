#include "../std_lib_facilities.h"

int main()
{
	vector<double> temps;
	for (double temp; cin >> temp;)
		temps.push_back(temp);

	sort(temps);
	for (double i : temps)
		cout << i << '\t';
	cout << '\n';

	int size_of_vector = temps.size();

	cout << "size of vector: " << size_of_vector  << '\n';

	cout << "middle of vector " << temps.size() / 2 << '\n';

	if (size_of_vector % 2 == 0)
		cout << "median temperature: " << (temps[temps.size() / 2] + temps[temps.size() / 2 - 1]) / 2 << '\n';
	else
		cout << "Median temperature: " << temps[temps.size() / 2] << '\n';

}
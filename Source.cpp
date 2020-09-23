#include "../std_lib_facilities.h"
#include <numeric>

int main()
{
	vector<double> distances;

	for (double temp; cin >> temp;)
	{
		distances.push_back(temp);
	}

	

	cout << "Sum of the total distance is: " << accumulate(distances.begin(), distances.end(), 0.0) << '\n';
	
	double maxi = *max_element(distances.begin(), distances.end());
	double mini = *min_element(distances.begin(), distances.end());
	cout << "Maximum values is: " << maxi << '\n'
		<<"Minimum value is: "<<mini<<'\n';

	sort(distances);
	for (double i : distances)
		cout << i << '\t';

	if (distances.size() % 2 == 0)
		cout << "Mean distance is: " << (distances[distances.size() / 2] + distances[distances.size() / 2 - 1]) / 2 << '\n';
	else
		cout << "Mean distance is: " << distances[distances.size() / 2] << '\n';
}
#include <iostream>
using namespace std;
#include <vector>

int main() {
	vector<vector<int>> vec ={
		{1,4,7,11,15},
		{2,5,8,12,19},
		{3,6,9,16,22},
		{10,13,14,17,24},
		{18,21,23,26,30}

	};
	vec.push_back({0,0,0,0});

	vec[0].push_back(0);
	for (int i = 0; i < vec.size(); i++)
	{
		for (int j = 0; j < vec[i].size(); j++) {
			cout << vec[i][j] << " ";
		}
		cout << endl;
	}

}
#include <iostream>
using namespace std;
#include <vector>
int maxSubArray(vector<int>& nums) {
	int sum = 0,max=INT_MIN;
	for (int i = 0; i < nums.size(); i++)
	{
		sum += nums[i];
		sum = (sum < 0) ? 0 : sum;
		max = (max < sum) ? sum : max;
	}
	return max;
}
int main() {
	//¹¹Ôìº¯Êý

	vector<int> vec = { -2,1,-3,4,-1,2,1,-5,4 };
	int n=maxSubArray(vec);
	cout << n << endl;


}
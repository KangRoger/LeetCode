#include<vector>
#include<map>
#include <iostream>
using std::vector;
using std::map;
class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		map<int, int> m;
		vector<int> v;
		v.reserve(2);
		for (vector<int>::iterator iter = nums.begin(); iter != nums.end(); ++iter)
		{
			map<int, int>::iterator mIter = m.find(target - *iter);
			if (mIter != m.end())
			{
				v.push_back(mIter->second + 1);
				v.push_back(iter - nums.begin()+1);
				break;
			}
			else
				m[*iter] = iter - nums.begin();
		}
		return v;
	}
};
int main()
{
	vector<int> V;
	V.push_back(2);
	V.push_back(7);
	V.push_back(11);
	V.push_back(5);
	Solution S;
	vector<int> V2 = S.twoSum(V, 13);
	for (int i = 0; i < V2.size(); i++)
		std::cout << V2[i] << std::endl;
	
}
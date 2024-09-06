#include <iostream>
#include <vector>
#include <unordered_map>

class Solution {
public:
	std::vector<int> twoSum(std::vector<int>& nums, int target) {
		std::unordered_map<int, int> numMap;
		
		for (int i = 0; i < nums.size(); i++) {
			int complement = target - nums[i];

			if (numMap.find(complement) != numMap.end()) {
				return { numMap[complement], i };
			}

			numMap[nums[i]] = i;
		}

		return {};
	}

};

int main()
{
	Solution sol;

	std::vector<int> nums = { 5,6,9,20 };
	int target = 29;
	std::vector<int> result = sol.twoSum(nums, target);

	if (!result.empty())
	{
		std::cout << "Indices: " << result[0] << ", " << result[1] << " Respectfully: " << "["
			<< nums[result[0]] << "]" << " " << "[" << nums[result[1]] << "]" << std::endl;
	}
	else {
		std::cout << "No solution found!" << std::endl;
	}

}

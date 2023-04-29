/*
 * Author: Levi Thomas
 * Description: This is the bruteforce solution to the Contains Duplicate
 * 		problem off of NeetCode
*/
#include <iostream>
#include <vector>

using namespace std;

class Solution {
	public:
		/*
		 * Determines if the vector nums contains one or more duplicate
		 * elements
		 */
		static bool containsDuplicate(vector<int>& nums) {
		bool flag = false;

		for (int i = 0; i<nums.size(); i++) {
			for(int j=i+1;j<nums.size();j++){
				if(nums[i] == nums[j]) return true;
			}
		}
		return flag;
		}
};


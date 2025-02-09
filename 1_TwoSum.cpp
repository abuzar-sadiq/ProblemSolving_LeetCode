#include <iostream>
#include <vector>



using namespace std;

class Solution
{
public:
    vector<int> result;
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int *ptr1 = nullptr, *ptr2 = nullptr;
        for (int i = 0; i < nums.size(); i++)
        {

            for (int j = i + 1; j < nums.size() / 2; j++)
            {
                if (ptr1 == nullptr || ptr2 == nullptr)
                {
                    *ptr1 = &nums[j];
                    *ptr2 = nums[nums.size() - 1];
                }

                if (nums[i] + *ptr1 == target)
                {
                    result.push_back(i);
                    result.push_back(j);
                }
                else if (nums[i] + *ptr2 == target){
                    result.push_back(i);
                    result.push_back(nums.size()-j);
                }
            }
        }
        return result;
    }
};
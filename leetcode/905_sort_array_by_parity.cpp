
// My solution
// not memory efficient
class Solution
{
public:
    vector<int> sortArrayByParity(vector<int> &nums)
    {
        deque<int> res;
        vector<int> result;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] & 1)
            {
                res.push_back(nums[i]);
            }
            else
            {
                res.push_front(nums[i]);
            }
        }

        while (res.size() > 0)
        {
            int n = res.front();
            result.push_back(n);
            res.pop_front();
        }
        return result;
    }
};

// best solution **
// Custom Compare Function
class Solution
{
public:
    vector<int> sortArrayByParity(vector<int> &nums)
    {
        sort(nums.begin(), nums.end(), [](const int &a, const int &b)
             { return (a % 2) < (b % 2); });

        return move(nums);
    }
};
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> counts;
        int left = 0;
        int right = nums.size()-1;

        while (left <= right) {
            counts[nums[left]]++;
            counts[nums[right]]++;
            left++;
            right--;
        }

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> minHeap;

        for (auto& [num, freq]: counts) {
            minHeap.push({freq, num});
            if (minHeap.size() > k) {
                minHeap.pop();
            }
        }

        vector<int> result;
        while (!minHeap.empty()) {
            result.push_back(minHeap.top().second);
            minHeap.pop();
        }

        return result;
    }
};
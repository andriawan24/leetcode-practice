class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        int size = -1;

        sort(arr.begin(), arr.end());

        for (int i = 1; i < arr.size(); i++) {
            int newSize = arr[i] - arr[i - 1];
            
            if (size == -1) {
                size = newSize;
                continue;
            }

            cout << size << newSize << endl;

            if (size != newSize) {
                return false;
            }
        }

        return true;
    }
};
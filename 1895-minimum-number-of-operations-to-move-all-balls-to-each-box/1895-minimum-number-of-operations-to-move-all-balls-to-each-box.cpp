class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> operations;

        for (int i = 0; i < boxes.size(); i++) {
            int operation = 0;
            for (int j = 0; j < boxes.size(); j++) {
                if (i != j && boxes[j] == '1') {
                    operation += abs(j - i);
                }
            }
            operations.push_back(operation);
        }

        return operations;
    }
};
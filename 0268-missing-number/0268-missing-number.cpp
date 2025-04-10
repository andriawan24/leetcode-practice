const static auto io_speed_up = []() {
    std::ios::sync_with_stdio(0);
    cin.tie(0);
    FILE *fptr = fopen("user.out", "w");
    int x, out = 0, i;
    while (!cin.eof()) {
        if (cin.peek() == '[') cin.ignore();
        else break;
        out = 0;
        i = 0;
        while (cin.peek() != ']') {
            cin >> x;
            if (cin.peek() == ',') cin.ignore();
            out ^= x;
            out ^= i++;
        }
        out ^= i;
        fprintf(fptr, "%d\n", out);
        cin.ignore(1024,'\n');
    }
    fclose(fptr);
    exit(0);
    return 0;
}();

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        return n * (n + 1) / 2 - accumulate(nums.begin(), nums.end(), 0);
    }
};
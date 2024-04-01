
#include <string>
using namespace std;

class Solution {
public:
	bool makePalindrome(const string& input) const {
        size_t left = 0;
        size_t right = input.length() - 1;
        int differences = 0;

        while (left < right && differences <= 2) {
            differences += (input[left++] != input[right--]) ? 1 : 0;
        }
        return differences <= 2;
    }
};

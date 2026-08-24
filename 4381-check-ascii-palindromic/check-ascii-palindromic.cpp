class Solution {
public:
    bool isPalindromic(string s) {
        string binary = "";

       
        for (int i = 0; i < s.length(); i++) {
        binary += bitset<8>(s[i]).to_string();
        }


        int i = 0;
        int j = binary.size() - 1;

        while (i < j) {
            if (binary[i] != binary[j]) {
                return false;
            }

            i++;
            j--;
        }

        return true;
    }
};
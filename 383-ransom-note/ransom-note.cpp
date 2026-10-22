class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int dict[26] = {0};

        for (int i = 0; i < magazine.length(); i++) {
            dict[magazine[i] - 'a']++;
        }

        for (int i = 0; i < ransomNote.length(); i++) {
            int index = ransomNote[i] - 'a';

            if (dict[index] > 0) {
                dict[index]--;
            } else {
                return false;
            }
        }

        return true;
    }
};
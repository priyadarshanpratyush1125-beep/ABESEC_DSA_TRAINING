class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> mp;

        for (string s : strs) {

            // Step 1: Frequency array for 26 letters
            int freq[26] = {0};

            // Step 2: Count characters
            for (char c : s) {
                freq[c - 'a']++;
            }

            // Step 3: Build key from frequency
            string key = "";
            for (int i = 0; i < 26; i++) {
                key += '#';
                key += to_string(freq[i]);
            }

            // Step 4: Group anagrams
            mp[key].push_back(s);
        }

        // Step 5: Store result
        vector<vector<string>> result;
        for (auto it : mp) {
            result.push_back(it.second);
        }

        return result;
    }
};
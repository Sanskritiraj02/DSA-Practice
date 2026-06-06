class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        unordered_map<string, int> wordCount;
        for (auto& w : words) wordCount[w]++;

        int wordLen = words[0].size();
        int totalWords = words.size();
        int windowLen = wordLen * totalWords;

        vector<int> result;

        for (int i = 0; i < wordLen; i++) {
            unordered_map<string, int> seen;
            int left = i, count = 0;

            for (int right = i; right + wordLen <= s.size(); right += wordLen) {
                string word = s.substr(right, wordLen);

                if (wordCount.count(word)) {
                    seen[word]++;
                    count++;

                    while (seen[word] > wordCount[word]) {
                        string leftWord = s.substr(left, wordLen);
                        seen[leftWord]--;
                        left += wordLen;
                        count--;
                    }

                    if (count == totalWords) {
                        result.push_back(left);
                    }

                } else {
                    seen.clear();
                    count = 0;
                    left = right + wordLen;
                }
            }
        }

        return result;
    }
};

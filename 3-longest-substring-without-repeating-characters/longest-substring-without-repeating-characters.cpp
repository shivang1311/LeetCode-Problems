class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    // vector<int> lastIndex(128,-1);
    // int maxLen=0, start=0;
    // for (int i=0; i <s.length(); ++i) {
    //     if (lastIndex[s[i]]>=start) {
    //         start=lastIndex[s[i]]+1;
    //     }
    //     lastIndex[s[i]]=i;
    //     maxLen = max(maxLen, i-start+1);
    // }
    // return maxLen;

    unordered_set<char> seen;
    int left=0,right=0;
    int maxlen=0;
    while(right<s.length())
    {
        if(seen.find(s[right]) == seen.end())
        {
            seen.insert(s[right]);
            maxlen=max(maxlen,right-left+1);
            right++;
        }
        else
        {
            seen.erase(s[left]);
            left++;
        }
    }
    return maxlen;
    }
};
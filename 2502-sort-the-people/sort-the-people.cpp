class Solution {
public:
    // shivang agrawal
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<int> final;
        for(int i=0; i<heights.size(); i++)
        {
            final.push_back(heights[i]);
        }
        sort(final.begin(),final.end());
        int j = final.size()-1;
        vector<string> final2;
        while(j>=0)
        {
            for(int i=0; i<heights.size(); i++){
                if(final[j]==heights[i])
                {
                    final2.push_back(names[i]);
                }
            }
            j--;
        }
        return final2;
    }
};
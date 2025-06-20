class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> alti;
        int el = 0;
        alti.push_back(el);
        for(int i=0; i<gain.size(); i++)
        {
            el+=gain[i];
            alti.push_back(el);
        }
        int max = alti[0];
        for(int i=0; i<alti.size(); i++)
        {
            if(alti[i]>max) max=alti[i];
        }
        return max;
    }
};
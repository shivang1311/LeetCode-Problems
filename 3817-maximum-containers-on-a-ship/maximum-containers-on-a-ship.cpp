class Solution {
public:
    // shivang agrawal
    int maxContainers(int n, int w, int maxWeight) {
        int maxcells = n*n;
        int max_container = maxWeight/w;
        return min(maxcells,max_container);
    }
};
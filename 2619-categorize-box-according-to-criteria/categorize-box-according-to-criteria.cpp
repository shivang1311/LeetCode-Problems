class Solution {
public:
    // shivang agrawal
    string categorizeBox(int l, int w, int h, int mass) {
        long volume = long(l)*long(w)*long(h);
        if((l>=10000 || h>=10000 || w>=10000) || volume>=1000000000)
        {
            if(mass>=100) return"Both";
            return "Bulky";
        }
        else if(mass>=100) return "Heavy";
        else return "Neither";
    }
};
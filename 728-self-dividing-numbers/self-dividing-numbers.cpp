class Solution {
public:
    // shivang agrawal
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> arr;
        for(int i=left; i<=right; i++){
            if(i%10!=0){
                if(isselfDivide(i)){
                    arr.push_back(i);
                }
            }
        }
        return arr;
    }
    bool isselfDivide(int x)
    {
        int a = x;
        bool flag = false;
        while(x>0)
        {
            int lst = x%10;
            if(lst==0) 
            {
                flag = false;
                break;
            }
            x/=10;
            if(a%lst==0){
                flag = true;
            }
            else{
                flag = false;
                break;
            }
        }
        if(flag) return true;
        else return false;
    }
};
class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();
        sort(candyType.begin(),candyType.end());
        int count[10001]={0,};
        count[0] = 1;
        int cur = candyType[0];
        int cur_idx = 0;
        for (int i = 1; i < candyType.size();i++){
            if (candyType[i] == cur){
                count[cur_idx]++;
            }
            else{
                cur_idx++;
                count[cur_idx] = 1;
                cur = candyType[i];
            }
        }
        cur_idx++;
        if(n/2 <= cur_idx){
            return n/2;
        }else{
            return cur_idx;
        }
    }
};

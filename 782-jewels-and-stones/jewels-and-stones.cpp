class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> jewelSet;
        for(char c: jewels){
            jewelSet.insert(c);
        }
      int  count = 0;
        for(char s:stones){
            if(jewelSet.count(s)){
                count++;
            }
        }
        return count;
    }
};
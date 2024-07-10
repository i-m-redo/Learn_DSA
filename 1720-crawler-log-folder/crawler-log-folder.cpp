class Solution {
public:
    int minOperations(vector<string>& logs) {
        int count = 0;
        for(string i : logs){
            if(i == "./") continue;
            else if(i == "../"){
                if(count > 0) count --;
                else count =0;
            }
            else count++;

        }
        return count;
    }
};
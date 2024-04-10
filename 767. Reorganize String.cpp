Q.767. Reorganize String.
link-->https://leetcode.com/problems/reorganize-string/description/
code->class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char , int>m;
        for(char c:s){
            m[c]++;
        }
        priority_queue<vector<int>>pq;
        for(auto a:m){
            pq.push({a.second , a.first});

        }
        string ans="";
        while(!pq.empty()){
            auto top= pq.top();
            pq.pop();
            if(ans.empty()|| ans.back()!=top[1]){
                ans+=top[1];
                top[0]--;
                if(top[0]>0){
                    pq.push(top);
                }
                
            }
            else if(ans.back()==top[1]){
                if(pq.empty()){
                    return "";
                }
                else{
                    auto secondtop = pq.top();
                    pq.pop();
                    ans+=secondtop[1];
                    secondtop[0]--;
                    if(secondtop[0]>0){
                        pq.push(secondtop);
                    }
                    pq.push(top);
                }
            }
        }
        return ans;
    }
};

class Solution {
public:
    string removeDuplicates(string s, int k) {
        vector<pair<int,char>>res={{0,'#'}};
        for(char c:s){
            if(res.back().second!=c){
                res.push_back({1,c});
            }
            else if(++res.back().first==k){
                res.pop_back();
            }
        }
        string resu;
    for (auto &p : res) {
        resu.append(p.first, p.second);
    }
    return resu;
}
};
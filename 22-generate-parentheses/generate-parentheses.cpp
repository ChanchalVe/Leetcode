class Solution {
public:

void dfs(int openP, int closP, string s, int n, vector<string>& res){
    if(openP == closP && openP + closP == n * 2){
        res.push_back(s);
        return;
    }

    if(openP < n){
        dfs(openP + 1, closP, s + '(', n, res);
    }

     if(closP < openP){
        dfs(openP , closP+1, s + ')', n, res);
    }
}
    vector<string> generateParenthesis(int n) {
        vector<string> res;

        dfs(0, 0, "", n, res);
        return res;
        
    }
};
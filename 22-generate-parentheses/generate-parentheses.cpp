class Solution {
public:
    void generate(int n, int op, int cl, string str, vector<string>& res){
        if(str.size()  == 2*n){
            res.push_back(str);
        }

        if(op<n){
            generate(n, op + 1, cl, str + '(', res);
        }

        if(cl<op){
            generate(n, op, cl + 1, str + ')', res);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> final;
        generate(n, 0, 0, "", final);

        return final;
    }
};
class Solution {
public:
    string low(string s) {
        for (char &c : s)
            if (c >= 'A' && c <= 'Z') c += 32;
        return s;
    }

    bool vow(char c) {
        return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    }

    string mask(string s) {
        for (char &c : s)
            if (vow(c)) c='*';
        return s;
    }

    vector<string> spellchecker(vector<string>& w, vector<string>& q) {
        unordered_set<string> ex(w.begin(), w.end());
        unordered_map<string,string> mp1, mp2;

        for (string x : w) {
            string lx = low(x);
            if (!mp1.count(lx)) mp1[lx] = x;
            string mx = mask(lx);
            if (!mp2.count(mx)) mp2[mx] = x;
        }

        vector<string> ans;
        for (string x : q) {
            if (ex.count(x)) ans.push_back(x);
            else {
                string lx = low(x);
                if (mp1.count(lx)) ans.push_back(mp1[lx]);
                else {
                    string mx = mask(lx);
                    if (mp2.count(mx)) ans.push_back(mp2[mx]);
                    else ans.push_back("");
                }
            }
        }
        return ans;
    }
};

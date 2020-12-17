#include<bits/stdc++.h>

using namespace std;

class Solution{
    private:
    string s;
    string p;
    public:
    bool isMatch(string s, string p){
        vector<vector<bool>> dp;
        for(int i=0;i<s.size()+1;i++){
            dp.push_back(vector<bool>(p.size()+1,false));
        }  
        dp[0][0] =true;
        for(int i=1;i<p.size()+1;i++){
            if(p[i-1]=='*'){dp[0][i]=dp[0][i-1];}
            else{dp[0][i] =false;}
        }
        for(int i=1;i<s.size()+1;i++){
            dp[i][0]=false;
        }
        for(int i=1;i<dp.size();i++){
            for(int j=1;j<dp[i].size();j++){
                if(p[j-1]=='*'){ dp[i][j] = dp[i-1][j] || dp[i][j-1] ;}
                else if(p[j-1]=='?'){ dp[i][j] = dp[i-1][j-1] ;}
                else{
                    if(p[j-1]==s[i-1]){dp[i][j]=dp[i-1][j-1];}
                    else{dp[i][j]=false;}
                }

            }
        }
        display(dp);
        

        return dp[s.size()][p.size()];

    }

    

    void display(vector<vector<bool>> dp){
        cout<<"\n s.size()+1 = "<<dp.size();
        cout<<"\n p.size()+1 = "<<dp[0].size()<<endl;

        for(auto v:dp){
            for(auto x:v){
                cout<<x<<" ";
            }
            cout<<"\n";
        }

        return ; 
    }
    
    
    Solution(string s1,string s2) : s(s1),p(s2) {}



};

int main(){
    string s1,s2;
    cout<<"enter s1 = ";cin>>s1;
    cout<<"enter s2 = ";cin>>s2;

    Solution obj(s1,s2);
    if(obj.isMatch(s1,s2)){cout<<"\n string have matched";}
    else{cout<<"\n string dont match";}
    return 0;
}


/*

time compexity  = O(s*p);
space complexity = O(s*p);

// input s1    a    bcdeb
//input  s2 a  *   c*?b

dp  []  a   *   c   *   ?   b
[]  T   F   F   F   F   F   F
a   F   T (F|T) F (F|F) F   F
b   F   F   
c   F
d   F
e   F
b   F


 */
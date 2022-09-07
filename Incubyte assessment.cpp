#include<bits/stdc++.h>
using namespace std;

class stringCalculator{
    public:
    int add(string s){

        int ans=0;
        int x=-1;
        try
        {
            if(s[0]=='-') throw x;
      
        if(s.length()==0) return 0;
        for(int i=0;i<s.length();i++){
            
            if(s[i]!=','&& s[i]>='a' && s[i]<='z'){
                ans+=s[i]-'a'+1;
                continue;
            }
            if(s[i]!=','){
            if(s[i] - '0'>1000) continue;
             ans += s[i] - '0';
            }
        }
        }
        catch(int x)
        {
           cout<<"Negatives not allowed"<<endl;
           return 0;
        }
        return ans;
    }
};

int main(){
    stringCalculator st;
    cout<<st.add("z,1,4,6");
    return 0;
}

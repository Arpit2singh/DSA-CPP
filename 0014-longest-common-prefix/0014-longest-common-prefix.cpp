class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int size = INT_MAX ; 
          string s = ""; 
        for(int i = 0 ; i<strs.size() ; i++){
            if(size > (int)strs[i].size()){
                size = (int)strs[i].size() ; 
                s = strs[i] ; 
            }
        }
      
        for(int i = 0 ; i<strs.size() ; i++){
            string temp  = strs[i] ; 
            while(size>0 && temp.substr(0 , size) != s.substr(0,size)){
                size = size-1 ; 
                
            }
        }
        return s.substr(0,size) ; 
    }
};
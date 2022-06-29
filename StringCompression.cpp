class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0;
        int ansIndex = 0;
        int n = chars.size();
        
        while(i<n){
            int j=i+1;
            while(j<n && chars[i]==chars[j]){
                j++;
            }
            //will come out from this loop if chars get empty 
            //or if we get a new of diff character in vector
            
            chars[ansIndex++] = chars[i];//storing old character
            int count = j-i;//getting count of same character
            
            if(count>1){
                string cnt = to_string(count); //converting int count to string
                for(char ch : cnt){
                    chars[ansIndex++]=ch;//storing the count in string form in chars vector
                }
            }
            
            i=j;//moving to new or diff character
        }
        return ansIndex;//ansIndex = size of chars vector
    }
};

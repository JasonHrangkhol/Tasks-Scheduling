
string trim(string s){
    
    int n = s.size(),left=0,right=n-1;
            
    while(left<n && s[left]==' '){
        left++;
    };
      
    while(right>=left && s[right]==' '){
        right--;
    }
        
    s = s.substr(left,right-left+1);

    return s;
}

class Solution {
    findPattern(s, p) {
        // code here
        for(let i=0;i<=s.length-p.length;i++){
            let match=true;
            for(let j=0;j<p.length;j++){
                if(s[i+j]!==p[j]){
                    match=false;
                    break;
                }
            }
            if(match) return i;
        }
        return -1;
        
        // return s.indexOf(p);
    }
}
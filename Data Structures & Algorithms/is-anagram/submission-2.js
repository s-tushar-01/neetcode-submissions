class Solution {
    /**
     * @param {string} s
     * @param {string} t
     * @return {boolean}
     */
    isAnagram(s, t) {
        let seen1=new Map();
        let seen2=new Map();
        for(let num of s){
            seen1.set(num,(seen1.get(num)|| 0 )+1)
        }
        for(let num of t){
            seen2.set(num,(seen2.get(num)|| 0 )+1)
        }
        if(seen1.size!==seen2.size) return false;
        for(let [num,freq] of seen2){
            if(seen1.get(num)!==freq) return false;
        }
        return true;
    }
}

class Solution {
    /**
     * @param {number[]} nums
     * @param {number} k
     * @return {number[]}
     */
    topKFrequent(nums, k) {
        let mp=new Map();
        for(let i=0;i<nums.length;i++){
            mp.set(nums[i],(mp.get(nums[i])||0)+1);
        }
        let arr=[];
        for(let num of mp){
            if(!arr[num[1]]) arr[num[1]]=[];
            arr[num[1]].push(num[0]);
        }
        let ans=[];
        for(let x=arr.length-1;x>=0;x--){
            if(arr[x]){
                for(let y of arr[x]){
                    ans.push(y);
                    if(ans.length===k) return ans;
                }
            }
        }
    }
}

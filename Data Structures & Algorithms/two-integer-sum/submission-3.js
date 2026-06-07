class Solution {
    /**
     * @param {number[]} nums
     * @param {number} target
     * @return {number[]}
     */
    twoSum(nums, target) {
        let mp=new Map();
        for(let num=0;num<nums.length;num++){
            let s=target-nums[num];
            if(mp.has(s)) return [mp.get(s),num];
            mp.set(nums[num],num);
        }
    }
}

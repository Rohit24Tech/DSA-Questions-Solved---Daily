class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> twosum = new HashMap<>();
        for(int i=0; i<nums.length; i++){ 
            int complement  = target-nums[i]; 
            if(twosum.containsKey(complement)){
                return new int[] {twosum.get(complement),i};
            }
            twosum.put(nums[i],i);
        }
        throw new IllegalArgumentException("No match found");
    }
}


Solution 2: O(n^2)

class Solution {
    public int[] twoSum(int[] nums, int target) {
         int[] output = new int[2];
         for(int i=0; i<nums.length; i++){
            for(int j=i+1; j<nums.length; j++){
                if(nums[i]+nums[j]==target){
                    output[0]=i;
                    output[1]=j;
                    return output;
                }
            }
         }
         return output;
    }
}

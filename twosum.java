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

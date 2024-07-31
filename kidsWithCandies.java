class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
        int maximum = Integer.MIN_VALUE;
        for(int i=0; i<candies.length; i++){
            maximum=Math.max(maximum,candies[i]);
        }
        List<Boolean> result = new ArrayList<>();
        for(int i=0; i<candies.length; i++){
            if(candies[i]+extraCandies>=maximum){
                result.add(true);
            }
            else{
                result.add(false);
            }
        }
        return result;
    }
}

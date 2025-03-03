Solution 1: O(m*nlogn)

  class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        Map<String, List<String>> ans = new HashMap<>();

        for (String s : strs) {
            char[] chars = s.toCharArray();
            Arrays.sort(chars);
            String key = new String(chars);
            if (!ans.containsKey(key)) {
                ans.put(key, new ArrayList<>());
            }
            ans.get(key).add(s);
        }

        return new ArrayList<>(ans.values());        
    }
}

Solution 2: O(m*n*26) --> O(m*n)

  class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        //List<List<String>> result = new ArrayList<>();

        HashMap<String, List<String>> k = new HashMap<>();
        for( String s: strs){
            int[] count = new int[26];

            for(char c:s.toCharArray()){
                count[c - 'a']++;
            }

            StringBuilder sb = new StringBuilder();
            for(int num: count){
                sb.append(num).append("#");
            }

            String key = sb.toString();
            if(!k.containsKey(key)){
                k.put(key, new ArrayList<>());
            }
            k.get(key).add(s);
        }
        return new ArrayList<>(k.values());
    }
}

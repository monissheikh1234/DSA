class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer,Integer>umap=new HashMap<>();
        int compl;
        for(int i=0;i < nums.length;i++){
            compl=target-nums[i];
            if(umap.containsKey(compl)){
                return new int[] {i,umap.get(compl)};
            }
            else{
                umap.put(nums[i],i);
            }
        }
        return new int[0];
    }
}
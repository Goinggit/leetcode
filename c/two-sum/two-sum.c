/**
 方法1 暴力遍历法
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int i = 0;
    int j = 0;
    *returnSize = 2;
    int * ret = (int *)malloc(sizeof(int) * 2);
    for(i = 0; i < numsSize - 1; i++){
        for(j = i + 1; j < numsSize; j++){
            if(target - nums[i] == nums[j]) {
                ret[0] = i;
                ret[1] = j;
            }
        }
    }    
    return ret;
}
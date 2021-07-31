#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize);

int main(){
    int nums[3] = {2, 3, 3};
    int returnSize;
    int *out;
    out = twoSum(nums, 3, 6, &returnSize);
    printf("%d %d\n", out[0], out[1]);
    return 0;
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int i, j;
    int length = *(int*)returnSize;
    int* out = (int*) malloc(2 * sizeof(int));
    for(i = 0; i < numsSize; ++i){
        for(j = i+1; j < numsSize; ++j){
            if(nums[j] == target - nums[i]){
                out[0] = i;
                out[1] = j;
                *returnSize = 2;
                return out;
            }
        }
    }
 
    return out;   
}
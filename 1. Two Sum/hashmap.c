#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize);
typedef struct{
    int value;//save the num
    int index;//save the index of the num from the nums array
}NUM;


NUM *hashmap[1005];

void init_hash_table(int numsSize){
    for(int i = 0; i < numsSize; i++){
        hashmap[i] = NULL;
    }
}
/*generate a random index for the hashtable*/
int hash(int value, int numsSize){
    return (value*value) % numsSize;
}

int hash_insertion(int* nums, int numsSize){
    int index = hash(value, numsSize);
    for(int i = 0; i < numsSize; ++i){
        if(hashmap[i] == NULL){
            //turn into two loops?
        }
    };
}

int check_map(int num, int numsSize){
    int tmp = hash(num, numsSize);
    if(hashmap[tmp]->value == num)return 1;
    else return 0;
}
int main(){
    int nums[3] = {2, 3, 3};
    int returnSize;
    int *out;
    out = twoSum(nums, 3, 6, &returnSize);
    printf("%d %d\n", out[0], out[1]);
    return 0;
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int* out = (int*) malloc(2 * sizeof(int));
    for(int i = 0; i < numsSize; ++i){
        hashmap[hash(nums[i], numsSize)]->index = i;
        hashmap[hash(nums[i], numsSize)]->value = nums[i];
    }
    for(int i = 0; i <numsSize; ++i){
        if(check_map(target - nums[i], numsSize) == 1){
            out[0] = i;
            out[1] = hashmap[hash(target - nums[i], numsSize)]->index;
        }
    }
 
    return out;   
}
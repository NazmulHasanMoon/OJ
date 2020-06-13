#include<stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* nextGreaterElement(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize){
    ///int *re=(int*)malloc(nums1Size*sizeof(int));
    int i,j;
    i=j=0;
    int peyechi=0,num;
    for(;i<nums1Size;i++)
    {
        num=-1;
        for(j=i+1;j<nums2Size;j++)
        {
            if(nums2[j]>nums1[i]){
                num=nums2[j];
                break;
            }
        }
        returnSize[i]=num;
    }
    return returnSize;
}

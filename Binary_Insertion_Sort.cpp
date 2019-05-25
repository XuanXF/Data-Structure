#include "Insert_Sort.h"
/**
*先折半查找找出插入位置，再统一移动元素
*/
void Binary_Insertion_Sort(int a[],int n) {
    int i,j,mid,low,high;
    for(i=2; i<n; i++) {
        if(a[i]<a[i-1]) {
            a[0]=a[i];
            low=1;
            high=i-1;
            while(low<=high) { //折半查找，low<=high
                mid=(high+low)/2;
                if(a[mid]>a[0])
                    high=mid-1;
                else
                    low=mid+1;
            }
            for(j=i-1; j>=high+1; --j) {
                a[j+1]=a[j];
            }
            a[high+1] = a[0];
            a[0] = -1;
        }
    }
}
/**
*折半插入排序仅减少了比较次数，约为O(log2n),该比较次数与初始状态无关，仅取决于表中元素个数n
*元素移动次数并未改变，依赖于元素初始状态
*时间复杂度为O(n^2),空间复杂度为O(1)
*折半插入排序是稳定排序方法
*仅适用于顺序存储的线性表
*/


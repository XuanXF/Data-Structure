#include "Insert_Sort.h"
/**
*���۰�����ҳ�����λ�ã���ͳһ�ƶ�Ԫ��
*/
void Binary_Insertion_Sort(int a[],int n) {
    int i,j,mid,low,high;
    for(i=2; i<n; i++) {
        if(a[i]<a[i-1]) {
            a[0]=a[i];
            low=1;
            high=i-1;
            while(low<=high) { //�۰���ң�low<=high
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
*�۰��������������˱Ƚϴ�����ԼΪO(log2n),�ñȽϴ������ʼ״̬�޹أ���ȡ���ڱ���Ԫ�ظ���n
*Ԫ���ƶ�������δ�ı䣬������Ԫ�س�ʼ״̬
*ʱ�临�Ӷ�ΪO(n^2),�ռ临�Ӷ�ΪO(1)
*�۰�����������ȶ����򷽷�
*��������˳��洢�����Ա�
*/


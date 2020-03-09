#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void rotate(int* nums, int numsSize, int k){
	int n1 = 0;
	int n2 = numsSize - 1;
	int tmp;
	if (k > numsSize)
	{
		k %= numsSize;
	}
	while (n1<n2)
	{
		tmp = nums[n2];
		nums[n2] = nums[n1];
		nums[n1] = tmp;
		--n2, ++n1;
	}
	n1 = 0, n2 = numsSize - 1;
	int n3 = k - 1;
	while (n1 < n3)
	{
		tmp = nums[n3];
		nums[n3] = nums[n1];
		nums[n1] = tmp;
		--n3, ++n1;
	}
	while (k < n2)
	{
		tmp = nums[n2];
		nums[n2] = nums[k];
		nums[k] = tmp;
		--n2, ++k;
	}

}

int main1()
{
	int a[4] = { 1,2,3,4};
	rotate(a, 4, 5);
	for (int i = 0; i < 4; i++)
	{
		printf("%d ", a[i]);
	}

	system("pause");
	return 0;
}
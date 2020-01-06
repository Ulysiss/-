class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int temp=m+n-1;
        int p1=m-1,p2=n-1;
        while(p1>=0&&p2>=0)
        {
            nums1[temp--]=(nums1[p1] < nums2[p2])?nums2[p2--]:nums1[p1--];
        }
        /*复制的思路巧妙在利用数字指针可以表示长度，转化为*/
        for (;p2>=0;)
        {
            nums1[temp--]=nums2[p2--];
        }
    }
};
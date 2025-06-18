void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    for (int i = 0; i < n; i++) {
        nums1[m + i] = nums2[i]; // pusha nums2 no final de nums1
    }
    // bubblesort
    int total = m + n;
    for (int i = 0; i < total - 1; i++) {
        for (int j = 0; j < total - i - 1; j++) {
            if (nums1[j] > nums1[j + 1]) {
                int temp = nums1[j];
                nums1[j] = nums1[j + 1];
                nums1[j + 1] = temp;
            }
        }
    }
}
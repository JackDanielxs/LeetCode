class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        if (nums1.length > nums2.length) {
            return findMedianSortedArrays(nums2, nums1);
        }

        int tamanho1 = nums1.length;
        int tamanho2 = nums2.length;
        int totalEsquerda = (tamanho1 + tamanho2 + 1) / 2;

        int inicio = 0, fim = tamanho1;

        while (inicio <= fim) {
            int i = (inicio + fim) / 2;
            int j = totalEsquerda - i;

            int maxEsquerda1 = (i == 0) ? Integer.MIN_VALUE : nums1[i - 1];
            int minDireita1 = (i == tamanho1) ? Integer.MAX_VALUE : nums1[i];

            int maxEsquerda2 = (j == 0) ? Integer.MIN_VALUE : nums2[j - 1];
            int minDireita2 = (j == tamanho2) ? Integer.MAX_VALUE : nums2[j];

            if (maxEsquerda1 <= minDireita2 && maxEsquerda2 <= minDireita1) {
                if ((tamanho1 + tamanho2) % 2 == 0) {
                    return (Math.max(maxEsquerda1, maxEsquerda2) +
                            Math.min(minDireita1, minDireita2)) / 2.0;
                } else {
                    return Math.max(maxEsquerda1, maxEsquerda2);
                }
            } else if (maxEsquerda1 > minDireita2) {
                fim = i - 1;
            } else {
                inicio = i + 1;
            }
        }
        return 0.0;
    }
}

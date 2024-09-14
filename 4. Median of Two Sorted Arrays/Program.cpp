double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
int totalSize = nums1Size + nums2Size;
    int* mergedArray = (int*)malloc(totalSize * sizeof(int));
    int i = 0, j = 0, k = 0;

    // Merge the two arrays
    while (i < nums1Size && j < nums2Size) {
        if (nums1[i] < nums2[j]) {
            mergedArray[k++] = nums1[i++];
        } else {
            mergedArray[k++] = nums2[j++];
        }
    }

    // Copy any remaining elements
    while (i < nums1Size) {
        mergedArray[k++] = nums1[i++];
    }
    while (j < nums2Size) {
        mergedArray[k++] = nums2[j++];
    }

    // Find the median
    double median;
    if (totalSize % 2 == 0) {
        median = (mergedArray[totalSize / 2 - 1] + mergedArray[totalSize / 2]) / 2.0;
    } else {
        median = mergedArray[totalSize / 2];
    }

    // Free the allocated memory
    free(mergedArray);

    return median;
}


# include <iostream>
using namespace std;

void Merge(int arr[], int left , int mid, int right){
    int n1 = mid - left+1;
    int n2 = right - mid;

    int L[n1], R[n2];

    for (int i=0;  i<n1; i++){
        L[i] = arr[left + i];
    }

    for (int i=0;  i<n2; i++){
        R[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2){
        if (L[i] <= R[j]){
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
        }
    }

    while (i < n1){
        arr[k++] = L[i++];
    }

    while (j < n2){
        arr[k++] = R[j++];
    }
}


void MergeSort(int arr[], int left , int right){
    if (left < right){
        int mid = (left + right) / 2;
 
        MergeSort(arr, left, mid);
        MergeSort(arr,mid+1, right);

        Merge(arr, left, mid, right);

    }
}

int main(){
    int array[] = {57, 3, 88, 24, 76, 92, 50, 1, 30, 67,
        99, 16, 39, 83, 12, 45, 21, 98, 60, 72,
        32, 41, 5, 79, 95, 10, 49, 68, 27, 56,
        74, 90, 35, 2, 97, 26, 53, 14, 62, 18,
        84, 7, 36, 48, 91, 17, 9, 64, 77, 29, 
        11, 100, 8, 85, 66, 22, 63, 55, 96, 4,
        25, 42, 80, 34, 47, 46, 20, 19, 71, 38,
        37, 31, 44, 51, 28, 87, 58, 70, 65, 43,
        6, 86, 82, 15, 81, 52, 13, 33, 75, 40,
        59, 89, 93, 54, 23, 61, 73, 94, 78, 69};

    int n = sizeof(array)/sizeof(array[0]); 
    
    MergeSort(array , 0 , n-1);

    for (int i = 0; i < n; i++){
        cout << array[i] << " ";
    }
}


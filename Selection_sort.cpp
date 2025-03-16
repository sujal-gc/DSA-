// Array = 6, 5, 3, 2, 4
// step 1: 1 5 3 2 6 4 
// step 2: 1 2 3 5 6 4
// step 3: 1 2 3 5 6 4
// step 4: 1 2 3 4 6 5
// step 6: 1 2 3 4 5 6

# include <iostream>
using namespace std;

void selection_sort(int array[] , int n)
{
    for (int i = 0; i < n - 1; i++ )
    {
        int min_pos = i;
        for  (int j = i + 1 ; j < n; j++)
        {
            if (array[j] < array [min_pos])
            {
                min_pos = j;
            }
        }
        if (min_pos != i)
        {
            int temp = array[i];
            array[i] = array[min_pos];
            array[min_pos] = temp;
        }
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

    selection_sort(array , n);

    for (int i = 0; i < n ; i++){
        cout << array[i] << " ";
        // cout << array[i] << endl;
    }

    return 0;
} 
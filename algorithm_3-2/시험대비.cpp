#include<iostream>

using namespace std;

int A[10] = { 1, 4, 5, 7, 8, 10, 3,2, 6,9 };

void swap(int* a, int* b) {
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}


//insertion sort
void selection_sort(int list[], int n) {
    int i, j, least, temp;

    // 마지막 숫자는 자동으로 정렬되기 때문에 (숫자 개수-1) 만큼 반복한다.
    for (i = 0; i < n - 1; i++) {
        least = i;

        // 최솟값을 탐색한다.
        for (j = i + 1; j < n; j++) {
            if (list[j] < list[least])
                least = j;
        }

        // 최솟값이 자기 자신이면 자료 이동을 하지 않는다.
        if (i != least) {
            SWAP(list[i], list[least], temp);
        }
    }
}
int main() {

    selectionSort(A);

}
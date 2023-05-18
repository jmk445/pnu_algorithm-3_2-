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

    // ������ ���ڴ� �ڵ����� ���ĵǱ� ������ (���� ����-1) ��ŭ �ݺ��Ѵ�.
    for (i = 0; i < n - 1; i++) {
        least = i;

        // �ּڰ��� Ž���Ѵ�.
        for (j = i + 1; j < n; j++) {
            if (list[j] < list[least])
                least = j;
        }

        // �ּڰ��� �ڱ� �ڽ��̸� �ڷ� �̵��� ���� �ʴ´�.
        if (i != least) {
            SWAP(list[i], list[least], temp);
        }
    }
}
int main() {

    selectionSort(A);

}
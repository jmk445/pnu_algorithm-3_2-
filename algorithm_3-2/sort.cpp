/*
#include<iostream>

using namespace std;


void printArr(int arr[], int len) { //�迭 ��� �Լ�
    int i;
    for (i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swap(int* val1, int* val2) { // ���� �Լ�
    int tmp = *val1;
    *val1 = *val2;
    *val2 = tmp;
}
/*
1 1
5
16
2
7
- 10
1


int InsertionSort(int* arr,int n,int k) {
    int i, j;
    int key;
    int cnt = 0;
    for (i = 1; i < n; i++) {
        key = arr[i];

        for (j = i - 1; j >= 0; j--) {
            
            if (arr[j] > key) {       //key�� ���ڸ��� �ϳ��� ���鼭 ��
                arr[j + 1] = arr[j];  //���ڸ� ���� key������ ũ�ٸ� �ϳ��� �̵�                
                cnt++;
            }
            else {
                cnt++;
                break;//key���� ���� ���� ������ break;
            }
        }
        arr[j + 1] = key;             //�� �ڸ��� key���� �ִ´�.
        if (i == k ) {           
            return cnt;
        }
    }
}


int* selection_sort(int list[], int n, int k) {
    int i, j, least, temp;

    int pass = 0;
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
            swap(list[i], list[least]);
            
        }

        if (i == k - 1) {
            return list;
        }
    }
}


void heapify(int arr[], int len, int parent) { //�ε����� 0���� ī��Ʈ�ϴ� ���
    int min = parent; //�θ� ���
    int l = 2 * parent + 1; //���� �ڽ�
    int r = 2 * parent + 2; //������ �ڽ�
    //heapify�� �������� ����� ������ �ǹ�, �ּ� ���� ����� �����ε�

    if (l < len && arr[l] < arr[min]) {
        min = l;
    }
    if (r < len && arr[r] < arr[min]) {
        min = r;
    }
    ���� �ڽİ� ������ �ڽİ� ���ؼ�
    �� ū ���� �ε����� largest�� �ִ� ����

    if (min != parent) {
        swap(&arr[parent], &arr[min]);
        heapify(arr, len, min);
    }
ū ���� �ٲ��� ������ �ϰ� ��ȯȣ���� �ؼ�
 �ٲ� �ε����� ���ؼ� �ѹ��� heapify


int* heapSort(int arr[], int len,int k) {
    int cnt = 0;
    for (int i = len / 2 - 1; i >= 0; i--) {
        heapify(arr, len, i);
    }
    //�ּ����� ����� ����
    /*
    3 1
5
16
2
7
-10
1
    
    for (int i = len - 1; i >= 0; i--) {
        
        swap(arr[0], arr[i]);
               
        cnt++;
        
        //arr[0]�� �ִ�, arr[i]�� ������ �ε���
        heapify(arr, i, 0);

        if (cnt == k) {
            return arr;
        }
        
    }//��ü�� �ٽ� �������� �����.
}

int* quick_sort(int* data, int start, int end, int k) {
    if (start >= end) {
        // ���Ұ� 1���� ���
        return data;
    }
    int cnt = 0;
    int pivot = start;
    cnt++;
    int i = pivot + 1; // ���� ��� ���� 
    int j = end; // ������ ��� ����
    int temp;

    while (i <= j) {
        // �����Ͱ� ������������ �ݺ�
        while (i <= end && data[i] <= data[pivot]) {
            i++;
        }
        while (j > start && data[j] >= data[pivot]) {
            j--;
        }

        if (i > j) {
            // ������
            temp = data[j];
            data[j] = data[pivot];
            data[pivot] = temp;
            
        }
        else {
            // i��°�� j��°�� ����
            temp = data[i];
            data[i] = data[j];
            data[j] = temp;
        }
    }

    // ���� ���
    cnt++;
    if (cnt == k-1) {
        return data;
    }
    quick_sort(data, start, j - 1,k);
    quick_sort(data, j + 1, end,k);
}

int main() {
        
    int sorting_way,len, k;
    cin >> sorting_way >> k >> len;    
    int* arr = new int[len];

    for (int i = 0; i < len; i++) {
        int temp;
        cin >> temp;
        arr[i] = temp;
    }
        
    int ans = 0;
    int* ans_list;
    if (sorting_way == 1) {
        ans = InsertionSort(arr, len, k);
        //printArr(arr, len);
        cout << ans;
    }
    else if (sorting_way == 2) {
        ans_list = selection_sort(arr, len, k);
        printArr(ans_list, len);
    }
    else if (sorting_way == 3) {
        ans_list = heapSort(arr, len, k);
        printArr(ans_list, len-k);
    }
    else if (sorting_way == 4) {
        ans_list = quick_sort(arr, 0, len - 1, k);
        printArr(ans_list, len);
    }       
   
    return 0;
}*/
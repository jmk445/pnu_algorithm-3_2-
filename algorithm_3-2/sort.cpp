/*
#include<iostream>

using namespace std;


void printArr(int arr[], int len) { //배열 출력 함수
    int i;
    for (i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swap(int* val1, int* val2) { // 스왑 함수
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
            
            if (arr[j] > key) {       //key의 앞자리를 하나씩 보면서 비교
                arr[j + 1] = arr[j];  //앞자리 값이 key값보다 크다면 하나씩 이동                
                cnt++;
            }
            else {
                cnt++;
                break;//key보다 작은 값이 나오면 break;
            }
        }
        arr[j + 1] = key;             //그 자리에 key값을 넣는다.
        if (i == k ) {           
            return cnt;
        }
    }
}


int* selection_sort(int list[], int n, int k) {
    int i, j, least, temp;

    int pass = 0;
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
            swap(list[i], list[least]);
            
        }

        if (i == k - 1) {
            return list;
        }
    }
}


void heapify(int arr[], int len, int parent) { //인덱스를 0부터 카운트하는 경우
    int min = parent; //부모 노드
    int l = 2 * parent + 1; //왼쪽 자식
    int r = 2 * parent + 2; //오른쪽 자식
    //heapify는 힙구조를 만드는 과정을 의미, 최소 힙을 만드는 과정인듯

    if (l < len && arr[l] < arr[min]) {
        min = l;
    }
    if (r < len && arr[r] < arr[min]) {
        min = r;
    }
    왼쪽 자식과 오른쪽 자식과 비교해서
    더 큰 값의 인덱스를 largest에 넣는 과정

    if (min != parent) {
        swap(&arr[parent], &arr[min]);
        heapify(arr, len, min);
    }
큰 값이 바뀐경우 스왑을 하고 순환호출을 해서
 바뀐 인덱스에 대해서 한버더 heapify


int* heapSort(int arr[], int len,int k) {
    int cnt = 0;
    for (int i = len / 2 - 1; i >= 0; i--) {
        heapify(arr, len, i);
    }
    //최소힙을 만드는 과정
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
        
        //arr[0]은 최댓값, arr[i]는 마지막 인덱스
        heapify(arr, i, 0);

        if (cnt == k) {
            return arr;
        }
        
    }//교체후 다시 힙정렬을 만든다.
}

int* quick_sort(int* data, int start, int end, int k) {
    if (start >= end) {
        // 원소가 1개인 경우
        return data;
    }
    int cnt = 0;
    int pivot = start;
    cnt++;
    int i = pivot + 1; // 왼쪽 출발 지점 
    int j = end; // 오른쪽 출발 지점
    int temp;

    while (i <= j) {
        // 포인터가 엇갈릴때까지 반복
        while (i <= end && data[i] <= data[pivot]) {
            i++;
        }
        while (j > start && data[j] >= data[pivot]) {
            j--;
        }

        if (i > j) {
            // 엇갈림
            temp = data[j];
            data[j] = data[pivot];
            data[pivot] = temp;
            
        }
        else {
            // i번째와 j번째를 스왑
            temp = data[i];
            data[i] = data[j];
            data[j] = temp;
        }
    }

    // 분할 계산
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
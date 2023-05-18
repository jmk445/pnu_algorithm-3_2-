#include<iostream>
#include<string>
using namespace std;


bool has_different_digits(int num1, int num2) {
    // Convert integers to strings to access their individual digits
    string str_num1 = to_string(num1);
    string str_num2 = to_string(num2);

    if (str_num1.length() == 1) {
        str_num1 += "00";
    }
    if (str_num2.length() == 1) {
        str_num1 += "00";
    }

    
    if (str_num1.length() == 2) {
        str_num1 += "0";
    }
    if (str_num2.length() == 2) {
        str_num1 += "0";
    }
    string str = str_num1 + str_num2;

    for (int i = 0; i < str.length() - 1; i++) {
        for (int j = i+1; j < str.length() ; j++) {
            if (str[i] == str[j]) {
                //cout << str << "this"<<endl;
                return false;
            }
        }
    }
   
    // Check if any digit in num1 is in num2
    for (char digit : str_num1) {
        if (str_num2.find(digit) != std::string::npos) {
            return false;
        }
    }

    // Check if any digit in num2 is in num1
    for (char digit : str_num2) {
        if (str_num1.find(digit) != std::string::npos) {
            return false;
        }
    }

    // If no common digits found, return true
    return true;
}

int main() {
	int N;

	cin >> N;

    int* d = new int[N+1];

    int sum = 0;

    for (int i = 0; i <= N; i++) {
        int target = i;
        sum = 0;
        while (target) { 
            sum += target % 10;
            target /= 10;
        }        
        d[i] = sum;
    }
    //cout << "hello";
        

    int max = 0;
    int temp = 0;
    int temp1 = 0;
    int temp2 = 0;
    max = d[0] + d[N - 1];
    for (int i = 1; i <(N / 2); i++) {
        temp = i;
        temp1 =N - i;        
        if ((max < (d[i] + d[N - i])) && has_different_digits(temp, temp1) && (to_string(N-i).length() <= 3 )&&( to_string(i).length() <= 3)) {
            max = d[i] + d[N - i];         
            temp2 = i;            
        }        
    }
    if (temp2 == 0) {
        cout << "-1";
    }
    else {
        if (to_string(temp2).length() == 1) {
            cout << "00";
        }
        else if (to_string(temp2).length() == 2) {
            cout << "0";
        }
        cout << temp2 << " " << N - temp2 << " " << max;
    }
 

        
	
}
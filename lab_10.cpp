#include <iostream>
#include <string>
using namespace std;

int sum_of_n(){
    int n;
    int num;
    int sum;
    cout << "How many numbers do you want to enter? ";
    cin >> n;
    for (int i = 0; i < n; i++){
        cout << "Enter number: ";
        cin >> num;
        sum += num;
    }
    return sum;
}

int average(){
    int n;
    int num;
    int avg;
    cout << "How many numbers do you want to enter? ";
    cin >> n;
    for (int i = 0; i < n; i++){
        cout << "Enter number: ";
        cin >> num;
        avg += num;
    }
    avg = avg / n;
    return avg;
}

int minimum(int array[]){
    int n;
    int num;
    int min;
    cout << "How many numbers do you want to enter? ";
    cin >> n;
    for (int i = 0; i < n; i++){
        cout << "Enter number: ";
        cin >> array[i];
    }

    for (int i = 1; i < n; ++i) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

int indexOfLargestElement(double array[], int size) {
    for(int i = 0; i < 15; ++i){
        cin >> array[i];
    }
    int min = array[0];
     for(int i = 1; i < 15; ++i) {
            if(array[i] >= min){
                min = array[i];
            }
     }
     cout << min;}

    bool strictlyEqual(const int list1[], const int list2[], int size) {
    for (int i = 0; i < size; i++) {
        if (list1[i] != list2[i]) {
            return false;
        }
    }
    return true; }



    void countLowercaseLetters(){
    int frequency[26] = {0}; 
    char ch;
    while (true) {
        cin >> ch;
        if (ch == '0') {
            break;
        }
        if (ch >= 'a' && ch <= 'z') {
            frequency[ch - 'a']++; 
        }
    
    }
    for (int i = 0; i < 26; i++) {
        if (frequency[i] > 0) {
            cout << char('a' + i) << ": " << frequency[i] << endl;
        }
    }
}


void readArray(int arr[], int n) {
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void sortArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;   }}}}

void printArray(const int arr[], int n) {
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }}

void reverseArray(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;   }}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " "; }
    cout << endl;}

bool isSorted(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }}
    return true; 
}

void runProgram() {
    int n, arr[100];
    cout << "Insert the number of elements: ";
    cin >> n;

    cout << "Enter the integers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
     if (isSorted(arr, n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

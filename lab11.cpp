 /* Ms.Nargiza I had to do these with online compiler, so there are many main functions */
 
 #include <iostream>
using namespace std;

int sum(int arr[], int size) {
    int total = 0;
    for(int i = 0; i < size; ++i) {
        total += arr[i];
    }
    return total;
}

int average(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; ++i){
        sum += arr[i];
    }
    return static_cast<double>(sum / size);
}

int main() {
    /*
    int size;
    cout << "n = ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }    
    int result = sum(arr,size);
    cout << result; */
    /* _____________________________________*/
    int size ;
    cout << "n = ";
    cin >> size ;
    int arr[size] ;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    double result = average(arr, size);
    cout << result;
    return 0;
}


#include <iostream>
using namespace std;

int MIN(int arr[], int size) {
   int min = arr[0] ;
   for (int i = 1; i < size; ++i) {
        if (arr[i] < min){
            min = arr[i];
        }   
   }
   return min ;
}




int main() {
    
    int size;
    cout << "n = ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }    
    int result = MIN(arr, size);
    cout <<"Min = " << result;
  
    return 0;
}
#include <iostream>
using namespace std
;
int indexOfLargestElement(double array[], int size){
    if (size <= 0) {
        return -1;
    }
    int index = 0;
   int max = array[0] ;
   for (int i = 1; i < size; ++i) {
        if (array[i] >= max){
            max = array[i];
            index = i;
        }   
   }
   return index;
}




int main() {
    
    int size;
    cout << "n = ";
    cin >> size;
    double arr[size];
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }    
    int result = indexOfLargestElement(arr, size);
    if(result == -1){
        cout << "Error";
    }
    else {
    cout <<"Max num index = " << result;}
  
    return 0;
}
#include <iostream>
using namespace std
;
bool strictlyEqual(const int list1[], const int list2[], int size){
    bool isTheSame = true;
  
   for (int i = 0; i < size; ++i) {
        if (list1[i] != list2[i]){
           isTheSame = false;
        }   
   }
   return isTheSame;
}




int main() {
    
    int size;
    cout << "n = ";
    cin >> size;
    int arr1[size];
    int arr2[size];
    for (int i = 0; i < size; ++i) {
        cin >> arr1[i];
    }    
    for (int i = 0; i < size; ++i) {
        cin >> arr2[i];
    }  
    bool result = strictlyEqual(arr1, arr2, size);
    if(result == false){
        cout << "not strictly equal";
    }
    else {
    cout <<"strictly equal ";}
  
    return 0;
}
#include <iostream>
using namespace std;
void swap(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}

void square(int *a){
        *a = (*a) * (*a);
        }

void reverseArray(int arr, int size) {
    int start = 0;
    int end = size - 1;

    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = arr[start];

        end--;
        start++;
        }
 

int* countDigits(const int& number) {
    static int count[10] = {0} ;
    for(int i = 0; i < 10; ++i){
        count[i] = 0;
    } 
    int n = number;
    while(n > 0) {
        int digit = n / 10;
        count[digit] ++;
        n /= 10;
    }
    return count;
}
}




int main(){
    int num = 42;
    int *num1 = &num;
    cout << num1;

    int numm = 23;
    int *numm2 = &numm;
    cout << "Before changing" << numm;
    numm2 = 20;
    cout << "After changing"<< numm;

    int a = 5;
    int b = 4;
    cout <<"Before changing " <<a <<b;
    swap(&a,&b);
    cout << "After swapping" <<a <<b;

    int arr[5] = {10,11,12,13,14} ;
    int *num = arr;
    for (int i = 0; i < 5; ++i) {
        cout << *(num + i);
    }
     int arr[5] = {1,2,3,4,5};
   int *num = arr;
   int mid = 5 / 2;
   cout << *(num + mid);

   int num = 5;
    square(&num);
    cout <<num;


    int arr[3] = {1,2,3}
    int *num = arr;
    cout<< sizeof(num);
    cout <<sizeof(arr);


    int arr[7] = {13, 22, -10, 36, 45};
    int *ptr = arr;
    int max = *ptr;
    for(int i = 1; i < 7; ++i) {
        if(max < *(ptr + i)){
            max = *(ptr + i);
        }
    }
    cout << max;


    int a,b;
    cin >> a;
    cin >> b;
    int *ptrA = &a;
    int *ptrB = &b;
    cout << *ptrA << *ptrB;


    int num;
    cout << "The number of dataset:"
    cin >> num;
    int arr[num];
    cout << "Insert the numbers:";
    for (int i = 0; i < num; ++i) {
        cin >> arr[i];
    }

     int num;
    cout << "The number of elements:";
    cin >> num;
    int arr[num];
    cout << "Insert the numbers:";
    for (int i = 0; i < num; ++i) {
        cin >> arr[i];
    }
    int *ptr = arr;
    int max = *ptr;
    for (int i = 1; i < num; ++i) {
        if (max < *(ptr + i)){
            max = *(ptr + i);
        }
    }
    cout << max;


#include <iostream>
using namespace std;
#define val 33.3
#define number 50
int a;
int& fun(){
return a;
}
int foo(){
return a;
}
int main() {
int n1=9,n2=11, *ptr_1= nullptr, *ptr_2= nullptr, k=0;
double t;
//*ptr_1=&n1;
ptr_1=&n2;
//*ptr_2=&n2;
ptr_2=&n1;
t=val;
//k=val;
//foo()=number;
fun()=number;
cout << a << " " << *ptr_1 << " " << t << " " << *ptr_2 << endl;



int arr[10] = {1,2,3,4,4,5,6,7,8,9}
int *ptr = arr;
for(int i = 0; i < 10; ++i){}
cout <<"Adress" << ptr + i << "Value" <<*(ptr + i)}


    int message = 42;         
    int* ptr = &message;    
    cout << "Secret message: " << *ptr << endl;


    int arr[5] = {10, 20, 30, 40, 50}
    int *ptr = arr;
    cout << *(ptr + 4);


    int score = 75;
    int *ptr = &score;
    cout <<"Original" << score;
    *ptr = *ptr + 10;
    cout<< "Updated" << *ptr;






    int ranking[5] = {78, 95, 85, 62, 88};
    int* ptr = ranking;
    for(int i = 0; i < 4; ++i){
        for(int j = 0; j < 4 - i; ++j){
            if(*(ptr + j) > *(ptr + j + 1)){
                int temp = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = temp;
            }
        }
    }

    for(int i = 0; i < 5; ++i) {
        cout << *(ptr + i) <<" ";
    };

     int scores[5] = {78, 95, 85, 62, 88};
     int* highest = &scores[0];
     int* secondHighest = nullptr;
     int* thirdHighest = nullptr;
     
     for(int i = 0; i < 5; ++i){
        if(*highest < scores[i]){
            thirdHighest = secondHighest;
            secondHighest = highest;
            highest = &scores[i];
        }
        else if((secondHighest == nullptr) || (*secondHighest < scores[i])){
            thirdHighest = secondHighest;
            secondHighest = &scores[i];
        } 
         else if((thirdHighest == nullptr) || (*thirdHighest < scores[i])){
            thirdHighest = &scores[i];
         }
     }


    return 0;



}
  
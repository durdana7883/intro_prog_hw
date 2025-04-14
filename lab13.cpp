#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;


void greet() {
  cout <<" Greet from greet()";
}
void bye() {
  cout << "Bye from bye()"
}


int add(int num1, int num2) {
  return num1 + num2;
}

int multiply(int num1, int num2) {
  return num1 * num2;
}



void calculate(int (*op)(int, int), int x, int y) {
  int result = op(x,y)
  cout << result + 1;
}

int main() {
  /*
  int arr[5] = {10,20,30,40,50};
  int* ptr = arr;
  for( int i = 0, i < 5, ++i){
    cout << *(ptr + i);
  }


  int arr[] = {2,4,6,8,10,12} ;
  int *ptr = arr;
  int arr1[6];
  for(int i = 0, i < size, ++i) {
    arr1[i] = 3 * (*(ptr + i))
  }
  cout << arr1[6];

  int arr3[4] = {5, 10, 15, 20};
  int *ptr = arr3;
  cout << arr3[2] << *(ptr + 2) ;*/

  int arr4[5] = {1, 2, 3, 4, 5};
  int *ptr = arr4;
  for (int i = 5; i > 0; --i){
    cout << *(ptr + i - 1) << " "; 
  }



  int arr[4] = {10, 20, 30, 40};
  int *ptr = arr;
  for(int i = 0; i < 4; ++i) {
    cout << "The adress of" << *(ptr + i) << "is" << (ptr + i) ; 
  }

  int arr[4] = {11, 13, 18, 20, 30};
  int* ptr = arr;
  for(int i = 0; i < 5, ++i){
    if(*(ptr + i) % 2 == 0){
      cout << *(ptr + i) <<" ";
      
    }
  }  



  int matrix[2][3] = { {1, 2, 3}, {4, 5, 6} };
  for(int i = 0; i < 2; ++i) {
    for(int j = 0; j < 3; ++j){
      cout << *(*(matrix + i) + j)
    }
  }



  int a = 7;
  int b = 14;
  int c = 21;
  int* ptrs[3] = {&a, &b, &c};
  for(int i = 0; i < 3; ++i) {
    cout << *ptrs[i];
  }


  int arr[5] = {9, 3, 7, 1, 6};
  int* ptr = arr;
  for(int i = 0; i < 5; ++i) {
    int temp;
    for(int j = 0; j < 4 - i; ++j) {
      if ((*(ptr + j)) > (*(ptr + j + 1))){
        temp = *(ptr + j);
        *(ptr + j) = *(ptr + j + 1);
        *(ptr + j + 1) = temp;
      }
    }
  }
  for(int i = 0; i < 5; ++i) {
    cout << *(ptr + i) <<" ";
  }



  const char* suit[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};
  for(int i = 0; i < 4; ++i) {
    cout << suit[i];
  }



  const string* days[3] = {"Mon", "Tue", "Wed"} ;
  for(int i = 0; i < 3; ++i) {
    cout << days[i][1] << " ";
  }


  const char* days[3] = {"Mon", "Tue", "Wed"};
  for (int i = 0; i < 3; ++i) {
    cout << *(*(days + i) + 1);
  }



  int deck[4][13] = {0};
  const char* suits[4] = { "Hearts", "Diamonds", "Clubs", "Spades" };
  const char* faces[13] = { "Ace", "Two", "Three", "Four", "Five", "Six", "Seven",
                            "Eight", "Nine", "Ten", "Jack", "Queen", "King" };

  deck[0][0] = 1;
  deck[3][1] = 1;


  for (int i = 0; i < 4; ++i) {
    for (int j = 0; j < 13; ++j) {
      if (deck[i][j] == 1) {
        cout << suits[i] <<"of" << faces[j];
      }
    }
  }



  int deck[4][13] = {0};
  const char* suits[4] = { "Hearts", "Diamonds", "Clubs", "Spades" };
  const char* faces[13] = { "Ace", "Two", "Three", "Four", "Five", "Six", "Seven",
                            "Eight", "Nine", "Ten", "Jack", "Queen", "King" };
  srand(time(0));

  for (int place = 0; place < 52; ++place) {

    int row, column;

    do {
      row = rand() % 4;
      column = rand() % 13;
    } while (deck[row][column] != 0);
    deck[row][column] = place;


    for(int i = 0; i < 52; ++i) {
      for (int j = 0; j < 4; ++j) {
        for (int k = 0; k < 13; ++k) {
          if (deck[j][k] == i) {
            cout <<suits[j] <<"of" << faces[k];
          }
        }
      }
    }

  }


  void (*fptr)();

  fptr = greet;
  fptr();

  fptr = bye;
  fptr();



  int (*fptr1)(int, int);

  int num1 = 3;
  int num2 = 5;

  fptr1 = multiply;
  int result1 = fptr1(num1, num2);
  cout << result1;

  fptr1 = add;
  int result2 = fptr1(num1, num2);
  cout << result2;



  calculate(add, num1, num2);
  calculate(multiply, num1, num2);



  int (*ops[])(int,int) = {add, multiply};
  int x,y, choice;
  cout <<"Enter the first number: ";
  cin >> x;
  cout << "Enter the second number: "
  cin >> y;
  cout <<"Choose 1 for addition, 2 for multiplication";
  cin>> choice;

  int result;

  switch (choice) {
    case 1:
      result = (ops[0])(x,y);
      break;
    case 2:
      result = (ops[1])(x,y);
    break;
  }
  cout << result;







  

}

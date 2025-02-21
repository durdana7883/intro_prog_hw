#include <iostream>
#include <string>

int sum_to_100() {
    int sum = 0;
    for (int i = 0; i <= 100; i++) {
        sum += i; 
    }
    return sum; 
}


int sum_up(int num){
    int sum = 0;
    while (num < 0){
        sum += num;
        num--;
    }
    return sum;
}

bool is_prime(int num) {
    if (num <= 1) return false; 
    if (num == 2) return true;  
    if (num % 2 == 0) return false; 
   
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) {
            return false; 
        }
    }
    return true;
}

int prime_to_10(){
    int num = 0;
    for (int i = 0; i <= 10;){
        num++;
        if (is_prime(num)){
            std::cout << num << std::endl;
            i++;
        }
    }
    return 0;
}

int prime_up(){
    int num;
    std::cin >> num;
    for (int i; i >= num; i++){
        if (is_prime(i)){
            std::cout << i << std::endl;
        }
    }
    return 0;
}

int collatz(){
    int num;
    std::cin >> num;
    while (num != 1){
        if (num % 2 != 0){
            num = num *3 +1;
            std::cout << num;
        } else{
            num /= 2;
            std::cout << num;
        }
    } 
    return 0;
}

int count(){
    int num;
    int i;
    std:: cin >> num;
    while (num > 0){
        num %= 10;
        i++;
    }
    return i;
}

int extract(){
    int num;
    int digit;
    std:: cin >> num;
    while (num > 0){
        digit = num % 10;
        num /= 10;
        std::cout << digit;
    }
    return 0;
}

int gcd(){
    int num1;
    int num2;
    int temp;
    std:: cin >> num1;
    std:: cin >> num2;
    while (num2 != 0) {
        int temp = num2; 
        num2 = num1 % num2;     
        num1 = temp;     
    }
    return num1;
}

int sum_until(){
    int num;
    int sum;
    while (sum > 100){
        std::cin >> num;
        sum += num;
    }
    return sum;
}

int withdr(){
    int num;
    int balance = 500;
    std::cout << balance << std::endl; 
    while (balance > 0){
        std::cin >> num;
        if (num != 0){
            balance -= num;
            std::cout << balance << std::endl;
        }else{
            break;
        }
        
    }
    std::cout << "No money left" << std::endl;
    return 0;
}

bool enter(){
    string inp;
    do{
        std::cin >> inp;
        std::cout << "Invalid" << std::endl;
        return false;
    }
    while (inp != 'y');
    std::cout << "Accepted" << std::endl;
    return true;
}

int atm(){
    int choose;
    do{
        std::cout << "ATM display could've been here" << std::endl;
        std::cin >> choose;
        std::cout << "Processing..." << std::endl;
    }
    while (choose != 4);
    return 0;
}


int calc(){
    int choose;
    do{
        std::cout << "Cacl display could've been here" << std::endl;
        std::cin >> choose;
        std::cout << "Processing..." << std::endl;
    }
    while (choose != 4);
}

int pass(){
    int inp;
    do{
        std::cout << "Pass" << std::endl;
        std::cin >> inp;
        std::cout << "Incorrect" << std::endl;
    }
    while (inp != 6543);
    std::cout << "Correct" << std::endl;
}

int guess(){
    int inp;
    do{
        std::cin >> inp;
        if (inp > 8){
            std::cout << "high" << std::endl;
        }else{
            std::cout << "low" << std::endl;
        }
        
    }
    while (inp != 8);
    std::cout << "Correct" << std::endl;
}
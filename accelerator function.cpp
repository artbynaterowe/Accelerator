#include <math.h>
#include <time.h>
#include <iostream>
#include <windows.h>
using namespace std;

void accelerate(int& speed, int amount){
speed = speed + amount;
}
  int main(void) {
    int current_speed = 30;
    int accel_amount;
    cout << "Please enter the speed to accelerate " << endl;
    cout << "current speed :" << current_speed << endl;
    cout << "Accelerate by how much?" << endl;
    cin >> accel_amount; 
    

    accelerate(current_speed, accel_amount);
    cout << "accelerated speed: " << current_speed << endl;
    }

















































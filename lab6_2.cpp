#include <iostream>
#include <cmath>

using namespace std;

// ฟังก์ชันแปลงองศาเป็นเรเดียน
double deg2rad(double deg) {
    return deg * (M_PI / 180);
}

// ฟังก์ชันแปลงเรเดียนเป็นองศา
double rad2deg(double rad) {
    return rad * (180 / M_PI);
}

// ฟังก์ชันคำนวณส่วนประกอบ X ของเวกเตอร์
double findXComponent(double l1, double l2, double a1, double a2) {
    return (l1 * cos(a1)) + (l2 * cos(a2));
}

// ฟังก์ชันคำนวณส่วนประกอบ Y ของเวกเตอร์
double findYComponent(double l1, double l2, double a1, double a2) {
    return (l1 * sin(a1)) + (l2 * sin(a2));
}

// ฟังก์ชันคำนวณความยาวของเวกเตอร์ผลลัพธ์
double pythagoras(double xcomp, double ycomp) {
    return sqrt((xcomp * xcomp) + (ycomp * ycomp));
}

// ฟังก์ชันแสดงผลลัพธ์
void showResult(double result_vec_length, double result_vec_direction) {
    cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
    cout<< "Length of the resultant vector = " << result_vec_length << "\n";
    cout<< "Direction of the resultant vector (deg) = " << result_vec_direction << "\n";
    cout<< "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
}


int main() {
    double l1, l2, a1, a2, xcomp, ycomp, result_vec_length, result_vec_direction;
    
    // รับข้อมูลจากผู้ใช้
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;

    
    
    // แปลงมุมเป็นเรเดียน
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    
    // คำนวณส่วนประกอบ X และ Y ของเวกเตอร์
    xcomp = findXComponent(l1, l2, a1, a2);
    ycomp = findYComponent(l1, l2, a1, a2);
    
    // คำนวณความยาวของเวกเตอร์ผลลัพธ์
    result_vec_length = pythagoras(xcomp, ycomp); 
    
    // คำนวณทิศทางของเวกเตอร์ผลลัพธ์
    result_vec_direction = rad2deg(atan2(ycomp, xcomp)); 
    
    // แสดงผลลัพธ์
    showResult(result_vec_length, result_vec_direction);
}

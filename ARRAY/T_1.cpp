// โจทย์ที่ 1: การหาผลรวมของค่าใน array
// โจทย์:
// เขียนโปรแกรม C++ เพื่อรับค่าตัวเลขเข้ามาใน array ที่มีขนาด 𝑛
// n (โดย  n คือจำนวนสมาชิกใน array) จากนั้นหาผลรวมของค่าทั้งหมดใน array และแสดงผลลัพธ์
//input 
// n = 5
// array = [1, 2, 3, 4, 5]
//ผลรวมของค่าใน array: 15

//######################################################################

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "กรอกจำนวนสมาชิกใน array: ";
    cin >> n;
    
    int arr[n];
    cout << "กรอกสมาชิกของ array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    
    cout << "ผลรวมของค่าใน array: " << sum << endl;
    return 0;
}

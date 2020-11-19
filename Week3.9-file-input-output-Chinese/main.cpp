#include <iostream>
#include <fstream>

// std标准空间必备
using namespace std;

int main(void){
    char automobile[50];
    int year;
    double a_price;
    double d_price;

    ofstream outFile; 
    outFile.open("carinfo.txt");

    cout << "Enter the make and model of automobile: ";
    cin.getline(automobile, 50);
    cout << "Enter the model year: ";
    cin >> year;
    cout << "Enter the original asking price: ";
    cin >> a_price;
    d_price = 0.913 * a_price;

    outFile << fixed; // fixed 表示浮点输出应该以固定点或小数点表示法显示
    outFile.precision(2); // 浮点数后保留2位
    outFile.setf(ios_base::showpoint); // ios_base::showpoint
    outFile << "Make and Model: " << automobile << endl;
    outFile << "Year: " << year << endl;
    outFile << "Was asking $" << a_price << endl;
    outFile << "Now asking $" << d_price << endl;

    outFile.close(); // 关闭文件对象
    
    return 0;
}
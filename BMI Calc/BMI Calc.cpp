#include <iostream>
#include <cmath>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

int main(void)
{
	double height;
	double weight;
	int BMI;

	cout << "請輸入你的高度 (米) = ";
	cin >> height;
	cout << "請輸入你的體重 (公斤) = ";
	cin >> weight;

	system("CLS");

	cout << "為確保資料輸入正確，請核對以下資料" << endl;
	cout << "高度 = " << height << " (m)" << endl;
	cout << "體重 = " << weight << " (kg)" << endl;
	cout << "" << endl;

	system("pause");
	system("CLS");

	BMI = weight / pow(height, 2);
	string result[5] = {"過輕", "正常", "過重", "輕度肥胖", "重度肥胖"};
	string output;
	if (BMI < 18.5)
	{
		output = result[0];
	}
	if (BMI == 18.5 && BMI < 24)
	{
		output = result[1];
	}
	if (BMI >= 24 && BMI < 27)
	{
		output = result[2];
	}
	if (BMI >= 27 && BMI < 30)
	{
		output = result[3];
	}
	if (BMI >= 35)
	{
		output = result[4];
	}

	system("CLS");

	cout << "你的結果及資料是 :" << endl;
	cout << "" << endl;
	cout << "高度 = " << height << " (m)" << endl;
	cout << "體重 = " << weight << " (kg)" << endl;
	cout << "你的 BMI (身體質量指數) 是 = " << BMI << endl;
	cout << "你的結果是 : " << output << endl;
	cout << "" << endl;
	system("pause");
	return 0;
}


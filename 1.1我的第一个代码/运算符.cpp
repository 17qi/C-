#include <iostream>
using namespace std;
int main()
{
	int a = 100,b=3;
	cout << a*b << endl;
	cout << a/b << endl;//整数相除结果也为整数，且除数不能为零
						//小数相处结果也可为小数
	cout << a % b << endl;//仅整数可取模，小数不能做取模（取余）运算


	system("pause");
	return 0;
}
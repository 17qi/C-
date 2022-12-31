//#include <iostream>
//#include<string>
////using namespace std;
//static int count = 10;//static用在全局变量时，会使变量的作用域限制在声明它的文件内
//
//void func(void);
//
//
//int main()
//{	
//	auto f = 3;//c++11和c++98中auto关键字用于自动变量的声明，可以根据初始化表达式自动推断被声明的变量的类型，
//	std::cout << f;				//c++17中已删去
//
//	register int miles=1;//定义存储在寄存器中而不是RAM中，且不能对它应用一元‘&’运算符（因为它没内存位置）
//	std::cout << miles;				//使用register时并不绝对将变量储存在寄存器中，还取决于硬件和实现的限制
//
//
//	std::cout << '\n';
//	while (count--) 
//	{
//		func();
//	}
//
//	return 0;
//}
//void func(void)
//{
//	static int i = 5;//static 存储类指示编译器在程序的生命周期内保持局部变量的存在，
//					//而不需要在每次它进入和离开作用域时进行创建和销毁。
//					//因此，使用 static 修饰局部变量可以在函数调用之间保持局部变量的值。
//	i++;
//	std::cout << "变量i为" << i;
//	std::cout << ",变量count为" << count << std::endl;
//}
//		/*与static相对的是extern，有多个文件且定义了一个可以在其他文件中使用的全局变量或函数时，
//		可以在其他文件中使用 extern 来得到已定义的变量或函数的引用。
//		可以这么理解，extern 是用来在另一个文件中声明一个全局变量或函数。*/
// #include <iostream>
// using namespace std;
// // first name space
// namespace first_space
// {
// 	void func()
// 	{
// 		cout << "Inside first_space" << endl;
// 	}
// }
// // second name space
// namespace second_space
// {
// 	void func()
// 	{
// 		cout << "Inside second_space" << endl;
// 	}
// }
// // // case 1
// // using namespace first_space;
// // int main()
// // {
// // 	// This calls function from first name space.
// // 	func();
// // 	return 0;
// // }

// // // case 2
// // using namespace first_space;
// // using namespace second_space;
// // int main()
// // {
// // 	// func(); collision
// // 	return 0;
// // }

// // case 3
// int main(){
// 	first_space::func();
// 	second_space::func();
// }

#include <iostream>
using namespace std;

// first name space
namespace first_space
{
	void func()
	{
		cout << "Inside first_space" << endl;
	}
	// second name space
	namespace second_space
	{
		void func()
		{
			cout << "Inside second_space" << endl;
		}
	}
}
using namespace first_space::second_space;
int main()
{
	// This calls function from second name space.
	func();
	return 0;
}

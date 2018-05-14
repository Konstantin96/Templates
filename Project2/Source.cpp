#include "Vector.h"
#include "Vector.cpp"

//template<class T>
//void print_array(T* arr, size_t n) {
//	for (int i = 0; i<n; i++)
//		cout << arr[i] << "\t" << endl;
//}
//
//template <typename T1, typename T2>
//auto calc(T1 a, T2 b)->decltype(a*b) {
//	return a*b;
//}
//
//template<typename T>
//class arr {
//public:
//	T *els;
//	int n;
//};

int main() {
	array_<int>a(5);
	cin >> a;
	cout << a;

	
	system("pause");
	return 0;
}
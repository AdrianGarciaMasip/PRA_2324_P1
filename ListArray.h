#include <ostream>
#include "list.h"

tremplate <typename T>
class ListArray : public Lst<T>{
	private:
		T *arr;
		int max;
		int n;
		static const int MINSIZE = 2;
		void resize(int new_size){
		T a = new T [new_size];
		for(int i = 0; i < max; i++){
			a[i] = arr[i];
		}
		delete[] arr;
		arr = a;
		max = new_size;
		}
	public:
		ListArray(){
			arr = new T [MINISIZE];
		}
		~ListArray(){
			delete[] arr;
		}
}

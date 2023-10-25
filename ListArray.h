#include <ostream>
#include "List.h"


template <typename T>

class ListArray : public List<T>{
	private:
		T* arr;
		int max;
		int n;
		static const int MINSIZE;

		void resize(int new_size){
			T* new_arr = new T[new_size];
			for(int i = 0; i < n; i++)
				new_arr[i] = arr[i];
			delete[] arr;
			arr = new_array;
			max = new_size;
		}

	public:
		ListArray(){
			arr = new T[MINSIZE];
			max = MINSIZE;
			n = 0;

		}

		~ListArray(){
			delete[] arr;
			n = 0;
		}

		T operator[](int pos){
			if(pos > size() || pos < 0)
				throw out_of_range("La posición está fuera del array");
			return arr[pos];
		}
		friend ostream& operator << (ostream &out, const ListArray<T> &list){
			cout << "List -> [";
			for(int i = 0; i < list.n; i++){
				cout << list.arr[i] << " ";
			}
			cout << "]" << endl;
		return out;
		}
};
























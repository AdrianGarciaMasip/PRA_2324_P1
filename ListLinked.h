#include <ostream>
#include "List.h"
#include "Node.h"

template <typename T>
class ListLinked : public List<T> {

    private:
	    Node<T>* first;
    	    int n;	    
        	
    public:
	    ListLinked(){
	    
	    }

	    ~ListLinked(){
	    	while(first != nullptr){
			Node<T> aux = first->next;
			delete first;
			first = aux;
		}
	    }

	    T operator[](int pos){
	    	if(pos < 0 || pos >= n){
			throw std::out_of_range("Está fuera del rango.");
		}else{
			Node<T>* aux = first;
			for(int i = 0; i != pos; i++){
				aux = aux->next;
			}
			return aux->data;
		}
	    }

	    friend std::ostream& operator << (std::ostream &out, const ListLinked<T> &list){
	    	out << list.n << std::endl;
		return out;
	    }

	    void insert(int pos, T e){
	    	if(pos >= 0 && pos <= n){
			if(pos == 0){
				first = new Node(e, first->next);
			}
			if(pos == n){
				Node<T>* aux = first;
				Node<T>* aux2 = aux;
				for(int i = 0; i < pos; i++){
					preaux = aux;
					aux = aux->next;
				}
				preaux->next = new Node(e, aux);
			}
			n++;
		}
		else{
			throw std::out_of_range("Está fuera del rango.");
		}
	    }

	    void append(T e){
	    	insert(n, e);
	    }

	    void prepend(T e){
	    	insert(0, e);
	    }

	    T remove(int pos){
	    
	    }


        

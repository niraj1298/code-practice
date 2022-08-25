#include <iostream>
#include <vector>
#include <queue>

using namespace std;

template <class T>
class Queue {
private:
	vector<T> vec[];

	int h = 0; 
	int t = -1;
	int size; 
	
public:

	friend ostream &operator <<(ostream &os, const queue &x);

	Queue() { vec.push_back(new T()); vec.push_back(new T()); h = 0; t = 1; size = 0; }
	bool empty() const;
	bool full() const;
	void push(T e);
	void pop();
	int peek();
};
// new class template <T> 
template <class T> // display method
friend ostream &operator <<(ostream &os, const queue &x) {
	// next steps : 
	// displaying vector only. start at head end at t
	// print from head(if head print 'h') to tail (if tail print 't') only, whatever is before or after print out *
	// if statements for printing h t 
	// where cout goes put os instead


	
	for (int i = 0; i < vec.size(); i++) {
	
		if (vec.at(h))
			os << vec.(h) << 'h';
		else os << i << '*';
		if (vec.at(t))
			os << vec.(t) << 't';
		else os << i << '*';
		os << vec.being(h) << " " << vec.end(t) << endl;
	}
	return os;
}

template <class T>
bool Queue:: empty() const { return h == -1; } // size == 0; 

template <class T>
bool Queue:: full() const { return h == (t + 2) % size; } // size == vec.size();

template <class T>
void Queue::push(T e) {
	//queue full then push onto vector
	// q full -> new box 
	if(full()) {
		// q is full add some element to the vector to save a size, once the extra spot is there, 
		//then move the element or elements from the q to the vector.
		for (int i = 0; i < vec.size(); i++) {
			vec.push_back(e); // double the size once vec is full
		}
	}
	//increment size when q put into vec
   //put it in an index before the end of the vec
	vec.at(t + 1) = e;
	t++;

	//everytime we add an element to the vector we increase the q size
	size++;
}


template <class T>
void Queue::pop() {
	//get rid of a space in the queue , then just move the head one space forward.
	size--;
	h = h + 1;

}

template <class T>
T Queue::peek() { return vec.at(h); }


int main(void) {
	Queue<int> queue;

	cout << "Initial queue" << endl;
	cout << queue << endl << endl;
	for (int j = 0; j<3; j++) {
		cout << "Push " << 10 * (j + 1) << " items" << endl;
		for (int i = 0; i<10 * (j + 1); i++) {
			queue.push(i);
			cout << queue << endl;
		}
		cout << endl;
		cout << "Pop " << 9 * (j + 1) << " items" << endl;
		for (int i = 0; i<9 * (j + 1); i++) {
			queue.pop();
			cout << queue << endl;
		}
		cout << endl;
	}
	return 0;
}

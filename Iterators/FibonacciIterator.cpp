#include "FibonacciIterator.h"

#define ZERO 0

template <class T>
FibonacciIterator<T>::FibonacciIterator(T limit) {
    if ( limit > ZERO ) {
        this->negaFibonacci = false;
    } else {
        this->negaFibonacci = true;
    }
    if ( limit < ZERO ) {
        limit *= -1;
    }
    if ( limit > 46 ) {
        throw OutOfRangeException();
    }
    this->array = new T[limit];
    this->fibonacci = ZERO;
    this->index = ZERO;
    this->limit = limit;
    this->currentNumber = ZERO;
    this->previousNumber = 1;
    this->array[ZERO] = ZERO;
   
    for ( int i = 1; i <= limit; i++ ) {
        this->array[i] = calculateFibonacci();
    }
}

template <class T>
FibonacciIterator<T>::~FibonacciIterator() {
    delete[]this->array;
}

template <class T>
void FibonacciIterator<T>::reloadIterator() {
    this->index = ZERO;
}

template <class T>
void FibonacciIterator<T>::previous() {
    if ( index <= ZERO ) {
        std::cout << "ERROR: You will get out of range!" << std::endl;
        return;
    }
    this->index -= 1;
}

template <class T>
void FibonacciIterator<T>::next() {
    if ( over() ) { // проверка чтобы не выскочить за границу
        std::cout << "ERROR: You will get out of range!" << std::endl;
        return;
    }
    this->index += 1;
}

template <class T>
void FibonacciIterator<T>::operator++() { next(); }

template <class T>
void FibonacciIterator<T>::operator++(int) { operator++(); }

template <class T>
void FibonacciIterator<T>::operator--() { previous(); }

template <class T>
void FibonacciIterator<T>::operator--(int) { operator--(); }

template <class T>
bool FibonacciIterator<T>::over() {
    return index > limit;
}

template <class T>
T FibonacciIterator<T>::value() {
    T result = array[index];

    if ( over() ) {
        std::cout << "ERROR: You are out of range!" << std::endl;
        throw OutOfRangeException();
    }
    if ( negaFibonacci == true && index % 2 == ZERO ) {
        result *= -1;
    } 
    return result;
}

template <class T>
T FibonacciIterator<T>::operator*() { return value(); }

template class FibonacciIterator<long int>; // explicit instantiation
template class FibonacciIterator<int>; // explicit instantiation
template class FibonacciIterator<bool>;


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
    this->isOver = false;
    this->isFull = false;
    this->fibSequence = new std::vector<T>();
    this->fibonacci = ZERO;
    this->index = ZERO;
    this->limit = limit - 1;
    this->currentNumber = ZERO;
    this->previousNumber = 1;
    this->fibSequence->push_back(ZERO);
}

template <class T>
FibonacciIterator<T>::~FibonacciIterator() {
    fibSequence->clear();
}

template <class T>
void FibonacciIterator<T>::reloadIterator() {
    this->index = ZERO;
}

template <class T>
void FibonacciIterator<T>::previous() {
    if ( begin() ) {
        return;
    }
    if ( over() && index == limit ) {
        isOver = false;
    }
    this->index -= 1;
}

template <class T>
void FibonacciIterator<T>::next() {
    if ( over() ) { // проверка чтобы не выскочить за границу
        return;
    }
    if ( index >= limit ) {
        calculateFibonacci();
        isOver = true;
        isFull = true;
        return;
    }
    if ( !isFull ) {
        this->index += 1;
        calculateFibonacci();
    } else {
        this->index += 1;
    }
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
    if ( isOver ) {
        return true;
    }
    return false;
}

template <class T>
bool FibonacciIterator<T>::begin() {
    if ( index < 0 ) {
        reloadIterator();
        return true;
    }
    return false;
}

template <class T>
T FibonacciIterator<T>::value() {
    T result = fibSequence->at(index);

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


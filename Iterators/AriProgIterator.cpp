T#include "AriProgIterator.h"
using namespace std;

template <class T> 
AriProgIterator<T>::AriProgIterator(T member, T step, T length) {
    this->member = member;
    this->step = step;
    this->length = length;
    this->current = member;
    this->index = 1;
}

template <class T> 
AriProgIterator<T>::~AriProgIterator() {}

template <class T> 
void AriProgIterator<T>::reloadIterator() {
    index = 1;
    current = member;
}

template <class T> 
void AriProgIterator<T>::previous() {
    if ( index <= 1 ) { // проверка чтобы не выскочить за границу
        std::cout << "ERROR: You will get out of range!" << std::endl;
        return;
    }
    current -= step;
    index -= 1;
}

template <class T> 
void AriProgIterator<T>::next() {
    if ( over() ) { // проверка чтобы не выскочить за границу
        std::cout << "ERROR: You will get out of range!" << std::endl;
        return;
    }
    current += step;
    index += 1;
}

template <class T> 
void AriProgIterator<T>::operator++() { next(); }

template <class T> 
void AriProgIterator<T>::operator++(int) { operator++(); }

template <class T> 
void AriProgIterator<T>::operator--() { previous(); }

template <class T> 
void AriProgIterator<T>::operator--(int) { operator--(); }

template <class T> 
bool AriProgIterator<T>::over() {
    return index < 1 || index > length;
}

template <class T> 
T AriProgIterator<T>::value() {
    if ( over() ) { // проверка чтобы не выскочить за границу
        cout << "ERROR: Out of range!" << endl; 
    } 
    return current;
}

template <class T> 
T AriProgIterator<T>::getIndex() {
    if ( over() ) { // проверка чтобы не выскочить за границу
        throw OutOfRangeException();
    } 
    return index;
}

template <class T> 
T AriProgIterator<T>::operator*() { return value(); }

template class AriProgIterator<int>; // explicit instantiation
template class AriProgIterator<bool>;



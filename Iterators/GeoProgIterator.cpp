#include "GeoProgIterator.h"

template <class T> 
GeoProgIterator<T>::GeoProgIterator(T first, T ratio, T length) {
    this->first = first;
    this->ratio = ratio;
    this->length = length - 1;
    this->current = first;
    this->power = 0;
    this->index = 1;
}

template <class T> 
GeoProgIterator<T>::~GeoProgIterator() {}

template <class T> 
void GeoProgIterator<T>::reloadIterator() {
    power = 0;
    updateCurrent();
}

template <class T> 
void GeoProgIterator<T>::previous() {
    if ( power <= 0 ) { // проверка чтобы не выскочить за границу
        std::cout << "ERROR: You will get out of range!" << std::endl;
        return;
    }
    power -= 1;
    updateCurrent();
}

template <class T> 
void GeoProgIterator<T>::next() {
    if ( over() ) { // проверка чтобы не выскочить за границу
        std::cout << "ERROR: You will get out of range!" << std::endl;
        return;
    }
    power += 1;
    updateCurrent();
}

template <class T> 
void GeoProgIterator<T>::operator++() { next(); }

template <class T> 
void GeoProgIterator<T>::operator++(int) { operator++(); }

template <class T> 
void GeoProgIterator<T>::operator--() { previous(); }

template <class T> 
void GeoProgIterator<T>::operator--(int) { operator--(); }

template <class T> 
bool GeoProgIterator<T>::over() { return power < 0 || power > length; }

template <class T> 
int GeoProgIterator<T>::value() {
   if ( over() ) { // проверка чтобы не выскочить за границу
        std::cout << "ERROR: Out of range!" << std::endl;
        throw OutOfSequenceRangeException();

    } 
    return current;
}
template <class T> 
int GeoProgIterator<T>::getIndex() { return index; }

template <class T> 
int GeoProgIterator<T>::operator*() { return value(); }

template class GeoProgIterator<int>; // explicit instantiation
template class GeoProgIterator<bool>;



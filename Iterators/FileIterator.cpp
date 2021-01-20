#include "FileIterator.h"

template <class T> 
FileIterator<T>::FileIterator(const char* filename) : filename(filename) {
    this->file.open(filename, std::ios::in);

    if ( file.good() ) {
        this->buffer = new std::vector<T>();
        this->index = 0;
        this->file >> data;
        this->buffer->push_back(data);
        this->isOver = false;
    } else {
        throw OutOfFileException();
    }
}

template <class T> 
FileIterator<T>::~FileIterator() {
    this->buffer->clear();
    this->file.close();
}

template <class T> 
void FileIterator<T>::reloadIterator() {
    this->index = 0;
}

template <class T> 
void FileIterator<T>::previous() {
    if ( index <= 0 ) {// проверка чтобы не выскочить за границу
        std::cout << "ERROR: You will get out of range!" << std::endl;
        return;
    } 
    this->index -= 1;
}       

template <class T> 
void FileIterator<T>::next() {
    if ( over() ) { // isOver не тру идем в следующую проверку
        file.close();
        return;
    } 
    if ( file >> data ) { // считываем последний элемент и и проверяем в мейне в цикле условие over()?
        this->index += 1;
        buffer->push_back(data);
    } else {
        isOver = true;
        return;
    }
}

template <class T> 
void FileIterator<T>::operator++() { next(); }

template <class T> 
void FileIterator<T>::operator++(int) { operator++(); }//post increment

template <class T> 
void FileIterator<T>::operator--() { previous(); }

template <class T> 
void FileIterator<T>::operator--(int) { operator--(); }//post increment

template <class T>
bool FileIterator<T>::over() {
    if ( isOver ) {
        return true;
    } //                  "коммент о решении проблемы с считыванием последнего эл-та с пробелом или без за ним."
    if ( file.eof() ) {// мы дошли до конца файла но приняли последний элемент как окончание файла и считали его операторм считывания
        isOver = true; // ставим флаг об окончании файла
        return false;  // возращаем фолс что бы считать считать последний файл -> попадаем в next() 
    } 
    return false;
}

template <class T> 
T FileIterator<T>::value() {
    return this->buffer->at(index);
}

template <class T> 
T FileIterator<T>::operator*() { return value(); }

template class FileIterator<unsigned int>;
template class FileIterator<long int>;
template class FileIterator<int>; 
template class FileIterator<bool>;
template class FileIterator<float>;
template class FileIterator<double>;
template class FileIterator<char>;
template class FileIterator<std::string>;

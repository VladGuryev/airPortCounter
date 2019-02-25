#ifndef AIRPORTCOUNTER_H
#define AIRPORTCOUNTER_H
#include <algorithm>
#include <array>
#include <iostream>
#include <random>
#include <vector>
#include <utility>
using namespace std;

// TAirport should be enum with sequential items and last item TAirport::Last_
enum class TAirport{
  T1
};


template <typename TAirport>
class AirportCounter {
public:
  // конструктор по умолчанию: список элементов пока пуст
  AirportCounter(){

  }

  // конструктор от диапазона элементов типа TAirport
  template <typename TIterator>
  AirportCounter(TIterator begin, TIterator end){

  }

  // получить количество элементов, равных данному
  size_t Get(TAirport airport) const{

  }

  // добавить данный элемент
  void Insert(TAirport airport){

  }

  // удалить одно вхождение данного элемента
  void EraseOne(TAirport airport){

  }

  // удалить все вхождения данного элемента
  void EraseAll(TAirport airport){

  }

  using Item = pair<TAirport, size_t>;

  // получить некоторый объект, по которому можно проитерироваться,
  // получив набор объектов типа Item - пар (аэропорт, количество),
  // упорядоченных по аэропорту
  vector<Item> GetItems() const{} //return type ???

private:
  // ???
};
#endif // AIRPORTCOUNTER_H

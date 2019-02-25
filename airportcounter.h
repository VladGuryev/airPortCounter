#ifndef AIRPORTCOUNTER_H
#define AIRPORTCOUNTER_H
#include <algorithm>
#include <array>
#include <iostream>
#include <random>
#include <vector>
#include <map>
#include <utility>
using namespace std;

// TAirport should be enum with sequential items and last item TAirport::Last_
//enum class TAirport{
//  A1,
//  A2,
//  Last_
//};


template <typename TAirport>
class AirportCounter {
public:
  // конструктор по умолчанию: список элементов пока пуст
  AirportCounter(){

  }

  // конструктор от диапазона элементов типа TAirport
  template <typename TIterator>
  AirportCounter(TIterator begin, TIterator end){
    TIterator it = begin;
    while(it != end){
      auto is_in_map = airport_counts.find(*it);
      if(is_in_map != airport_counts.end())
        is_in_map->second++;
      else {
        airport_counts[*it] = 1;
      }
      ++it;
    }
  }

  // получить количество элементов, равных данному
  size_t Get(TAirport airport) const{
        auto it = airport_counts.find(airport);
        if (it != airport_counts.end())
          return it->second;
        else {
          return 0;
        }
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
  vector<Item> GetItems() const{
//    vector<Item> v;
//    size_t p = 0;
//    while (p != static_cast<size_t>(TAirport::Last_)) {
//      size_t kol = Get(p);
//      v.push_back(make_pair(p, Get(p)));
//    }

  }


private:
  map<TAirport, size_t> airport_counts;

};
#endif // AIRPORTCOUNTER_H

#pragma once

#include <algorithm>
#include <array>
#include <random>

using namespace std;


template <typename TAirport>
class AirportCounter {

private:
  array<uint32_t, static_cast<uint32_t>(TAirport::Last_)> arr;
  static const size_t MAX_AIRPORT_COUNT = static_cast <uint64_t> (TAirport::Last_);

public:
  // конструктор по умолчанию: список элементов пока пуст
  AirportCounter() {
    arr.fill(0);
  }

  // конструктор от диапазона элементов типа TAirport
  template <typename TIterator>
  AirportCounter(TIterator begin, TIterator end){
    arr.fill(0);
    TIterator it = begin;
    while(it != end){
      uint32_t idx = static_cast<uint32_t>(*it);
      arr[idx]++;
      ++it;
    }
  }

  // добавить данный элемент
  void Insert(TAirport airport){
    uint32_t idx = static_cast<uint32_t>(airport);
    arr[idx]++;
  }

  // получить количество элементов, равных данному
  size_t Get(TAirport airport) const{
     uint32_t idx = static_cast<uint32_t>(airport);
     return arr[idx];
  }

  // удалить одно вхождение данного элемента
  void EraseOne(TAirport airport){
    uint32_t idx = static_cast<uint32_t>(airport);
    arr[idx]--;
  }

  // удалить все вхождения данного элемента
  void EraseAll(TAirport airport){
    uint32_t idx = static_cast<uint32_t>(airport);
    arr[idx] = 0;
  }

  using Item = pair<TAirport, size_t>;

// получить некоторый объект, по которому можно проитерироваться,
// получив набор объектов типа Item - пар (аэропорт, количество),
// упорядоченных по аэропорту
  array<Item, MAX_AIRPORT_COUNT> GetItems() const{
    array<Item, MAX_AIRPORT_COUNT> ret;
    int i = 0;
    for(const auto& item : arr){
      auto p = make_pair(static_cast<TAirport>(i), item);
      ret[i] = p;
      i++;
    }
    return ret;
  }
};

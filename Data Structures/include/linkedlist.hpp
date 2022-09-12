#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

#include <Node.hpp>
using namespace std;

template <typename Object>
class LinkedList
{
private:
    Node<Object> *head;

public:
    LinkedList();  //yapıcı
    void ekle(int new_data);  // listeye yeni dugum ekler.
    void listeyi_yazdir();    // listeyi yazdırır.
    void ters_cevir();        //listeyi ters cevirir.
    
    Node<Object>* getHead();  // Head dugumunun adresini getirir.


};
#endif
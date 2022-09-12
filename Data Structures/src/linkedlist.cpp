#include <iostream>
#include "Linkedlist.hpp"
#include "Node.hpp"

template <typename Object>
LinkedList<Object>::LinkedList()
{
    head = NULL;
}

template <typename Object>
void LinkedList<Object>::ekle(int new_data)
{
    Node<Object> *new_node = new Node<Object>(); // yeni node olusturur.
    Node<Object> *last = head;  //last node head node u gösterir.
    new_node->data = new_data;  // datayı olusturulan yeni node a atar.

    new_node->next = NULL; // olusturulan yeni node son node olur, ve son node NULL göstermelidir.

    if (head == NULL) // listenin bos olup olmadıgını kontrol eder. Eger bossa yeni node head node olur.
    {
        new_node->prev = NULL;
        head = new_node;
        return; // ve return eder ekle fonksiyonu biter.
    }
    //eger liste bos degilse 
    //son node a kadar ilerler.
    while (last->next != NULL)
        last = last->next;

    last->next = new_node; // yeni node u listenin en sonuna ekler.

    new_node->prev = last;  // yeni node un prev(öncesi) last nodu gösterir ve liste baglanir.
}

template <typename Object>
void LinkedList<Object>::listeyi_yazdir()
{
    Node<Object> *temp = head; // temp bir node olusturur ve temp ilk node u gösterir.
    while (temp != NULL) // son(NULL) pointerını görene kadar yazdırır.
    {
        cout << temp->data ; // her node un datasını yazdırır.
        temp = temp->next; //son dugume kadar ilerler
    }
}

template <typename Object>
void LinkedList<Object>::ters_cevir()
{
    Node<Object> *temp = NULL;
    Node<Object> *current = head;  //current pointer i ilk node u gösterir.
     
    // son node a kadar bütün listeyi ters cevirir.
    while (current != NULL)
    {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;            
        current = current->prev;
    }
     
    
    if(temp != NULL ) // bos veya tek dugumden olusan listeleri kontrol eder.
        head = temp->prev;
}

// private olan nodeların head pointerini getirir.
template <typename Object>
Node<Object>* LinkedList<Object>::getHead()  
{
    return head;
}

#include <iostream>
#include <fstream>
#include <string.h>
#include "linkedlist.hpp"
#include "linkedlist.cpp"

using namespace std;

template <typename Object>
void karsilastir(LinkedList<Object> *numbers1, LinkedList<Object> *numbers2, int size)
{

    Node<Object> *temp1 = numbers1->getHead();
    Node<Object> *temp2 = numbers2->getHead();

    for (int i = 1; i <= size; i++) // Listedeki eleman sayısı kadar dongu devam eder.
    {

        if (temp1->data > temp2->data) //eger 1.listedeki sayının datası 2.sinden buyukse
        {
            numbers1->ters_cevir(); //1.listeyi ters çevirir.
        }
        else if (temp1->data == temp2->data) // eger 1.listedeki datayla 2.listedeki data esitse.
        {
            numbers2->ters_cevir(); //2.listeyi ters cevirir.
        }

        else if (temp2->data > temp1->data) //eğer 2.listedeki sayının datası 1.sinden buyykse
        {
            int temp_data = temp2->data; //sadece dataları degistirir.
            temp2->data = temp1->data;
            temp1->data = temp_data;
        }
       
        //temp1 ve temp2 degiskenlere, listelerin ilk dugumunun adresini atar. 
        temp1 = numbers1->getHead(); // 1.listenin başını gösterir.
        temp2 = numbers2->getHead(); // 2.listenin başını gösterir.

        for (int j = 0; j < i; j++) // i , hangi düğümlerin kıyaslandığını gösterir.
        {
            temp1 = temp1->next; // temp1 ve temp2 i.dugume kadar ilerler.
            temp2 = temp2->next;
        }
    }
}

int main()
{
    ifstream MyFile("./doc/Sayilar.txt");  // Sayilar.txt belgesini, proje dosyasının icindeki doc klasöründen acar.

    if (!MyFile) // eğer Sayilar.txt dosyası yoksa, programdan çıkış yapar.
    {
        return 0;
    }

    //str dizisine Sayilar.txtdeki veriyi atar.
    //str # isaretine göre split edilir, bölünen stringler str1 ve str2 dizisine aktarılır.
    //3 basamaklı her string sayi1 ve sayi2 dizisine aktarılır.
    char str[150], str1[75], str2[75], sayi1[5], sayi2[5];
    MyFile >> str; // dosyadan veri okuma.

    char *token = strtok(str, "#"); // # karakterini gördüğünde stringi böler.
    strcpy(str1, token);            // ilk stringi kopyalar.
    token = strtok(NULL, "\n");     // tekrar böler.
    strcpy(str2, token);            //2. stringi kopyalar değişkene atar.

    for (int i = 0; i < strlen(str1); i = i + 3) // Yüzler basamağı 0 ise 1 yapar.
    {
        if (str1[i] == '0')
            str1[i] = '1';
        if (str2[i] == '0')
            str2[i] = '1';
    }


    /*2 adet çift yönlü bağıl liste yaratır. */
    LinkedList<int> *numbers1 = new LinkedList<int>(); 
    LinkedList<int> *numbers2 = new LinkedList<int>();

    
    int index = 0;

    for (int i = 0; i < strlen(str1) / 3; i++) // 3 basamaklı sayı sayısı kadar döngü devam eder.
    {
        strncpy(sayi1, str1 + index, 3);    // 1.stringin 3 karakterini sırasıyla kopyalar.
        strncpy(sayi2, str2 + index, 3);    // 2.stringin 3 karakterini sırasıyla kopyalar.
        int x = atoi(sayi1);        //kopyalanan stringi integer bir sayiya donusturur.
        int y = atoi(sayi2);        //kopyalanan stringi integer bir sayiya donusturur.

        numbers1->ekle(x);           // 1.listeye ekler.
        numbers2->ekle(y);           // 2.listeye ekler.

        index = index + 3;           //stringin üzerinde 3 basamak ilerlemesini saglar.
    }

    karsilastir(numbers1, numbers2, strlen(str1) / 3);  

    cout << "Sayi 1:" ;
    numbers1->listeyi_yazdir();
    cout<< endl;
    cout << "Sayi 2:";
    numbers2->listeyi_yazdir();
    cout<<endl;
}
# Doubly Linked List
***
* Sayilar.txt dosyasından verileri okumak. 
* Okunan string i iki ayrı stringe bölmek
* Verileri istenilen 3 basamaklı sayılara dönüştürmek. 
* Elde edilen 3 basamaklı sayılarla 2 adet çift yönlü bağıl liste oluşturmak. 
* Oluşturulan çift yönlü listelerin datalarını karşılaştırabilmek, listenin datasını 
değiştirebilmek ve listeyi ters çevirmek. 
## İçerik
***
Linkedlist ve Node adında 2 adet class oluşturdum. Her bir Linkedlist objesi private 
Node obje tipinde bir head değişkeni içeriyor. Bu değişken linked list in başına işaret ediyor. 
Ayrıca LinkedList classı düğüm eklemek, listeyi yazdırmak, listeyi ters çevirmek ve listenin 
private verilerine ulaşmak için gerekli fonksiyonları içermektedir. Node classı 3 basamaklı 
sayılar için integer bir değişken, önceki ve sonraki düğümlere işaret eden 2 adet pointer 
içermektedir.<br>
<br>
Main fonksiyonun içinde Sayilar.txt dosyasını açtım, sonrasında içindeki veriyi bir char 
dizisine atadım. Bu dizi # simgesi görüldüğünde 2 ayrı diziye bölünüyor. Bu iki ayrı dizinin her 
3 basamağını yüzler basamağı kontrol edilip ‘0’ lar ‘1’ e çevriliyor ve sonrasında 3 basamaklı 
integer'a dönüştürülüyor. <br>
<br>
Ayrıca main fonksiyonun içinde 2 adet obje(LinkedList) oluşturdum. Bu objeler 
Numbers1 ve Numbers2 objeleridir. İlk stringin her 3 basamaklı sayısını numbers1.ekle(sayi), 
fonksiyonuna gönderdim. Aynı işlemi ikinci string içinde yaptım. Liste bu şekilde bağlanmış 
oldu. <br>
<br>
Linkedlist.cpp dosyasında linkedlist.hpp dosyasında tanımladığın classın 
fonksiyonlarını yazdım. Gerekli ekle ve ters çevir fonksiyonlarının ardından, listeyi adım adım 
kontrol edebilmem gerekiyordu. Bunun için for ve while döngüleri kullandım. Oluşturduğum 
geçici(temp) objeleriyle listede istediğim gibi hareket edebiliyor hale geldim.<br>
<br>
 Kendi oluşturduğum test datalarıyla programı test ettim. Eksik kalan veya hatalı çalışan bir yer görmedim. İstenilen outputu elde 
ettim. Derleyip çalıştırdığımda herhangi bir uyarı veya hata almadım.



#include<iostream>
#include<string>
using namespace std;


template<class T>
class myVector
{
    public:
        myVector(int); //Yap�c� (constructor) fonksiyon. Parametre olarak ald��� de�er vekt�r�n�z�n boyutu yani numAllocated de�i�keninin de�eridir. 
          ~myVector(); //Y�k�c� (destructor) fonksiyon.
          int size(); //Vekt�rdeki eleman say�s�n� (numUsed) d�nd�ren fonksiyon.
          void add(T s); //Vekt�r�n sonuna s eleman�n� eklemek i�in tan�mlanan fonksiyon. Kapasite doluysa ��kt�da da verilen uyar� mesaj�n� �retmelidir. 
          T getAt(int index); //index�deki eleman� d�nd�ren fonksiyon.
        void getElement(int index); //indexdeki eleman� ekrana yazd�ran fonksiyon. Index, kapasite d���ndaysa ��kt�da da verilen uyar� mesaj�n� �retmelidir. 
        void remove(T s); //vekt�rden s eleman�n� kald�rmal� ve di�er elemanlar� kayd�rmal�d�r. Eleman bulunamad�ysa hi�bir �ey yap�lmayacakt�r.
        void erase(int index); //vekt�r�n indexindeki eleman�n� kald�rmal� ve di�er elemanlar� kayd�rmal�d�r.
        void sort(); //vekt�rdeki elemanlar� k���kten b�y��e s�ralamal�d�r
    private:
        T* arr;
        int numUsed;             // vekt�rdeki eleman say�s�
        int numAllocated;     //vekt�r�n alabilece�i eleman say�s�
};

//#include <iostream>
//
//void sub(int *a, int *b, int *c);
//
//using namespace std;
//int tam = 10;
//
//int main() {
//    int a[tam], b[tam], c[tam];
//
//    for (int i = 0; i < tam; ++i) {
//        cout << "Digite A: ";
//        cin >> a[i];
//        cout << "Digite B: ";
//        cin >> a[i];
//    }
//
//    sub(a, b, c);
//
//    for (int j = 0; j < tam; ++j) {
//        cout << c[j] << endl;
//    }
//    return 0;
//}
//
//void sub(int *a, int *b, int *c){
//    int aux[tam];
//
//    for (int i = 0; i < tam; ++i) {
//        aux[i] = a[i] - b[i];
//    }
//
//    c = aux;
//}
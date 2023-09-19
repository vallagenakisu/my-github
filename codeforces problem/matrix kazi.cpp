#include <iostream>
using namespace std;

class complexx {
    float real, img;

public:
    complexx(float r = 0, float i = 0) {
        real = r;
        img = i;
    }

    complexx operator+(const complexx& a) {
        complexx res;
        res.real = real + a.real;
        res.img = img + a.img;
        return res;
    }

    complexx operator/(int a) {
        complexx res;
        res.real = real / a;
        res.img = img / a;
        return res;
    }

    void print() {
        cout << real << " +i" << img;
    }

    friend ostream& operator<<(ostream& out, const complexx& t) {
        out << t.real << " +i" << t.img;
        return out;
    }

    friend istream& operator>>(istream& in, complexx& t) {
        in >> t.real >> t.img;
        return in;
    }
};

template <class T>
class matrix {
    T data[2][2];

public:
    matrix() {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++)
                cin >> data[i][j];
        }
    }

    template <class U>
    friend matrix<U> operator+(const matrix<U>& a, const matrix<U>& b);

    void displaymatrix() {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++)
                cout << data[i][j] << " ";
            cout << endl;
        }
    }
};

template <class T>
matrix<T> operator+(const matrix<T>& a, const matrix<T>& b) {
    matrix<T> res;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            res.data[i][j] = a.data[i][j] + b.data[i][j];
        }
    }
    return res;
}

int main() {
    matrix<complexx> a, b;
    matrix<complexx> c = a + b;
    c.displaymatrix();

    return 0;
}

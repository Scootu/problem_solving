#include <iostream>
using namespace std;

struct list {
    int info;
    list *next;
};

int main() {
    int n, counter = 0;
    cin >> n;

    if (n == 0) {
        cout << 0;
        return 0;
    }

    list *T = nullptr, *p = nullptr;

    for (int i = 0; i < n; ++i) { // Fill the list 
        list *s = new list; //Allocate new element 
        cin >> s->info;
        s->next = nullptr;

        if (T == nullptr) {
            T = s;
            p = s;
        } else {
            p->next = s;
            p = s;
        }
    }

    if (T != nullptr) { //delete the first element 
        list *temp = T;
        T = T->next;
        delete temp;
    }

    if (T != nullptr && T->next != nullptr) {
        p = T;
        while (p->next->next != nullptr) {
            p = p->next;
        }
        delete p->next;
        p->next = nullptr;
    } else if (T != nullptr) {
        delete T;
        T = nullptr;
    }

    if (T == nullptr) {
        cout << 0;
    } else {
        p = T;
        while (p != nullptr) {
            counter++;
            p = p->next;
        }
        cout << counter;
    }

    return 0;
}

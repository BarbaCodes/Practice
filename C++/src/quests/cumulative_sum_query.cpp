#include <iostream>
#include <vector>

using namespace std;

typedef struct query {
    int i, j;
} query;


void readList(vector<int> &list) {
    for (int &item: list) {
        cin >> item;
    }
}

//lendo querys
void readQuerys(vector<query> &list) {
    for (query &item: list) {
        cin >> item.i;
        cin >> item.j;
    }
}

void sumInterval(query myQuery, vector<int> numbers) {
    int sum = 0;
    for (int c = myQuery.i; c <= myQuery.j; c++) {
        sum += numbers[c];
    }
    cout << sum << endl;
}

void prefixSum(vector<int> &listNum, vector<query> listQue, int q) {
    for (int k = 0; k < q; k++) {
        sumInterval(listQue[k], listNum);
    }
}

int main() {
    int n, q;

    cin >> n;

    vector<int> a(n);

    readList(a);

    cin >> q;

    vector<query> querys(q);

    readQuerys(querys);

    prefixSum(a, querys, q);

    return 0;
}
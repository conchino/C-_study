#include <iostream>
#include <string>
#include <algorithm>
#include <deque>
#include <vector>
#include <iomanip>

using namespace std;

template <typename T>
void printVector(vector<T> v){
    for(typename vector<T>::iterator it = v.begin(); it != v.end(); ++it){
        cout << *it << " ";
    }
    cout << endl;
}

template <typename T>
void printDeque(deque<T> v){
    for(typename deque<T>::iterator it = v.begin(); it != v.end(); ++it){
        cout << *it << " ";
    }
    cout << endl;
}

// ����������ѡ�ֵ�vector����
vector<string> createPlayer(){
    return vector<string>{"A","B","C","D","E"};
}

deque<int> inputScore(vector<string> &v){
    deque<int> dq;
    int score;
    for(vector<string>::iterator it = v.begin(); it != v.end();++it){
        cout << "������ѡ�� " << *it << " �ķ���: ";
        cin >> score;
        dq.push_back(score);
    }
    return dq;
}


// �Է����������򣬲�ȥ����ͷֺ���߷֣�����ƽ����
double removeHighLow_countSum(deque<int> &dq){
    sort(dq.begin(), dq.end());
    dq.pop_front();
    dq.pop_back();

    int sum = 0;
    for(deque<int>::iterator it = dq.begin(); it != dq.end(); ++it){
        sum += *it;
    }
    return (double)sum / (double)dq.size();
}



int main()
{
    vector<string> vct = createPlayer();
    deque<int> dq = inputScore(vct);

    // ���ø���������ľ���ΪС�������λ
    cout << fixed << setprecision(2) << "ƽ����: " << removeHighLow_countSum(dq) << endl;

    system("pause");
    return 0;
}

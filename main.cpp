#include <iostream>
#include <iomanip>
#include <string>
#include "all_Sb.h"
using namespace std;
Subject everysb[V];
float calc(Subject sb){
    float result = sb.getm_credit() * sb.getm_score();
    return result;
}
int main()
{
    for(int i = 0;i < V;i++){
        string nn;
        float ss;
        float cc;
        cout << "�������" << i + 1 << "�ŵ�����: ";
        cin >> nn;
        cout << "���Ƽ��㣺";
        cin >> ss;
        cout << "�ÿ�ѧ�֣�";
        cin >> cc;
        everysb[i].setm_credit(cc);
        everysb[i].setm_score(ss);
        everysb[i].setsN(nn);
    }
        all_Sbject yourList;
        initGrade(&yourList,everysb,V);
        printGrade(&yourList);
        cout << "��ƽ�����㣺 " << caclTotal(&yourList) << endl;
    return 0;
}

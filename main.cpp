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
        cout << "请输入第" << i + 1 << "门的名字: ";
        cin >> nn;
        cout << "单科绩点：";
        cin >> ss;
        cout << "该科学分：";
        cin >> cc;
        everysb[i].setm_credit(cc);
        everysb[i].setm_score(ss);
        everysb[i].setsN(nn);
    }
        system("cls");
        all_Sbject yourList;
        initGrade(&yourList,everysb,V);
        printGrade(&yourList);
        cout << "总平均绩点： " << caclTotal(&yourList) << endl;
    return 0;
}

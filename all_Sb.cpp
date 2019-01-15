#include "all_Sb.h"
#include <iostream>
using namespace std;

Subject::Subject(string sN,float score,float credit)
{
    m_sN = sN;
    m_score = score;
    m_credit = credit;
}
void initGrade(all_Sbject* sb_List,Subject* data,int length){
    if(length > V){
        cout << "你没有那么多门科目" << endl;
        return;
    }
    sb_List->amount = 0;
    for(int i = 0;i < length;i++)
    {
        insertGrade(sb_List,i,data[i]);
    }
}
void insertGrade(all_Sbject* sb_List,int index,Subject sb){
    if(index > V - 1 || index > sb_List->amount || index < 0 || sb_List->amount > V)
    {
        cout << "出错了！" << endl;
        return;
    }
    for(int i = sb_List->amount - 1;i >= index;--i)
    {
        sb_List->datas[i + 1] = sb_List->datas[i];
    }
    sb_List->datas[index] = sb;
    sb_List->amount++;
}
void printGrade(all_Sbject* sb_List){
    for(int i = 0;i < sb_List->amount;i++){
        cout << sb_List->datas[i].getsN() << ':' << "单科绩点："
             << sb_List->datas[i].getm_score() << "  该科学分：" << sb_List->datas[i].getm_credit();
        cout << endl;
        }
}
float caclTotal(all_Sbject* sb_List){
    float SumaveScore = 0;
    float totalCredit = 0;
    float result;
    for(int i = 0;i < sb_List->amount;i++){
        SumaveScore += sb_List->datas[i].getm_credit() * sb_List->datas[i].getm_score();
        totalCredit += sb_List->datas[i].getm_credit();
    }
    result = SumaveScore / totalCredit;
    return result;
}

#ifndef ALL_SB_H_INCLUDED
#define ALL_SB_H_INCLUDED
#define V 13
#include <iostream>
using namespace std;
class Subject{
public:
    Subject(){}
    Subject(string,float,float);
    string getsN(){
        return m_sN;
    }
    void setsN(string ss){
        m_sN = ss;
    }
    void setm_m_sN(string name){
        m_sN = name;
    }
    float getm_score(){
        return m_score;
    }
     void setm_score(float score){
        m_score = score;
     }
    float getm_credit(){
        return m_credit;
    }
     void setm_credit(float credit){
        m_credit = credit;
     }
private:
    float m_score;
    float m_credit;
    string m_sN;
};
class all_Sbject{
public:
    Subject datas[sizeof(Subject) * V];
    int amount;
};


void initGrade(all_Sbject* sb_List,Subject* data,int length);
void insertGrade(all_Sbject* sb_List,int index,Subject sb);
void printGrade(all_Sbject* sb_List);
float caclTotal(all_Sbject* sb_List);



#endif // ALL_SB_H_INCLUDED

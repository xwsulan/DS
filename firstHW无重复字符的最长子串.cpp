#include<string>
#include<iostream>

using namespace std;

class answer {
public:
    int stringlength(string s) {
        int len=0;                                                      //��Ž��
        int start=0;                                                    //��ʼ����λ��
        string str="";                                                  //�ҵ������ظ��ַ��Ӵ�
        for(int i=0;i<s.length();i++){
            if(str.find(s[i])==-1)                                      //δ�ҵ��ظ��ַ�
                str=str+s[i];
            else {                                                      //�ҵ��ظ��Ӵ�
                len=len>str.length()?len:str.length();                
                i=s.find_first_of(s[i],start);                          //�ӵ�startλ�ÿ�ʼ
                start=i+1;                                              //��һ�ο�ʼ��λ��
                str="";
            }
        }
        len=len>str.length()?len:str.length();
        return len;
    }
};


	

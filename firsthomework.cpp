#include<string>
#include<iostream>

using namespace std;

class answer {
public:
    int stringlength(string s) {
        int len=0;                                                      //存放结果
        int start=0;                                                    //起始查找位置
        string str="";                                                  //找到的无重复字符子串
        for(int i=0;i<s.length();i++){
            if(str.find(s[i])==-1)                                      //未找到重复字符
                str=str+s[i];
            else {                                                      //找到重复子串
                len=len>str.length()?len:str.length();                
                i=s.find_first_of(s[i],start);                          //从第start位置开始
                start=i+1;                                              //下一次开始的位置
                str="";
            }
        }
        len=len>str.length()?len:str.length();
        return len;
    }
};


	

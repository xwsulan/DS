#include<string>
#include<iostream>
#include <vector>

using namespace std;
class answer {
public:
    int countlength(vector<string> & words, string chars) {
        int word_size = 0;                                                    //��ŵ�����Ŀ
        for(int i = 0; i < words.size(); ++ i ){
            string charss(chars);                                             //������ĸ��
            for(auto c : words[i]){
                if(find(charss.begin(), charss.end(), c) == charss.end())     //�������ʱ�
                    break;
                auto p = find(charss.begin(), charss.end(), c);
                charss.erase(p);
                continue;
            }
            if(words[i].size() == chars.size() - charss.size())               //�ۼ���Ŀ
                word_size += words[i].size();
        }
        return word_size;
    }
};

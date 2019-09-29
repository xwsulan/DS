#include<string>
#include<iostream>
#include <vector>

using namespace std;
class answer {
public:
    int countlength(vector<string> & words, string chars) {
        int word_size = 0;                                                    //存放单词数目
        for(int i = 0; i < words.size(); ++ i ){
            string charss(chars);                                             //遍历字母表
            for(auto c : words[i]){
                if(find(charss.begin(), charss.end(), c) == charss.end())     //遍历单词表
                    break;
                auto p = find(charss.begin(), charss.end(), c);
                charss.erase(p);
                continue;
            }
            if(words[i].size() == chars.size() - charss.size())               //累加数目
                word_size += words[i].size();
        }
        return word_size;
    }
};

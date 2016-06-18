/****** 顺序容器的使用 ******/

#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>

using namespace std;
//顺序打印容器内容
void printout(vector<string>& demoContainer);
void printout(list<string>& demoContainer);

int main()
{
//    vector<string> strCtxt(10, "hello");
//    vector<string> strCtxt2(10, "yancy");
//    cout << strCtxt.size() << endl;
//
//    strCtxt.insert(strCtxt.begin(), strCtxt2.begin(), strCtxt2.end());
//
//    strCtxt.push_back("hello world");
//    printout(strCtxt);
//    strCtxt.pop_back();
//    printout(strCtxt);
//    vector<string>::iterator it = strCtxt.begin();
//    it += 2;
//    it = strCtxt.insert(it, "Yancy~~");
//    printout(strCtxt);
//    cout << *it << endl;
//    strCtxt2.swap(strCtxt);
//    printout(strCtxt);
//    cout << *it << endl;
//
//    strCtxt.assign(strCtxt2.begin(), strCtxt2.end());
//    printout(strCtxt);
//    strCtxt.resize(5);
//    printout(strCtxt);
//    cout << "capacity: " << strCtxt.capacity() << endl;
//    while(strCtxt.size() != strCtxt.capacity())
//        strCtxt.push_back("yancy!!!!!");
//
//    cout << strCtxt.size() << endl;
//    cout << strCtxt.capacity() << endl;
//
//    strCtxt.push_back("hello----");
//    cout << strCtxt.size() << endl;
//    cout << strCtxt.capacity() << endl;
//    cout << strCtxt2.at(3) << endl;
//    cout << strCtxt2[3] << endl;
//
//
//
//    list<string> strList(10, "world");
//    printout(strList);
//    list<string>::iterator itList = strList.begin();
//    strList.erase(itList++);
//    printout(strList);
//
//    cout << "After assign: " << endl;
//    strList.assign(strCtxt.begin(), strCtxt.end());
//    printout(strList);
//    printout(strCtxt);
//
//    string s1("hello world");
//    string s2(s1);
//    string s3 = s1.substr(6,5);
//    cout << "s3:\t" << s3 << endl;
//    cout << "s2:\t" << s2 << endl;
//    s2 += s1;
//    cout << s2 << endl;
//    cout << s1 << endl;
//    cout << s1.append(s2) << endl;
//    cout << s1 << endl;
//    s2 = "12345";
//    cout << "s1.replace(0,10, s2)\t " << s1.replace(5,20, s2) << endl;
//    cout << "s2:\t" << s2 << endl;
//
//    s2.insert(s2.size(), " yancy's world is beautiful.");
//    s2.append(" yancy's world is beautiful.");
//    cout << "s2:\t" << s2 << endl;
//
//    cout << s2.find_first_not_of("yancy", 10) << endl;
//    cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||" << endl;
//
//    list<int> intLst(10,1);
//    stack<int, list<int> > stk(intLst);
//    if (stk.empty() == false)
//        cout << "stack is not empty " << endl;
//    cout << "size:\t" << stk.size() << endl;
//    stk.pop();
//    cout << "stack's top:\t" << stk.top() << endl;
//    stk.push(1000);
//    deque<int> intDeq(10,1);
//    queue<int, deque<int> > que(intDeq);
//    cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||" << endl;
//
//    const stack<string>::size_type wordsCnt = 5;
//    stack<string> wordStk;
//    string word;
//    while(cin >> word && wordStk.size() != wordsCnt-1)
//        wordStk.push(word);
//
//    cout << "|||||||||||||||||||||||||||||||||||||||||||||||||\||" << endl;



    const stack<int>::size_type stk_size = 10;
    stack<int> intStack;
    int ix = 0;
    while(intStack.size() != stk_size)
        intStack.push(ix++);
    int error_cnt = 0;
    while (intStack.empty() == false)
    {
        if (intStack.top() != --ix)
        {
            cerr << "oops! expected " << ix
                <<" received " << intStack.top() << endl;
            error_cnt ++;
        }
        intStack.pop();
    }
    cout << "our program ran with " << error_cnt
            << " errors!" << endl;
    return 0;
}

void printout(vector<string>& demoContainer)
{
    cout << "____________________" << endl;
    vector<string>::iterator it = demoContainer.begin();
    for (it; it!=demoContainer.end(); it++)
        cout << *it << endl;
    cout << "--------------------" << endl;
}

void printout(list<string>& demoContainer)
{
    cout << "____________________" << endl;
    list<string>::iterator it = demoContainer.begin();
    for (it; it!=demoContainer.end(); it++)
        cout << *it << endl;
    cout << "---------------------" << endl;
}

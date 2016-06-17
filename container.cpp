#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <deque>

using namespace std;
//顺序打印容器内容
void printout(vector<string>& demoContainer);
void printout(list<string>& demoContainer);

int main()
{
    vector<string> strCtxt(10, "hello");
    vector<string> strCtxt2(10, "yancy");
    cout << strCtxt.size() << endl;
    strCtxt.push_back("hello world");
    printout(strCtxt);
    strCtxt.pop_back();
    printout(strCtxt);
    vector<string>::iterator it = strCtxt.begin();
    it += 2;
    it = strCtxt.insert(it, "Yancy~~");
    printout(strCtxt);
    cout << *it << endl;
    strCtxt2.swap(strCtxt);
    printout(strCtxt);
    cout << *it << endl;

    strCtxt.assign(strCtxt2.begin(), strCtxt2.end());
    printout(strCtxt);
    strCtxt.resize(5);
    printout(strCtxt);
    cout << "capacity: " << strCtxt.capacity() << endl;
    while(strCtxt.size() != strCtxt.capacity())
        strCtxt.push_back("yancy!!!!!");

    cout << strCtxt.size() << endl;
    cout << strCtxt.capacity() << endl;

    strCtxt.push_back("hello----");
    cout << strCtxt.size() << endl;
    cout << strCtxt.capacity() << endl;
    cout << strCtxt2.at(3) << endl;
    cout << strCtxt2[3] << endl;



    list<string> strList(10, "world");
    printout(strList);
    list<string>::iterator itList = strList.begin();
    strList.erase(itList++);
    printout(strList);

    cout << "After assign: " << endl;
    strList.assign(strCtxt.begin(), strCtxt.end());
    printout(strList);
    printout(strCtxt);

    string s1("hello world");
    string s2(s1);
    cout << s2 << endl;
    s2 += s1;
    cout << s2 << endl;
    cout << s1 << endl;

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

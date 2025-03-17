#include <iostream>
using namespace std;
struct Stu
{
    int id;
    float score;
    Stu *next; // next指向Student结构体变量
};
Stu *creat(int n)
{
    Stu *head, *p;
    head = p = new Stu;
    for (int i = 0; i < n; i++)
    {
        cout << "输入id与分数：" << endl;
        cin >> p->id >> p->score;
        if (i < n - 1)
        {
            p->next = new Stu;
            p = p->next;
        }
    }
    p->next = NULL;
    return head;
}
bool remove(Stu *&head, int id)
{
    Stu *p = head, *temp = head;
    if (head->id == id)
    {
        head = head->next;
        delete temp;
        return 1;
    }
    while (p->next != NULL)
        if (p->next->id == id)
        {
            temp = p->next;
            p->next = p->next->next;
            delete temp;
            return 0;
        }
    if (p->next == NULL)
        return 0;
}
bool add(Stu *&head, int id)
{
    Stu *p = head, *temp;
    while (p != NULL)
        if (p->id == id)
        {
            temp = new Stu;
            temp->next = p->next;
            cout << "输入节点的id与分数：" << endl;
            cin >> temp->id >> temp->score;
            p->next = temp;
            return 1;
        }
    if (p == NULL)
        return 0;
}
void free(Stu *&head)
{
    Stu *p = head;
    while (p != NULL)
    {
        head = p;
        p = p->next;
        delete head;
    }
}
int main()
{
    cout << "输入节点数量：" << endl;
    int n;
    cin >> n;
    Stu *head = creat(n), *p = head;
    cout << "输入删除节点id：" << endl;
    int id;
    cin >> id;
    if (remove(head, id))
        cout << "查无此人：" << endl;
    cout << "输入后方被插入节点的id：" << endl;
    cin >> id;
    if (add(head, id))
        cout << "查无此人：" << endl;
    while (p != NULL)
    {
        cout << "id\t" << p->id << "分数\t" << p->score << endl;
        p = p->next;
    }
    cout << "id\t" << p->id << "分数\t" << p->score << endl;
    free(head);
}
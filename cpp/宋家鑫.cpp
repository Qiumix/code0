#include<iostream>
using namespace std;

struct Student
{
    int num;
    float score;
    Student* next = nullptr;  // next指向Student结构体变量
    Student* former = nullptr;
};

Student* create(int n)
{
    Student* current = new Student, * head;
    head = current;
    for (int i = 0; i < n; i++)
    {
        cout << "输入第" << i + 1 << "个学生的num与分数" << endl;
        cin >> current->num >> current->score;
        if (i < n - 1)
        {
            Student* newNode = new Student;
            current->next = newNode;
            newNode->former = current;
            current = newNode;
        }
    }
    current->next = head;
    head->former = current;
    return head;
}

void free(Student* head)
{
    Student* current = head;
    Student* nextNode;
    do
    {
        nextNode = current->next;
        delete current;
        current = nextNode;
    } while (current != head);
}

void remove(Student*& head, int num)
{
    Student* current = head;
    do
    {
        if (current->num == num)
            break;
        current = current->next;
    } while (current != head);

    if (current == head && current->num != num)
    {
        cout << "查无此人" << endl;
        return;
    }

    if (current == head)
    {
        head = head->next;
    }

    current->former->next = current->next;
    current->next->former = current->former;
    delete current;
}

void add(Student* head, int num)
{
    Student* current = head;
    do
    {
        if (current->num == num)
            break;
        current = current->next;
    } while (current != head);

    if (current == head && current->num != num)
    {
        cout << "查无此人" << endl;
        return;
    }

    Student* t = new Student;
    t->former = current;
    t->next = current->next;
    current->next->former = t;
    current->next = t;

    cout << "输入学生的num与分数" << endl;
    cin >> t->num >> t->score;
}

int main()
{
    int n;
    cout << "输入学生总数：" << endl;
    cin >> n;
    Student* head = create(n);
    Student* current = head;

    cout << "请输入删除学生的num" << endl;
    int num;
    cin >> num;
    remove(head, num);

    cout << "请输入在其后被插入节点的学生的num" << endl;
    cin >> num;
    add(head, num);

    current = head;
    int t = n;
    do
    {
        cout << "num: " << current->num << " score: " << current->score << endl;
        current = current->next;
        t--;
    } while (current != head && t > 0);

    free(head);
    return 0;
}


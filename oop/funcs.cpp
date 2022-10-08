#include "funcs.h"

int mainmodenum()
{
    int srnum = 0;
    cout << "1. Insertion\n2. Search\n3. Sorting Option\n4. Exit\n";
    cin >> srnum;
    while (true) {
        if ((srnum > 0) && (srnum <= 4) ){
            return srnum;
        }
        cin.clear();
        cin.ignore();
        cout << "wrong input input must be 1,2,3,4\n";
        cout << "1. Insertion\n2. Search\n3. Sorting Option\n4. Exit\n";
        cin >> srnum;
    }
}


int searchmodenum()
{
    int srnum = 0;
    cout << "1. Search by name\n2. Search by student ID(10 numbers)\n3. Search by admission year(4numbers)\n4. Search by department name\n5. List ALL\n";
    cin >> srnum;
    while (true) {
        if ((srnum > 0) && (srnum <= 5)) {
            return srnum;
        }
        cin.clear();
        cin.ignore();
        cout << "wrong input input must be 1,2,3,4,5\n";
        cout << "1. Search by name\n2. Search by student ID(10 numbers)\n3. Search by admission year(4numbers)\n4. Search by department name\n5. List ALL\n";
        cin >> srnum;
    }
    
}
int sortmodenum()
{
    int srnum = 0;
    cout << "1. Sort by Name\n2. Sort by Student ID\n3. Sort by Admission Year\n4. Sort by Department name\n";
    cin >> srnum;
    while (true) {
        if ((srnum > 0) && (srnum <= 4)) {
            return srnum;
        }
        cin.clear();
        cin.ignore();
        cout << "wrong input input must be 1,2,3,4\n";
        cout << "1. Sort by Name\n2. Sort by Student ID\n3. Sort by Admission Year\n4. Sort by Department name\n";
        cin >> srnum;
    }
}
bool isnum(string const& str)
{
    auto it = str.begin();
    while (it != str.end() && std::isdigit(*it))
    {
        it++;
    }
    return !str.empty() && it == str.end();
}


string inputid()
{
    string temp;
    cout << "Student ID (10 digits)?";
    cin >> temp;
    while (true)
    {
        if (isnum(temp))
        {
            if (stoll(temp) > 0)
            {
                if (temp.size() == 10)
                {
                    return temp;
                    break;
                }
                else
                {
                    cout << "Student ID must be 10 digits";
                    cin >> temp;
                }
            }
            else
            {
                cout << "Student ID must be positive";
                cin >> temp;
            }
        }
        else
        {
            cout << "Student ID input must be digit";
            cin >> temp;
        }
    }
    return temp;
}
string inputname()
{
    string temp;
    cout << "Name ?";
    cin >> temp;
    while (true)
    {
        if (temp.length() > 15)
        {
            cout << "Name input is up to 15 input again";
            cin >> temp;
        }
        else
        {
            break;
        }
    }
    return temp;
}
string inputadm()
{
    string temp;
    cout << "adminin year (4 digits)?";
    cin >> temp;
    while (true)
    {
        if (isnum(temp))
        {
            if (stoll(temp) > 0)
            {
                if (temp.size() == 4)
                {
                    break;
                }
                else
                {
                    cout << "adminyear must be 4 digits";
                    cin >> temp;
                }
            }
            else
            {
                cout << "Student ID must be positive";
                cin >> temp;
            }
        }
        else
        {
            cout << "adminyear input must be digit";
            cin >> temp;
        }
    }
    return temp;
}
string inputbirth()
{
    string temp;
    cout << "Birth year (4 digits)?";
    cin >> temp;
    while (true)
    {
        if (isnum(temp))
        {
            if (stoll(temp) > 0)
            {
                if (temp.size() == 4)
                {
                    break;
                }
                else
                {
                    cout << "birthyear must be 4 digits";
                    cin >> temp;
                }
            }
            else
            {
                cout << "birthyear must be positive";
                cin >> temp;
            }
        }
        else
        {
            cout << "birth year input must be digit";
            cin >> temp;
        }
    }
    return temp;
}
string inputdepart()
{
    string temp;
    cout << "department ?";
    cin >> temp;

    return temp;
}
string inputtel()
{
    string temp;
    cout << "tel (up to 12 digits)?";
    cin >> temp;
    while (true)
    {
        if (isnum(temp))
        {
            if (stoll(temp) > 0)
            {
                if (temp.size() <= 12)
                {
                    break;
                }
                else
                {
                    cout << "tel must be up to 12 digits";
                    cin >> temp;
                }
            }
            else
            {
                cout << "tel must be positive";
                cin >> temp;
            }
        }
        else
        {
            cout << "telnum input must be digit";
            cin >> temp;
        }
    }
    return temp;
}

bool comparen(student a, student b)
{
    if (a.getname() < b.getname())
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool comparei(student a, student b)
{
    if (atoll(a.getid().c_str()) < atoll(b.getid().c_str()))
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool compareadm(student a, student b)
{
    if (atoll(a.getid().substr(0, 4).c_str()) < atoll(b.getid().substr(0, 4).c_str()))
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool compared(student a, student b)
{
    if (a.getdepartment() < b.getdepartment())
    {
        return true;
    }
    else
    {
        return false;
    }
}

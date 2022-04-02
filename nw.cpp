class Person
{
public:
	int age;
	string name;
	virtual void getdata()
	{
		cin >> name;
		cin >> age;
	}
	virtual void putdata()
	{
		cout << name << " ";
		cout << age << " ";
	}
};

class Professor :public Person
{
private:
	int publications;
	static int cur_id;
	int id;
public:
	Professor()
	{
		cur_id++;
		id = cur_id;
	}
	void getdata()
	{
		Person::getdata();
		cin >> publications;
	}
	void putdata()
	{
		Person::putdata();
		cout << publications << " " << id << endl;
	}
};

int Professor::cur_id = 0;

class Student :public Person
{
private:
	vector<int> marks;
	static int cur_id;
	int id;
public:
	Student()
	{
		cur_id++;
		id = cur_id;
	}
	void getdata()
	{
		Person::getdata();
		for (int i = 0; i < 6; i++)
		{
			int score;
			cin >> score;
			marks.push_back(score);
		}
	}
	void putdata()
	{
		int sum = 0;
		for (int &e : marks)
			sum += e;
		Person::putdata();
		cout << sum << " " << id << endl;
	}
};

int Student::cur_id = 0;

------------------------------------------------------------------------------------------------

class Person{
    public:
    string name;
    int age;
    virtual void getdata(){
        cin >> name;
        cin >> age;
    }
    virtual void putdata(){
        cout << name << " ";
        cout << age << " ";
    }
};
class Professor : public Person{
    public:
    int publications;
    static int cur_id;
    int id;
    Professor()
    {
        cur_id++;
        id = cur_id;
    }
    void getdata(){
        cin>>name;
        cin>>age;
        cin>>publications;
    }
    void putdata(){
        cout<<name<<" ";
        cout<<age<<" ";
        cout<<publications<<" ";
        cout<<id<<" ";
        cout<<endl;
    }
};

int Professor::cur_id = 0;

class Student : public Person{
    public:
    int marks[6];
    static int cur_id;
    int id;
    Student()
    {
        cur_id++;
        id = cur_id;
    }
    void getdata(){
        cin>>name;
        cin>>age;
        for(int i = 0; i <= 6 ; i++){
            cin>>marks[i];
        }  
    }
    void putdata(){
        cout<<name<<" ";
        cout<<age<<" ";
        cout<<(marks[0]+marks[1]+marks[2]+marks[3]+marks[4]+marks[5])<<" ";
        cout<<endl;
    }
};

int Student::cur_id = 0;
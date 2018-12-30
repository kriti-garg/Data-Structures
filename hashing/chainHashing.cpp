using namespace std;

struct node
{
  int data;
  node *next;
};

class Person
{
    int idno;
    string name;
    int age;
  public:
    Person(int idno, string name, int age):idno(idno), name(name), age(age){}
};

class Hash
{
  int bucket;
  list<int> *table;
public:
  Hash(int n):bucket(n)
  {
    table = new list<int>[bucket];
  }

  void insert(int x)
  {
    int index = x%bucket;
    table[index].push_back(x);
  }

  void del(int x)
  {
    int index = x%bucket;

    list<int>::iterator i;
    for(i = table[index].begin(); i!=table[index].end(); i++)
    {
      if(*i==x)
        break;
    }
    if(i!=table[index].end())
      table[index].erase(i);
  }

  void display()
  {
    for(int i=0; i<bucket; i++)
    {
      cout<<i;
      for (auto x : table[i])
        cout << " --> " << x;
      cout << endl;
    }
  }
};

int main()
{
  int n, num;
  cin>>n;
  Hash h(n);

  for(int i=0; i<n; i++)
    {
      cin>>num;
      h.insert(num);
    }

  h.display();
}
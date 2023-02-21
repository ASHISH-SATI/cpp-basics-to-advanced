#include<iostream>
struct myhash
{
    int bucket;
    list<int>*table;
    myhash(int b)
    {
        bucket=b;
        table=new list<int>[b];

    }
    void insert(int key)
    {
        int i=key%bucket;
        table[i].push_back(key);

    }
    void remove(int key)
    {
        int i=key%bucket;
        table[i].remove(key);
    }
    bool search(int key)
    {
        int i=key%bucket;
        for(auto x:table[i])
        if(x==key)return true;
        return false;
    }
}
int main()
{
    struct myhash p1;
    cout<<p1;
    return 0;
}
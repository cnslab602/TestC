#include "std_lib_facilities.h"
#include <limits.h>



void repp(unsigned long long *);
class makerr
{
    public:

    makerr();

    private:
    vector<unsigned long long*> ull;

};
makerr::makerr()
    :ull{0}
    {
        for (unsigned long long i =0;i<ULLONG_MAX;i++)
        {
            ull[i]=new unsigned long long;
        }
    }



void repp()
{
    makerr* t =new makerr;


}

int main()
{
    while (1)
    {
        cout << "No Problem" << endl;
        repp();
    }
    return 0;
}

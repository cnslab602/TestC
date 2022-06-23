#include "std_lib_facilities.h "
#include <limits.h>



void repp(unsinged long long *);
class makerr
{
    public:

    makerr();

    private:
    unsigned long long * ull[ULLONG_MAX];

}
makerr::makerr()
    :ull{0}
    {
        for (unsigned long long i =0;i<ULLONG_MAX;i++)
        {
            ull[i]=new unsigned long long;
        }
    }



void repp(unsinged long long * mr)
{
    makerr t =new makerr;
    makerr* p;
    p=t;


}

int main()
{
    for (unsigned long long i = 0;i<ULLONG_MAX;i++ )
    {
        cout << "No Problem" << endl;
        repp();
    }
    return 0;
}

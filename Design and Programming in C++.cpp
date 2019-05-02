class B {
public:
     virtual void f();
     void g();
};

class DI {
public:
    B b;
    void f();
};
void h1 (D1*pd)
{
    B*pb = pd;
    pb = &pd->b;
    pb->g ();
    pd->g ();
    pd->g ();
    pd->b.g();
    pb->f();
    pd->f();
}
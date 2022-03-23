#pragma once

class Base
{
public:
    virtual ~Base() {};
};

class A : public Base
{
    public:
        A() {};
        virtual ~A() {};
};

class B : public Base
{
    public:
        B() {};
        virtual ~B() {};
};

class C : public Base
{
    public:
        C() {};
        virtual ~C() {};
};

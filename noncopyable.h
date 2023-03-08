#pragma once


/**
 * noncopyable被继承以后，派生类的对象可以正常的构造和析构
 * 但是不能进行拷贝构造和赋值操作
 *  
 */

class noncopyable
{
public: 
    noncopyable(const noncopyable& ) = delete;
    noncopyable& operator=(const noncopyable& ) = delete;
protected:
    noncopyable() = default;
    ~noncopyable() = default;
};
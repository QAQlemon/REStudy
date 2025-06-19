//=================================================
//
// Created by QAQlemon on 2025/6/19.
//

//=================================================
//                  linkConfig
//=================================================
#define Concurrency 0
#define Container 0
#define Algorithm 0
//-------------------------------------------------
#define BasicIO 1
#define Add 1
//=================================================
#if (BasicIO == 1)

#include <iostream>

using namespace std;
#endif
#if (Container == 1)//容器：vector(stack,priority_queue) dequeue(queue) list(forward_list) set(multiset) map(multimap)

#include <vector>
#include <stack>
#include <deque>
#include <queue>//queue,priority_queue(但基于vector)
#include <list>//双向链表
#include <forward_list>//单链表
#include <array>

#include <set>//set,multiset
#include <map>//map,multimap

#include <unordered_set>
#include <unordered_map>

#include <valarray>

#if (Algorithm == 1)
#include <algorithm>
#endif
#endif

#if (Concurrency == 1)//信号量，互斥/共享锁，RAII锁，异步调用(future.promise,packaged_task,async)

#include <thread>//C++11
#include <mutex>//C++11 mutex(mutex,timed_mutex,recursive_mutex,recursive_timed_mutex); C++11 RAII(lock_guard,unique_lock)
#include <shared_mutex>//C++14 mutex(shared_mutex,shared_timed_mutex);C++14 RAII(shared_lock)
#include <atomic>//C++11
#include <future>//C++11 (promise,future,shared_future,packaged_task,async异步调用);
#include <semaphore>//C++20 (counting_semaphore)
#include <condition_variable>//C++11 (condition_variable)

using namespace this_thread;
using namespace chrono;
#endif
//=================================================
#if (Add == 1)
#endif

void test00();

int main() {
    test00();
}

void test00() {
    cout << "test00" << endl;
}

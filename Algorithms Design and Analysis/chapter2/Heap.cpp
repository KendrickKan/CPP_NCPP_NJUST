/*
 * @Author: KendrickKan 
 * @Date: 2021-03-18 23:04:42 
 * @Last Modified by: KendrickKan
 * @Last Modified time: 2021-03-18 23:16:01
 * @about：Heap
 */
#include <bits/stdc++.h>
using namespace std;
const int maxnum = 1000;
int heap[maxnum];
void Sift_up(int i)
{
    bool done = false;
    if (i == 1)
        return;
    while (!done && i != 1)
    {
        int tempfu = (int)floor(i * 1.0 / 2); //父节点
        if (heap[i] > heap[tempfu])
        {
            int temp = heap[i];
            heap[i] = heap[tempfu];
            heap[tempfu] = temp;
        }
        else
            done = true;
        i = tempfu;
    }
}
void Sift_down(int i)
{
}
int main()
{
}
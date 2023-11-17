#include <iostream>
#include <vector>
#include <algorithm>
#include <thread>
#include <mutex>

class Solution {
public:
    int res;
    std::mutex mtx;

    void calculateMaxPairSum(std::vector<int>& A, int start, int end) {
        int localMax = 0;
        for (int i = start; i < end; ++i)
            localMax = std::max(localMax, A[i] + A[A.size() - i - 1]);

        std::lock_guard<std::mutex> lock(mtx);
        res = std::max(res, localMax);
    }

    int minPairSum(std::vector<int>& A) {
        sort(A.begin(), A.end());
        res = 0;
        int n = A.size();
        int numThreads = std::thread::hardware_concurrency();
        std::vector<std::thread> threads;

        for (int i = 0; i < numThreads; ++i) {
            int start = i * (n / numThreads);
            int end = (i == numThreads - 1) ? n : (i + 1) * (n / numThreads);
            threads.emplace_back(&Solution::calculateMaxPairSum, this, std::ref(A), start, end);
        }

        for (auto& thread : threads) {
            if (thread.joinable())
                thread.join();
        }

        return res;
    }
};
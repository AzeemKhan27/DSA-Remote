 long long minCost(vector<long long>& arr) {  // Make sure arr is a vector<long long>
        // Min-Heap banane ke liye priority_queue ka use
        priority_queue<long long, vector<long long>, greater<long long>> minHeap(arr.begin(), arr.end());

        long long totalCost = 0;

        // Jab tak heap mein ek se zyada ropes hain
        while (minHeap.size() > 1) {
            // Sabse chhoti do ropes nikalo
            long long first = minHeap.top();
            minHeap.pop();
            long long second = minHeap.top();
            minHeap.pop();

            // In dono ko jodo aur cost mein add karo
            long long newRope = first + second;
            totalCost += newRope;

            // Nai rope ko heap mein wapas daalo
            minHeap.push(newRope);
        }

        return totalCost;
    }
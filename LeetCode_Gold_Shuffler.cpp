// A Basic C++ Program to shuffle links to some Golden LeetCode Problems.

#include <bits/stdc++.h>
using namespace std;
void shuffle(vector<string> &links){
    int n=links.size();
    for(int i=n-1;i>=0;--i){
        int rand_index=rand()%(n);
        swap(links[i],links[rand_index]);
    }    
    cout<<"Successfully Shuffled"<<endl;
}

void get_name(vector<string> &a,int index=0){
    int number=0;
    if(index)cout<<"----Numbered Names----"<<endl;
    else cout<<"----Non-Numbered Names----"<<endl;
    for(auto str:a){
        int n=str.size(),cnt=0,i=0;
        while(i<n && cnt<4){
            i++;
            if(str[i]=='/')cnt++;
        }
        string name=str.substr(i+1,n-i-2);
        if(index)cout<<(++number)<<" ";
        cout<<name<<endl;
    }        
}

void print(vector<string> &problems){
    for(auto i:problems){
        cout<<i<<endl;
    }
}

int main(){
    vector<string> problems{
        "https://leetcode.com/problems/tree-of-coprimes/",
"https://leetcode.com/problems/redundant-connection-ii/",
"https://leetcode.com/problems/minimum-score-after-removals-on-a-tree/",
"https://leetcode.com/problems/minimize-malware-spread/",
"https://leetcode.com/problems/accounts-merge/",
"https://leetcode.com/problems/sum-of-prefix-scores-of-strings/",
"https://leetcode.com/problems/maximum-genetic-difference-query/ (Tree Query)",
"https://leetcode.com/problems/prefix-and-suffix-search/ ",
"https://leetcode.com/problems/check-if-the-rectangle-corner-is-reachable/description/",
"https://leetcode.com/problems/satisfiability-of-equality-equations/",
"https://leetcode.com/problems/process-restricted-friend-requests/",
"https://leetcode.com/problems/graph-connectivity-with-threshold/",
"https://leetcode.com/problems/making-a-large-island/",
"https://leetcode.com/problems/count-number-of-possible-root-nodes/",
"https://leetcode.com/problems/difference-between-maximum-and-minimum-price-sum/",
"https://leetcode.com/problems/minimum-height-trees/",
"https://leetcode.com/problems/is-graph-bipartite/",
"https://leetcode.com/problems/jump-game-iii/",
"https://leetcode.com/problems/count-of-integers/",
"https://leetcode.com/problems/non-negative-integers-without-consecutive-ones/",
"https://leetcode.com/problems/count-stepping-numbers-in-range/",
"https://leetcode.com/problems/count-special-integers/",
"https://leetcode.com/problems/describe-the-painting/",
"https://leetcode.com/problems/my-calendar-iii/",
"https://leetcode.com/problems/number-of-flowers-in-full-bloom/",
"https://leetcode.com/problems/maximum-beauty-of-an-array-after-applying-operation/",
"https://leetcode.com/problems/divide-intervals-into-minimum-number-of-groups/",
"https://leetcode.com/problems/find-two-non-overlapping-sub-arrays-each-with-target-sum/",
"https://leetcode.com/problems/minimum-deletions-to-make-string-balanced/",
"https://leetcode.com/problems/minimum-cost-to-make-array-equal/",
"https://leetcode.com/problems/longest-subarray-of-1s-after-deleting-one-element/",
"https://leetcode.com/problems/minimum-index-of-a-valid-split/",
"https://leetcode.com/problems/grid-game/",
"https://leetcode.com/problems/max-chunks-to-make-sorted-ii/",
"https://leetcode.com/problems/maximum-fruits-harvested-after-at-most-k-steps/",
"https://leetcode.com/problems/minimum-penalty-for-a-shop/",
"https://leetcode.com/problems/132-pattern",
"https://leetcode.com/problems/all-nodes-distance-k-in-binary-tree/",
"https://leetcode.com/problems/detonate-the-maximum-bombs/",
"https://leetcode.com/problems/count-unique-characters-of-all-substrings-of-a-given-string/",
"https://leetcode.com/problems/sum-of-all-odd-length-subarrays/",
"https://leetcode.com/problems/count-anagrams/",
"https://leetcode.com/problems/count-vowels-permutation/",
"https://leetcode.com/problems/russian-doll-envelopes/",
"https://leetcode.com/problems/maximum-alternating-subsequence-sum/",
"https://leetcode.com/problems/maximum-absolute-sum-of-any-subarray/",
"https://leetcode.com/problems/snapshot-array/",
"https://leetcode.com/problems/range-frequency-queries/",
"https://leetcode.com/problems/maximum-number-of-removable-characters/",
"https://leetcode.com/problems/split-array-largest-sum/",
"https://leetcode.com/problems/maximize-the-confusion-of-an-exam/",
"https://leetcode.com/problems/smallest-range-covering-elements-from-k-lists/",
"https://leetcode.com/problems/find-k-th-smallest-pair-distance/",
"https://leetcode.com/problems/kth-smallest-number-in-multiplication-table/",
"https://leetcode.com/problems/minimum-limit-of-balls-in-a-bag/",
"https://leetcode.com/problems/movement-of-robots/",
"https://leetcode.com/problems/put-marbles-in-bags/",
"https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/",
"https://leetcode.com/problems/minimum-interval-to-include-each-query/",
"https://leetcode.com/problems/non-overlapping-intervals/",
"https://leetcode.com/problems/k-th-smallest-prime-fraction/",
"https://leetcode.com/problems/closest-room/ (binary search)",
"https://leetcode.com/problems/longest-arithmetic-subsequence/",
"https://leetcode.com/problems/tallest-billboard/",
"https://leetcode.com/problems/decremental-string-concatenation/",
"https://leetcode.com/problems/count-all-possible-routes/",
"https://leetcode.com/problems/sum-of-imbalance-numbers-of-all-subarrays/",
"https://leetcode.com/problems/knight-dialer/",
"https://leetcode.com/problems/longest-arithmetic-subsequence-of-given-difference/",
"https://leetcode.com/problems/number-of-ways-to-stay-in-the-same-place-after-some-steps/",
"https://leetcode.com/problems/lexicographically-smallest-string-after-substring-operation/",
"https://leetcode.com/problems/sum-of-scores-of-built-strings/ (hashing)",
"https://leetcode.com/problems/maximum-repeating-substring/",
"https://leetcode.com/problems/longest-chunked-palindrome-decomposition/",
"https://leetcode.com/problems/shortest-palindrome/",
"https://leetcode.com/problems/maximum-deletions-on-a-string/",
"https://leetcode.com/problems/longest-duplicate-substring/",
"https://leetcode.com/problems/maximize-score-after-n-operations/",
"https://leetcode.com/problems/special-permutations/",
"https://leetcode.com/problems/minimum-number-of-work-sessions-to-finish-the-tasks/",
"https://leetcode.com/problems/find-longest-awesome-substring/",
"https://leetcode.com/problems/number-of-valid-words-for-each-puzzle/ (No DP)",
"https://leetcode.com/problems/number-of-ways-to-wear-different-hats-to-each-other/",
"https://leetcode.com/problems/the-number-of-good-subsets/",
"https://leetcode.com/problems/maximum-number-of-events-that-can-be-attended-ii/",
"https://leetcode.com/problems/number-of-longest-increasing-subsequence/",
"https://leetcode.com/problems/merge-in-between-linked-lists/",
"https://leetcode.com/problems/remove-nodes-from-linked-list/",
"https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/",
"https://leetcode.com/problems/split-linked-list-in-parts/",
"https://leetcode.com/problems/reverse-linked-list-ii/",
"https://leetcode.com/problems/minimum-sideway-jumps/",
"https://leetcode.com/problems/minimum-ascii-delete-sum-for-two-strings/",
"https://leetcode.com/problems/minimum-difficulty-of-a-job-schedule/",
"https://leetcode.com/problems/student-attendance-record-ii/",
"https://leetcode.com/problems/cycle-length-queries-in-a-tree/",
"https://leetcode.com/problems/minimum-genetic-mutation/",
"https://leetcode.com/problems/nearest-exit-from-entrance-in-maze/",
"https://leetcode.com/problems/maximum-sum-of-distinct-subarrays-with-length-k/",
"https://leetcode.com/problems/max-consecutive-ones-iii/",
"https://leetcode.com/problems/count-zero-request-servers/",
"https://leetcode.com/problems/continuous-subarrays/",
"https://leetcode.com/problems/maximize-the-confusion-of-an-exam/",
"https://leetcode.com/problems/length-of-the-longest-valid-substring/",
"https://leetcode.com/problems/shortest-path-in-binary-matrix/",
"https://leetcode.com/problems/maximum-number-of-points-from-grid-queries/",
"https://leetcode.com/problems/minimum-time-to-visit-a-cell-in-a-grid/",
"https://leetcode.com/problems/number-of-restricted-paths-from-first-to-last-node/",
"https://leetcode.com/problems/bus-routes/",
"https://leetcode.com/problems/count-subtrees-with-max-distance-between-cities/",
"https://leetcode.com/problems/binary-trees-with-factors/",
"https://leetcode.com/problems/find-eventual-safe-states/",
"https://leetcode.com/problems/number-of-visible-people-in-a-queue/",
"https://leetcode.com/problems/robot-collisions/",
"https://leetcode.com/problems/sum-of-subarray-minimums/",
"https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string-ii/",
"https://leetcode.com/problems/asteroid-collision/",
"https://leetcode.com/problems/largest-rectangle-in-histogram/",
"https://leetcode.com/problems/subarray-with-elements-greater-than-varying-threshold/",
"https://leetcode.com/problems/apply-operations-to-maximize-score/",
"https://leetcode.com/problems/beautiful-towers-ii/",
"https://leetcode.com/problems/open-the-lock/",
"https://leetcode.com/problems/surrounded-regions/",
"https://leetcode.com/problems/minimize-the-total-price-of-the-trips/",
"https://leetcode.com/problems/create-components-with-same-value/",
"https://leetcode.com/problems/sum-of-matrix-after-queries/",
"https://leetcode.com/problems/determine-if-two-strings-are-close/",
"https://leetcode.com/problems/design-movie-rental-system/",
"https://leetcode.com/problems/minimum-cost-to-reach-destination-in-time/",
"https://leetcode.com/problems/find-critical-and-pseudo-critical-edges-in-minimum-spanning-tree/",
"https://leetcode.com/problems/minimum-score-after-removals-on-a-tree/",
"https://leetcode.com/problems/divide-nodes-into-the-maximum-number-of-groups/",
"https://leetcode.com/problems/linked-list-in-binary-tree/",
"https://leetcode.com/problems/step-by-step-directions-from-a-binary-tree-node-to-another/",
"https://leetcode.com/problems/find-bottom-left-tree-value/",
"https://leetcode.com/problems/add-one-row-to-tree/",
"https://leetcode.com/problems/neighboring-bitwise-xor/",
"https://leetcode.com/problems/longest-nice-subarray/",
"https://leetcode.com/problems/find-kth-largest-xor-coordinate-value/",
"https://leetcode.com/problems/number-of-steps-to-reduce-a-number-in-binary-representation-to-one/",
"https://leetcode.com/problems/find-the-punishment-number-of-an-integer/",
"https://leetcode.com/problems/maximum-number-of-achievable-transfer-requests/",
"https://leetcode.com/problems/split-array-into-fibonacci-sequence/",
"https://leetcode.com/problems/numbers-with-same-consecutive-differences/",
"https://leetcode.com/problems/minimum-operations-to-form-subsequence-with-target-sum/",
"https://leetcode.com/problems/insufficient-nodes-in-root-to-leaf-paths/",
"https://leetcode.com/problems/path-in-zigzag-labelled-binary-tree/",
"https://leetcode.com/problems/binary-tree-coloring-game/",
"https://leetcode.com/problems/filling-bookcase-shelves/description/",
"https://leetcode.com/problems/number-of-good-leaf-nodes-pairs/"};
    
    // get_name(problems);
    shuffle(problems);
    // get_name(problems,1);
    print(problems);
}

//Output:-

/*

Successfully Shuffled
https://leetcode.com/problems/find-kth-largest-xor-coordinate-value/
https://leetcode.com/problems/split-array-largest-sum/
https://leetcode.com/problems/path-in-zigzag-labelled-binary-tree/
https://leetcode.com/problems/count-zero-request-servers/
https://leetcode.com/problems/find-critical-and-pseudo-critical-edges-in-minimum-spanning-tree/
https://leetcode.com/problems/is-graph-bipartite/
https://leetcode.com/problems/minimum-score-after-removals-on-a-tree/
https://leetcode.com/problems/lexicographically-smallest-string-after-substring-operation/
https://leetcode.com/problems/satisfiability-of-equality-equations/
https://leetcode.com/problems/number-of-ways-to-wear-different-hats-to-each-other/
https://leetcode.com/problems/sum-of-subarray-minimums/
https://leetcode.com/problems/longest-subarray-of-1s-after-deleting-one-element/
https://leetcode.com/problems/nearest-exit-from-entrance-in-maze/
https://leetcode.com/problems/cycle-length-queries-in-a-tree/
https://leetcode.com/problems/detonate-the-maximum-bombs/
https://leetcode.com/problems/count-special-integers/
https://leetcode.com/problems/tallest-billboard/
https://leetcode.com/problems/add-one-row-to-tree/
https://leetcode.com/problems/split-array-into-fibonacci-sequence/
https://leetcode.com/problems/count-anagrams/
https://leetcode.com/problems/largest-rectangle-in-histogram/
https://leetcode.com/problems/check-if-the-rectangle-corner-is-reachable/description/
https://leetcode.com/problems/grid-game/
https://leetcode.com/problems/merge-in-between-linked-lists/
https://leetcode.com/problems/minimize-the-total-price-of-the-trips/
https://leetcode.com/problems/find-two-non-overlapping-sub-arrays-each-with-target-sum/
https://leetcode.com/problems/graph-connectivity-with-threshold/
https://leetcode.com/problems/count-number-of-possible-root-nodes/
https://leetcode.com/problems/number-of-restricted-paths-from-first-to-last-node/
https://leetcode.com/problems/maximum-genetic-difference-query/ (Tree Query)
https://leetcode.com/problems/number-of-visible-people-in-a-queue/
https://leetcode.com/problems/asteroid-collision/
https://leetcode.com/problems/prefix-and-suffix-search/ 
https://leetcode.com/problems/minimum-height-trees/
https://leetcode.com/problems/snapshot-array/
https://leetcode.com/problems/beautiful-towers-ii/
https://leetcode.com/problems/max-chunks-to-make-sorted-ii/
https://leetcode.com/problems/redundant-connection-ii/
https://leetcode.com/problems/count-of-integers/
https://leetcode.com/problems/132-pattern
https://leetcode.com/problems/apply-operations-to-maximize-score/
https://leetcode.com/problems/subarray-with-elements-greater-than-varying-threshold/
https://leetcode.com/problems/sum-of-all-odd-length-subarrays/
https://leetcode.com/problems/surrounded-regions/
https://leetcode.com/problems/number-of-longest-increasing-subsequence/
https://leetcode.com/problems/jump-game-iii/
https://leetcode.com/problems/minimum-deletions-to-make-string-balanced/
https://leetcode.com/problems/k-th-smallest-prime-fraction/
https://leetcode.com/problems/maximize-the-confusion-of-an-exam/
https://leetcode.com/problems/length-of-the-longest-valid-substring/
https://leetcode.com/problems/longest-duplicate-substring/
https://leetcode.com/problems/maximum-alternating-subsequence-sum/
https://leetcode.com/problems/count-unique-characters-of-all-substrings-of-a-given-string/
https://leetcode.com/problems/special-permutations/
https://leetcode.com/problems/minimum-time-to-visit-a-cell-in-a-grid/
https://leetcode.com/problems/longest-arithmetic-subsequence/
https://leetcode.com/problems/continuous-subarrays/
https://leetcode.com/problems/divide-intervals-into-minimum-number-of-groups/
https://leetcode.com/problems/number-of-ways-to-stay-in-the-same-place-after-some-steps/
https://leetcode.com/problems/maximize-score-after-n-operations/
https://leetcode.com/problems/minimum-interval-to-include-each-query/
https://leetcode.com/problems/all-nodes-distance-k-in-binary-tree/
https://leetcode.com/problems/count-all-possible-routes/
https://leetcode.com/problems/minimize-malware-spread/
https://leetcode.com/problems/sum-of-prefix-scores-of-strings/
https://leetcode.com/problems/tree-of-coprimes/
https://leetcode.com/problems/longest-arithmetic-subsequence-of-given-difference/
https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/
https://leetcode.com/problems/number-of-steps-to-reduce-a-number-in-binary-representation-to-one/
https://leetcode.com/problems/shortest-path-in-binary-matrix/
https://leetcode.com/problems/maximum-number-of-removable-characters/
https://leetcode.com/problems/minimum-number-of-work-sessions-to-finish-the-tasks/
https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/
https://leetcode.com/problems/remove-nodes-from-linked-list/
https://leetcode.com/problems/process-restricted-friend-requests/
https://leetcode.com/problems/difference-between-maximum-and-minimum-price-sum/
https://leetcode.com/problems/kth-smallest-number-in-multiplication-table/
https://leetcode.com/problems/determine-if-two-strings-are-close/
https://leetcode.com/problems/maximum-absolute-sum-of-any-subarray/
https://leetcode.com/problems/number-of-flowers-in-full-bloom/
https://leetcode.com/problems/find-k-th-smallest-pair-distance/
https://leetcode.com/problems/my-calendar-iii/
https://leetcode.com/problems/insufficient-nodes-in-root-to-leaf-paths/
https://leetcode.com/problems/making-a-large-island/
https://leetcode.com/problems/decremental-string-concatenation/
https://leetcode.com/problems/binary-tree-coloring-game/
https://leetcode.com/problems/minimum-penalty-for-a-shop/
https://leetcode.com/problems/maximum-number-of-points-from-grid-queries/
https://leetcode.com/problems/maximum-deletions-on-a-string/
https://leetcode.com/problems/sum-of-matrix-after-queries/
https://leetcode.com/problems/minimum-index-of-a-valid-split/
https://leetcode.com/problems/maximum-fruits-harvested-after-at-most-k-steps/
https://leetcode.com/problems/count-stepping-numbers-in-range/
https://leetcode.com/problems/sum-of-scores-of-built-strings/ (hashing)
https://leetcode.com/problems/number-of-good-leaf-nodes-pairs/
https://leetcode.com/problems/put-marbles-in-bags/
https://leetcode.com/problems/create-components-with-same-value/
https://leetcode.com/problems/minimum-sideway-jumps/
https://leetcode.com/problems/find-bottom-left-tree-value/
https://leetcode.com/problems/russian-doll-envelopes/
https://leetcode.com/problems/minimum-operations-to-form-subsequence-with-target-sum/
https://leetcode.com/problems/minimum-difficulty-of-a-job-schedule/
https://leetcode.com/problems/shortest-palindrome/
https://leetcode.com/problems/maximum-sum-of-distinct-subarrays-with-length-k/
https://leetcode.com/problems/find-eventual-safe-states/
https://leetcode.com/problems/split-linked-list-in-parts/
https://leetcode.com/problems/number-of-valid-words-for-each-puzzle/ (No DP)
https://leetcode.com/problems/minimum-genetic-mutation/
https://leetcode.com/problems/minimum-cost-to-reach-destination-in-time/
https://leetcode.com/problems/linked-list-in-binary-tree/
https://leetcode.com/problems/count-vowels-permutation/
https://leetcode.com/problems/closest-room/ (binary search)
https://leetcode.com/problems/minimum-limit-of-balls-in-a-bag/
https://leetcode.com/problems/maximum-number-of-achievable-transfer-requests/
https://leetcode.com/problems/maximum-repeating-substring/
https://leetcode.com/problems/minimum-cost-to-make-array-equal/
https://leetcode.com/problems/bus-routes/
https://leetcode.com/problems/non-negative-integers-without-consecutive-ones/
https://leetcode.com/problems/maximize-the-confusion-of-an-exam/
https://leetcode.com/problems/accounts-merge/
https://leetcode.com/problems/maximum-number-of-events-that-can-be-attended-ii/
https://leetcode.com/problems/knight-dialer/
https://leetcode.com/problems/longest-chunked-palindrome-decomposition/
https://leetcode.com/problems/student-attendance-record-ii/
https://leetcode.com/problems/find-longest-awesome-substring/
https://leetcode.com/problems/divide-nodes-into-the-maximum-number-of-groups/
https://leetcode.com/problems/find-the-punishment-number-of-an-integer/
https://leetcode.com/problems/minimum-ascii-delete-sum-for-two-strings/
https://leetcode.com/problems/sum-of-imbalance-numbers-of-all-subarrays/
https://leetcode.com/problems/the-number-of-good-subsets/
https://leetcode.com/problems/count-subtrees-with-max-distance-between-cities/
https://leetcode.com/problems/describe-the-painting/
https://leetcode.com/problems/non-overlapping-intervals/
https://leetcode.com/problems/reverse-linked-list-ii/
https://leetcode.com/problems/range-frequency-queries/
https://leetcode.com/problems/robot-collisions/
https://leetcode.com/problems/minimum-score-after-removals-on-a-tree/
https://leetcode.com/problems/open-the-lock/
https://leetcode.com/problems/design-movie-rental-system/
https://leetcode.com/problems/movement-of-robots/
https://leetcode.com/problems/longest-nice-subarray/
https://leetcode.com/problems/max-consecutive-ones-iii/
https://leetcode.com/problems/binary-trees-with-factors/
https://leetcode.com/problems/filling-bookcase-shelves/description/
https://leetcode.com/problems/smallest-range-covering-elements-from-k-lists/
https://leetcode.com/problems/numbers-with-same-consecutive-differences/
https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string-ii/
https://leetcode.com/problems/maximum-beauty-of-an-array-after-applying-operation/
https://leetcode.com/problems/neighboring-bitwise-xor/
https://leetcode.com/problems/step-by-step-directions-from-a-binary-tree-node-to-another/

*/


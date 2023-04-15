// One size fits all Custom Comparator (Priority Queue,Set,MultiSet)
struct comp {
    bool operator()(const int&a, const int&b)const
    {
        //Condition to sort the given container in increasing order
        return a < b;

        //Exception:condition for the same in case of Priority Queue
        return a > b;
    }
};

// NOTE:
//1-> Comparator for Priority Queue is opposite of the usual comparators.
//2-> const keyword after function signature is essential for set/multiset only.
//3-> Similar thing can also be done using Class.

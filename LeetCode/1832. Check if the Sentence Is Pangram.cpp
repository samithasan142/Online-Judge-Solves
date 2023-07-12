class Solution {
public:
    bool checkIfPangram(string sentence) {
        return unordered_set(sentence.begin(), sentence.end()).size() == 26;
    }
};

/*
The unordered_set is a container that stores unique elements in no particular order.
The code creates an unordered set of unique characters from the sentence and checks if the size of the set is equal to 26 to determine if the sentence is a pangram or not.
*/

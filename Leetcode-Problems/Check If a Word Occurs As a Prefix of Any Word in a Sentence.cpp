// class Solution
// {
// public:
//     int isPrefixOfWord(string sentence, string searchWord)
//     {
//         stringstream ss(sentence);
//         string word;
//         int ans = -1;
//         int idx = 1;
//         while (ss >> word)
//         {
//             bool check = true;
//             for (int i = 0; i < searchWord.length(); i++)
//             {
//                 if (word[i] != searchWord[i])
//                 {
//                     check = false;
//                     break;
//                 }
//             }
//             if (check)
//             {
//                 ans = idx;
//                 break;
//             }
//             idx++;
//         }
//         return ans;
//     }
// };

class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        stringstream ss(sentence);
        string word;
        int idx=1;
       while(ss>>word){
            if(word.find(searchWord)==0){
                return idx;
            }
            idx++;
        }
        return -1;
    }
};
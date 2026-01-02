// class Solution {
// public:
//     vector<string> fullJustify(vector<string>& words, int maxWidth) {
//         vector<string> result;
//         vector<string> currentWords;
//         int currentLength = 0;
//         string currentSentence = "";
//         int n = words.size();
//         for(int i=0; i<n; i++){
//             if(currentLength + currentWords.size()+ words[i].length() > maxWidth){
//                 int nline = currentWords.size();
//                 int remainingSpaces = maxWidth - currentLength;
//                 int spaces = remainingSpaces / max(1, nline - 1);
//                 int extraSpaces = remainingSpaces % max(1, nline - 1);

//                 for(int j=0; j<max(nline-1, 1); j++){
//                     currentSentence += currentWords[j];
//                     for(int k=0; k<spaces; k++){
//                         currentSentence += " ";
//                     }
//                     if(extraSpaces > 0){
//                         currentSentence += " ";
//                         extraSpaces--;
//                     }
//                 }
//                 if(nline > 1){
//                     currentSentence += currentWords[nline -1];
//                 }
//                 result.push_back(currentSentence);
//                 currentSentence = "";
//                 currentLength = 0;
//                 currentWords.clear();
//             }
//             currentWords.push_back(words[i]);
//             currentLength += words[i].length();
//         }
//         currentLength = 0;
//         for(int i=0; i<currentWords.size(); i++){
//             currentSentence += currentWords[i]+" ";
//         }
//         currentSentence.pop_back();
//         currentLength += currentSentence.length();
//         for(int i=0; i<maxWidth - currentLength; i++){
//             currentSentence += " ";
//         }
//         result.push_back(currentSentence);
//         return result;
//     }
// };
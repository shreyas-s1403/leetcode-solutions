char nextGreatestLetter(char* letters, int lettersSize, char target) {
    for (int i=0;i<lettersSize;i++){
        if ((char)letters[i]>target) return letters[i];
    }
     return letters[0];

}
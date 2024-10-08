bool solution(string inputString) {
    string revString = inputString;
    
    reverse(revString.begin(), revString.end());
    
    return revString == inputString;
}


//JS Code

function solution(inputString) {
    // Reverse the string
    let reversedString = inputString.split('').reverse().join('');
    // Check if the original string and reversed string are the same
    return inputString === reversedString;
}

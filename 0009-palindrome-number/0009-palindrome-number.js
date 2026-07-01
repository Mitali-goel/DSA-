/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
    if(x < 0) return false;
     let newStr = x.toString();
    let j = newStr.length - 1;
    for(let i  = 0; i < newStr.length; i++){
            if(newStr[i] !== newStr[j]){
                return false;
            }
            j--;
    }
    return true;
};
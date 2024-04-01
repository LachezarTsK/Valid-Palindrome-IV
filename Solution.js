
/**
 * @param {string} input
 * @return {boolean}
 */
var makePalindrome = function (input) {
    let left = 0;
    let right = input.length - 1;
    let differences = 0;

    while (left < right && differences <= 2) {
        differences += (input.charAt(left++) !== input.charAt(right--)) ? 1 : 0;
    }
    return differences <= 2;
};

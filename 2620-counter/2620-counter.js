/**
 * @param {number} n
 * @return {Function} counter
 */
var createCounter = function(n) {
    let counterValue = n;

    const counter = function() {
        const current = counterValue;
        counterValue += 1;
        return current;
    };

    return counter;
};

/** 
 * const counter = createCounter(10)
 * counter() // 10
 * counter() // 11
 * counter() // 12
 */
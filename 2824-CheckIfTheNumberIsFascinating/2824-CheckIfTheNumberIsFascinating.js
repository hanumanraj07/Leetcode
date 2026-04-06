// Last updated: 4/6/2026, 5:55:31 PM
var isFascinating = function(n) {

    let s = String(n) + String(2 * n) + String(3 * n);

    if (s.length !== 9) return false;

    let set = new Set();

    for (let ch of s) {
        if (ch === '0' || set.has(ch)) {
            return false;
        }
        set.add(ch);
    }

    return true;
};
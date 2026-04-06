// Last updated: 4/6/2026, 6:52:15 PM
/**
 * @param {number[]} nums
 * @return {number}
 */
var singleNumber = function(nums) {
    let obj= {};
    for(let num of nums){
        if(obj[num]==undefined){
            obj[num] = 1;
        }
        else{
            obj[num]++;
        }
    }
        for(let key in obj)
        {if(obj[key]==1){
            return Number(key);
        }
        }
};
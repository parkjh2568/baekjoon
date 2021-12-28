const lottos = [10,0,0,0,0,19]
const wind_nums = [31,10,45,1,6,19]
function solution(lottos, win_nums) {
    let data = new Map()
    let i = 0;
    let j = 0;
    for (let k = 0; k< 6; k++) {
        if (lottos[k] != 0) {
            if (data[lottos[k]] == "a")
                i++;
            else
                data[lottos[k]] = "a";
        }
        else
            j++;
        if (data[wind_nums[k]] == "a")
            i++;
        else
            data[wind_nums[k]] = "a"
    }
    console.log(data);
    if (i == 0)
    {
        i++;
        j--;
    }
    console.log(6 - i -j + 1, 6 - i + 1);
}
solution(lottos, wind_nums);
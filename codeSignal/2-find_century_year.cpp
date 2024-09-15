function solution(year){
    if(year % 100 === 0) {
        return Math.floor(year / 100);
    }
    else{
        return Math.floor(year / 100) + 1;
    }
}

console.log(solution(1400));
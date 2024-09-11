const bubbleSort = arr => {
    let sortArr = arr;
    for (let i = 0; i < sortArr.length - 1; i++) {
        for (let j = 0; j < sortArr.length - 1; j++) {
            if (sortArr[j] > sortArr[j + 1]) [sortArr[j], sortArr[j + 1]] = [sortArr[j + 1], sortArr[j]];
        }
        return sortArr;
    }
};

console.log(bubbleSort([1, 4, 2, 3]));
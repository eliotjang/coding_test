const insertionSort = arr => {
    for (let i = 1; i < arr.length; i++) {
        let currValue = arr[i];
        let j;
        for (j = i - 1; j >= 0 && currValue < arr[j]; j--) {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = currValue;
    }
    return arr;
};

console.log(insertionSort([3, 5, 2, 1]));
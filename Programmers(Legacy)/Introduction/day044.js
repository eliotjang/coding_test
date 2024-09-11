// 최소직사각형
function solution(sizes) {
  let widthArr = [];
  let heightArr = [];
  sizes.forEach((size) => {
    console.log(size);
    widthArr.push(Math.max(...size));
    heightArr.push(Math.min(...size));
  });

  const width = Math.max(...widthArr);
  const height = Math.max(...heightArr);
  return width * height;
}

/*
hash查找法
*/

func twoSum(nums []int, target int) []int {
    nummap := make(map[int]int)

    for i, num := range nums {
        nummap[num] = i
    }
    for i, num := range nums {
        index := target - num
        if _, exist := nummap[index]; exist && nummap[index] != i{
            return []int{i, nummap[index]}
        }
    }
    return []int{}
}
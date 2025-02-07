package main

import "fmt"

func SearchRange(arr []int, key int) []int {
	result := []int{-1, -1}

	for i := 0; i < len(arr); i++ {
		if arr[i] == key {
			result[0] = i
			break
		}
	}
	if result[0] == -1 {
		return result
	}

	for i := len(arr) - 1; i >= 0; i-- {
		if arr[i] == key {
			result[1] = i
			break
		}
	}

	return result
}

func main() {
	for {
		fmt.Print("Number of elements: ")
		count := 0
		fmt.Scan(&count)
		if count == 0 {
			break
		}

		vec := make([]int, count)
		fmt.Print("Please enter the array: ")
		for i := 0; i < count; i++ {
			fmt.Scan(&vec[i])
		}

		k := 0
		fmt.Print("The key number: ")
		fmt.Scan(&k)

		fmt.Print("The first and last occurrence of ")
		fmt.Print(k)
		fmt.Print(" in the arr ")
		fmt.Print(vec)
		fmt.Print(" is ")
		fmt.Println(SearchRange(vec, k))
	}
}

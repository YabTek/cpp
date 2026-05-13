package main

import ("fmt"
	"bufio"
	"os"
	"strings"
	"strconv")

func swap(slice []int, j int){
	slice[j], slice[j+1] = slice[j+1], slice[j]
}

func bubbleSort(slice []int) {
	n := len(slice)

	for i := 0; i < n-1; i++{
		for j := 0; j < n-i-1; j++{
			if slice[j] > slice[j+1]{
				swap(slice, j)
			}
		}
	}
}

func main(){
	scanner := bufio.NewScanner(os.Stdin)
	fmt.Println("Enter numbers")

	scanner.Scan()
	strNumbers := scanner.Text()

	slice := []int{}
	numbers := strings.Fields(strNumbers)

	for _, num := range numbers {
		intnum, err := strconv.Atoi(num)

		if err == nil {
			slice = append(slice, intnum)
		}
	}
	bubbleSort(slice)

	for _, num := range slice{
		fmt.Printf("%d", num)
	}

}
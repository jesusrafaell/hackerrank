package main

import (
	"bufio"
	"fmt"
	"os"
	"strings"
	// "strconv"
	// "io"
)

func anagram(s string) int32 {
	n := len(s)
	if n%2 != 0 { // odd len
		return -1
	}

	k := n / 2 // s1 = [i...k] and s2 = [k...n]
	count := int32(0)
	freq := make(map[rune]int)

	// s2
	for _, c := range s[k:] {
		freq[c]++
	}

	// s1
	for _, c := range s[:k] {
		if freq[c] > 0 {
			freq[c]--
		} else {
			count++
		}
	}

	return count
}

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	scanner.Scan()
	q := 0
	fmt.Sscanf(scanner.Text(), "%d", &q)

	for q > 0 {
		scanner.Scan()
		s := strings.TrimSpace(scanner.Text())
		fmt.Println(anagram(s))
		q--
	}
}

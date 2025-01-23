/*
  Write a function `isAnagram` which takes 2 parameters and returns true/false if those are anagrams or not.
  What's Anagram?
  - A word, phrase, or name formed by rearranging the letters of another, such as spar, formed from rasp.
*/

function isAnagram(str1, str2) {
  // const arr1 = str1.toLowerCase().split("");  // ShU => shu => ["s", "h", "u"]
  // const arr2 = str2.toLowerCase().split("");

  // const sorted1 = arr1.sort();
  // const sorted2 = arr2.sort();

  // const str_1 = sorted1.join("");
  // const str_2 = sorted2.join("");

const str_1 = str1.toLowerCase().split("").sort().join(""); // Doing all above at ones 
const str_2 = str1.toLowerCase().split("").sort().join("");

  // const shortedString1 = str.sort();   //"shubham" => ["s", "h", "u", "b", "h", "a", "m"] =>["s", "h", "u", "b", "h", "a", "m"] => ["a", "b","h", "h", "m", "s", "u"]=> abhmsu
  // const shortedString2 = str2.sort();

  if (str_1 == str_2) {
    return "True";
  } else {
    return "False";
  }
}

console.log(isAnagram("sHub", "huSb"))//Every time you need to write it


// module.exports = isAnagram;   //So use this in place of above

// -------------IMPLEMENTATION-----------
// .split("") => converts string to an array
// .sort() => sorts the array
// .join("") => array to string
// .toLowerCase()=> converts the string to lowercase

// let str = "shubham";

// a = str.split("");  //converted to array
// console.log(a);

// sortedarr = a.sort();  //sorted the array
// console.log(sortedarr);

// const str1 = sortedarr.join("");
// console.log(str1);  //converts array to string

// a = str.split("h");  //Gives an array that is splitted whenever "h" appears int he string
// console.log(a);

-- Algoritmi di ordinamento in haskell

import Data.List (minimum, delete, permutations)
import Control.Exception
import Data.Time

-- QuickSort
qsort :: Ord a => [a] -> [a]
qsort [] = []
qsort (x:xs) = qsort smaller ++ [x] ++ qsort larger
               where 
                  smaller = [a | a <- xs, a < x]
                  larger = [b | b <- xs, b > x]

-- MergeSort
merge :: Ord a => [a] -> [a] -> [a]
merge [] ys = ys
merge xs [] = xs
merge (x:xs) (y:ys) | x < y     = x:merge xs (y:ys)
                    | otherwise = y:merge (x:xs) ys

halve :: [a] -> ([a],[a])
halve xs = (take lhx xs, drop lhx xs)
           where lhx = length xs `div` 2

msort :: Ord a => [a] -> [a]
msort [] = []
msort [x] = [x]
msort  xs = merge (msort left) (msort right)
            where (left,right) = halve xs

-- BubbleSort
bubbleSortImpl :: Int -> [Int] -> [Int]
bubbleSortImpl 0 xs = xs
bubbleSortImpl n xs = bubbleSortImpl (n - 1) (bubble xs)
                      where
                          bubble [] = []
                          bubble (x : []) = x : []
                          bubble (x : y : ys) = if x <= y
                              then x : (bubble (y : ys))
                              else y : (bubble (x : ys))

bsort :: [Int] -> [Int]
bsort xs = let n = length xs
                  in bubbleSortImpl n xs

--InsertionSort
insert :: Ord a => a -> [a] -> [a]
insert x [] = [x]
insert x (y:ys) | x < y     = x:y:ys
                | otherwise = y:(insert x ys)

isort :: Ord a => [a] -> [a]
isort [] = []
isort (x:xs) = insert x (isort xs)

--SelectionSort
ssort :: Ord t => [t] -> [t]
ssort [] = []
ssort xs = let { x = minimum xs } 
           in  x : ssort (delete x xs)

-- StupidSort/PermutationSort
sorted :: Ord a => [a] -> Bool
sorted (x:y:xs) = x <= y && sorted (y:xs)
sorted _        = True

psort :: Ord a => [a] -> [a]
psort = head . filter sorted . permutations

-- main 

main = do
    putStrLn $ "---------------------------------------"
    putStrLn "Esempio d'uso delle liste"
    putStrLn $ "---------------------------------------"
    let list = [9,3,7,42,73,-12,45,8,0,-99,12,89,4,78]
    putStrLn $ "list = " ++ show (list)
    putStrLn $ "---------------------------------------"
    putStrLn $ "Con quale algoritmo vuoi ordinare la lista?"
    putStrLn $ "- QS -> QuickSort"
    putStrLn $ "- MS -> MergeSort"
    putStrLn $ "- BS -> BubbleSort"
    putStrLn $ "- IS -> InsertSort"
    putStrLn $ "- SS -> SelectionSort"
    putStrLn $ "- PS -> PermutationSort"
    putStrLn $ "---------------------------------------"
    algorithm <-getLine
    putStrLn $ "---------------------------------------"
    ct1 <- getCurrentTime
    if algorithm == "QS" 
      then putStrLn $ "Ordered list with QuickSortSort = " ++ show (qsort list)
    else if algorithm == "MS" 
      then putStrLn $ "Ordered list with MergeSort = " ++ show (msort list)
    else if algorithm == "BS" 
      then putStrLn $ "Ordered list with BubbleSort = " ++ show (bsort list) 
    else if algorithm == "IS" 
      then putStrLn $ "Ordered list with InsertionSort = " ++ show (isort list)
    else if algorithm == "SS" 
      then putStrLn $ "Ordered list with SelectionSort = " ++ show (ssort list)
    else if algorithm == "PS" 
      then putStrLn $ "Ordered list with PermutationSort = " ++ show (psort list)
    else 
      putStrLn $ "Input errato"
    ct2 <- getCurrentTime
    putStrLn $ "---------------------------------------"
    putStrLn $ "Sorting done in " ++ show (diffUTCTime ct1 ct2)
    putStrLn $ "---------------------------------------"
    

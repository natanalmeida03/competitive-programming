-- https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2020f1pj_caixas

solve :: Int -> Int -> Int -> IO ()
solve a b c
   | ((c > b) && (b > a)) || (a + b) < c = putStrLn "1"
   | ((c > b)) || (b > a) = putStrLn "2"
   | otherwise = putStrLn "3"


main :: IO ()
main = do
   a <- readLn :: IO Int
   b <- readLn :: IO Int
   c <- readLn :: IO Int
   solve a b c
-- https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2020f1pj_piloto

solve :: Int -> Int -> Int -> IO ()
solve a b c
   | (b - a) < (c - b) = putStrLn "1"
   | (b - a) > (c - b) = putStrLn "-1"
   | otherwise         = putStrLn "0"

main :: IO ()
main = do
  a <- readLn :: IO Int
  b <- readLn :: IO Int
  c <- readLn :: IO Int
  solve a b c
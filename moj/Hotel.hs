-- https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2022f1pj_hotel

solve :: Int -> Int -> Int -> IO ()
solve d a n =
   putStrLn $ show $ (32 - n) * (d + ((min (n-1) 14) * a))

main :: IO ()
main = do
   d <- readLn :: IO Int
   a <- readLn :: IO Int
   n <- readLn :: IO Int
   solve d a n
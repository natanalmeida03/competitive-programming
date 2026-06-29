-- https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2025f1pj_dieta

readInts :: IO [Int]
readInts = map read . words <$> getLine

solve :: Int -> Int -> Int -> IO ()
solve i n m
  | i > n     = print m
  | otherwise = do
      [p, g, c] <- readInts
      let m' = m - ((p*4) + (g*9) + (c*4))
      solve (i + 1) n m'

main :: IO ()
main = do
  [n, m] <- readInts
  solve 1 n m
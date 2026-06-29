-- https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2019f1pj_domino
main :: IO ()
main = do
  n <- readLn :: IO Int
  putStrLn $ show $ (n + 1) * (n + 2) `div` 2
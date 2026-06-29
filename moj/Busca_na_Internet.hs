-- https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2012f1pj_busca
main :: IO ()
main = do
   n <- readLn :: IO Int
   putStrLn $ show $ (*) (2 * n) 2
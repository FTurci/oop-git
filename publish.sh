quarto render
cp -R _site/* docs/
git add . --all 
git commit -am "publish"
git push
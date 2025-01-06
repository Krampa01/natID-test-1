git init
git remote add origin https://github.com/<your-username>/<repo-name>.git
git add .
git commit -m "Initial commit"
git push -u origin main

sudo apt install git-lfs
git lfs install
git lfs track "*.zip"
git lfs track "*.tar.gz"
git add .
git commit -m "Add natID and Lab9 files"
git push


# natID Lab9 Files
Download the required files here: [Google Drive Link](https://drive.google.com/...).


tar -cvzf natID_files.tar.gz <folder>

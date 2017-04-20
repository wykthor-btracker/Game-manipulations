# Game manipulation

A game manipulation library

## Github for dummies
First install github.
```
sudo apt-get install git
```
For safety purposes, you're given a trial period to check your git knowledge.
Fork the directory, then clone your repository.
```
git clone https://github.com/your-username/Game-manipulations
```
To check if your repository is working, check if the remote branches are properly
added.
```
git remote -v
```
After that, you're done.
### Pulling and pushing.

After installing the repository, you'll need to make changes and ` git push ` it.
Pretend you made an change at the archive named test.txt
```
Hello github! /*Added*/
```
Then to add this change to the tracked changes.
```
git add test.txt
```
Now the change is tracked, you only need to commit.
```
git commit -m "Changed the test.txt file, added a line"
```
Now to save the changes to the remote branch, push the branch to the origin.
```
git push origin master
```
### Updating your repository
First you should have the original and forked repositories added.
To add another repository to the remote tracked list, run
```
git remote add [name] [url]
```
no brackets needed, just using them here to better clarification.

Then `git remote -v `should return
```
origin https://github.com/wykthor-btracker/Game-manipulations (fetch)
origin https://github.com/wykthor-btracker/Game-manipulations (push)
upstream https://github.com/your-username/Game-manipulations (fetch)
upstream https://github.com/your-username/Game-manipulations (push)
```

Then, if you wish to merge your local branch with the original repository

```
git pull origin master
```
If you wish to update your local repository with your remote repository
```
git pull upstream master
```

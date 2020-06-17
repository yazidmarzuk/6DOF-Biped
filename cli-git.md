---
description: All the basic commands for GIT Command line I came across
---

# CLI - GIT



## Git Command Line Interface

GitHub Git Cheat Sheet : [https://education.github.com/git-cheat-sheet-education.pdf](https://education.github.com/git-cheat-sheet-education.pdf)

#### Setup

**Set Username :**

```text
git config --global user.name “marzukkp”
```

**Set User Email :**

```text
git config --global user.email “marzukkp@gmail.com”
```

**Initialize :**

```text
git init
```

**Add Files :**

* Add a particular file

  ```text
  git add <file>		
  ```

* Add all files in folder

  ```text
  git add --all  
  ```

* Add all the Folders, Subfolders and files.

  ```text
  git add --all :/ 
  ```

**Attach remote repository :**

```text
git remote add origin https://github.com/yazidmarzuk/<repo>.git
```

**Push to remote repository :**

```text
git push -u origin master
```

You are now ready to commit. You can see what is about to be committed using _git diff_ with the --cached option:

```text
$ git diff --cached
```

\(Without --cached, _git diff_ will show you any changes that you’ve made but not yet added to the index.\) You can also get a brief summary of the situation with _git status_:

```text
$ git status
```

0If you need to make any further adjustments, do so now, and then add any newly modified content to the index. Finally, commit your changes with:

```text
$ git commit
```

Alternatively, instead of running $$git\ add$$ beforehand, you can use

```text
$ git commit -a
```

which will automatically notice any modified \(but not new\) files, add them to the index, and commit, all in one step.  
   

### Viewing project history <a id="_viewing_project_history"></a>

At any point you can view the history of your changes using

```text
$ git log
```

If you also want to see complete diffs at each step, use

```text
$ git log -p
```

Often the overview of the change is useful to get a feel of each step

```text
$ git log --stat --summary
```

### Managing branches <a id="_managing_branches"></a>

A single Git repository can maintain multiple branches of development. To create a new branch named "experimental", use

```text
$ git branch experimental
```

If you now run

```text
$ git branch
```

you’ll get a list of all existing branches:

```text
  experimental
* master
```

The "experimental" branch is the one you just created, and the "master" branch is a default branch that was created for you automatically. The asterisk marks the branch you are currently on; type

```text
$ git switch experimental
```

to switch to the experimental branch. Now edit a file, commit the change, and switch back to the master branch:

```text
(edit file)
$ git commit -a
$ git switch master
```

Check that the change you made is no longer visible, since it was made on the experimental branch and you’re back on the master branch.

You can make a different change on the master branch:

```text
(edit file)
$ git commit -a
```

at this point the two branches have diverged, with different changes made in each. To merge the changes made in experimental into master, run

```text
$ git merge experimental
```

If the changes don’t conflict, you’re done. If there are conflicts, markers will be left in the problematic files showing the conflict;

```text
$ git diff
```

will show this. Once you’ve edited the files to resolve the conflicts,

```text
$ git commit -a
```

will commit the result of the merge. Finally,

```text
$ gitk
```

will show a nice graphical representation of the resulting history.

At this point you could delete the experimental branch with

```text
$ git branch -d experimental
```

This command ensures that the changes in the experimental branch are already in the current branch.

If you develop on a branch crazy-idea, then regret it, you can always delete the branch with

```text
$ git branch -D crazy-idea
```

Branches are cheap and easy, so this is a good way to try something out.


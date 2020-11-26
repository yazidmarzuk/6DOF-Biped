# Create a Catkin Workspace



1. Open up the terminal.
2. Create the root workspace directory. You can name your directory anything but by ROS convention we will use `catkin_ws` as the name.

   ```text
   cd ~/
   mkdir --parents catkin_ws/src
   cd catkin_ws
   ```

3. Initialize the catkin workspace.

   ```text
   catkin init
   ```

   > Look for the statement “**Workspace configuration appears valid**”, showing that your catkin workspace was created successfully. If you forgot to create the `src` directory, or did not run `catkin init` from the workspace root \(both common mistakes\), you’ll get an error message like “**WARNING: Source space does not yet exist**”.

4. Build the workspace.

   ```text
   cd ~/catkin_ws
   catkin build
   ```

5. Now your catkin workspace will have additional directories `build, devel, logs`.

   ```text
   ls
   ```

6. Now to make your workspace visible to ROS. Source the setup file in the devel directory.

   ```text
   source ~/catkin_ws/devel/setup.bash
   ```

   By doing this, all the packages that you create inside the `src` folder will be visible to ROS.

7. This `setup.bash` file of your workspace must be source everytime when you want to use ROS packages created inside this workspace.

   To save typing, add this to your `.bashrc`,

   1. `gedit ~/.bashrc`
   2. Add to the end: `source ~/catkin_ws/devel/setup.bash`
   3. Save and close the editor.


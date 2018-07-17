/*
Copyright (c) 1995-2018 held by the author(s).  All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions
are met:

    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer
      in the documentation and/or other materials provided with the
      distribution.
    * Neither the name of the Web3D Consortium (http://www.web3D.org)
      nor the names of its contributors may be used to endorse or
      promote products derived from this software without specific
      prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
"AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
POSSIBILITY OF SUCH DAMAGE.
*/

package org.web3d.x3d.jsail;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.Locale;
import org.web3d.x3d.jsail.Core.X3DObject;
import org.web3d.x3d.jsail.Core.MetadataSetObject;
import org.web3d.x3d.sai.InvalidDocumentException;

/**
 * TODO work in progress; utility class for invoking and launching Blender via local operating system to perform a variety of conversion tasks. Note use of static methods.
 * 
 * <br><br>

 *  @see <a href="https://Blender.org" target="_blank">Blender</a>	
 @see <a href="https://docs.blender.org/api/blender_python_api_current/info_quickstart.html" target="_blank">Blender Quickstart Introduction</a>	
 @see <a href="https://docs.blender.org/manual/en/dev/advanced/scripting/introduction.html" target="_blank">Blender API Introduction</a>	
 @see <a href="https://docs.blender.org/api/blender_python_api_current" target="_blank">Blender Python API Documentation</a>	
 @see <a href="https://docs.blender.org/manual/en/dev/advanced/scripting" target="_blank">Scripting &amp; Extending Blender</a>	
 @see <a href="https://en.wikibooks.org/wiki/Blender_3D:_Noob_to_Pro" target="_blank">Blender 3D: Noob to Pro</a>
 @see <a href="https://en.wikibooks.org/wiki/Blender_3D:_Noob_to_Pro/Advanced_Tutorials/Python_Scripting/Introduction" target="_blank">Blender 3D: Noob to Pro/Advanced Tutorials/Python Scripting/Introduction</a>	
 @see <a href="https://www.youtube.com/watch?v=K0yb4sZ7B4g" target="_blank">Video: Blender Tutorial Introduction to Python Scripting: Writing a Script That Makes a Simple 3D Model</a>
 @see <a href="https://docs.oracle.com/javase/tutorial/java/javaOO/classvars.html">Java Tutorials: Understanding (Static) Class Members</a>
 * 
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public class BlenderLauncher
{
    /**
     * Check Blender local path and reset to operating system default, if necessary.
     * @see <a href="https://blender.org" target="_blank">Blender</a>
     * @see <a href="https://docs.blender.org/manual/en/dev/render/workflows/command_line.html" target="_blank">Blender Documentation: Command Line</a>
     * @see <a href="https://docs.blender.org/manual/en/dev/advanced/command_line/arguments.html" target="_blank">Blender Documentation: Command Line Arguments</a>
     * @see <a href="https://docs.blender.org/manual/en/dev/data_system/files/import_export.html" target="_blank">Blender Documentation: Importing and Exporting Files</a>
     */
    public static void checkBlenderPath()
    {
        final String OPERATING_SYSTEM_NAME = System.getProperty("os.name");
         
        if ((ConfigurationProperties.getBlenderPath() == null) || (ConfigurationProperties.getBlenderPath().isEmpty()))
        {
            // https://stackoverflow.com/questions/228477/how-do-i-programmatically-determine-operating-system-in-java
            if (OPERATING_SYSTEM_NAME.toLowerCase(Locale.ENGLISH).contains("windows"))
            {
                ConfigurationProperties.setBlenderPath(ConfigurationProperties.BLENDER_PATH_DEFAULT_WINDOWS);
            }
            else if (OPERATING_SYSTEM_NAME.toLowerCase(Locale.ENGLISH).contains("mac"))
            {
                ConfigurationProperties.setBlenderPath(ConfigurationProperties.BLENDER_PATH_DEFAULT_MACOS);
            }
            else if (OPERATING_SYSTEM_NAME.toLowerCase(Locale.ENGLISH).contains("linux"))
            {
                ConfigurationProperties.setBlenderPath(ConfigurationProperties.BLENDER_PATH_DEFAULT_LINUX);
            }
        }
        // ensure trailing \ or / is present in path
        String blenderPath =  ConfigurationProperties.getBlenderPath();
        if (blenderPath.contains("\\") && !blenderPath.endsWith("\\"))
        {
            blenderPath = blenderPath + "\\";
            ConfigurationProperties.setBlenderPath(blenderPath);
        }
        else if (blenderPath.contains("/") && !blenderPath.endsWith("/"))
        {
            blenderPath = blenderPath + "/";
            ConfigurationProperties.setBlenderPath(blenderPath);
        }
    }
    /**
     * Launch blender in operating system and run command.
     * @param command Blender invocation
     * @return console results
     * @see <a href="https://blender.org" target="_blank">Blender</a>
     * @see <a href="https://docs.blender.org/manual/en/dev/render/workflows/command_line.html" target="_blank">Blender Documentation: Command Line</a>
     * @see <a href="https://docs.blender.org/manual/en/dev/advanced/command_line/arguments.html" target="_blank">Blender Documentation: Command Line Arguments</a>
     * @see <a href="https://docs.blender.org/manual/en/dev/data_system/files/import_export.html" target="_blank">Blender Documentation: Importing and Exporting Files</a>
     */
    public static String executeCommand(String command)
    {
        StringBuilder outputBuilder = new StringBuilder();
        Process process;
        
        try
        {
            process = Runtime.getRuntime().exec(ConfigurationProperties.getBlenderPath() + command);
            process.waitFor();
            BufferedReader reader = new BufferedReader(new InputStreamReader(process.getInputStream()));

            String  line;           
            while ((line = reader.readLine())!= null)
            {
                outputBuilder.append(line).append("\n");
            }
        }
        catch (IOException | InterruptedException e)
        {
            outputBuilder.append(e.getMessage()).append("\n").append(e.getCause()).append("\n");
            e.printStackTrace();
            throw new org.web3d.x3d.sai.InvalidExecutionContextException(command);
        }
        return outputBuilder.toString();
    }
    /**
     * TODO: Use blender to import model to X3D
     * @param path directory path to file of interest
     * @param fileName for input file
     * @return result, null if unsuccessful
     * @see <a href="https://blender.org" target="_blank">Blender</a>
     * @see <a href="https://docs.blender.org/manual/en/dev/render/workflows/command_line.html" target="_blank">Blender Documentation: Command Line</a>
     * @see <a href="https://docs.blender.org/manual/en/dev/advanced/command_line/arguments.html" target="_blank">Blender Documentation: Command Line Arguments</a>
     * @see <a href="https://docs.blender.org/manual/en/dev/data_system/files/import_export.html" target="_blank">Blender Documentation: Importing and Exporting Files</a>
     */
    public static X3DObject importModel (String path, String fileName)
    {
            // use 
            // determine and metadata
            return null;
    }
    /**
     * TODO: Use blender to import STL geometry as X3D model
     * @param path directory path to file of interest
     * @param fileName for input file
     * @return result, null if unsuccessful
     * @see <a href="https://blender.org" target="_blank">Blender</a>
     * @see <a href="https://docs.blender.org/manual/en/dev/render/workflows/command_line.html" target="_blank">Blender Documentation: Command Line</a>
     * @see <a href="https://docs.blender.org/manual/en/dev/advanced/command_line/arguments.html" target="_blank">Blender Documentation: Command Line Arguments</a>
     * @see <a href="https://docs.blender.org/manual/en/dev/data_system/files/import_export.html" target="_blank">Blender Documentation: Importing and Exporting Files</a>
     */
    public static X3DObject importSTL (String path, String fileName)
    {
        // https://blender.stackexchange.com/questions/1365/how-can-i-run-blender-from-command-line-or-a-python-script-without-opening-a-gui

        // https://blender.stackexchange.com/questions/16563/how-can-i-run-blender-from-the-command-line-to-export-and-import-models
 
        // test file extension, determine if binary stl, add any metadata
        return null;
    }

    /**
     * TODO: Use blender to export geometry to STL
     * @param modelToExport X3D model of interest
     * @return plain-text STL file
     * @see <a href="https://en.wikipedia.org/wiki/STL_(file_format)" target="_blank">STL (file format)</a>
     * @see <a href="https://blender.org" target="_blank">Blender</a>
     * @see <a href="https://docs.blender.org/manual/en/dev/render/workflows/command_line.html" target="_blank">Blender Documentation: Command Line</a>
     * @see <a href="https://docs.blender.org/manual/en/dev/advanced/command_line/arguments.html" target="_blank">Blender Documentation: Command Line Arguments</a>
     * @see <a href="https://docs.blender.org/manual/en/dev/data_system/files/import_export.html" target="_blank">Blender Documentation: Importing and Exporting Files</a>
     */
    public static String exportSTL (X3DObject modelToExport)
    {
            // determine and metadata
            return "";
    }

    /**
     * TODO: Use blender to export geometry to file
     * @param modelToExport X3D model of interest
     * @param path directory path to file of interest
     * @param fileName for output file
     * @return whether successful
     * @see <a href="https://en.wikipedia.org/wiki/STL_(file_format)" target="_blank">STL (file format)</a>
     * @see <a href="https://blender.org" target="_blank">Blender</a>
     * @see <a href="https://docs.blender.org/manual/en/dev/render/workflows/command_line.html" target="_blank">Blender Documentation: Command Line</a>
     * @see <a href="https://docs.blender.org/manual/en/dev/advanced/command_line/arguments.html" target="_blank">Blender Documentation: Command Line Arguments</a>
     * @see <a href="https://docs.blender.org/manual/en/dev/data_system/files/import_export.html" target="_blank">Blender Documentation: Importing and Exporting Files</a>
     */
    public static boolean exportSTLtoFile (X3DObject modelToExport, String path, String fileName)
    {
            String result = exportSTL (modelToExport);
            try
            {
                    // TODO save to file
            }
            catch (Exception e)
            {
                    // Diagnostic
                    return false;
            }
            return true;
    }
    /**
     * TODO: Get Blender metrics for X3D model of interest.
     * @param modelOfInterest X3D model to analyze
     * @return Blender output
     * @see <a href="https://en.wikipedia.org/wiki/STL_(file_format)" target="_blank">STL (file format)</a>
     * @see <a href="https://blender.org" target="_blank">Blender</a>
     * @see <a href="https://docs.blender.org/manual/en/dev/render/workflows/command_line.html" target="_blank">Blender Documentation: Command Line</a>
     * @see <a href="https://docs.blender.org/manual/en/dev/advanced/command_line/arguments.html" target="_blank">Blender Documentation: Command Line Arguments</a>
     */
    public static String getBlenderAnalytics (X3DObject modelOfInterest)
    {
            // add optional method to create X3DMetadataSet
            return "";
    }
    /**
     * TODO: Get Blender metrics as MetadataSet object.
     * @param modelOfInterest X3D model to analyze
     * @return Blender output
     * @see <a href="https://docs.blender.org/manual/en/dev/render/workflows/command_line.html" target="_blank">Blender Documentation: Command Line</a>
     * @see <a href="https://docs.blender.org/manual/en/dev/advanced/command_line/arguments.html" target="_blank">Blender Documentation: Command Line Arguments</a>
     */
    public static MetadataSetObject getBlenderAnalyticsX3dMetadataSet (X3DObject modelOfInterest)
    {
            return null;
    }
    /**
     * Get Blender version.
     * @return Blender version.
     * @see <a href="https://docs.blender.org/manual/en/dev/render/workflows/command_line.html" target="_blank">Blender Documentation: Command Line</a>
     * @see <a href="https://docs.blender.org/manual/en/dev/advanced/command_line/arguments.html" target="_blank">Blender Documentation: Command Line Arguments</a>
     */
    public static String getBlenderVersion()
    {
            return executeCommand("blender --version");
    }
    /**
     * Determine if Blender is locally available.
     * @return whether Blender is found.
     * @see <a href="https://docs.blender.org/manual/en/dev/render/workflows/command_line.html" target="_blank">Blender Documentation: Command Line</a>
     * @see <a href="https://docs.blender.org/manual/en/dev/advanced/command_line/arguments.html" target="_blank">Blender Documentation: Command Line Arguments</a>
     */
    public static boolean hasBlender()
    {
        return (getBlenderVersion().startsWith("Blender"));
    }
}

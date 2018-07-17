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

import java.awt.Desktop;
import java.io.*;
import java.net.URI;
import java.net.URISyntaxException;
import java.nio.file.FileSystems;
import java.nio.file.Files;
import java.nio.file.Path;
import java.text.DecimalFormat;
import java.util.*;
import org.web3d.x3d.jsail.Core.X3DObject;
import org.web3d.x3d.jsail.Core.MetadataSetObject;
import org.web3d.x3d.sai.InvalidDocumentException;

/**
 * Utility class for invoking and launching MeshLab via local operating system to perform a variety of conversion tasks. Note use of static methods.
 * 
 * <br><br>

 * 
 @see <a href="https://en.wikipedia.org/wiki/STL_(file_format)" target="_blank">STL (file format)</a>
 @see <a href="http://www.MeshLab.net" target="_blank">MeshLab</a>	
 @see <a href="https://en.wikipedia.org/wiki/MeshLab" target="_blank">Wikipedia: MeshLab</a>
 @see <a href="https://sourceforge.net/p/meshlab/discussion/499533/thread/c266b0c3" target="_blank">SourceForge: meshlab in command-line?</a>
 @see <a href="https://sourceforge.net/p/meshlab/discussion/499533/thread/86cf0d34" target="_blank">SourceForge: Automating Meshlab conversion </a>
 @see <a href="https://github.com/cnr-isti-vclab/meshlab/blob/master/src/meshlabserver/meshlabserver.txt" target="_blank">GitHub: meshlabserver.txt command-line help</a>
 @see <a href="https://github.com/TheNerdJedi/MeshlabAuto" target="_blank">GitHub: TheNerdJedi/MeshlabAuto</a>
 @see <a href="https://www.youtube.com/playlist?list=PL8B1E816EAE236B4D" target="_blank">Mr. P. MeshLab Tutorials: MeshLab Basics</a>	
 @see <a href="https://www.youtube.com/playlist?list=PL53FAE3EB5734126E" target="_blank">Mr. P. MeshLab Tutorials: 3D Scanning pipeline</a>	
 @see <a href="https://www.youtube.com/playlist?list=PL60mCsep96JcJz_SIfXblsVmI1TYMsQJc" target="_blank">Mr. P. MeshLab Tutorials: Features</a>	
 @see <a href="https://www.youtube.com/playlist?list=PLBBF41579E4B65566" target="_blank">Mr. P. MeshLab Tutorials: Cleaning</a>	
 @see <a href="https://stackoverflow.com/questions/tagged/meshlab" target="_blank">StackOverflow: MeshLab</a>	
 @see <a href="https://github.com/TheNerdJedi/MeshlabAuto" target="_blank">GitHub: MeshlabAuto</a>	
 @see <a href="https://github.com/cnr-isti-vclab/meshlab/issues" target="_blank">GitHub: issues</a>
 @see <a href="http://www.meshlab.net/#references" target="_blank">MeshLab References</a>
 @see <a href="https://docs.oracle.com/javase/tutorial/java/javaOO/classvars.html">Java Tutorials: Understanding (Static) Class Members</a>
 * 
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public class MeshLabLauncher
{
    /**
     * Check MeshLab local path and reset to operating system default, if necessary.
     * @see <a href="http://www.MeshLab.net" target="_blank">MeshLab</a>
     * @see <a href="https://en.wikipedia.org/wiki/MeshLab" target="_blank">Wikipedia: MeshLab</a>
     */
    public static void checkMeshLabPath()
    {
        final String OPERATING_SYSTEM_NAME = System.getProperty("os.name");
         
        if ((ConfigurationProperties.getMeshLabPath() == null) || (ConfigurationProperties.getMeshLabPath().isEmpty()))
        {
            // https://stackoverflow.com/questions/228477/how-do-i-programmatically-determine-operating-system-in-java
            if (OPERATING_SYSTEM_NAME.toLowerCase(Locale.ENGLISH).contains("windows"))
            {
                ConfigurationProperties.setMeshLabPath(ConfigurationProperties.MESHLAB_PATH_DEFAULT_WINDOWS);
            }
            else if (OPERATING_SYSTEM_NAME.toLowerCase(Locale.ENGLISH).contains("mac"))
            {
                ConfigurationProperties.setMeshLabPath(ConfigurationProperties.MESHLAB_PATH_DEFAULT_MACOS);
            }
            else if (OPERATING_SYSTEM_NAME.toLowerCase(Locale.ENGLISH).contains("linux"))
            {
                ConfigurationProperties.setMeshLabPath(ConfigurationProperties.MESHLAB_PATH_DEFAULT_LINUX);
            }
        }
        // ensure trailing \ or / is present in path
        String meshLabPath =  ConfigurationProperties.getMeshLabPath();
        if (meshLabPath.contains("\\") && !meshLabPath.endsWith("\\"))
        {
            meshLabPath = meshLabPath + "\\";
            ConfigurationProperties.setMeshLabPath(meshLabPath);
        }
        else if (meshLabPath.contains("/") && !meshLabPath.endsWith("/"))
        {
            meshLabPath = meshLabPath + "/";
            ConfigurationProperties.setMeshLabPath(meshLabPath);
        }
    }
    /**
     * Keep track of whether prior command was successful.
     */
    private static boolean executeCommandSuccessful = false;
    /**
     * Report  whether prior command was successful.
     * @return whether prior command was successful.
     * <em>Warning:</em> <code>meshlabserver</code> may popup an exception window while running headless (not very smart) which can cause exception to be lost following timeout.
     * @see <a href="https://stackoverflow.com/questions/3630281/is-it-possible-to-capture-a-windows-pop-up-message-box-from-inside-a-java-progra">StackOverflow: possible to capture pop-up message box?</a>
     */
    public static boolean wasPriorCommandSuccessful()
    {
        return executeCommandSuccessful;
    }
    /**
     * Launch MeshLab in operating system and run command.
     * <em>Warning:</em> <code>meshlabserver</code> may popup an exception window while running headless (not very smart) which can cause exception to be lost following timeout.
     * @param command MeshLab invocation
     * @return console results
     * @see <a href="http://www.MeshLab.net" target="_blank">MeshLab</a>
     * @see <a href="https://en.wikipedia.org/wiki/MeshLab" target="_blank">Wikipedia: MeshLab</a>
     * @see <a href="https://stackoverflow.com/questions/3630281/is-it-possible-to-capture-a-windows-pop-up-message-box-from-inside-a-java-progra">StackOverflow: possible to capture pop-up message box?</a>
     */
    public static String executeCommand(String command)
    {
        StringBuilder outputBuilder = new StringBuilder();
        Process process;
        
        try
        {
            process = Runtime.getRuntime().exec(ConfigurationProperties.getMeshLabPath() + command);
            process.waitFor();
            BufferedReader reader = new BufferedReader(new InputStreamReader(process.getInputStream()));

            String line = "";           
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
     * Use meshLab to convert model from one file to another.
     * @param  inputFileName for  input file
     * @param outputFileName for output file
     * @return whether successful
     * @see <a href="http://www.MeshLab.net" target="_blank">MeshLab</a>
     * @see <a href="https://en.wikipedia.org/wiki/MeshLab" target="_blank">Wikipedia: MeshLab</a>
     */
    public static boolean convertModel (String inputFileName, String outputFileName)
    {
        return convertModel ("", inputFileName, outputFileName);
    }
    /**
     * Use meshLab to convert model from one file to another.
     * @param path directory path to file of interest
     * @param  inputFileName for  input file
     * @param outputFileName for output file
     * @return whether successful
     * @see <a href="http://www.MeshLab.net" target="_blank">MeshLab</a>
     * @see <a href="https://en.wikipedia.org/wiki/MeshLab" target="_blank">Wikipedia: MeshLab</a>
     */
    public static boolean convertModel (String path, String inputFileName, String outputFileName)
    {
        String separator = "";
        if (path == null)
            path = "";
        if (!path.endsWith("\\") && !path.endsWith("\\") && !path.isEmpty())
            separator = "/";

		File inputFile;
        if ((path == null) || path.isEmpty())
             inputFile = new File(      inputFileName);
		else inputFile = new File(path, inputFileName);
		if (!inputFile.exists())
		{
			throw new InvalidDocumentException("path='" + path + "', inputFile='" + inputFileName + "' does not exist and cannot be loaded, check path and filename.");
		}
        
        String fileNameRoot            = outputFileName.substring(0,outputFileName.lastIndexOf("."));
        String meshLabTraceLogFile     = fileNameRoot + ".MeshLab.log.txt";
               meshLabTraceLogFilePath = path + separator + meshLabTraceLogFile;

        StringBuilder meshLabCommand = new StringBuilder();
        meshLabCommand.append("meshlabserver -l ").append(meshLabTraceLogFilePath)           //    log file
                      .append(" -i ").append(path).append(separator).append(inputFileName)   //  input file
                      .append(" -o ").append(path).append(separator).append(outputFileName); // output file
        System.out.println (meshLabCommand.toString());
        executeCommand(     meshLabCommand.toString());

		File outputFile;
        if ((path == null) || path.isEmpty())
             outputFile = new File(      outputFileName);
		else outputFile = new File(path, outputFileName);
		if (!outputFile.exists())
		{
			throw new InvalidDocumentException("path='" + path + "', outputFileName='" + outputFileName + "' does not exist and cannot be loaded, check path and filename.");
		}
        return wasPriorCommandSuccessful();
    }
    /**
     * Use meshLab to import model to X3D.
     * @param fileName for input file
     * @return result, null if unsuccessful
     * @see <a href="http://www.MeshLab.net" target="_blank">MeshLab</a>
     * @see <a href="https://en.wikipedia.org/wiki/MeshLab" target="_blank">Wikipedia: MeshLab</a>
     */
    public static X3DObject importModel (String fileName)
    {
        return importModel ("", fileName);
    }
    /**
     * Use meshLab to import model to X3D.
     * @param path directory path to file of interest
     * @param fileName for input file
     * @return result, null if unsuccessful
     * @see <a href="http://www.MeshLab.net" target="_blank">MeshLab</a>
     * @see <a href="https://en.wikipedia.org/wiki/MeshLab" target="_blank">Wikipedia: MeshLab</a>
     */
    public static X3DObject importModel (String path, String fileName)
    {
        String separator = "";
        if (path == null)
            path = "";
        if (!path.endsWith("\\") && !path.endsWith("\\") && !path.isEmpty())
            separator = "/";
        String fileNameRoot            = fileName.substring(0,fileName.lastIndexOf("."));
        String fileNameX3dModel        = fileNameRoot + ".MeshLab.x3d";
        String meshLabTraceLogFile     = fileNameRoot + ".MeshLab.log.txt";
               meshLabTraceLogFilePath = path + separator + meshLabTraceLogFile;

        StringBuilder meshLabCommand = new StringBuilder();
        meshLabCommand.append("meshlabserver -l ").append(meshLabTraceLogFilePath)             //    log file
                      .append(" -i ").append(path).append(separator).append(fileName)          //  input file
                      .append(" -o ").append(path).append(separator).append(fileNameX3dModel); // output file
        System.out.println (meshLabCommand.toString());
        executeCommand(     meshLabCommand.toString()); 
        
        // TODO option for X3D Tidy, X3D Canonical avoided for now since large-attribute STL files aren't loaded properly.
        X3DLoaderObject x3dLoader = new X3DLoaderObject();
        x3dLoader.loadModelFromFileX3D(path, fileNameX3dModel);
        return (X3DObject) x3dLoader.getX3dObjectTree();
    }
    /**
     * TODO: Use meshLab to import STL geometry as X3D model
     * @param path directory path to file of interest
     * @param fileName for input file
     * @return result, null if unsuccessful
     * @see <a href="http://www.MeshLab.net" target="_blank">MeshLab</a>
     * @see <a href="https://en.wikipedia.org/wiki/MeshLab" target="_blank">Wikipedia: MeshLab</a>
     */
    public X3DObject importSTL (String path, String fileName)
    {              
        // test file extension, determine if binary stl, add any metadata
        return null;
    }

    /**
     * TODO: Use MeshLab to export geometry to STL
     * @param modelToExport X3D model of interest
     * @return plain-text STL file
     * @see <a href="https://en.wikipedia.org/wiki/STL_(file_format)" target="_blank">STL (file format)</a>
     * @see <a href="http://www.MeshLab.net" target="_blank">MeshLab</a>
     * @see <a href="https://en.wikipedia.org/wiki/MeshLab" target="_blank">Wikipedia: MeshLab</a>
     */
    public static boolean exportModelToFile (X3DObject modelToExport, String path, String fileName)
    {              
        // test file extension, determine if binary stl, add any metadata
        return false;
    }

    /**
     * TODO: Use MeshLab to export geometry to file
     * @param modelToExport X3D model of interest
     * @param path directory path to file of interest
     * @param fileName for output file
     * @return whether successful
     * @see <a href="https://en.wikipedia.org/wiki/STL_(file_format)" target="_blank">STL (file format)</a>
     * @see <a href="http://www.MeshLab.net" target="_blank">MeshLab</a>
     * @see <a href="https://en.wikipedia.org/wiki/MeshLab" target="_blank">Wikipedia: MeshLab</a>
     */
    public static boolean exportSTLtoFile (X3DObject modelToExport, String path, String fileName)
    {
        // TODO test file extension
        boolean result = exportModelToFile (modelToExport, path, fileName);
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
     * TODO: Get MeshLab metrics for X3D model of interest.
     * @param modelOfInterest X3D model to analyze
     * @return MeshLab output
     * @see <a href="https://en.wikipedia.org/wiki/STL_(file_format)" target="_blank">STL (file format)</a>
     * @see <a href="http://www.MeshLab.net" target="_blank">MeshLab</a>
     * @see <a href="https://en.wikipedia.org/wiki/MeshLab" target="_blank">Wikipedia: MeshLab</a>
     */
    public static String getMeshLabAnalytics (X3DObject modelOfInterest)
    {
        // add optional method to create X3DMetadataSet
        return "";
    }
    /**
     * TODO: Get MeshLab metrics as MetadataSet object.
     * @param modelOfInterest X3D model to analyze
     * @return MeshLab output
     * @see <a href="http://www.MeshLab.net" target="_blank">MeshLab</a>
     * @see <a href="https://en.wikipedia.org/wiki/MeshLab" target="_blank">Wikipedia: MeshLab</a>
     */
    public static MetadataSetObject getMeshLabAnalyticsX3dMetadataSet (X3DObject modelOfInterest)
    {
        return null;
    }
    /**
     * Get MeshLab version.
     * @return MeshLab version.
     * @see <a href="http://www.MeshLab.net" target="_blank">MeshLab</a>
     * @see <a href="https://en.wikipedia.org/wiki/MeshLab" target="_blank">Wikipedia: MeshLab</a>
     */
    public static String getMeshLabVersion()
    {
        return "MeshLab version is not a currently supported feature. See https://meshLab.net\n" +
               executeCommand("meshlabserver").replaceAll("\r\n", "\n"); // avoid double newlines
    }
    /**
     * Determine if MeshLab is locally available.
     * @return whether MeshLab is found.
     * @see <a href="http://www.MeshLab.net" target="_blank">MeshLab</a>
     * @see <a href="https://en.wikipedia.org/wiki/MeshLab" target="_blank">Wikipedia: MeshLab</a>
     */
    public static boolean hasMeshLab()
    {
        String meshLabHelp = executeCommand("meshlabserver");
        return ((meshLabHelp != null) && meshLabHelp.contains("meshlabserver [logargs] [args]"));
    }
    /**
     * Directory and file name for MeshLab trace log file produced during most recent MeshLab operation.
     * @return name of most recent MeshLab trace log file
     */
    private static String meshLabTraceLogFilePath = new String();
    /**
     * Get name of MeshLab trace log file produced during most recent MeshLab operation.
     * @return name of most recent MeshLab trace log file
     */
    public static String getPriorMeshLabTraceLogFilePath()
    {
        return meshLabTraceLogFilePath;
    }
    /**
     * Set name of MeshLab trace log file produced during most recent MeshLab operation.
     * @value new path and file name for meshLabTraceLogFilePath
     */
    public static void setPriorMeshLabTraceLogFilePath(String value)
    {
        meshLabTraceLogFilePath = value;
    }
    /**
     * Get contents of MeshLab trace log file produced during most recent MeshLab operation.
     * @return contents of most recent MeshLab trace log file
     */
    public static String getPriorMeshLabTraceLogContents()
    {
        if (meshLabTraceLogFilePath.isEmpty())
            return ""; // nothing to behold
        List<String> priorMeshLabTraceLog;
        try
        {
            Path   priorMeshLabTraceLogPath = FileSystems.getDefault().getPath(meshLabTraceLogFilePath);
            priorMeshLabTraceLog = Files.readAllLines(priorMeshLabTraceLogPath);
        }
        catch (IOException ioe)
        {
            String message = "Exception when trying to getPriorMeshLabTraceLogContents()\n" + ioe.getMessage();
            ioe.printStackTrace();
            throw new org.web3d.x3d.sai.InvalidExecutionContextException(message);
        }
        return priorMeshLabTraceLog.toString();
    }
    //  TODO command-line invocation [-BLENDER_PATH | -MESHLAB_PATH | -convert | -import]
  	
    /** Initialize this MeshLabLauncher instance to default values. */
    public static final void initialize()
    {
        initializeConfigurationSwitches();
    }
    /**
     *                               Usage: <code>java [-classpath X3DJSAIL.*.jar] org.web3d.x3d.jsail.MeshLabLauncher sourceFile [resultFile] [-convert | -help | -properties fileName.properties | -MESHLAB_PATH directoryPath]</code>
     */
    public  static final String USAGE   = "Usage: java [-classpath X3DJSAIL.*.jar] org.web3d.x3d.jsail.MeshLabLauncher sourceFile [resultFile] [-convert | -help | -properties fileName.properties | -MESHLAB_PATH directoryPath]";
    private static final String WARNING = "[Warning] ";
    private static final String ERROR   = "[Error] ";
    
    private static boolean modelConvert     = false;
    private static boolean modelExport      = false; // not used via main invocation
    private static boolean modelImport      = false; // not used via main invocation
				
	private static String  conversionExtension   = new String();

	/** Reset configuration switch values */
	private static void initializeConfigurationSwitches()
	{
		modelConvert    = true;  // default choice, switch is potional
		modelExport     = false;
		modelImport     = false;
         
		conversionExtension  = new String();
	}

    /** @see https://docs.oracle.com/javase/tutorial/essential/io/file.html#textfiles */
    private static BufferedWriter bufferedWriter;

    /** Default main() method provided for test purposes, invoking run() method.
     * @param args the command line arguments
     * @see #run(String[])
     * @see X3DObject#handleArguments(String[])
     */
    public static void main(String[] args)
    {
		run(args);
	}

    /** Default run() method provided for test purposes, first initializing ConfigurationProperties then reading properties file (if any) and processing arguments.
	 * When invoked without parameters then reports results of validate() self-checks to system output.
     * @param args the command line arguments
     * @see #main(String[])
     * @see ConfigurationProperties
     * @see X3DObject#handleArguments(String[])
     */
    public static void run(String[] args)
    {
        File    sourceFile;
        long    sourceFileLength     = 0;
        String  sourceFileName       = "";
        String  sourceFileNameRoot   = "";
		File    resultFile;
        boolean convertToFile        = false;
        boolean loadProperties       = false;
        String  resultFileName       = "";
        String  resultFileNameRoot   = "";
        String propertiesFileName    = "";
        String propertiesFileNameRoot= "";
        DecimalFormat formatPrecision2 = new DecimalFormat ("#0.00");
		String  compressionRatio;
				 
		initializeConfigurationSwitches ();

		if ((args== null) || (args.length < 1))
		{
			System.out.println (USAGE);
			return;
		}
		else
		{
			for (int i=0; i<=args.length-1; i++)
			{
				if  (!args[i].startsWith("-"))
				{
					if (modelConvert && !sourceFileName.isEmpty() && !resultFileName.isEmpty())
					{
						System.out.println(ERROR+" [org.web3d.x3d.jsail.MeshLabLauncher] too many file names found, source=\"" + sourceFileName + "\" and result \"" + resultFileName + "\" prior to argument \"" + args[i] + "\". Check usage:");
						System.out.println(USAGE);
						return;
					}
//					else if ((modelExport || modelImport) && !sourceFileName.isEmpty())
//					{
//						System.out.println(ERROR+" [org.web3d.x3d.jsail.MeshLabLauncher] too many source file names found, source=\"" + sourceFileName + "\" prior to argument \"" + args[i] + "\". Check usage:");
//						System.out.println(USAGE);
//						return;
//					}
					else if (modelConvert && !sourceFileName.isEmpty()) // now have resultFile, overwrite default
					{
						resultFileName     = args[i];
						resultFileNameRoot = resultFileName;
						if (resultFileNameRoot.contains("."))
							resultFileNameRoot = resultFileName.substring(0,resultFileNameRoot.lastIndexOf("."));
						resultFile = new File(resultFileName);
                        conversionExtension = resultFileName.substring(resultFileName.lastIndexOf("."));
                        if (conversionExtension.isEmpty())
						{
							System.out.println(ERROR+" [org.web3d.x3d.jsail.MeshLabLauncher] result file extension is needed for conversion but not found: " + resultFileName);
							System.out.println(USAGE);
							return;
						}
					}
					else 
					{
						sourceFileName     = args[i];
						sourceFileNameRoot = sourceFileName;
						if (sourceFileNameRoot.contains("."))
							sourceFileNameRoot = sourceFileName.substring(0,sourceFileName.lastIndexOf("."));
						sourceFile = new File(sourceFileName);
                        
						if (!sourceFile.exists())
						{
							System.out.println(ERROR+" [org.web3d.x3d.jsail.MeshLabLauncher] file not found: " + sourceFileName);
							System.out.println(USAGE);
							return;
						}
						else
						{
							sourceFileLength = sourceFile.length();
							System.out.println ("parameter: source file " + sourceFile.getName() + " filesize " + sourceFileLength + " bytes");
						}
					}
				}
				else if (args[i].equalsIgnoreCase("-properties") || args[i].equalsIgnoreCase("-propertiesFile")) // optionally followed by propertiesFileName
				{
					if ((args.length > i + 1) && !(args[i+1] == null) && !args[i+1].isEmpty() && !args[i+1].startsWith("-"))
					{
						 propertiesFileName     = args[i+1];
						 propertiesFileNameRoot = propertiesFileName.substring(0,propertiesFileName.lastIndexOf("."));
						 System.out.println ("parameter: \"" + args[i] + "\" \"" + args[i+1] + "\" for properties file name root " + propertiesFileNameRoot);
						 i++; // increment index, carefully!
					}
					else System.out.println ("parameter: \"" + args[i] + "\" for properties file name root "+ propertiesFileNameRoot);
					loadProperties = true;
				}
				else if (args[i].equalsIgnoreCase("-convert"))
				{
                    initializeConfigurationSwitches();
					modelConvert = true;
					System.out.println ("parameter: \"" + args[i] + "\" for conversion between formats");
				}
//				else if (args[i].equalsIgnoreCase("-export"))
//				{
//                    initializeConfigurationSwitches();
//					modelExport = true;
//					System.out.println ("parameter: \"" + args[i] + "\" for model export");
//				}
//				else if (args[i].equalsIgnoreCase("-import"))
//				{
//                    initializeConfigurationSwitches();
//					modelImport = true;
//                    conversionExtension = X3DObject.FILE_EXTENSION_X3D; // default
//					System.out.println ("parameter: \"" + args[i] + "\" for model export");
//				}
				else  if (args[i].equalsIgnoreCase("-help"))
				{
					System.out.println(USAGE);
                    openMeshLabPage();
					return;
				}
				else // not found
				{
					System.out.println(ERROR+" [org.web3d.x3d.jsail.MeshLabLauncher] unrecognized MeshLabLauncher option \"" + args[i] + "\"");
					System.out.println(USAGE);
					return;
				}
			}
		}
		// ===================================================================================
		// compute/confirm resultFileName after all command-line switches are read

		if (resultFileName.isEmpty())
		{
            conversionExtension = X3DObject.FILE_EXTENSION_X3D;
            resultFileName      = sourceFileNameRoot + conversionExtension;
            resultFileNameRoot  = sourceFileNameRoot;
            resultFile = new File(resultFileName);
		}
		if (modelImport && (!conversionExtension.equalsIgnoreCase(X3DObject.FILE_EXTENSION_X3D)))
		{
			System.out.println(WARNING+" [org.web3d.x3d.jsail.MeshLabLauncher] mismatched file extension \"" + conversionExtension + "\" for conversion");
		}
		if (loadProperties)
		{
			if (!propertiesFileName.isEmpty())
				ConfigurationProperties.setPropertiesFileName (propertiesFileName);
			ConfigurationProperties.loadProperties();
		}
				
		// ===================================================================================
        if (!sourceFileName.isEmpty()) // fully prepared, now get source file and proceed
        {
			if (modelConvert)
			{
				executeCommandSuccessful = convertModel (sourceFileName, resultFileName);
				System.out.println("load success: " + executeCommandSuccessful);
				return;
			}
		}
		else if (!loadProperties) // allows testing of properties without file operations
        {
            String message = ERROR+"Source model file name is empty, therefore file loading not possible.";
            System.out.println(message);
            throw new org.web3d.x3d.sai.InvalidExecutionContextException(message);
        }
    }

    /** Open MeshLab page
     * @see <a href="http://www.MeshLab.net">http://www.MeshLab.net</a>
     */
    public static void openMeshLabPage ()
    {
        // https://stackoverflow.com/questions/5226212/how-to-open-the-default-webbrowser-using-java
        try {
            if (Desktop.isDesktopSupported())
            {
                Desktop.getDesktop().browse(new URI("http://www.MeshLab.net"));
            }
        }
        catch (IOException | URISyntaxException e2)
        {
            System.out.println ("openMeshLabPage failure: " + e2.getMessage());
        }
    }
}

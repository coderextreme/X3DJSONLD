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


// Desktop and Web browser
import java.awt.Desktop;
import java.net.URI;
import java.net.URISyntaxException;
// File operations
import java.io.*;
import java.io.File;
import java.nio.charset.Charset;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.text.DecimalFormat;
import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.sai.X3DException;
// import org.web3d.x3d.sai.InvalidFieldValueException;

/**
 * Concrete class that provides command-line JAR access to various X3DJSAIL capabilities.
 * 
 * <br><br>

 * Usage: <code>% java -jar X3DJSAIL.3.3.classes.jar -help</code>
 * @see <a href="http://docs.oracle.com/javase/8/docs/technotes/guides/jar/jar.html">JAR File Specification</a>
 * @see <a href="https://docs.oracle.com/javase/tutorial/deployment/jar/manifestindex.html">Java Tutorials, Lesson: Packaging Programs in JAR Files</a>
 * 

 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public class CommandLine
{
				
// TODO JAR configuration

// ==========================================================================================

	/** Loaded X3D model of interest, useful for initialization and use of CommandLine by other X3D Java programs. */
	private static X3DObject loadedX3dModel;

	/** Set already-loaded X3D model of interest, useful for initialization and use of CommandLine by other X3D Java programs. 
	 * @param newX3dModel already-loaded X3D model of interest
	*/
	public static void setLoadedX3dModel (X3DObject newX3dModel)
	{
		loadedX3dModel = newX3dModel;
	}
				
	/** Reset already-loaded X3D model of interest to empty model */
	public static void clearLoadedX3dModel ()
	{
		loadedX3dModel = new X3DObject();
	}

// ==========================================================================================
	
    /** Initialize this CommandLine instance to default values. */
    public static final void initialize()
    {
        clearLoadedX3dModel ();
    }
    /**
     *                               Usage: <code>java -classpath X3DJSAIL.*.jar [sourceModel.x3d | package.path.ProgramName | -help | -page | -resources | -tooltips] [-tofile [resultFile.*]] [-properties [propertiesFile]] [-validate] [sourceModel.exi -fromEXI] [sourceModel.gz -fromGZIP] [sourceModel.zip -fromZIP] [-toX3D | -toXML | -toClassicVrml | -toJSON | -toVRML97 | -toX3DOM | -toX_ITE | -toEXI | -toGZIP | -toZIP]</code>
     */
    public  static final String USAGE   = "Usage: java -classpath X3DJSAIL.*.jar [sourceModel.x3d | package.path.ProgramName | -help | -page | -resources | -tooltips]\n       [-tofile [resultFile.*]] [-properties [propertiesFile]] [-validate]\n       [sourceModel.exi -fromEXI] [sourceModel.gz -fromGZIP] [sourceModel.zip -fromZIP]\n       [-toX3D | -toXML | -toClassicVrml | -toJSON | -toVRML97 | -toX3DOM | -toX_ITE | -toEXI | -toGZIP | -toZIP]";
    private static final String WARNING = "[Warning] ";
    private static final String ERROR   = "[Error] ";
    
    private static boolean convertToVRML97      = false;
    private static boolean convertToClassicVRML = false;
    private static boolean convertToX3D         = false;
    private static boolean convertToXML         = false;
    private static boolean convertToJSON        = false;
    private static boolean convertToJS          = false;
    private static boolean convertToX3DOM       = false;
    private static boolean convertToX_ITE       = false;
    private static boolean convertToEXI         = false;
    private static boolean convertFromEXI       = false;
    private static boolean convertToGZIP        = false;
    private static boolean convertFromGZIP      = false;
    private static boolean convertToZIP         = false;
    private static boolean convertFromZIP       = false;
    private static boolean validateSwitch       = false;
				
	private static String  conversionExtension   = new String();

	/** Reset switch values */
	private static void initializeSwitches()
	{
		convertToVRML97      = false;
		convertToClassicVRML = false;
		convertToX3D         = false;
		convertToXML         = false;
		convertToJSON        = false;
		convertToJS          = false;
		convertToX3DOM       = false;
		convertToX_ITE       = false;
		convertToEXI         = false;
		convertFromEXI       = false;
		convertToGZIP        = false;
		convertFromGZIP      = false;
		convertToZIP         = false;
		convertFromZIP       = false;
		validateSwitch       = false;

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
   final String tempFileName         = "temp9876543210.txt";
		File    resultFile           = new File(tempFileName); // overwritten or deleted
        boolean convertToFile        = false;
        boolean loadProperties       = false;
        String     resultFileName    = "";
        String     resultFileNameRoot= "";
        String propertiesFileName    = "";
        String propertiesFileNameRoot= "";
  DecimalFormat formatPrecision2 = new DecimalFormat ("#0.00");
		String  compressionRatio;
				 
		initializeSwitches ();

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
					if (!sourceFileName.isEmpty())
					{
						System.out.println(ERROR+" [org.web3d.x3d.jsail.CommandLine] multiple source file names found, \"" + sourceFileName + "\" and \"" + args[i] + "\"");
						System.out.println(USAGE);
						return;
					}
					else 
					{
						sourceFileName     = args[i];
						sourceFileNameRoot = sourceFileName.substring(0,sourceFileName.lastIndexOf("."));
						sourceFile = new File(sourceFileName);
						if (!sourceFile.exists())
						{
							System.out.println(ERROR+" [org.web3d.x3d.jsail.CommandLine] file not found: " + sourceFileName);
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
				else if (args[i].equalsIgnoreCase("-tofile")) // followed by resultFileName
				{
					if ((args.length > i + 1) && !(args[i+1] == null) && !args[i+1].isEmpty() && !args[i+1].startsWith("-"))
					{
						 resultFileName     = args[i+1];
						 resultFileNameRoot = resultFileName.substring(0,resultFileName.lastIndexOf("."));
						 System.out.println ("parameter: \"" + args[i] + "\" \"" + args[i+1] + "\" for result file name root " + resultFileNameRoot);
						 i++; // increment index, carefully!
					}
					else System.out.println ("parameter: \"" + args[i] + "\" for result file name root "+ resultFileNameRoot);
					convertToFile = true;
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

				else if (args[i].equalsIgnoreCase("-x3d") || args[i].equalsIgnoreCase("-tox3d"))
				{
					clearPriorConversionSwitches(args[i]);
					convertToX3D = true;
					conversionExtension = X3DObject.FILE_EXTENSION_X3D;
					System.out.println ("parameter: \"" + args[i] + "\" for conversion to X3D encoding");
				}
				else if (args[i].equalsIgnoreCase("-xml") || args[i].equalsIgnoreCase("-toxml"))
				{
					clearPriorConversionSwitches(args[i]);
					convertToXML = true;
					conversionExtension = X3DObject.FILE_EXTENSION_XML;
					System.out.println ("parameter: \"" + args[i] + "\" for conversion to XML encoding");
				}
				else if (args[i].equalsIgnoreCase("-x3dv") || args[i].equalsIgnoreCase("-tox3dv") || 
						 args[i].equalsIgnoreCase("-toClassicVRML") || args[i].equalsIgnoreCase("-ClassicVRML"))
				{
					clearPriorConversionSwitches(args[i]);
					convertToClassicVRML = true;
					conversionExtension = X3DObject.FILE_EXTENSION_CLASSICVRML;
					System.out.println ("parameter: \"" + args[i] + "\" for conversion to ClassicVRML encoding");
				}
				else  if (args[i].equalsIgnoreCase("-json") || args[i].equalsIgnoreCase("-tojson"))
				{
					clearPriorConversionSwitches(args[i]);
					convertToJSON = true;
					conversionExtension = X3DObject.FILE_EXTENSION_JSON;
					System.out.println ("parameter: \"" + args[i] + "\" for conversion to JSON encoding");
				}
 				else  if (args[i].equalsIgnoreCase("-js") || args[i].equalsIgnoreCase("-tojs"))
 				{
 					clearPriorConversionSwitches(args[i]);
 					convertToJS = true;
 					conversionExtension = X3DObject.FILE_EXTENSION_JAVASCRIPT;
 					System.out.println ("parameter: \"" + args[i] + "\" for conversion to X3DJSONLD JavaScript source");
 				}
				else  if (args[i].equalsIgnoreCase(  "-vrml") || args[i].equalsIgnoreCase(  "-vrml97") ||args[i].equalsIgnoreCase( "-wrl") || 
						  args[i].equalsIgnoreCase("-tovrml") || args[i].equalsIgnoreCase("-tovrml97"))
				{
					clearPriorConversionSwitches(args[i]);
					convertToVRML97 = true;
					conversionExtension = X3DObject.FILE_EXTENSION_VRML97;
					System.out.println ("parameter: \"" + args[i] + "\" for conversion to VRML97 encoding");
				}
				else  if (args[i].equalsIgnoreCase("-x3dom") || args[i].equalsIgnoreCase("-tox3dom"))
				{
					clearPriorConversionSwitches(args[i]);
					convertToX3DOM = true;
					conversionExtension = X3DObject.FILE_EXTENSION_HTML;
					System.out.println ("parameter: \"" + args[i] + "\" for conversion to X3DOM HTML page containing model");
				}
				else  if (args[i].equalsIgnoreCase("-X_ITE") || args[i].equalsIgnoreCase("-toX_ITE"))
				{
					clearPriorConversionSwitches(args[i]);
					convertToX_ITE = true;
					conversionExtension = X3DObject.FILE_EXTENSION_HTML;
					System.out.println ("parameter: \"" + args[i] + "\" for conversion to X_ITE HTML page containing model");
				}
				// ==========================================
				else  if (args[i].equalsIgnoreCase("-EXIFICIENT"))
				{
					ConfigurationProperties.setExiEngine(ConfigurationProperties.EXI_ENGINE_EXIFICIENT);
					System.out.println ("parameter: \"" + args[i] + "\" invoked  ConfigurationProperties.setExiEngine(" + ConfigurationProperties.EXI_ENGINE_EXIFICIENT + ");");
				}
				// ==========================================
				else  if (args[i].equalsIgnoreCase("-OPENEXI") || args[i].equalsIgnoreCase("-NAGASENA"))
				{
					ConfigurationProperties.setExiEngine(ConfigurationProperties.EXI_ENGINE_OPENEXI);
					System.out.println ("parameter: \"" + args[i] + "\" invoked  ConfigurationProperties.setExiEngine(" + ConfigurationProperties.EXI_ENGINE_OPENEXI + ");");
					// TODO
					System.out.println ("  Warning: \"" + ConfigurationProperties.EXI_ENGINE_OPENEXI + "\" option not yet implemented, using " + ConfigurationProperties.EXI_ENGINE_EXIFICIENT + " instead.");
				}
				// ==========================================
				else  if (args[i].equalsIgnoreCase("-EXI") || args[i].equalsIgnoreCase("-toEXI"))
				{
					if (sourceFileName.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_EXI))
					{
						System.out.println(ERROR+" [org.web3d.x3d.jsail.CommandLine] cannot convert an .exi file -toEXI");
						System.out.println(USAGE);
						return;
					}
					clearPriorConversionSwitches(args[i]);
					convertToEXI  = true;
					convertToFile = true;
					conversionExtension = X3DObject.FILE_EXTENSION_EXI;
					System.out.println ("parameter: \"" + args[i] + "\" for conversion to compressed EXI containing model");
				}
				else  if ((args[i].equalsIgnoreCase("-EXI") &&  sourceFileName.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_EXI)) || 
						   args[i].equalsIgnoreCase("-fromEXI"))
				{
					if (!sourceFileName.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_EXI))
					{
						System.out.println(ERROR+" [org.web3d.x3d.jsail.CommandLine] cannot convert a non-exi file -toEXI");
						System.out.println(USAGE);
						return;
					}
					clearPriorConversionSwitches(args[i]);
					convertFromEXI = true;
					conversionExtension = X3DObject.FILE_EXTENSION_X3D;
					System.out.println ("parameter: \"" + args[i] + "\" for conversion from compressed EXI containing model");
				}
				// ==========================================
				else  if (args[i].equalsIgnoreCase("-toGZ") || args[i].equalsIgnoreCase("-toGZIP"))
				{
					if (sourceFileName.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_GZIP))
					{
						System.out.println(ERROR+" [org.web3d.x3d.jsail.CommandLine] cannot convert -toGZIP an already gzip .gz file " + sourceFileName);
						System.out.println(USAGE);
						return;
					}
					clearPriorConversionSwitches(args[i]);
					convertToGZIP = true;
					convertToFile = true;
					conversionExtension = X3DObject.FILE_EXTENSION_GZIP;
					System.out.println ("parameter: \"" + args[i] + "\" for conversion to compressed GZIP containing model");
				}
				else  if (args[i].equalsIgnoreCase("-fromGZ") || args[i].equalsIgnoreCase("-fromGZIP"))
				{
					if (!sourceFileName.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_GZIP))
					{
							System.out.println(ERROR+" [org.web3d.x3d.jsail.CommandLine] cannot convert -fromGZIP an non-gzip file " + sourceFileName);
							System.out.println(USAGE);
							return;
					}
					clearPriorConversionSwitches(args[i]);
					convertFromGZIP = true;
					conversionExtension = X3DObject.FILE_EXTENSION_X3D;
					System.out.println ("parameter: \"" + args[i] + "\" for conversion from compressed GZIP containing model");
				}
				// ==========================================
				else  if (args[i].equalsIgnoreCase("-toZIP"))
				{
					if (sourceFileName.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_ZIP))
					{
							System.out.println(ERROR+" [org.web3d.x3d.jsail.CommandLine] cannot convert -toZIP a non-zip file " + sourceFileName);
							System.out.println(USAGE);
							return;
					}
					clearPriorConversionSwitches(args[i]);
					convertToZIP = true;
					conversionExtension = X3DObject.FILE_EXTENSION_ZIP;
					System.out.println ("parameter: \"" + args[i] + "\" for conversion to compressed ZIP containing model");
				}
				else  if (args[i].equalsIgnoreCase("-fromZIP"))
				{
					if (!sourceFileName.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_ZIP))
					{
							System.out.println(ERROR+" [org.web3d.x3d.jsail.CommandLine] cannot convert -fromZIP a non-zip file " + sourceFileName);
							System.out.println(USAGE);
							return;
					}
					// TODO also handle specification of filename of interest
					clearPriorConversionSwitches(args[i]);
					convertFromZIP = true;
					convertToFile  = true;
					conversionExtension = X3DObject.FILE_EXTENSION_X3D;
					System.out.println ("parameter: \"" + args[i] + "\" for conversion from compressed ZIP containing model");
				}
				// ==========================================
				else  if (args[i].equalsIgnoreCase("-v") || args[i].equalsIgnoreCase("-validate"))
				{
					// usually invoked in isolation, but can coexist (superfluous) with conversions
					validateSwitch = true;
					if (resultFileName.isEmpty())
					{
						 resultFileName = "Validation" + X3DObject.FILE_EXTENSION_TEXT; // be prepared with default name
						 System.out.println ("parameter: \"" + args[i] + "\"  for model validation");
					}
					else System.out.println ("parameter: \"" + args[i] + "\"  for model validation to result file");
				}
				else  if (args[i].equalsIgnoreCase("-page") || args[i].equalsIgnoreCase("-X3DJSAIL"))
				{
					clearPriorConversionSwitches(args[i]);
					System.out.println(USAGE);
					openX3DJSAILpage();
					return;
				}
				else  if (args[i].equalsIgnoreCase("-resources") || args[i].equalsIgnoreCase("-X3dResources"))
				{
					openX3dResourcesPage();
					return;
				}
				else  if (args[i].equalsIgnoreCase("-tooltips") || args[i].equalsIgnoreCase("-X3dTooltips"))
				{
					openX3dTooltipsPage();
					return;
				}
				else  if (args[i].equalsIgnoreCase("-help"))
				{
					clearPriorConversionSwitches(args[i]);
					System.out.println(USAGE);
					return;
				}
				else // not found
				{
					System.out.println(ERROR+" [org.web3d.x3d.jsail.CommandLine] unrecognized CommandLine option \"" + args[i] + "\"");
					System.out.println(USAGE);
					return;
				}
			}
		}
		// ===================================================================================
		// compute/confirm resultFileName after all command-line switches are read

		if (resultFileName.isEmpty())
		{
			resultFileNameRoot = sourceFileNameRoot;
			resultFileName     = resultFileNameRoot + conversionExtension;
		}
		if ((convertToX3D         &&  !conversionExtension.equalsIgnoreCase(X3DObject.FILE_EXTENSION_X3D))    ||
			(convertToXML         &&  !conversionExtension.equalsIgnoreCase(X3DObject.FILE_EXTENSION_XML))    ||
			(convertToClassicVRML &&  !conversionExtension.equalsIgnoreCase(X3DObject.FILE_EXTENSION_CLASSICVRML)) ||
			(convertToVRML97      &&  !conversionExtension.equalsIgnoreCase(X3DObject.FILE_EXTENSION_VRML97)) ||
			(convertToX3DOM       && (!conversionExtension.equalsIgnoreCase(X3DObject.FILE_EXTENSION_HTML) &&
                                      !conversionExtension.equalsIgnoreCase(X3DObject.FILE_EXTENSION_XHTML))) ||
			(convertToX_ITE       && (!conversionExtension.equalsIgnoreCase(X3DObject.FILE_EXTENSION_HTML) &&
                                      !conversionExtension.equalsIgnoreCase(X3DObject.FILE_EXTENSION_XHTML))) ||
			(convertToEXI         &&  !conversionExtension.equalsIgnoreCase(X3DObject.FILE_EXTENSION_EXI))    ||
			(convertToGZIP        &&  !conversionExtension.equalsIgnoreCase(X3DObject.FILE_EXTENSION_GZIP))   ||
			(convertToZIP         &&  !conversionExtension.equalsIgnoreCase(X3DObject.FILE_EXTENSION_ZIP))    )
		{
			System.out.println(WARNING+" [org.web3d.x3d.jsail.CommandLine] mismatched file extension \"" + conversionExtension + "\" for conversion");
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
			if (convertFromGZIP)
			{
				if (!sourceFileName.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_GZIP))
				{
						System.out.println(ERROR+" [org.web3d.x3d.jsail.CommandLine] cannot -gunzip a non-gzip file " + sourceFileName);
						System.out.println(USAGE);
						return;
				}
				boolean result = loadedX3dModel.fromFileGZIP(sourceFileName);
				System.out.println("load success: " + result);
				return;
			}
			else if (convertFromZIP)
			{
				if (!sourceFileName.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_ZIP))
				{
						System.out.println(ERROR+" [org.web3d.x3d.jsail.CommandLine] cannot -gunzip a non-zip file " + sourceFileName);
						System.out.println(USAGE);
						return;
				}
				// if output resultFileName not specified, pick first available .x3d file
				boolean result = loadedX3dModel.fromFileZIP(sourceFileName,resultFileName); 
				System.out.println("load success: " + result);
				return;
			}
			// otherwise
            X3DLoaderObject x3dLoader = new X3DLoaderObject();
            boolean successfulLoad = x3dLoader.loadModelFromFileX3D(         sourceFileName);
//          boolean successfulLoad = x3dLoader.loadModelFromFileX3D(new File(sourceFileName)); // alternate form, tested OK

            if (successfulLoad && x3dLoader.isLoadSuccessful()) // two equivalent ways to check
            {
				ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA); // built-in version
                resultFile = new File(tempFileName); // unsaved
                try
				{
                    //debug
//                  System.out.println("loadedX3dModel initialization:");
//                  System.out.println(loadedX3dModel.toStringX3D());
                    
                    X3DConcreteElement x3dConcreteElement = x3dLoader.getX3dObjectTree();

                    if (x3dConcreteElement instanceof X3DObject)
                    {
                        loadedX3dModel = (X3DObject)x3dConcreteElement;
                    }
                    else if (x3dConcreteElement == null)
                    {
                        System.out.println(ERROR+"TODO problem with X3dLoader, x3dConcreteElement is null.");
                        return;
                    }
                    else
                    {
                        System.out.println(ERROR+"TODO problem with X3dLoader, result has type " + x3dConcreteElement.getClass().getCanonicalName());
                        return;
                    }

                    if (convertToVRML97)
                    {
                        System.out.println("convert to VRML97:");
                        if (!convertToFile) System.out.println(); 
                        if  (convertToFile)
                                   resultFile = loadedX3dModel.toFileVRML97 (resultFileName);
                        else System.out.println(loadedX3dModel.toStringVRML97());
                    }
                    else if (convertToJSON)
                    {
                        String presetXsltEngine = ConfigurationProperties.getXsltEngine();
                	ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA); // built-in version avoids unwanted line breaks
                        System.out.println("convert to JSON:");
                        if  (convertToFile)
                                   resultFile = loadedX3dModel.toFileJSON (resultFileName);
                        else System.out.println(loadedX3dModel.toStringJSON());
                	ConfigurationProperties.setXsltEngine(presetXsltEngine);
                    }
                    else if (convertToJS)
                    {
                        String presetXsltEngine = ConfigurationProperties.getXsltEngine();
                	ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA); // built-in version avoids unwanted line breaks
                        System.out.println("convert to JS JavaScript:");
                        if  (convertToFile)
                                   resultFile = loadedX3dModel.toFileJavaScript (resultFileName);
                        else System.out.println(loadedX3dModel.toStringJavaScript());
                	ConfigurationProperties.setXsltEngine(presetXsltEngine);
                    }
                    else if (convertToClassicVRML)
                    {
                        System.out.println("convert to ClassicVRML:");
                        if (!convertToFile) System.out.println(); 
                        if  (convertToFile)
                                   resultFile = loadedX3dModel.toFileClassicVRML (resultFileName);
                        else System.out.println(loadedX3dModel.toStringClassicVRML());
                    }
                    else if (convertToX3D)
                    {
                        System.out.println("convert to X3D:");
                        if (!convertToFile) System.out.println(); 
                        if  (convertToFile)
                                   resultFile = loadedX3dModel.toFileX3D (resultFileName);
                        else System.out.println(loadedX3dModel.toStringX3D());
                    }
                    else if (convertToXML)
                    {
                        System.out.println("convert to XML:");
                        if (!convertToFile) System.out.println(); 
                        if  (convertToFile)
                                   resultFile = loadedX3dModel.toFileXML (resultFileName);
                        else System.out.println(loadedX3dModel.toStringXML());
                    }
                    else if (convertToX3DOM)
                    {
                        System.out.println("convert to X3DOM:");
                        if (!convertToFile) System.out.println(); 
                        if  (convertToFile)
                                   resultFile = loadedX3dModel.toFileX3DOM (resultFileName);
                        else System.out.println(loadedX3dModel.toStringX3DOM());
                    }
                    else if (convertToX_ITE)
                    {
                        System.out.println("convert to X_ITE:");
                        if (!convertToFile) System.out.println(); 
                        if  (convertToFile)
                                   resultFile = loadedX3dModel.toFileX_ITE  (sourceFileName, resultFileName);
                        else System.out.println(loadedX3dModel.toStringX_ITE(sourceFileName));
                    }
                    else if (convertToEXI)
                    {
                        System.out.println("convert to EXI using " + ConfigurationProperties.getExiEngine() + ":");
                        System.out.println("source: " + sourceFileName + " filesize " + sourceFileLength + " bytes");
//						System.out.println("[trace] sourceFileName=" + sourceFileName + ", resultFileName=" + resultFileName);
                        resultFile = loadedX3dModel.toFileEXI (resultFileName);
						compressionRatio = formatPrecision2.format((double)resultFile.length()/(double)sourceFileLength * 100.0);
						System.out.println("result: " + resultFile.getName() + " filesize " + resultFile.length() + " bytes, compression " + compressionRatio + "% of original");
                    }
                    else if (convertToGZIP)
                    {
                        System.out.println("convert to GZIP:");
                        System.out.println("source: " + sourceFileName + " filesize " + sourceFileLength + " bytes");
//						System.out.println("[trace] sourceFileName=" + sourceFileName + ", resultFileName=" + resultFileName);
                        resultFile = loadedX3dModel.toFileGZIP (resultFileName);
						compressionRatio = formatPrecision2.format((double)resultFile.length()/(double)sourceFileLength * 100.0);
						System.out.println("result: " + resultFile.getName() + "  filesize " + resultFile.length() + " bytes, compression " + compressionRatio + "% of original");
                    }
                    else if (convertToZIP)
                    {
                        System.out.println("convert to ZIP:");
                        System.out.println("source: " + sourceFileName + " filesize " + sourceFileLength + " bytes");
//						System.out.println("[trace] sourceFileName=" + sourceFileName + ", resultFileName=" + resultFileName);
                        resultFile = loadedX3dModel.toFileZIP (resultFileName, sourceFileName);
						compressionRatio = formatPrecision2.format((double)resultFile.length()/(double)sourceFileLength * 100.0);
						System.out.println("result: " + resultFile.getName() + " filesize " + resultFile.length() + " bytes, compression " + compressionRatio + "% of original");
                    }
                    else if (validateSwitch && !convertToEXI && !convertToGZIP && !convertToZIP)
                    {
						// note that validation already performed as part of prior conversions
                        String outputValidationText = loadedX3dModel.validate();
                            
                        System.out.println("validate results:");
                        if (!convertToFile)
                        {
                            if  (outputValidationText.isEmpty())
                                 outputValidationText = "success, no problems noted";
                            else System.out.println();
                            System.out.println(outputValidationText);
                            return;
                        }
                        else if (convertToFile && outputValidationText.isEmpty())
                        {
                            outputValidationText = "success, no problems noted, no output file written";
                            System.out.println(outputValidationText);
                            return;
                        }
                        else if (convertToFile)
                        {
                            if (!resultFileName.endsWith(X3DObject.FILE_EXTENSION_TEXT))
                            {
                                resultFileName += X3DObject.FILE_EXTENSION_TEXT;
                            }
                            Path outputFilePath = Paths.get(resultFileName);
                            String  errorNotice = new String();
                            if (ConfigurationProperties.isDebugModeActive()) // debug check, defaults to local directory
                            {
                                errorNotice += "[debug] Output file path=" + outputFilePath.toAbsolutePath() + "\n";
                            }
                            System.out.println (errorNotice);
		
                            // http://docs.oracle.com/javase/8/docs/technotes/guides/intl/encoding.doc.html
                            // http://docs.oracle.com/javase/8/docs/api/java/nio/charset/Charset.html
                            Charset charset = Charset.forName(ConfigurationProperties.XML_ENCODING_DECLARATION_DEFAULT); // "UTF-8"

                            try // successful validation results in empty file
                            {
                                    bufferedWriter = Files.newBufferedWriter(outputFilePath, charset);
                                    bufferedWriter.write(outputValidationText, 0, outputValidationText.length());
                                    bufferedWriter.close(); // ensure file writing is complete
                                    outputFilePath.toFile(); // success
                            }
                            catch (IOException exception)
                            {
                                    throw new X3DException(ERROR+"IOException for resultFileName " + resultFileName + ", unable to save file: " + exception);
                            }
                        }
                    }
                    if      (convertToEXI || convertToGZIP || convertToZIP)
                    {
							// done
					}
                    else if (convertToFile && resultFile.exists() && !resultFile.getName().equals(tempFileName))
                             System.out.println("file conversion successful: " + resultFile.getName() + " (" + resultFile.length() + " bytes)");
                    else if (convertToFile)
                             System.out.println(ERROR+"file conversion unsuccessful!");
                    else if (validateSwitch)
                             System.out.println("model validation complete.");
                }
                catch (X3DException e)
                {
                    e.printStackTrace();
                    System.out.println(ERROR+"TODO problem handling local exception within CommandLine, exiting");
                //  return;
                }
            }
            else
            {
                System.out.println(ERROR+"Source model file load unsuccessful");
            //  return;
            }
		}
		else if (!loadProperties) // allow testing of properties without file operations
        {
            System.out.println(ERROR+"Source model file name is empty, therefore file loading not possible.");
        //  return;
        }
		if (resultFile.getName().equals(tempFileName))
			resultFile.delete();
    }

    /** Open X3DJSAIL page
     * @see <a href="http://www.web3d.org/specifications/java/X3DJSAIL.html">http://www.web3d.org/specifications/java/X3DJSAIL.html</a>
     */
    public static void openX3DJSAILpage ()
    {
         openX3DJSAILpage (""); // no bookmark
    }

    /** Open X3DJSAIL page at a given bookmark
	 * @param bookmark anchor bookmark of interest for this page
     * @see <a href="http://www.web3d.org/specifications/java/X3DJSAIL.html">http://www.web3d.org/specifications/java/X3DJSAIL.html</a>
     */
    public static void openX3DJSAILpage (String bookmark)
    {
        // https://stackoverflow.com/questions/5226212/how-to-open-the-default-webbrowser-using-java
        try {
               if ((bookmark != null) && !bookmark.isEmpty())
                    Desktop.getDesktop().browse(new URI("X3DJSAIL.html" + "#" + bookmark));
               else Desktop.getDesktop().browse(new URI("X3DJSAIL.html"));
        }
        catch (IOException | URISyntaxException e1)
        {
//         System.out.println ("Local url failure: " + e1.getMessage());
           try {
               if ((bookmark != null) && !bookmark.isEmpty())
                    Desktop.getDesktop().browse(new URI(ConfigurationProperties.URL_X3DJSAIL + "#" + bookmark));
               else Desktop.getDesktop().browse(new URI(ConfigurationProperties.URL_X3DJSAIL));
           }
           catch (IOException | URISyntaxException e2)
           {
               if ((bookmark != null) && !bookmark.isEmpty())
                    System.out.println ("URL_X3DJSAIL: " + ConfigurationProperties.URL_X3DJSAIL + "#" + bookmark);
               else System.out.println ("URL_X3DJSAIL: " + ConfigurationProperties.URL_X3DJSAIL);
               System.out.println ("URL_X3DJSAIL failure: " + e2.getMessage());
           }
        }
    }

    /** Open X3D Resources page
     * @see <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html">http://www.web3d.org/x3d/content/examples/X3dResources.html</a>
     */
    public static void openX3dResourcesPage ()
    {
         openX3dResourcesPage (""); // no bookmark
    }

    /** Open X3D Resources page at a given bookmark
	 * @param bookmark anchor bookmark of interest for this page
     * @see <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html">http://www.web3d.org/x3d/content/examples/X3dResources.html</a>
     */
    public static void openX3dResourcesPage (String bookmark)
    {
        // https://stackoverflow.com/questions/5226212/how-to-open-the-default-webbrowser-using-java
        try {
            if ((bookmark != null) && !bookmark.isEmpty())
                 Desktop.getDesktop().browse(new URI(ConfigurationProperties.URL_X3DRESOURCES + "#" + bookmark));
            else Desktop.getDesktop().browse(new URI(ConfigurationProperties.URL_X3DRESOURCES));
        }
        catch (IOException | URISyntaxException e2)
        {
            if ((bookmark != null) && !bookmark.isEmpty())
                 System.out.println ("URL_X3DJSAIL: " + ConfigurationProperties.URL_X3DRESOURCES + "#" + bookmark);
            else System.out.println ("URL_X3DJSAIL: " + ConfigurationProperties.URL_X3DRESOURCES);

            System.out.println ("URL_X3DJSAIL failure: " + e2.getMessage());
        }
    }

    /** Open X3D Tooltips page
     * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html">X3D Tooltips</a>
     */
    public static void openX3dTooltipsPage ()
    {
         openX3dTooltipsPage (""); // no bookmark
    }

    /** Open X3D Tooltips page at a given bookmark
	 * @param bookmark anchor bookmark of interest for this page
     * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html">X3D Tooltips</a>
     */
    public static void openX3dTooltipsPage (String bookmark)
    {
        // https://stackoverflow.com/questions/5226212/how-to-open-the-default-webbrowser-using-java
        
        try {
            if ((bookmark != null) && !bookmark.isEmpty())
                 Desktop.getDesktop().browse(new URI(ConfigurationProperties.URL_X3DTOOLTIPS + "#" + bookmark));
            else Desktop.getDesktop().browse(new URI(ConfigurationProperties.URL_X3DTOOLTIPS));
        }
        catch (IOException | URISyntaxException e2)
        {
            if ((bookmark != null) && !bookmark.isEmpty())
                 System.out.println ("URL_X3DTOOLTIPS: " + ConfigurationProperties.URL_X3DTOOLTIPS + "#" + bookmark);
            else System.out.println ("URL_X3DTOOLTIPS: " + ConfigurationProperties.URL_X3DTOOLTIPS );

            System.out.println ("URL_X3DTOOLTIPS failure: " + e2.getMessage());
        }
    }

    /** 
	 * Reset all conversions switches to default (false)
     */
    private static void clearPriorConversionSwitches(String newCommand)
    {
        if (convertToVRML97 || convertToClassicVRML || convertToX3D   || convertToXML ||
            convertToJSON   || convertToJS          || convertToX3DOM || convertToX_ITE)       
            System.out.println(WARNING+"Prior conversion flag overridden by " + newCommand);
            
        convertToVRML97      = false;
        convertToClassicVRML = false;
        convertToX3D         = false;
        convertToXML         = false;
        convertToJSON        = false;
        convertToJS          = false;
        convertToX3DOM       = false;
        convertToX_ITE       = false;
    }

}

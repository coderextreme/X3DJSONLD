/**
 * HelloWorldProgram.java
 *
 * Filename:     HelloWorldProgram.java
 * Description:  Example "smoke test" program to create an X3D model using the X3D Java Scene Access Interface Library (X3DJSAIL).
 * Identifier:   http://www.web3d.org/specifications/java/examples/HelloWorldProgram.java
 * Reference:    https://en.wikipedia.org/wiki/Smoke_testing_(software)
 * @author       Don Brutzman
 * Created:      6 September 2016
 * Revised:      see version control
 * Compile, run: ../build.xml
 * Reference:    http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Scripts
 * Reference:    http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/scripting.html
 * Reference:    http://www.web3d.org/x3d/specifications/ISO-IEC-19777-2-X3DLanguageBindings-Java/Part2/X3D_Java.html
 * License:      ../license.html
 */

import java.io.File;
import java.text.DecimalFormat;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Date;
import org.w3c.dom.DOMImplementation;
import org.w3c.dom.Document;
import org.web3d.x3d.jsail.*;
import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Layering.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Sound.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Texturing.*;
import org.web3d.x3d.jsail.Time.*;
import org.web3d.x3d.jsail.X3DConcreteElement;
import org.web3d.x3d.jsail.X3DLoaderObject;

public class HelloWorldProgram
{
	/** Top-most object containing both head and Scene (and thus everything else) */
	static X3DObject x3dModel = new X3DObject();
	
	String thisClassName   = this.getClass().getName(); // use method from java.lang.Object
	String thisProgramFile = this.getClass().getName() + ".java";  // use method from java.lang.Object
	String thisSceneName   = this.getClass().getName() + "Output"; // must append filename extension
	
	// global scope
	private final headObject        head;
	private final SceneObject      scene;
	private final String   nameArtDeco01Material = "ArtDeco01Material";
    private final String        subdirectoryPath = "examples/";
	private       File          sourceFile;
    private       DecimalFormat formatPrecision2 = new DecimalFormat ("#0.00");
	private       String        compressionRatio;

	/** Constructor */
	HelloWorldProgram ()
	{
		// head and scene are globally visible, best practice is to instantiate/initialize them within constructor
		head  = new headObject();
		scene = new SceneObject();
		
		buildModelSceneGraph();
		showSceneResults(); // test all serializer outputs
	}
	
	// reference: https://docs.oracle.com/javase/tutorial/getStarted/application/
	public static void main(String[] args)
	{
		HelloWorldProgram thisProgram = new HelloWorldProgram ();
                thisProgram.validate(); // trace invocation
	}
        
	private String validate()
	{
		if (x3dModel == null)
			buildModelSceneGraph();
		return x3dModel.validationReport();
	}
	
	private void showSceneResults()
	{
		ConfigurationProperties.setPropertiesFileName(ConfigurationProperties.PROPERTIES_FILENAME_DEFAULT);
		System.out.println ("ConfigurationProperties.getPropertiesFileName()=" + ConfigurationProperties.getPropertiesFileName());
		ConfigurationProperties.loadProperties();
		ConfigurationProperties.setShowDefaultAttributes(true); // tested satisfactorily
		ConfigurationProperties.setIndentCharacter(ConfigurationProperties.indentCharacter_DEFAULT);
		ConfigurationProperties.setIndentIncrement(ConfigurationProperties.indentIncrement_DEFAULT);
		// Restore default settings for spacing, increments and showing default attribute=value pairs
		ConfigurationProperties.setX3dCanonicalForm();
		ConfigurationProperties.initialize(); // restore all defaults

		System.out.println ();
		System.out.println (thisSceneName + ".java console output");
		System.out.println ("===========================================");
		String validationResults;
		System.out.println ("Validation results for this scene graph: ");
		try
		{
			// set true if needed to debug output files, otherwise false (strict)
			ConfigurationProperties.setValidationExceptionAllowed(false);
			validationResults = x3dModel.validate();
			if (validationResults.isEmpty())
				 System.out.println ("no errors detected.");
			else System.out.println (validationResults);
		}
		catch (Exception e)
		{
			System.out.flush(); // await completion of any pending output
//			System.out.println (e);
			e.printStackTrace(System.out);
			if (!ConfigurationProperties.isValidationExceptionAllowed())
				System.exit(1);
		}
		System.out.println ("===========================================");
		System.out.println ("x3dModel.toStringX3D()\n");
		System.out.println ( x3dModel.toStringX3D());
		System.out.println ("===========================================");
		System.out.println ("x3dModel.toStringXML()\n");//utility constructor
		System.out.println ( x3dModel.toStringXML());
		System.out.println ("===========================================");
		System.out.println ("x3dModel.toStringClassicVRML()\n");
		System.out.println ( x3dModel.toStringClassicVRML());
		System.out.println ("===========================================");
		System.out.println ("x3dModel.toStringVRML97()\n");
		System.out.println ( x3dModel.toStringVRML97());
		System.out.println ("===========================================");
		
		System.out.println ("Create .x3d (X3D XML Encoding) version of model");
		String savedFileName    = thisSceneName + X3DObject.FILE_EXTENSION_X3D;
		File   savedFile        = x3dModel.toFileX3D(savedFileName);
		boolean savedFileExists = !(savedFile == null);
		System.out.println ("helloWorldObject.toFileX3D(\"" + savedFileName + "\") success: " + savedFileExists);
		if (!(savedFile == null))
			System.out.println (savedFile.getAbsolutePath());
		System.out.println ("===========================================");
		System.out.println ("Create .xml (X3D XML Encoding) version of model");
		savedFileName    = thisSceneName + X3DObject.FILE_EXTENSION_XML;
		savedFile        = x3dModel.toFileXML(savedFileName);
		savedFileExists = !(savedFile == null);
		System.out.println ("helloWorldObject.toFileXML(\"" + savedFileName + "\") success: " + savedFileExists);
		if (!(savedFile == null))
			System.out.println (savedFile.getAbsolutePath());
		System.out.println ("===========================================");
		
		System.out.println ("Create X3D ClassicVRML Encoding of model");
		savedFileName   = thisSceneName + X3DObject.FILE_EXTENSION_CLASSICVRML;
		savedFile       = x3dModel.toFileClassicVRML(savedFileName);
		savedFileExists = !(savedFile == null);
		System.out.println ("helloWorldObject.toFileClassicVRML(\"" + savedFileName + "\") success: " + savedFileExists);
		if (!(savedFile == null))
			System.out.println (savedFile.getAbsolutePath());
		System.out.println ("===========================================");
		
		System.out.println ("Create VRML97 Encoding of model");
		savedFileName   = thisSceneName + X3DObject.FILE_EXTENSION_VRML97;
		savedFile       = x3dModel.toFileVRML97(savedFileName);
		savedFileExists = !(savedFile == null);
		System.out.println ("helloWorldObject.toFileVRML97(\"" + savedFileName + "\") success: " + savedFileExists);
		if (!(savedFile == null))
			System.out.println (savedFile.getAbsolutePath());
		System.out.println ("===========================================");
		
		ConfigurationProperties.setDebugModeActive(false);
		ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_SAXON);      // default
//		ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA); // built-in version
		System.out.println ("Create pretty-print HTML documentation of model using ConfigurationProperties.getXsltEngine()=" + ConfigurationProperties.getXsltEngine()
			+ " and stylesheet " + ConfigurationProperties.STYLESHEET_htmlDocumentation);
		ConfigurationProperties.setDeleteIntermediateFiles(true);
		savedFileName   = thisSceneName + X3DObject.FILE_EXTENSION_HTML;
		savedFile       = x3dModel.toFileDocumentationHtml(savedFileName);
		savedFileExists = !(savedFile == null);
		System.out.println ("helloWorldObject.toFileDocumentationHTML(\"" + savedFileName + "\") success: " + savedFileExists);
		if (!(savedFile == null))
			System.out.println (savedFile.getAbsolutePath());
		ConfigurationProperties.setDebugModeActive(false);
		System.out.println ("===========================================");
		
		ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA); // built-in version avoids unwanted line breaks
		System.out.println ("Create concise Java source of model using stylesheet " + ConfigurationProperties.STYLESHEET_JAVA);
		savedFileName   = thisSceneName + X3DObject.FILE_EXTENSION_JAVA;
		savedFile       = x3dModel.toFileJava(savedFileName, true); // include license
		savedFileExists = !(savedFile == null);
		System.out.println ("helloWorldObject.toFileJava(\"" + savedFileName + "\") success: " + savedFileExists);
		if (!(savedFile == null))
		{
			System.out.println (savedFile.getAbsolutePath());
			System.out.println ("Test toStringJava()");
			System.out.println ();
			System.out.println (x3dModel.toStringJava());
		}
		System.out.println ("===========================================");
		
		ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA); // built-in version avoids unwanted line breaks
		System.out.println ("Create JSON Encoding of model using stylesheet " + ConfigurationProperties.STYLESHEET_JSON);
		savedFileName   = thisSceneName + X3DObject.FILE_EXTENSION_JSON;
		savedFile       = x3dModel.toFileJSON(savedFileName);
		savedFileExists = !(savedFile == null);
		System.out.println ("helloWorldObject.toFileJSON(\"" + savedFileName + "\") success: " + savedFileExists);
		if (!(savedFile == null))
		{
			System.out.println (savedFile.getAbsolutePath());
			System.out.println ("Test toStringJSON()");
			System.out.println ();
			System.out.println (x3dModel.toStringJSON());
		}
		System.out.println ("===========================================");
//		System.out.println ("Test toStringJavaScript()");
//		System.out.println (x3dModel.toStringJavaScript()); // TODO
//		System.out.println ("===========================================");
		
		ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_SAXON);	   // default
		System.out.println ("Create displayable scene page rendered with X3DOM using stylesheet " + ConfigurationProperties.STYLESHEET_X3DOM);
		savedFileName   = thisSceneName + "X3dom" + X3DObject.FILE_EXTENSION_XHTML;
		savedFile       = x3dModel.toFileX3DOM(savedFileName);
		savedFileExists = !(savedFile == null);
		System.out.println ("helloWorldObject.toFileX3DOM(\"" + savedFileName + "\") success: " + savedFileExists);
		if (!(savedFile == null))
			System.out.println (savedFile.getAbsolutePath());
		System.out.println ("===========================================");
		
		System.out.println ("Create displayable scene page rendered with X_ITE (formerly Cobweb) using stylesheet " + ConfigurationProperties.STYLESHEET_X3DOM);
		savedFileName   = thisSceneName + "X_ITE" + X3DObject.FILE_EXTENSION_HTML;
		savedFile       = x3dModel.toFileX_ITE(thisSceneName + X3DObject.FILE_EXTENSION_X3D, savedFileName);
		savedFileExists = !(savedFile == null);
		System.out.println ("helloWorldObject.toFileX3DOM(\"" + savedFileName + "\") success: " + savedFileExists);
		if (!(savedFile == null))
			System.out.println (savedFile.getAbsolutePath());
		System.out.println ("===========================================");
		
		System.out.println ("Reload and provide text output using Java DOM, which includes default attribute values");
		testX3DLoaderObjectDomDocument();
		System.out.println ("===========================================");
		System.out.println ("Test loadModelFromFileX3D(String) and loadModelFromFileX3D(File)");
		System.out.println ("checking both .x3d and .xml encodings:");
		X3DObject newX3DModel = new X3DObject();
		boolean loadSuccess = newX3DModel.loadModelFromFileX3D(thisSceneName + X3DObject.FILE_EXTENSION_X3D) &&
				              newX3DModel.loadModelFromFileX3D(thisSceneName + X3DObject.FILE_EXTENSION_XML); // also invokes loadModelFromFileX3D(File)
		String validationResult = newX3DModel.validate();
		if (validationResult.isEmpty())
			validationResult = "success";
		System.out.println ("newX3DModel loadSuccess=" + loadSuccess + ", isEmpty()=" + newX3DModel.isEmpty() + ", validate()=" + validationResult);

		System.out.println ("===========================================");
		System.out.println ("===========================================");
		System.out.println ("Check file sizes for various forms of compression");
		System.out.println ("Source file " + sourceFile.getName() + " " + sourceFile.length() + " bytes");
		// TODO Decimal Format
		System.out.println ("===========================================");
		System.out.println ("Test toFileEXI() with EXIficient");
		savedFileName   = thisSceneName + ".EXIFICIENT" + X3DObject.FILE_EXTENSION_EXI;
		File exiFile   = x3dModel.toFileEXI(savedFileName);
		compressionRatio = formatPrecision2.format((double)exiFile.length()/(double)sourceFile.length() * 100.0);
		System.out.println (exiFile.getName() + "  filesize " + exiFile.length() + " bytes, compression " + compressionRatio + "% of original");
		System.out.println ("===========================================");
		System.out.println ("Test fromFileEXI() with EXIficient");
		// savedFileName from before
		X3DObject exiModel = new X3DObject();
		boolean fromFileEXIsuccess = exiModel.fromFileEXI(savedFileName);
		System.out.println ("  fromFileEXIsuccess=" + fromFileEXIsuccess + " for " + savedFileName);
		if (fromFileEXIsuccess)
		{
			String exiModelValidation = exiModel.validate();
			if    (exiModelValidation.isEmpty())
				   exiModelValidation += "success";
			System.out.println ("exiModel.validate() results: " + exiModelValidation);
		}
		System.out.println ("===========================================");
		System.out.println ("Test toFileEXI() with OpenEXI: not yet implemented");
//		// TODO set configuration parameter
//		savedFileName   = thisSceneName + "OPENEXI" + X3DObject.FILE_EXTENSION_EXI;
//		exiFile   = x3dModel.toFileEXI(savedFileName);
//		compressionRatio = formatPrecision2.format((double)exiFile.length()/(double)sourceFile.length() * 100.0);
//		System.out.println (exiFile.getName() + "  filesize " + exiFile.length() + " bytes, compression " + compressionRatio + "% of original");
		System.out.println ("===========================================");
		System.out.println ("Test fromFileEXI() with OpenEXI: not yet implemented");
		System.out.println ("===========================================");
		System.out.println ("Test toFileGZIP()");
		savedFileName   = thisSceneName + X3DObject.FILE_EXTENSION_GZIP;
		File gzipFile   = x3dModel.toFileGZIP(savedFileName);
		compressionRatio = formatPrecision2.format((double)gzipFile.length()/(double)sourceFile.length() * 100.0);
		System.out.println (gzipFile.getName() + "  filesize " + gzipFile.length() + " bytes, compression " + compressionRatio + "% of original");
		System.out.println ("===========================================");
		System.out.println ("Test toFileZip()");
		String savedZipName = thisSceneName + X3DObject.FILE_EXTENSION_ZIP;
		savedFileName   = thisSceneName + X3DObject.FILE_EXTENSION_X3D;
		File zipFile    = x3dModel.toFileZIP(savedZipName, savedFileName);
		compressionRatio = formatPrecision2.format((double)zipFile.length()/(double)sourceFile.length() * 100.0);
		System.out.println (zipFile.getName() + " filesize " + zipFile.length() + " bytes, compression " + compressionRatio + "% of original");
		
		System.out.println ("===========================================");
		System.out.println ("===========================================");
		System.out.println ("Test CommandLine invocations");
		String[] args = {"-help" };
		System.out.println ("CommandLine " + Arrays.toString(args));
		CommandLine.run (args); // run these commands
		System.out.println ("===========================================");
		args = new String[] {"HelloWorldProgramOutput.x3d", "-toX3D", "-toFile", "HelloWorldProgramOutput.CommandLine.x3d" };
		System.out.println ("CommandLine " + Arrays.toString(args));
		CommandLine.run (args); // run these commands
		System.out.println ("===========================================");
		args = new String[] {"HelloWorldProgramOutput.x3d", "-EXIFICIENT", "-toEXI", "-toFile", "HelloWorldProgramOutput.CommandLine.EXIFICIENT.exi"};
		System.out.println ("CommandLine " + Arrays.toString(args));
		CommandLine.run (args); // run these commands
		System.out.println ("===========================================");
		args = new String[] {"HelloWorldProgramOutput.x3d", "-OpenEXI" };
		// TODO continue testing when ready:  , "-toEXI" , "-toFile", "HelloWorldProgramOutput.CommandLine.OPENEXI.exi"};
		System.out.println ("CommandLine " + Arrays.toString(args));
		CommandLine.run (args); // run these commands
		System.out.println ("===========================================");
		args = new String[] {"HelloWorldProgramOutput.x3d", "-toGZIP", "-toFile", "HelloWorldProgramOutput.CommandLine.x3d.gz"};
		System.out.println ("CommandLine " + Arrays.toString(args));
		CommandLine.run (args); // run these commands
		System.out.println ("===========================================");
		args = new String[] {"HelloWorldProgramOutput.CommandLine.x3d.gz", "-fromGZIP"};
		System.out.println ("CommandLine " + Arrays.toString(args));
		CommandLine.run (args); // run these commands
		System.out.println ("===========================================");
		args = new String[] {"HelloWorldProgramOutput.x3d", "-toZIP", "-toFile", "HelloWorldProgramOutput.CommandLine.x3d.zip"};
		System.out.println ("CommandLine " + Arrays.toString(args));
		CommandLine.run (args); // run these commands
		System.out.println ("===========================================");
		args = new String[] {"HelloWorldProgramOutput.CommandLine.x3d.zip", "-fromZIP", "-toFile", "HelloWorldProgramOutput.CommandLine.unzipped.x3d"};
		System.out.println ("CommandLine " + Arrays.toString(args));
		CommandLine.run (args); // run these commands
		System.out.println ("===========================================");
		System.out.println ("HelloWorldProgram complete.");
	}
	
	@SuppressWarnings({"UnusedAssignment", "static-access"}) // option to hide warnings when checking for allowable constructs during development
	private void buildModelSceneGraph()
	{
		// independent objects must be instantiated separately - verbose but necessary
	    componentObject component1 = new componentObject();
		unitObject   unitAngle = new unitObject();
		unitObject  unitLength = new unitObject();
		metaObject       meta0 = new metaObject(); // wild-card meta for current status
		metaObject       meta1 = new metaObject();
		metaObject       meta2 = new metaObject();
		metaObject       meta3 = new metaObject();
		metaObject       meta4 = new metaObject();
		metaObject       meta5 = new metaObject();
		metaObject       meta6 = new metaObject();
		metaObject       meta7 = new metaObject();
		metaObject       meta8 = new metaObject();
		metaObject       meta9 = new metaObject();
		metaObject       meta10 = new metaObject();
		metaObject       meta11 = new metaObject();
		metaObject       meta12 = new metaObject();
		metaObject       meta13 = new metaObject();
		metaObject       meta14 = new metaObject();
		metaObject       meta15 = new metaObject();
		metaObject       meta16 = new metaObject();
		metaObject       meta17 = new metaObject();
		metaObject       meta18 = new metaObject();
		metaObject       meta19 = new metaObject();
		metaObject       meta20 = new metaObject();
		
		x3dModel.setVersion(X3DObject.VERSION_3_3);
		x3dModel.setProfile(X3DObject.PROFILE_IMMERSIVE);
				
		x3dModel.setHead(head);
		// http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#metaTags
		
		component1 = new componentObject(componentObject.NAME_NAVIGATION,3); // utility constructor
		component1.setName(componentObject.NAME_NAVIGATION).setLevel(3);
		head.addComponent(component1);
		head.addComponent(new componentObject().setName("Layering").setLevel(1)); // TODO add utility methods to headObject
		
		unitAngle .setName("AngleRadiansFromDegrees").setCategory(unitObject.CATEGORY_ANGLE ).setConversionFactor(unitObject.CONVERSIONFACTOR_ANGLES_toRadiansFromDegrees);
		unitAngle .setName("AngleUnitConversion"    ).setCategory(unitObject.CATEGORY_ANGLE ).setConversionFactor(unitObject.CONVERSIONFACTOR_DEFAULT_VALUE);
		unitLength.setName("LengthMetersFromYards"  ).setCategory(unitObject.CATEGORY_LENGTH).setConversionFactor(unitObject.CONVERSIONFACTOR_LENGTH_toMetersFromYards);
		unitLength.setName("LengthUnitConversion"   ).setCategory(unitObject.CATEGORY_LENGTH).setConversionFactor(unitObject.CONVERSIONFACTOR_DEFAULT_VALUE);
		head.addUnit(unitAngle);
		head.addUnit(unitLength);
		
		meta0.setName(metaObject.NAME_INFO);
		meta0.setContent("continued development and testing in progress");
		meta0 = new metaObject(metaObject.NAME_INFO, "continued development and testing in progress"); // utility constructor
//		head.addMeta(meta0);
		
		// demonstrate method pipelining for X3D statements when adding multiple meta statements
		head.addMeta(meta1 ).addMeta(meta2 ).addMeta(meta3 ).addMeta(meta4 ).addMeta(meta5 ).addMeta(meta6 ).addMeta(meta7 )
		    .addMeta(meta8 ).addMeta(meta9 ).addMeta(meta10).addMeta(meta11).addMeta(meta12).addMeta(meta13).addMeta(meta14)
			.addMeta(meta15).addMeta(meta16).addMeta(meta17).addMeta(meta18).addMeta(meta19).addMeta(meta20);
		head.getMetaList();
		
		meta1.setName(metaObject.NAME_TITLE);
		meta1.setContent(thisSceneName + ".x3d");
		meta2.setName(metaObject.NAME_DESCRIPTION);
		meta2.setContent("Example " + this.getClass().getName() + " creates an X3D model using the X3D Java Scene Access Interface (SAI) Library");
		// demonstrate method pipelining for set accessors of simple-type attributes
		String urlLocation = "http://www.web3d.org/specifications/java/";
		meta3.setName(metaObject.NAME_REFERENCE).setContent(urlLocation + "X3DJSAIL.html");
		meta4.setName(metaObject.NAME_GENERATOR).setContent(thisSceneName + ".java");
		
		Date dateTimeValue = new Date(System.currentTimeMillis());
		SimpleDateFormat dateFormat = new SimpleDateFormat("d MMMM yyyy");
		meta6.setName(metaObject.NAME_MODIFIED).setContent(dateFormat.format(dateTimeValue));
		meta5.setName(metaObject.NAME_CREATED).setContent("6 September 2016");
		
		meta7.setName(metaObject.NAME_GENERATOR).setContent("X3D Java Scene Access Interface Library (X3DJSAIL)");
		meta8.setName(metaObject.NAME_GENERATOR).setContent(urlLocation + subdirectoryPath + thisProgramFile);
		meta9.setName(metaObject.NAME_GENERATOR).setContent("Netbeans http://www.netbeans.org");
		meta10.setName(metaObject.NAME_CREATOR).setContent("Don Brutzman");
		meta11.setName(metaObject.NAME_REFERENCE).setContent("https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/java/examples/" 
						+ thisSceneName + ".x3d");
		meta12.setName(metaObject.NAME_REFERENCE).setContent("Console output, ClassicVRML encoding, VRML97 encoding and pretty-print documentation:");
		meta13.setName(metaObject.NAME_REFERENCE).setContent(thisSceneName + ".txt");
		meta14.setName(metaObject.NAME_REFERENCE).setContent(thisSceneName + ".x3dv");
		meta15.setName(metaObject.NAME_REFERENCE).setContent(thisSceneName + ".wrl");
		meta16.setName(metaObject.NAME_REFERENCE).setContent(thisSceneName + ".html");
		meta17.setName("X3dValidator").setContent("https://savage.nps.edu/X3dValidator?url=" + 
															  urlLocation + subdirectoryPath + thisSceneName + ".x3d");
		meta18.setName(metaObject.NAME_IDENTIFIER).setContent(urlLocation + subdirectoryPath + thisSceneName + ".x3d");
		meta19.setName(metaObject.NAME_LICENSE).setContent("../license.html");
		// name="special test" throws exception as expected:
		meta20.setName("SpecialTest").setContent("tested sat: name value cannot contain embedded space character");
		
		// test utility method
		if (head.findMetaByName(metaObject.NAME_TITLE) == null) // tested satisfactorily
			System.out.println ("*** head.findMetaByName() method failed to find meta element...");
		
		x3dModel.setScene(scene);
		
		// ========== More object declarations, some with DEF values ==========
		
		String       defaultViewpointDEF = "DefaultView";
		String       topDownViewpointDEF = "TopDownView";
            ViewpointGroupObject  viewpointGroup = new ViewpointGroupObject(); //  requires <component name='Navigation' level='3'/>
		ViewpointObject defaultViewpoint = new ViewpointObject(defaultViewpointDEF);
		ViewpointObject topDownViewpoint = new ViewpointObject(topDownViewpointDEF);
		String          worldInfoDEFname = "WorldInfoDEF";
		WorldInfoObject   worldInfoNode  = new WorldInfoObject(worldInfoDEFname);
		WorldInfoObject   worldInfoCopy1 = new WorldInfoObject();
		WorldInfoObject   worldInfoCopy2 = new WorldInfoObject();
		String  logoGeometryTransformDEF = "LogoGeometryTransform";
                TransformObject    logoTransform = new TransformObject(logoGeometryTransformDEF);
		AnchorObject          siteAnchor = new AnchorObject();
		ShapeObject             boxShape = new ShapeObject();
		BoxObject                    box = new BoxObject();
		String              lineShapeDEF = "LineShape";
		ShapeObject         lineShape    = new ShapeObject(lineShapeDEF);
	 IndexedLineSetObject indexedLineSet = new IndexedLineSetObject();
		AppearanceObject   ilsAppearance = new AppearanceObject();
		MaterialObject	   ilsMaterial   = new MaterialObject();
		AppearanceObject   boxAppearance = new AppearanceObject();
		MaterialObject       boxMaterial = new MaterialObject();
		ImageTextureObject  x3dJsaiImage = new ImageTextureObject();
		String                  boxPathAnimatorDEF = "BoxPathAnimator";
		PositionInterpolatorObject boxPathAnimator = new PositionInterpolatorObject(boxPathAnimatorDEF);
		String            inlineSceneDef = "inlineSceneDef";
		InlineObject         inlineScene = new InlineObject(inlineSceneDef);
		IMPORTObject     importStatement = new IMPORTObject();
		EXPORTObject     exportStatement = new EXPORTObject();
		CollisionObject  collisionObject = new CollisionObject();
		
		// ========== Construct scene graph parent-children relationships ==========
		
		defaultViewpoint.setDescription("Hello X3DJSAIL");
		float[] topDownPosition    = {0.0f, 100, 0};
		float[] topDownOrientation = {1, 0, 0, -1.570796f};
		topDownViewpoint.setDescription("top-down view from above").setPosition(topDownPosition).setOrientation(topDownOrientation);
		viewpointGroup.setDescription("Available viewpoints").addChildren(defaultViewpoint);
		viewpointGroup.addChildren(topDownViewpoint); // confirmed strict node typing for all methods
//		viewpointGroup.addChildren(siteAnchor); // test: confirmed node typing checks throw exception as expected
		scene.addChildren(viewpointGroup); // utility method to set single X3DNode
		
		// test utility methods
		if (defaultViewpoint.findNodeByDEF(defaultViewpointDEF) == null) // tested satisfactorily
			System.out.println ("*** unit test: defaultViewpoint.findNodeByDEF() method failed...");
		if (scene.findNodeByDEF(defaultViewpointDEF) == null) // tested satisfactorily
			System.out.println ("*** unit test: scene.findNodeByDEF() method failed...");
		if (defaultViewpoint.findAncestorSceneObject()== null) // tested satisfactorily
			System.out.println ("*** unit test: defaultViewpoint.findAncestorScene() method failed...");
		if (defaultViewpoint.findAncestorX3DObject()== null) // tested satisfactorily
			System.out.println ("*** unit test: defaultViewpoint.findAncestorX3D() method failed...");
		
		worldInfoNode.setTitle ("HelloWorldProgram produced by X3D Java SAI Library (X3DJSAIL)");
		worldInfoCopy1.setUSE(worldInfoDEFname); // setUSE via string
		worldInfoCopy2.setUSE(worldInfoNode);    // setUSE via node
//		worldInfoCopy2.addComments("test exception at runtime"); // test sat: cannot add content to USE node
		scene.addChildren(worldInfoNode);
		scene.addChildren(worldInfoCopy1);
		scene.addChildren(worldInfoCopy2);
                // utility methods for SceneObject
		scene.addChild   (new MetadataStringObject("scene.addChildMetadataObject").setName("test").setValue("Top-level root Metadata node beneath Scene needs to be one of '-children' in JSON encoding"));
		scene.addChild   (new       LayerSetObject("scene.addChildLayerSetObjectTest"));
		
		scene.addChildren(logoTransform);
		float[] rootTranslationOffset = {0.0f, 1.5f, 0.0f};
			 logoTransform.setTranslation(rootTranslationOffset);
		SFVec3fObject translationSFVec3f = new SFVec3fObject(rootTranslationOffset); // alternate approach
		     logoTransform.setTranslation(translationSFVec3f.toFloatArray());        // alternate approach
		     logoTransform.setChildren(siteAnchor);
		        siteAnchor.addChildren(boxShape);
		
		String[] siteAddresses = {"../X3DJSAIL.html", urlLocation + "X3DJSAIL.html"};
		siteAnchor.setUrl(siteAddresses).setDescription("select for X3D Java SAI Library (X3DJSAIL) description");
		  boxShape.setAppearance(boxAppearance);
		String greenMaterialDEF = "GreenMaterial";
		boxAppearance.setMaterial(boxMaterial);
		  boxMaterial.setDEF(greenMaterialDEF);
		String[] imageUrl = {              "images/X3dJavaSceneAccessInterfaceSaiLibrary.png",
							 urlLocation + "examples/images/X3dJavaSceneAccessInterfaceSaiLibrary.png"};
		x3dJsaiImage.setUrl(imageUrl);
		boxAppearance.setTexture(x3dJsaiImage);
		  boxMaterial.setDiffuseColor(MaterialObject.DIFFUSECOLOR_DEFAULT_VALUE);    // reset
		  boxMaterial.setDiffuseColor(SFColorObject.CYAN);                           // equivalent
		  boxMaterial.setDiffuseColor(new float[] {0, 1, 1});                        // equivalent
		  boxMaterial.setDiffuseColor((new SFColorObject(0x00FFFF)).toFloatArray()); // equivalent
		  boxMaterial.setDiffuseColor( new SFColorObject(0.0f, 1.0f, 1.0f));         // equivalent
		  boxMaterial.setEmissiveColor(new SFColorObject(SFColorObject.CYAN).complementRGB().scaleRGB(0.8f).normalizeClip());
		  
		  boxMaterial.setTransparency(0.1f);                                 // equivalent
		  boxMaterial.setTransparency((new SFFloatObject(0.1f)).getValue()); // equivalent
		  boxMaterial.setTransparency((new SFFloatObject(0.1 )).getValue()); // equivalent utility method also allowing double-precision downcasting
		
		float[] boxSize = {2.0f, 2.0f, 2.0f};
		box.setSize(boxSize).setCssClass("untextured").setDEF("test-NMTOKEN_regex.0123456789");
		boxShape.setDEF("BoxShape").setGeometry(box);
		
		scene.addChildren(lineShape);
		lineShape.setAppearance(ilsAppearance);
		ilsAppearance.setMaterial(ilsMaterial);
		ilsMaterial.setEmissiveColor(SFColorObject.DARKORCHID);
		lineShape.setGeometry(indexedLineSet);
		 
		// note last coordinate only used by interpolator
		float[] boxPathPointArray = new float[] {0f, 1.5f, 0f,	2, 1.5f, 0,	2, 1.5f, -2,	-2, 1.5f, -2,	-2, 1.5f, 0,	0, 1.5f, 0};
		  int[] boxPathIndexArray = new   int[] {0, 1, 2, 3, 4, 0};
		float[] boxPathKeyArray   = new float[] {0, 0.125f, 0.375f, 0.625f, 0.875f, 1};
		MFVec3fObject     boxPath = new MFVec3fObject();
		 boxPath.setValue(boxPathPointArray);
		indexedLineSet.setCoordIndex(boxPathIndexArray);
		CoordinateObject boxCoordinateNode = new CoordinateObject();
		boxCoordinateNode.setPoint(boxPathPointArray);
		indexedLineSet.setCoord(boxCoordinateNode);
		
		// test alternate type forms
		boxCoordinateNode.setPoint(new MFVec3fObject(new float[] {-8f,-9f,4f,-7f,-7f,5f,-3f,0f,5f}));				//  floats to  float array to MFVec3f
		boxCoordinateNode.setPoint(new MFVec3fObject(new double[] {-8f,-9f,4f,-7f,-7f,5f,-3f,0f,5f}));				//  floats to double array to MFVec3f
		boxCoordinateNode.setPoint(new MFVec3fObject(new double[] {-8,-9,4,-7,-7,5,-3,0,5}));						//    ints to double array to MFVec3f
		boxCoordinateNode.setPoint(new MFVec3fObject(new double[] {-8.0,-9.0,4.0,-7.0,-7.0,5.0,-3.0,0.0,5.0}));		// doubles to double array to MFVec3f
//		original SAI interface returns void, cannot be pipelined, candidate specification change
//		boxCoordinateNode.setPoint(new MFVec3fObject().setValue(new float[] {-8f,-9f,4f,-7f,-7f,5f,-3f,0f,5f}));	//  floats to float array to MFVec3f
		boxCoordinateNode.setPoint(new MFVec3fObject().setValue(new double[] {-8f,-9f,4f,-7f,-7f,5f,-3f,0f,5f}));	//  floats to double array to MFVec3f
		boxCoordinateNode.setPoint(new MFVec3fObject().setValue(new double[] {-8,-9,4,-7,-7,5,-3,0,5}));			// doubles to double array to MFVec3f
		boxCoordinateNode.setPoint(new MFVec3fObject().setValue(new double[] {-8.0,-9.0,4.0,-7.0,-7.0,5.0,-3.0,0.0,5.0}));// doubles to double array to MFVec3f
		boxCoordinateNode.setPoint(boxPathPointArray); // restore
				
		boxPathAnimator.setKey (boxPathKeyArray);
//		boxPathAnimator.setKey (boxPathIndexArray); // TODO alternate method allowing ints?
		boxPathAnimator.setKeyValue(boxPath);
		// Feature: node object constructor with string parameter sets DEF name
		String orbitClockDEF = "OrbitClock";
		TimeSensorObject orbitClock = new TimeSensorObject(orbitClockDEF);
		orbitClock.setCycleInterval(8).setEnabled(true).setLoop(true);
		ROUTEObject orbitClockROUTE = new ROUTEObject();
		orbitClockROUTE.setFromNode(orbitClockDEF)   .setFromField(TimeSensorObject.fromField_FRACTION_CHANGED)
					   .setToNode(boxPathAnimatorDEF).setToField  (CoordinateInterpolatorObject.toField_SET_FRACTION);
		ROUTEObject orbitPositionROUTE = new ROUTEObject();
		orbitPositionROUTE.setFromNode(boxPathAnimatorDEF)    .setFromField(CoordinateInterpolatorObject.fromField_VALUE_CHANGED)
					      .setToNode(logoGeometryTransformDEF).setToField  ("set_" + TransformObject.toField_TRANSLATION);	// test set_
		// TODO test addition of f suffix on a field name that doesn't include it already
		scene.addChildren(boxPathAnimator);
		scene.addChildren(orbitClock);
		scene.addChildren(orbitClockROUTE);
		scene.addChildren(orbitPositionROUTE);
		
		// ========== Text ==========
		
		String         textTransformDEF = "TextTransform";
		TransformObject   textTransform = new TransformObject(textTransformDEF);
		ShapeObject           textShape = new ShapeObject();
		AppearanceObject textAppearance = new AppearanceObject();
		MaterialObject     textMaterial = new MaterialObject();
		TextObject          messageText = new TextObject();
		FontStyleObject     myFontStyle = new FontStyleObject();
		
		float[] textOffset = new float[] {0f, -1.5f, 0f};
		 textTransform.setTranslation(textOffset);
		     textShape.setAppearance(textAppearance);
		textAppearance.setMaterial(textMaterial); // demonstrate reuse of object
	 	  textMaterial.setUSE(greenMaterialDEF);  // demonstrate reuse of object
		if (!textMaterial.getUSE().equals(greenMaterialDEF)) // tested satisfactorily
			System.out.println ("*** setUSE()/getUSE() method failed...");
		
		   textShape.setGeometry(messageText);
		   String[]          textStringArray = new String[] {"X3D Java", "SAI Library", "X3DJSAIL"};
		   ArrayList<String> textStringArrayList = new ArrayList<>();
		   Collections.addAll(textStringArrayList, textStringArray);
		   messageText.setString(textStringArray);                         // test alternate method
		   messageText.setString(textStringArrayList);                     // test alternate method
		   messageText.setString(new MFStringObject(textStringArray));     // test alternate method
		   messageText.setString("Hello single line of text");             // test alternate method
		   messageText.setString(new SFStringObject("Hello single line")); // test alternate method
		   messageText.setString(new MFStringObject(textStringArray));     // test alternate method
		   
		   messageText.setFontStyle(myFontStyle);
		   myFontStyle.setFamily (FontStyleObject.FAMILY_SERIF)
		              .setJustify(new String[] {"MIDDLE","MIDDLE"}) // alternate form, but no error checking until run time
		              .setJustify(FontStyleObject.JUSTIFY_MIDDLE_MIDDLE)  // preferred form, error checking at compile time
		              .setTopToBottom(FontStyleObject.TOPTOBOTTOM_DEFAULT_VALUE);
		   // backslash is Java String escape character, &quot; is equivalent XML character entity for " quotation mark
		   // Within a Java String, literal \" is read as " when parsed
		   messageText.addComments("Comment example A, plain quotation marks:  He said, \"Immel did it!\"");  
		   messageText.addComments("Comment example B, XML character entities: He said, &quot;Immel did it!&quot;");
		   MetadataSetObject metadataStringsSet = new MetadataSetObject().setName("EscapedQuotationMarksMetadataSet");
		   metadataStringsSet.addValue(new MetadataStringObject("quotesTestC", // note use of utility constructor
								   "MFString example C, backslash-escaped quotes: He said, \"Immel did it!\""));
//		   no need to use &quot; inside a Java String
//		   metadataStringsSet.addValue(new MetadataStringObject().setName("quotesTestD").setValue(
//								   "MFString example D, XML character entities:   He said, \\&quot;Immel did it!\\&quot;"));
		   metadataStringsSet.addValue(new MetadataStringObject("extraChildTest","checks MetadataSetObject addValue() method"));
		   messageText.setMetadata(metadataStringsSet);
			 
		scene.addChildren(textTransform);
//		scene.addChildren(new MFNode(shape1, textTransform)); // TODO alternate invocation syntax
		textTransform.addChildren(textShape);
		collisionObject.addComments("test containerField='proxy'")
			.setProxy(new ShapeObject("ProxyShape")
			// test MFString alternatives, last one wins: MFStringObject single-string XML syntax, MFStringObject String[] array, String[] array
			.setGeometry(new TextObject().setString(new MFStringObject("\"One, Two, Three\" \"\" \"He said, \"Immel did it!\"\"")))
			.setGeometry(new TextObject().setString(new MFStringObject(new String [] {"One, Two, Three", "", "He said, \"Immel did it!\""})))
			.setGeometry(new TextObject().setString(new String [] {"One, Two, Three", "", "He said, \"Immel did it!\""}))
				.addComments(" alternative XML encoding: Text string='\"One, Two, Three\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"' ")
				.addComments(" alternative Java source: .setString(new String [] {\"One, Two, Three\", \"\", \"He said, \\\"Immel did it!\\\"\"})")
				.addComments(" reference: http://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamplesIndex.html "));
		
		textTransform.addChild(collisionObject);
		
		CommentsBlock commentsBlockDevo = new CommentsBlock();
		commentsBlockDevo.addComments("It's a beautiful world").addComments("... for you!")
				         .addComments("https://en.wikipedia.org/wiki/Beautiful_World_(Devo_song)");
		         textTransform.addChildren(commentsBlockDevo);
		
		// check that addComments support for X3D statements is working properly
		String[] commentArray12 = {"comment #1", "comment #2"};
		String[] commentArray34 = {"comment #3", "comment #4"};
		CommentsBlock anotherCommentsBlock = new CommentsBlock(commentArray12);
		anotherCommentsBlock.addComments(commentArray34);
		// now reset and perform an equivalent repeat for testing
		anotherCommentsBlock.clear().addComments(commentArray12).addComments(commentArray34); 
		head.addComments(anotherCommentsBlock); // test

		// show intermediate test results
//		System.out.println ("===========================================");
//		System.out.println ("textMaterial:");
//		System.out.println (    textMaterial.toStringX3D());
//		System.out.println ("===========================================");
//		System.out.println ("shape1:");
//		System.out.println (    boxShape.toStringX3D());
		
		float[]   rotationTupleArray1 = new float[]{0.0f, 1.0f, 0.0f, 0.0f};		// preferred default value
		@SuppressWarnings("MismatchedReadAndWriteOfArray")
		float[]   rotationTupleError1 = new float[]{0.0f};							// illegal value used for testing
		@SuppressWarnings("MismatchedReadAndWriteOfArray")
		float[]   rotationTupleError2 = new float[]{0.0f, 1.0f, 0.0f, 0.0f, 0.0f};	// illegal value used for testing
		@SuppressWarnings("MismatchedReadAndWriteOfArray")
		float[] rotationBadAxisError3 = new float[]{0.0f, 0.0f, 0.0f, 0.0f};		// illegal value used for testing
		SFRotationObject rotation1;
		rotation1 = new SFRotationObject();									// equivalent
		rotation1 = new SFRotationObject(SFRotationObject.DEFAULT_VALUE);	// equivalent
		rotation1 = new SFRotationObject(0, 1, 0, 0);				// equivalent constructor, integer axis
		rotation1 = new SFRotationObject(0.0, 1.0, 0.0, 0.0);		// equivalent constructor, doubles (cast to floats)
		rotation1 = new SFRotationObject(0.0f, 1.0f, 0.0f, 0.0f);	// equivalent constructor, floats  (matching base precision)
		rotation1 = new SFRotationObject(rotationTupleArray1);		// equivalent constructor, float array
//		rotation1 = new SFRotationObject(rotation1Tuple);			// throws exception as expected
//		rotation1 = new SFRotationObject(rotationBadAxis);			// throws exception as expected
//		rotation1 = new SFRotationObject(rotation5Tuple);			// throws exception as expected

		rotation1.setValue(rotationTupleArray1);
//		rotation1.setValue(rotation1Tuple);	// throws exception as expected
//		rotation1.setValue(rotation5Tuple); // throws exception as expected
//		rotation1.setValue(rotationBadAxis);// throws exception as expected
		
		float[] rotation3Tuple = new float[]{0.0f, 1.0f, 0.0f, SFRotationObject.degreesToRadians(270.0f),	// float
											  0.0f, 1.0f, 0.0f, SFRotationObject.degreesToRadians(  0),		// integer
											  0.0f, 1.0f, 0.0f, SFRotationObject.degreesToRadians( 90.0) };	// double
		MFRotationObject rotationObject;
		
		rotationObject = new MFRotationObject();								// set empty, creates default (empty array)
//		rotationObject = new MFRotationObject(null);							// will not compile, which is good		
		rotationObject = new MFRotationObject(new float[]{});					// set empty float array, matches default
//		rotationObject = new MFRotationObject(new float[]{0.0f});				// test illegal array, throws exception as expected
//		rotationObject = new MFRotationObject(new float[]{0.0f, 1.0f, 0.0f, 0.0f,
//														 0.0f});				// test illegal array, throws exception as expected
		rotationObject = new MFRotationObject(rotationTupleArray1);				//  4 floats, single rotation
		rotationObject = new MFRotationObject(rotation3Tuple);					// 12 floats,  three rotations
		rotationObject = new MFRotationObject(SFRotationObject.DEFAULT_VALUE);	//  4 floats, single rotation
		
//		rotationObject = new MFRotationObject(SFRotationObject.DEFAULT_VALUE,			// TODO series of float arrays
//											  SFRotationObject.PREFERRED_DEFAULT_VALUE);// equivalent, one SFRotation

		String orientationInterpolatorDEF = "SpinInterpolator";
		OrientationInterpolatorObject orientationInterpolatorObject = new OrientationInterpolatorObject(orientationInterpolatorDEF);
		orientationInterpolatorObject.setKeyValue (rotationObject); // test utility method to allow object type
		orientationInterpolatorObject.setKeyValue (rotation3Tuple); // set desired value for this scene
		
		float[] keyTime3Tuple  = new float[]{0f, 0.5f, 1f};		// preferred default value
		ArrayList<Float> keyTime3TupleList;
		keyTime3TupleList = new ArrayList<>();
		// TODO show copyArray to initialize list
//		keyTime3TupleList.addAll(Arrays.asList(keyTime3Tuple));
		keyTime3TupleList.clear();
		keyTime3TupleList.add(0.0f);
		keyTime3TupleList.add(0.5f);
		keyTime3TupleList.add(1f);	// 3 time-fraction floats correspond to 12 rotation floats
		
		orientationInterpolatorObject.setKey(keyTime3Tuple);	// equivalent
		orientationInterpolatorObject.setKey(keyTime3TupleList);// equivalent
		// TODO check tuple size that adding key, or adding keyValue, matches?
		// TODO what about during construction? perhaps add validate() methods instead
		
		// Feature: node object constructor with string parameter sets DEF name
		String spinClockDEF = "SpinClock";
		TimeSensorObject spinClock = new TimeSensorObject(spinClockDEF);
		spinClock.setCycleInterval(5).setEnabled(true).setLoop(true);
		
		ROUTEObject clockROUTE = new ROUTEObject();
		clockROUTE.setFromNode(orientationInterpolatorDEF).setFromField("value_changed")// equivalent, typos possible
				  .setToNode(textTransformDEF).setToField("rotation");
		clockROUTE.setFromNode(orientationInterpolatorDEF)
				  .setFromField(OrientationInterpolatorObject.fromField_VALUE_CHANGED)	// equivalent, correctly named
				  .setToNode(textTransformDEF)
				  .setToField(TransformObject.toField_ROTATION);
		
		ROUTEObject  spinROUTE = new ROUTEObject();
		spinROUTE.setFromNode(spinClockDEF).setFromField("fraction_changed")
				 .setToNode(orientationInterpolatorDEF).setToField("set_fraction");	// equivalent, typos possible
		spinROUTE.setFromNode(spinClockDEF)
				 .setFromField(TimeSensorObject.fromField_FRACTION_CHANGED)
				 .setToNode(orientationInterpolatorDEF)
				 .setToField(OrientationInterpolatorObject.toField_SET_FRACTION);	// equivalent, correctly named
		
		CommentsBlock spinnerComment = new CommentsBlock("repeatedly spin 180 degrees as a readable special effect");
		scene.addChildren(spinnerComment);
		scene.addChildren(orientationInterpolatorObject); // TODO pipelining not working for statements?
		scene.addChildren(spinClock);
		scene.addChildren(spinROUTE); // ROUTEObject implements X3DChildNodeInterface
		scene.addChildren(clockROUTE);
		
		String colorTypeConversionScriptDEF = "colorTypeConversionScript";
		ScriptObject colorTypeConversionScript = new ScriptObject(colorTypeConversionScriptDEF);
		String inputColorFieldName   = "colorInput";
		String outputColorsFieldName = "colorsOutput";
		fieldObject inputColorField  = new fieldObject(inputColorFieldName, fieldObject.TYPE_SFCOLOR, fieldObject.ACCESSTYPE_INPUTONLY); // equivalent
		inputColorField.setName(inputColorFieldName).setType(fieldObject.TYPE_SFCOLOR).setAccessType(fieldObject.ACCESSTYPE_INPUTONLY);  // can be reset once created
//		inputColorField.setName			("bad NMTOKEN value");		// fails validity test as expected
//		inputColorField.setType			("bad type value");			// fails validity test as expected
//		inputColorField.setAccessType	("bad accessType value");	// fails validity test as expected

		// must set all field parameters at instantiation so that it is valid
		fieldObject outputColorsField = new fieldObject(outputColorsFieldName, fieldObject.TYPE_MFCOLOR, fieldObject.ACCESSTYPE_OUTPUTONLY); 
		colorTypeConversionScript.addField(inputColorField);
		colorTypeConversionScript.addField(outputColorsField);
		colorTypeConversionScript.setSourceCode   ("ecmascript: // test 1 \n");
		colorTypeConversionScript.appendSourceCode("{\n	// test 2\n}\n");
		colorTypeConversionScript.clearSource();
		colorTypeConversionScript.setSourceCode("ecmascript:" + "\n"
				+ "\n"
				+ "function " + inputColorFieldName + " (eventValue)" + " // Example source code" + "\n"
				+ "{" + "\n" 
				+ "   " + outputColorsFieldName + " = new MFColor(eventValue); // assigning value sends output event" + "\n" 
				+ "// Browser.print('" + inputColorFieldName + "=' + eventValue + ', " + outputColorsFieldName + "=' + " + outputColorsFieldName + " + '\\n');\n" 
				+ "}");
		// test utility method
		if (colorTypeConversionScript.findFieldByName(inputColorFieldName) == null) // tested satisfactorily
			System.out.println ("*** Script.findFieldByName() method failed...");
  
		String    backgroundDEF = "GradualBackground";
		String colorAnimatorDEF = "ColorAnimator";
		String    colorClockDEF = "ColorClock";
		GroupObject backgroundGroup = new GroupObject("BackgroundGroup");
		BackgroundObject           background = new BackgroundObject(backgroundDEF);
		MFColorObject         backgroundColor = new MFColorObject(); // TODO apply
		ColorInterpolatorObject colorAnimator = new ColorInterpolatorObject(colorAnimatorDEF);
		TimeSensorObject           colorClock = new TimeSensorObject(colorClockDEF);
		colorClock.setCycleInterval(60).setLoop(true);
		colorAnimator.setKey     (keyTime3Tuple);     // equivalent
		colorAnimator.setKey     (keyTime3TupleList); // equivalent
		float[] colorArray = new float[9];
		System.arraycopy (SFColorObject.AZURE,  0, colorArray, 0, 3);
		System.arraycopy (SFColorObject.INDIGO, 0, colorArray, 3, 3);
		System.arraycopy (SFColorObject.AZURE,  0, colorArray, 6, 3);
		colorAnimator.setKeyValue(colorArray).addComments("AZURE to INDIGO and back again");
		
		ROUTEObject clockToColorAnimatorROUTE = new ROUTEObject();
		clockToColorAnimatorROUTE.setFromNode(colorClockDEF).setFromField(TimeSensorObject.fromField_FRACTION_CHANGED)
				                 .setToNode(colorAnimatorDEF).setToField(ColorInterpolatorObject.toField_SET_FRACTION);
		ROUTEObject colorAnimatorToColorScriptROUTE = new ROUTEObject();
		colorAnimatorToColorScriptROUTE.setFromNode(colorAnimatorDEF).setFromField(ColorInterpolatorObject.fromField_VALUE_CHANGED)
				                      .setToNode(colorTypeConversionScriptDEF).setToField(inputColorFieldName);
		ROUTEObject colorScriptToBackgroundROUTE = new ROUTEObject();
		colorScriptToBackgroundROUTE.setFromNode(colorTypeConversionScriptDEF).setFromField(outputColorsFieldName)
				                      .setToNode(backgroundDEF).setToField(BackgroundObject.toField_SKYCOLOR);
		scene.addChildren(backgroundGroup);
		backgroundGroup.addChildren(background);
		backgroundGroup.addChildren(colorTypeConversionScript);
		backgroundGroup.addChildren(colorAnimator);
		backgroundGroup.addChildren(colorClock);
		backgroundGroup.addChildren(colorScriptToBackgroundROUTE);
		backgroundGroup.addChildren(colorAnimatorToColorScriptROUTE);
		backgroundGroup.addChildren(clockToColorAnimatorROUTE);
		
		      ProtoDeclareObject       ArtDeco01ProtoDeclare = new       ProtoDeclareObject  ();
		ExternProtoDeclareObject ArtDeco02ExternProtoDeclare = new ExternProtoDeclareObject  ();
		    ProtoInterfaceObject              protoInterface = new       ProtoInterfaceObject();
		         ProtoBodyObject              protoBody      = new       ProtoBodyObject     ();
			 // ProtoInstanceObject has two constructors, either no value, or else both DEFname and prototypeName
		     ProtoInstanceObject      ArtDeco01ProtoInstance = new       ProtoInstanceObject ().setName("ArtDeco01Material")
								                                                               .setContainerField ("material");
		     ProtoInstanceObject      ArtDeco02ProtoInstance = new       ProtoInstanceObject ().setName("ArtDeco02Material")
								                                                               .setDEF ("ArtDeco02MaterialDEF")
								                                                               .setContainerField ("material");
			      MaterialObject           ArtDeco01Material = new       MaterialObject      ();
				  MFStringObject      ArtDeco01_url_MFString = new       MFStringObject      ();
				        String[]   ArtDeco01_url_StringArray = new       String[] { "initial value" };
				     fieldObject          description01Field = new       fieldObject         ();
				fieldValueObject     description01FieldValue = new       fieldValueObject    ();
				     fieldObject          description02Field = new       fieldObject         ();
				fieldValueObject     description02FieldValue = new       fieldValueObject    ();
			   TouchSensorObject		 internalTouchSensor = new		 TouchSensorObject   ();
						ISObject			      internalIS = new		 ISObject			 ();
				   connectObject			 internalConnect = new		 connectObject		 ();

			  description01Field.setName("description")
							  .setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
							  .setType(fieldObject.TYPE_SFSTRING)
							  .setValue("ArtDeco01Material prototype is a Material node")
							  .setAppinfo("tooltip for descriptionField");
			  description01FieldValue.setName(description01Field.getName())
//							  .setAppinfo("tooltip for description01Field") // TODO
							  .setValue("ArtDeco01Material can substitute for a Material node"); // overrides initial description01Field value
			  description02Field.setName("description")
							  .setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
							  .setType(fieldObject.TYPE_SFSTRING)
							  .setValue("ArtDeco02Material is another Material node") // not legal for ExternProtoDeclare field, see test below
							  .setAppinfo("tooltip for descriptionField");
			  description02FieldValue.setName(description02Field.getName())
							  .setValue("ArtDeco02Material can substitute for another Material node"); // overrides initial description02Field value
			  ArtDeco01ProtoDeclare.setName(nameArtDeco01Material)
								   .setAppinfo("tooltip: ArtDeco01Material prototype is a Material node")
								   .setProtoInterface(protoInterface)
								   .setProtoBody(protoBody);
					 protoInterface.setField(null); // test setting null - operation succeessfully ignored as expected, no exception thrown
					 protoInterface.setField(description01Field);
					 // unit test: addField check for duplicate names of fields
//					 protoInterface.addField(description01Field); // successful test, throws exception as expected
					 protoInterface.addField(new fieldObject("enabled", fieldObject.TYPE_SFBOOL, fieldObject.ACCESSTYPE_INPUTOUTPUT,new SFBoolObject(true).toString()));
					 protoBody.setChildren (new CommentsBlock("Initial node of ProtoBody determines prototype node type")); // TODO vararg multiple strings
					 protoBody.addChildren(ArtDeco01Material); // TODO first node (other than comment) defines type, this case tests SFNode different than X3DChildNode
					 // the following diagnostic must follow addition of ArtDeco01Material to protoBody and ArtDeco01ProtoDeclare to scene graph
					 protoBody.addChildren (new CommentsBlock("[HelloWorldProgram diagnostic] should be connected to scene graph: ArtDeco01ProtoDeclare.getNodeType()=\"" + ArtDeco01ProtoDeclare.getNodeType() + "\""));
					 protoBody.addChildren (new CommentsBlock(" presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types"));
					 protoBody.addChildren(internalTouchSensor); // successful test of follow-on node
					 internalTouchSensor.setDescription("within ProtoBody").setIS(internalIS);
					 internalIS.addConnect(internalConnect); // careful if you use setConnect since that method wipes out other connections
					 internalConnect.setNodeField("description").setProtoField("description");
					 internalIS.addConnect(new connectObject().setProtoField("enabled").setNodeField(TimeSensorObject.toField_ENABLED));
					 
		scene.addChildren(ArtDeco01ProtoDeclare);
		
		// Test WARNING_PROTOINSTANCE_NOT_FOUND works satisfactorily
//		ProtoDeclareObject ArtDeco03ProtoDeclare = new ProtoDeclareObject().setName("ArtDeco03");
//		scene.addChildren (ArtDeco03ProtoDeclare);

		float[] diffuseColor    = {0.282435f, 0.085159f, 0.134462f};
		ArtDeco01Material.setAmbientIntensity(0.25f).setShininess(0.127273f)
				         .setDiffuseColor(diffuseColor)
				         .setSpecularColor(new SFColorObject(0.276305f, 0.11431f, 0.139857f));

		ArtDeco01_url_MFString.append("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02Material");
		// MFString SAI interface returns void, so method pipelining not possible.  Repeat as necessary.
		ArtDeco01_url_MFString.append("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02Material");

		// initial array size 1
		ArtDeco01_url_StringArray[0] = "http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02Material";
		// syntax to reinitialize size http://stackoverflow.com/questions/2564298/java-how-to-initialize-string
		ArtDeco01_url_StringArray = new String[] 
			{ "http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02Material",
			  "http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02Material"
			};

		ArtDeco02ExternProtoDeclare.setName("ArtDeco02Material")
								   .setUrl(ArtDeco01_url_StringArray)    // variable-length String array
//								   .setUrl(ArtDeco01_url_StringArray[0]) // TODO test singleton String
//								   .setUrl(ArtDeco01_url_MFString)       // TODO test MFStringObject
								   .setAppinfo("this is a different Material node");
		scene.addChildren(ArtDeco02ExternProtoDeclare);
		// getNodeType() prerequisite: must first be added to Scene graph
		ArtDeco02ExternProtoDeclare.addComments(new CommentsBlock("[HelloWorldProgram diagnostic] ArtDeco02ExternProtoDeclare.getNodeType()=\"" + 
				ArtDeco02ExternProtoDeclare.getNodeType() + "\"")); // returns "UNKNOWN_EXTERNALPROTOTYPE_SUPPORT_NOT_IMPLEMENTED" as expected
				// TODO X3DJSAIL needs to load/inspect ProtoDeclare corresponding to ExternProtoDeclare url
		
		// ExternProtoDeclare field definitions cannot include value, they are defined within original ProtoDeclare
//		ArtDeco02ExternProtoDeclare.setField(description02Field); // throws exception as expected
		description02Field.clearValues(); // clear prior value
		ArtDeco02ExternProtoDeclare.setField(description02Field);
		// Note that getting a fieldList lets programmer reach into contained elements
//		ArtDeco02ExternProtoDeclare.getFieldList().get(0).setValue("test exception, this should fail validation"); // proceeds unchecked
		ArtDeco02ExternProtoDeclare.validate(); // test satisfactory: validation catches preceding error

		ArtDeco01ProtoInstance.setContainerField("material"); // must occur prior to adding to scene; TODO make this unnecessary for Java export?
		ArtDeco01ProtoInstance.setFieldValue(description01FieldValue);
		// test addFieldValue validate() check for duplicate names of fields
//		ArtDeco01ProtoInstance.addFieldValue(description01FieldValue); // test sat, throws exception as expected
		
		ArtDeco02ProtoInstance.setContainerField("material"); // must occur prior to adding to scene; TODO make this unnecessary?
		ArtDeco02ProtoInstance.setFieldValue(description02FieldValue);
		// getNodeType prerequisite: ProtoInstance must first be connected to scene graph
		// TODO need to distinguish between ProtoInstance and ProtoDeclare/ExternProtoDeclare and field/fieldValue; also avoid duplicate naming
				 
		scene.addChildren(new CommentsBlock("Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place")); 
		// TODO test for improper node type when ProtoInstance is added in wrong place
//		scene.addChildren(ArtDeco01ProtoInstance); 
//		scene.addChildren(ArtDeco02ProtoInstance); 

		ShapeObject testShape1 = new ShapeObject("TestShape1"); // constructor also initializes DEF
		ShapeObject testShape2 = new ShapeObject("TestShape2");
		ShapeObject testShape3 = new ShapeObject("TestShape3");
		AppearanceObject testAppearance1 = (new AppearanceObject("TestAppearance1")).setMaterial(new MaterialObject("TestToBeOverridden1"));
		AppearanceObject testAppearance2 = (new AppearanceObject("TestAppearance2")).setMaterial(new MaterialObject("TestToBeOverridden2"));
		AppearanceObject testAppearance3 = (new AppearanceObject("TestAppearance3")).setMaterial(new MaterialObject("TestToBeOverridden3"));
		testAppearance1.addComments("ArtDeco01Material prototype goes here... TODO ensure setContainerField is handled in exported Java").setMaterial(ArtDeco01ProtoInstance); // successful use of overloaded, specially typed method
		testAppearance2.addComments("ArtDeco02Material prototype goes here... TODO ensure setContainerField is handled in exported Java").setMaterial(ArtDeco02ProtoInstance); // successful use of overloaded, specially typed method
		// test ProtoInstance USE
		testAppearance3.addComments("ArtDeco02Material ProtoInstance USE goes here...");
		testAppearance3.setMaterial(new ProtoInstanceObject().setUSE(ArtDeco02ProtoInstance.getDEF())
								                             .setContainerField ("material")); 
		testShape1.setAppearance(testAppearance1);
		testShape2.setAppearance(testAppearance2);
		testShape3.setAppearance(testAppearance3);
		testShape1.setGeometry(new SphereObject().setRadius(0.001f)); // provide initial children to silence superflous Schematron warnings
		testShape2.setGeometry(new ConeObject().setHeight(0.001f).setBottomRadius(0.001f));
		testShape3.setGeometry(new CylinderObject().setHeight(0.001f).setRadius(0.001f));
		scene.addChildren(testShape1);
		scene.addChildren(testShape2);
		scene.addChildren(testShape3);

		// prerequisite met: must first be fully connected to scene graph for function getNodeType() to find predecessor declaration
		ArtDeco01ProtoInstance.addComments(new CommentsBlock("[HelloWorldProgram diagnostic] ArtDeco01ProtoInstance.getNodeType()=\"" + ArtDeco01ProtoInstance.getNodeType() + "\""));
		ArtDeco02ProtoInstance.addComments(new CommentsBlock("[HelloWorldProgram diagnostic] ArtDeco02ProtoInstance.getNodeType()=\"" + ArtDeco02ProtoInstance.getNodeType() + "\""));
	 	
		// Inline/IMPORT/EXPORT validation testing (cannot be self-referential or may cause recursion error)
		inlineScene.setUrl("someOtherScene.x3d");
//		           .addUrl(urlLocation + "/java/" + "someOtherScene.x3d"); // TODO 
		importStatement.setInlineDEF(inlineSceneDef).setImportedDEF(worldInfoDEFname).setAS(worldInfoDEFname + "2"); // overloaded DEF test sat
		exportStatement.setLocalDEF(worldInfoDEFname).setAS(worldInfoDEFname + "3");
		scene.addChildren(inlineScene);
		scene.addChildren(importStatement);
		scene.addChildren(exportStatement);
		
		/** Test declarative style, prototype fields IS/connect and scripting */
		ProtoDeclareObject materialModulatorPrototype = new ProtoDeclareObject ("MaterialModulator");
		materialModulatorPrototype
			.setAppinfo("mimic a Material node and modulate fields as an animation effect")
			.setDocumentation("http://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html")
			.setProtoInterface(
				new ProtoInterfaceObject()
					.addField(new fieldObject()
						.setName("enabled")
						.setType(fieldObject.TYPE_SFBOOL)
						.setAccessType( fieldObject.ACCESSTYPE_INPUTOUTPUT)
						.setValue(true)					  // equivalent, strongly typed
						.setValue(new MFBoolObject(true)) // equivalent
						.setValue(SFBoolObject.TRUE))     // equivalent
					.addField(new fieldObject()
						.setName("diffuseColor")
						.setType(fieldObject.TYPE_SFCOLOR)
						.setAccessType( fieldObject.ACCESSTYPE_INPUTOUTPUT)
						.setValue(new SFColorObject().setValueByString("0.8 0.8 0.8"))	  // equivalent, strongly typed
						.setValue((SFColorObject.toString(SFColorObject.DEFAULT_VALUE)))) // equivalent
					.addField(new fieldObject (
						"emissiveColor",fieldObject.TYPE_SFCOLOR,fieldObject.ACCESSTYPE_INPUTOUTPUT, 
//							new SFColorObject().setValue(0x00007F).toString())) // hex value for half blue
//							new SFColorObject(0x00007F).toString())) // equivalent (TODO recheck math)
							(new SFColorObject(0.05f, 0.05f, 0.5f)).toString())) // equivalent
					.addField(new fieldObject (
						"specularColor",fieldObject.TYPE_SFCOLOR,fieldObject.ACCESSTYPE_INPUTOUTPUT, 
							(SFColorObject.toString(SFColorObject.BLACK))))
					.addField(new fieldObject (
						"transparency", fieldObject.TYPE_SFFLOAT,fieldObject.ACCESSTYPE_INPUTOUTPUT, 
							"0.0"))
					.addField(new fieldObject (
						"shininess",    fieldObject.TYPE_SFFLOAT,fieldObject.ACCESSTYPE_INPUTOUTPUT, 
							Float.toString(0.0f)))
					.addField(new fieldObject (
						"ambientIntensity",fieldObject.TYPE_SFFLOAT,fieldObject.ACCESSTYPE_INPUTOUTPUT, 
							SFFloatObject.toString(0.0f)))
//						.setChildren((MaterialObject newMaterial = new MaterialObject ("MaterialNode"))))
						// TODO fix syntax or add utility methods
			);
		ProtoBodyObject materialModulatorProtoBody = new ProtoBodyObject();
		materialModulatorPrototype.setProtoBody(materialModulatorProtoBody);
		materialModulatorProtoBody.addChildren(
			new MaterialObject("MaterialNode")
				.setIS(new ISObject()
					.addConnect(new connectObject().setNodeField("diffuseColor"    ).setProtoField("diffuseColor"))
					.addConnect(new connectObject().setNodeField("emissiveColor"   ).setProtoField("emissiveColor"))
					.addConnect(new connectObject().setNodeField("specularColor"   ).setProtoField("specularColor"))
					.addConnect(new connectObject().setNodeField("transparency"    ).setProtoField("transparency"))
					.addConnect(new connectObject().setNodeField("shininess"       ).setProtoField("shininess"))
					.addConnect(new connectObject().setNodeField("ambientIntensity").setProtoField("ambientIntensity"))
			));
		materialModulatorProtoBody.addChildren(
			new CommentsBlock ("Only first node (the node type) is renderable, others are along for the ride"));
		materialModulatorProtoBody.addChildren(
			new ScriptObject ("MaterialModulatorScript")
				.addField(new fieldObject().setName("enabled").setType(fieldObject.TYPE_SFBOOL)
					.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
				.addField(new fieldObject().setName("diffuseColor").setType(fieldObject.TYPE_SFCOLOR)
					.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
				.addField(new fieldObject().setName("newColor").setType(fieldObject.TYPE_SFCOLOR)
					.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
				.addField(new fieldObject().setName("clockTrigger").setType(fieldObject.TYPE_SFTIME)
					.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
				.setIS(new ISObject()
					.addConnect(new connectObject().setNodeField("enabled"     ).setProtoField("enabled"))
					.addConnect(new connectObject().setNodeField("diffuseColor").setProtoField("diffuseColor")))
				.setSourceCode(new StringBuilder("ecmascript:\n").append(
"function initialize ()\n").append(
"{\n").append(
"    newColor = diffuseColor; // start with correct color\n").append(
"}\n").append(
"function set_enabled (newValue)\n").append(
"{\n").append(
"	enabled = newValue;\n").append(
"}\n").append(
"function clockTrigger (timeValue)\n").append(
"{\n").append(
"    if (!enabled) return;\n").append(
"    red   = newColor.r;\n").append(
"    green = newColor.g;\n").append(
"    blue  = newColor.b;\n").append(
"    \n").append(
"    // note different modulation rates for each color component, % is modulus operator\n").append(
"    newColor = new SFColor ((red + 0.02) % 1, (green + 0.03) % 1, (blue + 0.04) % 1);\n").append(
"	if (enabled)\n").append(
"	{\n").append(
"		Browser.print ('diffuseColor=(' + red + ',' + green + ',' + blue + ') newColor=' + newColor.toString() + '\\n');\n").append(
"	}\n").append(
"}"))
			);
		scene.addChildren(materialModulatorPrototype);
//		scene.getElementByName("ProtoDeclare", "MaterialModulator"); // test sat

		createDeclarativeShapeTests();
		
		String   soundExampleUrl = "http://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/default.x3d";
		String[]    soundFileUrl = { "chimes.wav", "http://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav" };
		scene.addChild(new SoundObject()
				.setLocation(0, 1.6f, 0).addComments("set sound-ellipsoid location height at 1.6m to match typical avatar height")
				.setSource(new AudioClipObject()
						.setUrl(soundFileUrl).setDescription("chimes")
						.addComments("Scene example fragment from " + soundExampleUrl)));
		
		String   movieExampleUrl = "http://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpeg1-systems.x3d";
		String[]    movieFileUrl = { "mpgsys.mpg", "http://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg" };
		scene.addChild(new SoundObject()
				.setLocation(0, 1.6f, 0).addComments("set sound-ellipsoid location height at 1.6m to match typical avatar height")
				.setSource(new MovieTextureObject()
					.setDescription("mpgsys.mpg from ConformanceNist suite")
					.setUrl(movieFileUrl)
					.addComments("Scene example fragment from " + movieExampleUrl)
					.addComments("Expected containerField='source', allowed containerField values=" + 
							new MFStringObject(new MovieTextureObject().getContainerFieldAlternateValues()).toStringX3D())));
                CommentsBlock testComments = new CommentsBlock ();
                String result;
                result = ((AnchorObject.isNode() == true) && (siteAnchor.isNode() == true)) ? "success" : "failure";
                testComments.addComments("Test " + result + ":  AnchorObject.isNode()="      +  AnchorObject.isNode()      + ",              siteAnchor.isNode()=" + siteAnchor.isNode());
                
                result = ((AnchorObject.isStatement() == false) && (siteAnchor.isStatement() == false)) ? "success" : "failure";
                testComments.addComments("Test " + result + ":  AnchorObject.isStatement()=" +  AnchorObject.isStatement() + ",        siteAnchor.isStatement()="  + siteAnchor.isStatement());
		
                result = ((ROUTEObject.isNode() == false) && (orbitPositionROUTE.isNode() == false)) ? "success" : "failure";
                testComments.addComments("Test " + result + ":   ROUTEObject.isNode()="      +   ROUTEObject.isNode()      + ",     orbitPositionROUTE.isNode()="  + orbitPositionROUTE.isNode());
		
                result = ((ROUTEObject.isStatement() == true) && (orbitPositionROUTE.isStatement() == true)) ? "success" : "failure";
                testComments.addComments("Test " + result + ":   ROUTEObject.isStatement()=" +   ROUTEObject.isStatement() + ", orbitPositionROUTE.isStatement()=" + orbitPositionROUTE.isStatement());
                
                result = ((CommentsBlock.isNode() == false) && (CommentsBlock.isNode() == false)) ? "success" : "failure";
                testComments.addComments("Test " + result + ": CommentsBlock.isNode()="      + CommentsBlock.isNode()      + ",           testComments.isNode()="  + testComments.isNode());
		
                result = ((CommentsBlock.isStatement() == false) && (testComments.isStatement() == false)) ? "success" : "failure";
                testComments.addComments("Test " + result + ": CommentsBlock.isStatement()=" + CommentsBlock.isStatement() + ",      testComments.isStatement()="  + testComments.isStatement());
                scene.addComments (testComments);
                
                ExtrusionObject exampleExtrusion = new ExtrusionObject("ExampleExtrusion");
//              exampleExtrusion.setSpine(new MFVec3fObject() // test closed spine
//                  .append(new SFVec3fObject(0,0,0)).append(new SFVec3fObject(0,1,0)).append(new SFVec3fObject(0,0,0)));
                scene.addChild(new ShapeObject("ExtrusionShape")
                        .setGeometry(exampleExtrusion)
                        .addComments(new CommentsBlock(exampleExtrusion.getDEF() +
                            " isCrossSectionClosed()=" + exampleExtrusion.isCrossSectionClosed() +
                            ", crossSection='" + Arrays.toString(exampleExtrusion.getCrossSection()) + "'"))
                        .addComments(new CommentsBlock(exampleExtrusion.getDEF() +
                            " isSpineClosed()=" + exampleExtrusion.isSpineClosed() +
                            ", spine='" + Arrays.toString(exampleExtrusion.getSpine()) + "'"))
                        .setAppearance(new AppearanceObject("TransparentAppearance").setMaterial(new MaterialObject().setTransparency(1))));
                
                // all finished, go see if the paint is dry
	}
	
	/** Test declarative programming style using Java 8
	 */
	private void createDeclarativeShapeTests()
	{
		String innerAppearanceNodeDEF  = "DeclarativeAppearanceExample";
		String innerMaterialNodeDEF    = "DeclarativeMaterialExample";
		String innerMetadataStringName = "findThisNameValue";

		GroupObject declarativeGroup = new GroupObject("DeclarativeGroupExample")
			// addChild is singleton pipeline method, avoiding return-void restrictions of SAI addChildren interface
			.addChild(new ShapeObject()
				.setAppearance(new AppearanceObject(innerAppearanceNodeDEF)
					.setMaterial(new MaterialObject(innerMaterialNodeDEF)
						.setDiffuseColor(SFColorObject.LIGHTSEAGREEN))
					.addComments(innerMaterialNodeDEF + " gets overridden by subsequently added MaterialModulator ProtoInstance")
					.setMaterial(new ProtoInstanceObject("MyMaterialModulator", "MaterialModulator") // DEFname first
						.setContainerField("material") // TODO make this unnecessary?
					))
				.setGeometry(new ConeObject()
					.setHeight(0.1f).setBottomRadius(0.05f).setBottom(false))
				.setMetadata(new MetadataStringObject("FindableMetadataStringTest") // sets DEF
					.setName(innerMetadataStringName).setValue("test case")))
					// TODO show another metadata/value example using MetadataSetObject
			.addComments("Test success: declarativeGroup.addChild() singleton pipeline method");

		scene.addComments("Test success: declarative statement createDeclarativeShapeTests()")
			 .addChild   (declarativeGroup) // addChild is pipeline method
			 .addComments(new CommentsBlock("Test success: declarative statement addChild()"));

		// Now check and report result: can we find inner node?
		CommentsBlock createDeclarativeShapeTestResults = new CommentsBlock();
		X3DConcreteElement nodeFoundByDEF = x3dModel.findNodeByDEF(innerAppearanceNodeDEF);
		if  (nodeFoundByDEF != null)
			 createDeclarativeShapeTestResults.addComments("Test success: x3dModel.findNodeByDEF(" + innerAppearanceNodeDEF + ") = " +
				"<"  + nodeFoundByDEF.getElementName() + " DEF='" + ((X3DConcreteNode) nodeFoundByDEF).getDEF() + "'/> i.e." +
				"\n" + nodeFoundByDEF.toStringX3D().trim()); // test CommentsBlock.cleanXmlCommentDelimiters() method
		else createDeclarativeShapeTestResults.addComments("Test failure: x3dModel.findNodeByDEF(" + innerAppearanceNodeDEF + ") = null");

		X3DConcreteElement nodeFoundByName = x3dModel.findElementByNameValue(innerMetadataStringName);
		if  (nodeFoundByName != null)
			 createDeclarativeShapeTestResults.addComments("Test success: x3dModel.findElementByNameValue(" + innerMetadataStringName + ") = " +
				nodeFoundByName.toStringX3D().trim());
		else createDeclarativeShapeTestResults.addComments("Test failure: x3dModel.findElementByNameValue(" + innerMetadataStringName + ") = null");

		nodeFoundByName = x3dModel.findElementByNameValue(nameArtDeco01Material, ProtoDeclareObject.NAME);
		if  (nodeFoundByName != null)
			 createDeclarativeShapeTestResults.addComments("Test success: x3dModel.findElementByNameValue(\"" + nameArtDeco01Material + "\", \"" + ProtoDeclareObject.NAME + "\") found"); // obfuscate contained comments since nesting is illegal XML
		else createDeclarativeShapeTestResults.addComments("Test failure: x3dModel.findElementByNameValue(\"" + nameArtDeco01Material + "\", \"" + ProtoDeclareObject.NAME + "\") = null");

		nodeFoundByName = x3dModel.findElementByNameValue("MaterialModulator", ProtoDeclareObject.NAME);
		if  (nodeFoundByName != null)
			 createDeclarativeShapeTestResults.addComments("Test success: x3dModel.findElementByNameValue(\"" + "MaterialModulator" + "\", \"" + ProtoDeclareObject.NAME + "\")  found"); // obfuscate contained comments since nesting is illegal XML
		else createDeclarativeShapeTestResults.addComments("Test failure: x3dModel.findElementByNameValue(\"" + "MaterialModulator" + "\", \"" + ProtoDeclareObject.NAME + "\")  = null");

		nodeFoundByName = x3dModel.findElementByNameValue("MaterialModulator", ProtoInstanceObject.NAME);
		if  (nodeFoundByName != null)
			 createDeclarativeShapeTestResults.addComments("Test success: x3dModel.findElementByNameValue(\"" + "MaterialModulator" + "\", \"" + ProtoInstanceObject.NAME + "\") found"); // obfuscate contained comments since nesting is illegal XML
		else createDeclarativeShapeTestResults.addComments("Test failure: x3dModel.findElementByNameValue(\"" + "MaterialModulator" + "\", \"" + ProtoInstanceObject.NAME + "\") = null");

		scene.addChild(createDeclarativeShapeTestResults); // addChildren also works but is not pipelined
		
		testFieldObjects();
	}
	
	/** Set of unit tests on field objects.
	 * TODO add assertions.
	 * @see org.web3d.x3d.jsail.fields
	 */
        @SuppressWarnings("UnusedAssignment")
	private void testFieldObjects()
	{
		GroupObject testFieldObjectsGroup = new GroupObject("TestFieldObjectsGroup");
		scene.addChild(testFieldObjectsGroup);
		testFieldObjectsGroup.addComments("testFieldObjects() results");
		StringBuilder results = new StringBuilder();
		
		SFBoolObject valueSFBool = new SFBoolObject();
		results.append("SFBool default=").append(valueSFBool.getValue());
		valueSFBool.setValue(true); // not pipelined
		results.append(", true=").append(valueSFBool.getValue());
		valueSFBool.setValue(false);
		results.append(", false=").append(valueSFBool.getValue());
		results.append(", negate()=").append(valueSFBool.negate().getValue()); // pipelined
		testFieldObjectsGroup.addComments(results.toString());
		results = new StringBuilder(); // reset
		
		MFBoolObject valueMFBool = new MFBoolObject();
//		valueMFBool.setValueByString("0"); // test illegal value. exception message is satisfactory
		results.append("MFBool default=").append(valueMFBool.toString());
		boolean[] defaultBooleans = {true, false, true};
		valueMFBool = new MFBoolObject(defaultBooleans);
		results.append(", initial=").append(valueMFBool.toString());
		results.append(", negate()=").append(valueMFBool.negate().toString());
		testFieldObjectsGroup.addComments(results.toString());
		results = new StringBuilder(); // reset
		
		SFFloatObject valueSFFloat = new SFFloatObject();
		results.append("SFFloat default=").append(valueSFFloat.getValue());
		valueSFFloat = new SFFloatObject(1f);
		results.append(", initial=").append(valueSFFloat); // output uses .toString() by default
		results.append(", setValue(2)=").append(valueSFFloat.setValue(2));
		valueSFFloat.setValue(3.0f);  // not pipelined for floats
		results.append(", setValue(3.0f)=").append(valueSFFloat);
		results.append(", setValue(4.0)=").append(valueSFFloat.setValue(4.0));
		testFieldObjectsGroup.addComments(results.toString());
		results = new StringBuilder(); // reset
		
		MFFloatObject valueMFFloat = new MFFloatObject();
		results.append("MFFloat default=").append(valueMFFloat);
		// Java requires coercing double to float, ensuring no unintentional loss of precision
		float[] defaultFloats = {1.0f, 2, (float)3.0};
		valueMFFloat = new MFFloatObject(defaultFloats);
		results.append(", initial=").append(valueMFFloat);
		valueMFFloat.append(5f); // not pipelined
		results.append(", append(5)=").append(valueMFFloat);
		valueMFFloat.insertValue(3, 4f); // not pipelined
		valueMFFloat.insertValue(0, 0f);
		results.append(", inserts(3,4)(0,0)=").append(valueMFFloat);
		valueMFFloat.append(6); // not pipelined
		results.append(", append(6)=").append(valueMFFloat);
		results.append(", size()=").append(valueMFFloat.size());
		testFieldObjectsGroup.addComments(results.toString());
		results = new StringBuilder(); // reset, line break
		results.append("... get1Value[3]=").append(valueMFFloat.get1Value(3));
		valueMFFloat.remove(1); // not pipelined
		results.append(", remove[1]=").append(valueMFFloat);
		valueMFFloat.set1Value(0,10); // not pipelined
		results.append(", set1Value(0,10)=").append(valueMFFloat);
		valueMFFloat.multiply(2);
		results.append(", multiply(2)=").append(valueMFFloat);
		valueMFFloat.clear(); // not pipelined
		results.append(", clear=").append(valueMFFloat);
		testFieldObjectsGroup.addComments(results.toString());
		results = new StringBuilder(); // reset, line break
		
		SFVec3fObject valueSFVec3f = new SFVec3fObject();
		results.append("SFVec3f default=").append(valueSFVec3f); // output uses .toString() by default
		valueSFVec3f = new SFVec3fObject(1f, (float)2, (float)3.0);
		results.append(", initial=").append(valueSFVec3f);
		// Java requires coercing double to float, ensuring no unintentional loss of precision
		valueSFVec3f.setValue(4f, 5, (float)6.0);
		results.append(", setValue=").append(valueSFVec3f);
		results.append(", multiply(2)=").append(valueSFVec3f.multiply(2));
		results.append(", normalize()=").append(valueSFVec3f.normalize());
		testFieldObjectsGroup.addComments(results.toString());
		results = new StringBuilder(); // reset
	}
	
	Document           domDocument;
	DOMImplementation  domImplementation;
	String             domDocumentToStringX3D;
	X3DObject          reloadedX3dObjectTree;
	File               reloadedFile;
	/**
	 * Load the produced HelloWorldProgramOutput.x3d scene using X3DLoaderObject, then write resulting DOM back out to a file.
	 */
	private void testX3DLoaderObjectDomDocument()
	{
		X3DLoaderObject x3dLoader = new X3DLoaderObject();
		x3dLoader.loadModelFromFileX3D(thisSceneName + ".x3d");
		sourceFile = new File (thisSceneName + ".x3d");
//		boolean successfulLoad = x3dLoader.loadX3DfromFile(new File(thisSceneName + ".x3d")); // alternate form, tested OK
		if (x3dLoader.isLoadSuccessful())
		{
			if (x3dLoader.getX3dObjectTree() instanceof X3DObject)
			{
				System.out.println ("===========================================");
				System.out.println("Test success: x3dLoader.loadX3DfromXML(" + thisSceneName + ".x3d), " + 
												 "x3dLoader.getX3dObjectTree()");
				System.out.println ("===========================================");
			}
			else System.out.println("Test failure: x3dLoader.loadX3DfromXML(" + thisSceneName + ".x3d), " + 
                                                  "x3dLoader.getX3dObjectTree()");
            // alternative approach to loading:
			domDocument       = x3dLoader.getDomDocument();
			domImplementation = domDocument.getImplementation(); // debug use only
			domDocumentToStringX3D = x3dLoader.toStringX3D(domDocument);
			System.out.println (domDocumentToStringX3D.trim()); // may include partial results if settings permit
			System.out.println ("===========================================");
			System.out.println("Test success: x3dLoader.getDomDocument() and x3dLoader.toStringX3D(domDocument)");
			System.out.println ("Now test x3dLoader.toX3dObjectTree(domDocument)");
			x3dLoader.toX3dObjectTree(domDocument); 
			reloadedX3dObjectTree = (X3DObject) x3dLoader.getX3dObjectTree();
			x3dLoader.getValidationResult();  // debug inspection
			String reloadedFileName = thisSceneName + ".ReloadedDOM" + X3DObject.FILE_EXTENSION_X3D;
			if (reloadedX3dObjectTree != null)
			{
				reloadedX3dObjectTree.validate(); // debug inspection
				reloadedFile = reloadedX3dObjectTree.toFileX3D(reloadedFileName);
				// X3D scene has already been produced at this point, no point in adding further comments
				System.out.println("Test success: x3dLoader.toX3dObjectTree(domDocument), save " + reloadedFileName);
			}
			else System.out.println("Test failure: x3dLoader.toX3dObjectTree(domDocument), save " + reloadedFileName);
		}
		else System.out.println("Test failure: x3dLoader.loadX3DfromXML(" + thisSceneName + ".x3d)");
		System.out.print("x3dLoader validation result: ");
		if  (x3dLoader.getValidationResult().trim().isEmpty())
			 System.out.println("no issues reported.");
		else System.out.println("\n" + x3dLoader.getValidationResult());
	}
}

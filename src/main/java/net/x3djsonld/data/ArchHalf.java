package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Shape.*;

// Javadoc metadata annotations follow, see below for X3DJSAIL Java source code.
/**
 * <p> Create a half arch with parameters clearSpanWidth=4; riseHeight=2; depth=3; topAbutmentHeight=0.5; pierWidth=0.5; pierHeight=1. Parameter clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalf width. Modify them with Transform scale or by editing the IndexedFileSet node. See the reference file ArchModelingDiagrams.pdf and the ArchScript_more_readable.js script to find further information. </p>
 <p> Related links: Catalog page <a href="../../../Buildings/ArchHalfIndex.html" target="_blank">ArchHalf</a>,  source <a href="../../../Buildings/ArchHalf.java">ArchHalf.java</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../Buildings/ArchHalf.x3d">ArchHalf.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Create a half arch with parameters clearSpanWidth=4; riseHeight=2; depth=3; topAbutmentHeight=0.5; pierWidth=0.5; pierHeight=1. Parameter clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalf width. Modify them with Transform scale or by editing the IndexedFileSet node. See the reference file ArchModelingDiagrams.pdf and the ArchScript_more_readable.js script to find further information. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Michele Foti, Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 15 December 2014 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../Buildings/ArchModelingDiagrams.pdf">ArchModelingDiagrams.pdf</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://en.wikipedia.org/wiki/Arch" target="_blank">https://en.wikipedia.org/wiki/Arch</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/Buildings/ArchHalf.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/Buildings/ArchHalf.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../Buildings/../license.html">../license.html</a> </td>
		</tr>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center;" colspan="2">  &nbsp; </td>
		</tr>
	</table>

	<p>
		This program uses the
		<a href="https://www.web3d.org/specifications/java/X3DJSAIL.html" target="_blank">X3D Java Scene Access Interface Library (X3DJSAIL)</a>.
		It has been produced using the 
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">X3dToJava.xslt</a>
		stylesheet
	       (<a href="https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">version control</a>)
                which is used to create Java source code from an original <code>.x3d</code> model.
	</p>

	* @author Michele Foti, Don Brutzman
 */

public class ArchHalf
{
	/** Default constructor to create this object. */
	public ArchHalf ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
            try { // catch-all
  x3dModel = new X3D().setProfile(X3D.PROFILE_INTERCHANGE).setVersion(X3D.VERSION_3_3)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("ArchHalf.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Create a half arch with parameters clearSpanWidth=4; riseHeight=2; depth=3; topAbutmentHeight=0.5; pierWidth=0.5; pierHeight=1. Parameter clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalf width. Modify them with Transform scale or by editing the IndexedFileSet node. See the reference file ArchModelingDiagrams.pdf and the ArchScript_more_readable.js script to find further information."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Michele Foti, Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("15 December 2014"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("ArchModelingDiagrams.pdf"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://en.wikipedia.org/wiki/Arch"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/Buildings/ArchHalf.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("ArchHalf.x3d"))
    .addChild(new Shape("Arch")
      .addComments(" note that convex='false' (meaning concave geometry) is crucial for this IFS of a geometric chord to render properly ")
      .setGeometry(new IndexedFaceSet("ArchIndex").setDEF("ArchIndex").setConvex(false).setSolid(false).setCoordIndex(getArchIndex_4_13_coordIndex())
        .setCoord(new Coordinate("ArchChord").setPoint(getArchChord_5_13_point())))
      .setAppearance(new Appearance()
        .setMaterial(new Material("MaterialNode").setDiffuseColor(1.0,0.75,0.25)))));
            }
            catch (Exception ex)
            {       
                System.err.println ("*** Further hints on X3DJSAIL errors and exceptions at");
                System.err.println ("*** https://www.web3d.org/specifications/java/X3DJSAIL.html");
                throw (ex);
            }
	}
	// end of initialize() method

		/** Define subarrays using type int[] */
		private int[] getArchIndex_4_13_coordIndex_1()
		{
			int[] value = {31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,144,-1,149,31,144,147,-1,134,147,144,145,-1,145,144,62,141,-1,132,133,141,62,-1,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,143,-1,148,94,143,146,-1,142,128,146,143,-1,140,125,143,142,-1,125,126,127,140,-1,31,94,95,32,-1,32,95,96,33,-1,33,96,97,34,-1,34,97,98,35,-1,35,98,99,36,-1,36,99,100,37,-1,37,100,101,38,-1,38,101,102,39,-1,39,102,103,40,-1,40,103,104,41,-1,41,104,105,42,-1,42,105,106,43,-1,43,106,107,44,-1,44,107,108,45,-1,45,108,109,46,-1,46,109,110,47,-1,47,110,111,48,-1,48,111,112,49,-1,49,112,113,50,-1,50,113,114,51,-1,51,114,115,52,-1,52,115,116,53,-1,53,116,117,54,-1,54,117,118,55,-1,55,118,119,56,-1,56,119,120,57,-1,57,120,121,58,-1,58,121,122,59,-1,59,122,123,60,-1,60,123,124,61,-1,61,124,125,62,-1,148,149,147,146,-1,146,147,134,128,-1,128,134,145,142,-1,140,141,145,142,-1,127,133,141,140,-1,127,126,132,133,-1,126,132,62,125,-1,31,94,143,144,-1,142,143,144,145,-1,140,125,62,141,-1,31,94,148,149,-1};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getArchChord_5_13_point_1()
		{
			double[] value = {2.0,0.0,0.0,1.9974984355438178,0.1,0.0,1.98997487421324,0.2,0.0,1.977371993328519,0.3,0.0,1.9595917942265423,0.4,0.0,1.9364916731037084,0.5,0.0,1.9078784028338912,0.6,0.0,1.8734993995195193,0.7,0.0,1.833030277982336,0.8,0.0,1.786057109949175,0.9,0.0,1.7320508075688775,1.0,0.0,1.6703293088490067,1.1,0.0,1.60,1.2,0.0,1.5198684153570664,1.3,0.0,1.42828568570857,1.4,0.0,1.3228756555322953,1.5,0.0,1.20,1.6,0.0,1.0535653752852738,1.7,0.0,0.9020947843768965,1.785,0.0,0.7599342076785332,1.85,0.0,0.6244997998398398,1.9,0.0,0.5425633603552677,1.925,0.0,0.4444097208657794,1.95,0.0,0.36181625170796194,1.967,0.0,0.2821347195933173,1.98,0.0,0.19974984355438343,1.99,0.0,0.16718552568927703,1.993,0.0,0.14133294025102578,1.995,0.0,0.10950342460398415,1.997,0.0,0.08942035562443252,1.998,0.0,0.06323764701505419,1.999,0.0,0.0,2.0,0.0,-0.06323764701505419,1.999,0.0,-0.08942035562443252,1.998,0.0,-0.10950342460398415,1.997,0.0,-0.14133294025102578,1.995,0.0,-0.16718552568927703,1.993,0.0,-0.19974984355438343,1.99,0.0,-0.2821347195933173,1.98,0.0,-0.36181625170796194,1.967,0.0,-0.4444097208657794,1.95,0.0,-0.5425633603552677,1.925,0.0,-0.6244997998398398,1.9,0.0,-0.7599342076785332,1.85,0.0,-0.9020947843768965,1.785,0.0,-1.0535653752852738,1.7,0.0,-1.20,1.6,0.0,-1.3228756555322953,1.5,0.0,-1.42828568570857,1.4,0.0,-1.5198684153570664,1.3,0.0,-1.60,1.2,0.0,-1.6703293088490067,1.1,0.0,-1.7320508075688775,1.0,0.0,-1.786057109949175,0.9,0.0,-1.833030277982336,0.8,0.0,-1.8734993995195193,0.7,0.0,-1.9078784028338912,0.6,0.0,-1.9364916731037084,0.5,0.0,-1.9595917942265423,0.4,0.0,-1.977371993328519,0.3,0.0,-1.98997487421324,0.2,0.0,-1.9974984355438178,0.1,0.0,-2.0,0.0,0.0,2.0,0.0,3.0,1.9974984355438178,0.1,3.0,1.98997487421324,0.2,3.0,1.977371993328519,0.3,3.0,1.9595917942265423,0.4,3.0,1.9364916731037084,0.5,3.0,1.9078784028338912,0.6,3.0,1.8734993995195193,0.7,3.0,1.833030277982336,0.8,3.0,1.786057109949175,0.9,3.0,1.7320508075688775,1.0,3.0,1.6703293088490067,1.1,3.0,1.60,1.2,3.0,1.5198684153570664,1.3,3.0,1.42828568570857,1.4,3.0,1.3228756555322953,1.5,3.0,1.20,1.6,3.0,1.0535653752852738,1.7,3.0,0.9020947843768965,1.785,3.0,0.7599342076785332,1.85,3.0,0.6244997998398398,1.9,3.0,0.5425633603552677,1.925,3.0,0.4444097208657794,1.95,3.0,0.36181625170796194,1.967,3.0,0.2821347195933173,1.98,3.0,0.19974984355438343,1.99,3.0,0.16718552568927703,1.993,3.0,0.14133294025102578,1.995,3.0,0.10950342460398415,1.997,3.0,0.08942035562443252,1.998,3.0,0.06323764701505419,1.999,3.0,0.0,2.0,3.0,-0.06323764701505419,1.999,3.0,-0.08942035562443252,1.998,3.0,-0.10950342460398415,1.997,3.0,-0.14133294025102578,1.995,3.0,-0.16718552568927703,1.993,3.0};
			return value;
		}
		private double[] getArchChord_5_13_point_2()
		{
			double[] value = {-0.19974984355438343,1.99,3.0,-0.2821347195933173,1.98,3.0,-0.36181625170796194,1.967,3.0,-0.4444097208657794,1.95,3.0,-0.5425633603552677,1.925,3.0,-0.6244997998398398,1.9,3.0,-0.7599342076785332,1.85,3.0,-0.9020947843768965,1.785,3.0,-1.0535653752852738,1.7,3.0,-1.20,1.6,3.0,-1.3228756555322953,1.5,3.0,-1.42828568570857,1.4,3.0,-1.5198684153570664,1.3,3.0,-1.60,1.2,3.0,-1.6703293088490067,1.1,3.0,-1.7320508075688775,1.0,3.0,-1.786057109949175,0.9,3.0,-1.833030277982336,0.8,3.0,-1.8734993995195193,0.7,3.0,-1.9078784028338912,0.6,3.0,-1.9364916731037084,0.5,3.0,-1.9595917942265423,0.4,3.0,-1.977371993328519,0.3,3.0,-1.98997487421324,0.2,3.0,-1.9974984355438178,0.1,3.0,-2.0,0.0,3.0,-2.0,-1.0,3.0,-2.5,-1.0,3.0,-2.5,2.5,3.0,2.5,2.5,3.0,2.5,-1.0,3.0,2.0,-1.0,3.0,-2.0,-1.0,0.0,-2.5,-1.0,0.0,-2.5,2.5,0.0,2.5,2.5,0.0,2.5,-1.0,0.0,2.0,-1.0,0.0,2.5,0.0,3.0,2.5,0.0,0.0,-2.5,0.0,3.0,-2.5,0.0,0.0,-2.5,2.0,3.0,-2.0,2.0,3.0,-2.0,2.0,0.0,-2.5,2.0,0.0,-2.0,2.5,3.0,-2.0,2.5,0.0,0.0,2.5,3.0,0.0,2.5,0.0,2.0,2.0,3.0,2.5,2.0,3.0,2.5,2.0,0.0,2.0,2.0,0.0,2.0,2.5,3.0,2.0,2.5,0.0};
			return value;
		}

		/** Large attribute array: IndexedFaceSet DEF='ArchIndex' coordIndex field, scene-graph level=4, element #13, 318 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getArchIndex_4_13_coordIndex()
		{
			MFInt32 ArchIndex_4_13_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getArchIndex_4_13_coordIndex_1()));
			return ArchIndex_4_13_coordIndex;
		}
		/** Large attribute array: Coordinate DEF='ArchChord' point field, scene-graph level=5, element #13, 468 total numbers made up of 156 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getArchChord_5_13_point()
		{
			MFVec3f ArchChord_5_13_point = new MFVec3f()/*2.finalize*/
				.append(new MFVec3f(getArchChord_5_13_point_1()))
				.append(new MFVec3f(getArchChord_5_13_point_2()));
			return ArchChord_5_13_point;
		}

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return ArchHalf model
	 */
	public X3D getX3dModel()
	{	  
		return x3dModel;
	}
	   
    /** 
     * Default main() method provided for test purposes, uses CommandLine to set global ConfigurationProperties for this object.
     * @param args array of input parameters, provided as arguments
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html#handleArguments-java.lang.String:A-">X3D.handleArguments(args)</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html#validationReport--">X3D.validationReport()</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html">CommandLine</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html#USAGE">CommandLine.USAGE</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/ConfigurationProperties.html">ConfigurationProperties</a>
     */
    public static void main(String args[])
    {
        System.out.println("Build this X3D model, showing validation diagnostics...");
        X3D thisExampleX3dModel = new ArchHalf().getX3dModel();
//      System.out.println("X3D model construction complete.");
	
        // next handle command line arguments
        boolean hasArguments = (args != null) && (args.length > 0);
        boolean validate = true; // default
        boolean argumentsLoadNewModel = false;
        String  fileName = new String();

        if (args != null)
        {
                for (String arg : args)
                {
                        if (arg.toLowerCase().startsWith("-v") || arg.toLowerCase().contains("validate"))
                        {
                                validate = true; // making sure
                        }
                        if (arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_X3D) ||
                                arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_CLASSICVRML) ||
                                arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_X3DB) ||
                                arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_VRML97) ||
                                arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_EXI) ||
                                arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_GZIP) ||
                                arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_ZIP) ||
                                arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_HTML) ||
                                arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_XHTML))
                        {
                                argumentsLoadNewModel = true;
                                fileName = arg;
                        }
                }
        }
        if      (argumentsLoadNewModel)
                System.out.println("WARNING: \"net.x3djsonld.data.ArchHalf\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
        else if (hasArguments) // if no arguments provided, this method produces usage warning
                thisExampleX3dModel.handleArguments(args);
	
        if (validate)
        {
            //  System.out.println("--- TODO fix duplicated outputs ---"); // omit when duplicated outputs problem is solved/refactored
		String validationResults = thisExampleX3dModel.validationReport();
            //  System.out.println("-----------------------------------"); // omit when duplicated outputs problem is solved/refactored
                System.out.print("net.x3djsonld.data.ArchHalf self-validation test results: ");
                if (!validationResults.equals("success"))
                    System.out.println();
                System.out.println(validationResults.trim());

                // experimental: test X3DJSAIL output files
                // ./ArchHalf_JavaExport.* file validation is checked when building X3D Example Archives
                String filenameX3D  = "./ArchHalf_JavaExport.x3d"; 
                String filenameX3DV = "./ArchHalf_JavaExport.x3dv"; 
                String filenameJSON = "./ArchHalf_JavaExport.json";
                thisExampleX3dModel.toFileX3D        (filenameX3D);
                thisExampleX3dModel.toFileClassicVRML(filenameX3DV);
// TODO         thisExampleX3dModel.toFileJSON       (filenameJSON);
        }
    }
}

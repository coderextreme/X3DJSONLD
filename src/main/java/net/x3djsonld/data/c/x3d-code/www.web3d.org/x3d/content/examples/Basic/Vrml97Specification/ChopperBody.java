package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Shape.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> VRML 97 specification example: main body for Chopper example, used as an Inline to show scene composition. </p>
 <p> Related links: <a href="../../../Vrml97Specification/ChopperBody.java">ChopperBody.java</a> source, <a href="../../../Vrml97Specification/ChopperBodyIndex.html" target="_top">ChopperBody catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../Vrml97Specification/ChopperBody.x3d">ChopperBody.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 26 June 2000 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 28 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> X3D working group </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> VRML 97 specification example: main body for Chopper example, used as an Inline to show scene composition. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> originals/chopperbody.wrl </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> specificationSection </i> </td>
			<td> VRML 97, ISO/IEC 14772-1, Part 1: Functional specification and UTF-8 encoding, D.16 Chopper </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> specificationUrl </i> </td>
			<td> <a href="https://www.web3d.org/documents/specifications/14772/V2.0/part1/examples.html#D.16" target="_blank">https://www.web3d.org/documents/specifications/14772/V2.0/part1/examples.html#D.16</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/Vrml97Specification/ChopperBody.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/Vrml97Specification/ChopperBody.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../Vrml97Specification/../license.html">../license.html</a> </td>
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
		stylesheet to create Java source code from an <code>.x3d</code> model.
	</p>

	* @author X3D working group
 */

public class ChopperBody
{
	/** Default constructor to create this object. */
	public ChopperBody ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("ChopperBody.x3d"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("26 June 2000"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("28 October 2019"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("X3D working group"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("VRML 97 specification example: main body for Chopper example, used as an Inline to show scene composition."))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("originals/chopperbody.wrl"))
    .addMeta(new meta().setName(meta.NAME_SPECIFICATIONSECTION).setContent("VRML 97, ISO/IEC 14772-1, Part 1: Functional specification and UTF-8 encoding, D.16 Chopper"))
    .addMeta(new meta().setName(meta.NAME_SPECIFICATIONURL).setContent("https://www.web3d.org/documents/specifications/14772/V2.0/part1/examples.html#D.16"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/Vrml97Specification/ChopperBody.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("ChopperBody.x3d"))
    .addChild(new Transform().setTranslation(-0.1,-0.85,4.95952)
      .addChild(new Transform().setRotation(0.8321951,-0.39732206,0.38676405,1.77988).setScale(1.0,0.999999,0.999998).setScaleOrientation(0.41401106,0.41635105,0.8094731,0.298078).setTranslation(-0.319032,-0.0473949,-4.51302)
        .addChild(new Shape()
          .setGeometry(new Extrusion().setCreaseAngle(1.57).setCrossSection(new MFVec2f(new double[] {0.0,0.2,0.6,0.2,0.8,0.0,0.8,-0.4,0.6,-0.6,0.2,-0.6,0.0,-0.4,-0.2,0.0,0.0,0.2})).setOrientation(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})).setScale(new MFVec2f(new double[] {0.021511,0.021511,0.659496,0.659496,0.872158,0.872158,1.0,1.0,1.0,1.0,0.872158,0.872158,0.659496,0.659496,0.048094,0.048094})).setSolid(false).setSpine(new MFVec3f(new double[] {0.0,-1.0,0.0,-0.003214,-0.953553,0.0,-0.002855,-0.876386,0.0,-0.003214,-0.74785,0.0,-0.003214,-0.445722,0.0,-0.003214,-0.323585,0.0,-0.003214,-0.252875,0.0,0.0,-0.2,0.0})))
          .setAppearance(new Appearance()
            .setMaterial(new Material("_0")))))
      .addChild(new Transform().setRotation(0.8273403,-0.41326016,0.38042614,1.77274).setScaleOrientation(-0.17204592,0.27246588,0.94665855,0.228295).setTranslation(-0.877833,0.458808,-4.77874)
        .addChild(new Shape()
          .setGeometry(new Extrusion().setConvex(false).setCreaseAngle(1.57).setCrossSection(new MFVec2f(new double[] {0.6,0.6,0.6,0.4,-0.8,0.4,-1.0,0.0,-1.2,0.0,-1.0,0.6,0.6,0.6})).setOrientation(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})).setScale(new MFVec2f(new double[] {1.0,1.0,1.0,1.0})).setSolid(false).setSpine(new MFVec3f(new double[] {0.0,-1.0,0.0,0.0,-0.8,0.0})))
          .setAppearance(new Appearance()
            .setMaterial(new Material().setUSE("_0")))))
      .addChild(new Transform().setRotation(0.0,-1.0,0.0,0.873008).setScale(0.0980455,0.370358,0.213029).setTranslation(0.120967,0.410068,-4.95952)
        .addChild(new Shape()
          .setGeometry(new Extrusion().setCreaseAngle(1.57).setCrossSection(new MFVec2f(new double[] {1.0,0.0,0.92388,0.382683,0.707107,0.707106,0.382684,0.923879,1.26759E-6,1.0,-0.382682,0.92388,-0.707105,0.707108,-0.923879,0.382685,-1.0,2.53518E-6,-0.923881,-0.382681,-0.707109,-0.707105,-0.382687,-0.923878,-3.80277E-6,-1.0,0.38268,-0.923881,0.707104,-0.70711,0.923878,-0.382688,1.0,0.0})).setOrientation(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})).setScale(new MFVec2f(new double[] {1.0,1.0,0.4,0.181007})).setSolid(false).setSpine(new MFVec3f(new double[] {0.0,-1.0,0.0,0.0,1.0,0.0})))
          .setAppearance(new Appearance()
            .setMaterial(new Material().setUSE("_0")))))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return ChopperBody model
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
        X3D thisExampleX3dModel = new ChopperBody().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.ChopperBody\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.ChopperBody\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.DIS.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Texturing.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> DIS test world for shooting a watermelon. </p>
 <p> Related links: <a href="../../../StudentProjects/melon/MelonLauncher.java">MelonLauncher.java</a> source, <a href="../../../StudentProjects/melon/MelonLauncherIndex.html" target="_top">MelonLauncher catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../StudentProjects/melon/MelonLauncher.x3d">MelonLauncher.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> DIS test world for shooting a watermelon. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Andrew Wiest </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> *enter name of VRML-to-X3D translator (if any) here* </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 5 June 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 9 October 2008 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/melon/MelonLauncher.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/melon/MelonLauncher.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../StudentProjects/melon/../../license.html">../../license.html</a> </td>
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

	* @author Andrew Wiest
 */

public class MelonLauncher
{
	/** Default constructor to create this object. */
	public MelonLauncher ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("MelonLauncher.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("DIS test world for shooting a watermelon."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Andrew Wiest"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("*enter name of VRML-to-X3D translator (if any) here*"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("5 June 2001"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("9 October 2008"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/melon/MelonLauncher.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../../license.html")))
  .setScene(new Scene()
    .addComments("Scene graph nodes are added here ")
    .addChild(new Background().setSkyAngle(new double[] {1.57}).setSkyColor(new MFColor(new double[] {0.6,0.8,0.6,0.6,0.6,0.6})))
    .addChild(new Viewpoint("DefaultViewpoint").setDescription("Launcher Main").setOrientation(-0.140128,0.988431,0.058043,0.79366).setPosition(500.0,0.0,100.0))
    .addChild(new Transform().setScale(10.0,10.0,10.0)
      .addChild(new Inline().setUrl(new String[] {"GridXY_20x20Movable.wrl","/www.web3d.org/x3d/content/examples/Basic/course/GridXY_20x20Movable.wrl","https://www.web3d.org/x3d/content/examples/Basic/course/GridXY_20x20Movable.wrl","GridXY_20x20Movable.x3d","/www.web3d.org/x3d/content/examples/Basic/course/GridXY_20x20Movable.x3d","https://www.web3d.org/x3d/content/examples/Basic/course/GridXY_20x20Movable.x3d"}))
      .addChild(new Inline().setUrl(new String[] {"GridXZ_20x20Movable.wrl","/www.web3d.org/x3d/content/examples/Basic/course/GridXZ_20x20Movable.wrl","https://www.web3d.org/x3d/content/examples/Basic/course/GridXZ_20x20Movable.wrl","GridXZ_20x20Movable.x3d","/www.web3d.org/x3d/content/examples/Basic/course/GridXZ_20x20Movable.x3d","https://www.web3d.org/x3d/content/examples/Basic/course/GridXZ_20x20Movable.x3d"}))
      .addChild(new Inline().setUrl(new String[] {"GridYZ_20x20Movable.wrl","/www.web3d.org/x3d/content/examples/Basic/course/GridYZ_20x20Movable.wrl","https://www.web3d.org/x3d/content/examples/Basic/course/GridYZ_20x20Movable.wrl","GridYZ_20x20Movable.x3d","/www.web3d.org/x3d/content/examples/Basic/course/GridYZ_20x20Movable.x3d","https://www.web3d.org/x3d/content/examples/Basic/course/GridYZ_20x20Movable.x3d"})))
    .addChild(new EspduTransform("MelonReceiver").setAddress("224.2.181.145").setApplicationID(5).setEntityID(6).setMarking("melon").setPort(62040).setSiteID(1).setWriteInterval(0)
      .addComments(" traceJava=\"false\" traceSize=\"5 5 5\" traceOffset=\"0 -5 0\" ")
      .addChild(new Transform()
        .addChild(new Shape()
          .setGeometry(new Sphere().setRadius(2))
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.1,0.9,0.1).setShininess(.5))
            .setTexture(new ImageTexture().setUrl(new String[] {"http://faculty.nps.edu/brutzman/images/brutzman.94.gif"}))))
        .addChild(new Viewpoint("withtheMelon").setDescription("with the melon")))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return MelonLauncher model
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
        X3D thisExampleX3dModel = new MelonLauncher().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.MelonLauncher\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.MelonLauncher\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

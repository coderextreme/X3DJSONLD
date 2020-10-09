package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry2D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Lighting.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Texturing.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> X3D utilizing ecmascript to develop quasi volumetric 3D clouds from png image textured billboard nodes. </p>
 <p> Related links: <a href="../../../../Environment/Atmosphere/CloudsProcedural4.java">CloudsProcedural4.java</a> source, <a href="../../../../Environment/Atmosphere/CloudsProcedural4Index.html" target="_top">CloudsProcedural4 catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../../Environment/Atmosphere/CloudsProcedural4.x3d">CloudsProcedural4.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> X3D utilizing ecmascript to develop quasi volumetric 3D clouds from png image textured billboard nodes. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Capt Darren W. Murphy </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 1 November 2007 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 14 January 2014 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://savage.nps.edu/Savage/Environment/Atmosphere/CloudsProcedural4.x3d" target="_blank">https://savage.nps.edu/Savage/Environment/Atmosphere/CloudsProcedural4.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit, <a href="http://www.web3d.org/x3d/content/README.X3D-Edit.html" target="_blank">http://www.web3d.org/x3d/content/README.X3D-Edit.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../../Environment/Atmosphere/../../license.html">../../license.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> TODO </i> </td>
			<td> fix links </td>
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

	* @author Capt Darren W. Murphy
 */

public class CloudsProcedural4
{
	/** Default constructor to create this object. */
	public CloudsProcedural4 ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_2)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("CloudsProcedural4.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("X3D utilizing ecmascript to develop quasi volumetric 3D clouds from png image textured billboard nodes."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Capt Darren W. Murphy"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("1 November 2007"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("14 January 2014"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://savage.nps.edu/Savage/Environment/Atmosphere/CloudsProcedural4.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit, http://www.web3d.org/x3d/content/README.X3D-Edit.html"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../../license.html"))
    .addMeta(new meta().setName(meta.NAME_TODO       ).setContent("fix links")))
  .setScene(new Scene()
    .addComments(" A png image file for the cloud texture must be designated in the ecmascript node. ")
    .addChild(new Viewpoint().setDescription("Main").setJump(false).setOrientation(0.0,1.0,0.0,1.57).setPosition(50000.0,1000.0,42000.0))
    .addChild(new Viewpoint().setDescription("Light House Tower").setJump(false).setOrientation(0.0,1.0,0.0,1.3).setPosition(45000.0,1290.0,44000.0))
    .addChild(new Viewpoint().setDescription("centerWest").setJump(false).setOrientation(0.0,1.0,0.0,2.5).setPosition(48000.0,1000.0,20000.0))
    .addChild(new Background().setGroundColor(new MFColor(new double[] {0.0,0.0,1.0})).setSkyColor(new MFColor(new double[] {0.0,0.0,1.0})))
    .addChild(new DirectionalLight().setAmbientIntensity(1).setDirection(-1.0,0.0,0.0).setGlobal(true))
    .addChild(new Group("Terrain")
      .addChild(new Transform().setScale(50.0,50.0,50.0).setTranslation(25000.0,0.0,25000.0)
        .addChild(new Inline().setUrl(new String[] {"MontereyBayLargeMesh.x3d","https://savage.nps.edu/Savage/Environment/Atmosphere/MontereyBayLargeMesh.x3d","MontereyBayLargeMesh.wrl","https://savage.nps.edu/Savage/Environment/Atmosphere/MontereyBayLargeMesh.wrl"})))
      .addChild(new Transform().setRotation(1.0,0.0,0.0,1.57).setTranslation(25000.0,0.0,25000.0)
        .addChild(new Shape()
          .setGeometry(new Rectangle2D().setSize(77000.0,55000.0))
          .setAppearance(new Appearance()
            .setTexture(new ImageTexture().setUrl(new String[] {"ocean.png","https://savage.nps.edu/Savage/Environment/Atmosphere/ocean.png"}))))))
    .addChild(new Group("Placemarks")
      .addChild(new Transform().setScale(50.0,50.0,50.0).setTranslation(45000.0,30.0,44000.0)
        .addChild(new Inline().setUrl(new String[] {"Lighthouse.x3d","https://savage.nps.edu/Savage/Environment/Atmosphere/Lighthouse.x3d","Lighthouse.wrl","https://savage.nps.edu/Savage/Environment/Atmosphere/Lighthouse.wrl"}))))
    .addChild(new Group("Clouds")
      .addChild(new Transform("Cumulus"))
      .addChild(new Transform("Cirrus"))
      .addChild(new Transform("Fog"))
      .setX3DScript(new X3DScript("PixelScript").setDirectOutput("true"
// [*** X3dToJava.xslt error: encountered incorrect type, X3DScript directOutput: $isNumeric=false, $attributeType=, value='true']
)
        .addField(new field().setName("Cumulus").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
          .addChild(new Transform().setUSE("Cumulus")))
        .addField(new field().setName("Cirrus").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
          .addChild(new Transform().setUSE("Cirrus")))
        .addField(new field().setName("Fog").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)))
      .addChild(new DirectionalLight().setAmbientIntensity(1).setColor(1.0,0.0,0.0).setDirection(-1.0,-1.0,0.0).setGlobal(true))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return CloudsProcedural4 model
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
        X3D thisExampleX3dModel = new CloudsProcedural4().getX3dModel();

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
			System.out.println("WARNING: \"CloudsProcedural4\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"CloudsProcedural4\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.CADGeometry.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry2D.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Shape.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Design pattern examples demonstrating proper hierarchy of CAD nodes: CADLayer, CADAssembly, CADPart, and then CADFace. </p>
 <p> Related links: <a href="../../../CAD/CadDesignPatternExampleBushing.java">CadDesignPatternExampleBushing.java</a> source, <a href="../../../CAD/CadDesignPatternExampleBushingIndex.html" target="_top">CadDesignPatternExampleBushing catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../CAD/CadDesignPatternExampleBushing.x3d">CadDesignPatternExampleBushing.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Design pattern examples demonstrating proper hierarchy of CAD nodes: CADLayer, CADAssembly, CADPart, and then CADFace. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Vince Marchetti, Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Xj3D, <a href="http://www.xj3d.org" target="_blank">http://www.xj3d.org</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 24 June 2012 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> Only InstantReality, X3DOM, OctagaVs and Xj3D are properly handling geometry of Disk2D end caps </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../CAD/CadDesignPatternExampleBushingInstantReality.png">CadDesignPatternExampleBushingInstantReality.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../CAD/CadDesignPatternExampleBushingBsContact.png">CadDesignPatternExampleBushingBsContact.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../CAD/CadDesignPatternExampleBushingCobweb.png">CadDesignPatternExampleBushingCobweb.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../CAD/CadDesignPatternExampleBushingFreeX3d.png">CadDesignPatternExampleBushingFreeX3d.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../CAD/CadDesignPatternExampleBushingInstantReality.png">CadDesignPatternExampleBushingInstantReality.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../CAD/CadDesignPatternExampleBushingOctagaVs.png">CadDesignPatternExampleBushingOctagaVs.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../CAD/CadDesignPatternExampleBushingView3dscene.png">CadDesignPatternExampleBushingView3dscene.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../CAD/CadDesignPatternExampleBushingX3dom.png">CadDesignPatternExampleBushingX3dom.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../CAD/CadDesignPatternExampleBushingXj3d.png">CadDesignPatternExampleBushingXj3d.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/member-only/mantis/view.php?id=528" target="_blank">https://www.web3d.org/member-only/mantis/view.php?id=528</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/CADGeometry.html" target="_blank">https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/CADGeometry.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> X3D CAD CADInterchange profile </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/CAD/CadDesignPatternExampleBushing.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/CAD/CadDesignPatternExampleBushing.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../CAD/../license.html">../license.html</a> </td>
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

	* @author Vince Marchetti, Don Brutzman
 */

public class CadDesignPatternExampleBushing
{
	/** Default constructor to create this object. */
	public CadDesignPatternExampleBushing ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_CADINTERCHANGE).setVersion(X3D.VERSION_3_2)
  .setHead(new head()
    .addComponent(new component().setName("CADGeometry").setLevel(2))
    .addComponent(new component().setName("Geometry2D").setLevel(2))
    .addComponent(new component().setName("EnvironmentalEffects").setLevel(1))
    .addComponent(new component().setName("Shape").setLevel(4))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("CadDesignPatternExampleBushing.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Design pattern examples demonstrating proper hierarchy of CAD nodes: CADLayer, CADAssembly, CADPart, and then CADFace."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Vince Marchetti, Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Xj3D, http://www.xj3d.org"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("24 June 2012"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("Only InstantReality, X3DOM, OctagaVs and Xj3D are properly handling geometry of Disk2D end caps"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("CadDesignPatternExampleBushingInstantReality.png"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("CadDesignPatternExampleBushingBsContact.png"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("CadDesignPatternExampleBushingCobweb.png"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("CadDesignPatternExampleBushingFreeX3d.png"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("CadDesignPatternExampleBushingInstantReality.png"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("CadDesignPatternExampleBushingOctagaVs.png"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("CadDesignPatternExampleBushingView3dscene.png"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("CadDesignPatternExampleBushingX3dom.png"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("CadDesignPatternExampleBushingXj3d.png"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/member-only/mantis/view.php?id=528"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/CADGeometry.html"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("X3D CAD CADInterchange profile"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/CAD/CadDesignPatternExampleBushing.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("CadDesignPatternExampleBushing.x3d"))
    .addChild(new Background().setSkyColor(new MFColor(new double[] {0.9607843,1.0,0.9607843})))
    .addChild(new Viewpoint().setDescription("Hello CAD bushing").setOrientation(1.0,0.0,0.0,-0.321751).setPosition(0.0,5.0,15.0))
    .addChild(new CADAssembly().setName("DesignPatternAssembly")
      .addChild(new CADPart().setName("CADPartSides")
        .addComments(" the rotation and translation attributes serve to position the bushing within the assembly ")
        .addChild(new CADFace().setName("outerSurface")
          .setShape(new Shape()
            .addComments(" note solid='true' and so one-sided external rendering only ")
            .setGeometry(new Cylinder().setBottom(false).setHeight(3).setRadius(2).setTop(false))
            .setAppearance(new Appearance("AppearanceGrey")
              .setMaterial(new Material()))))
        .addChild(new CADFace().setName("innerSurface")
          .setShape(new Shape()
            .addComments(" note solid='false' and so two-sided internal + external rendering ")
            .setGeometry(new Cylinder().setBottom(false).setHeight(3).setSolid(false).setTop(false))
            .setAppearance(new Appearance().setUSE("AppearanceGrey")))))
      .addChild(new CADPart().setName("CADPartTop").setRotation(1.0,0.0,0.0,1.5708).setTranslation(0.0,1.5,0.0)
        .addChild(new CADFace().setName("topCap")
          .setShape(new Shape()
            .setGeometry(new Disk2D().setInnerRadius(1).setOuterRadius(2))
            .setAppearance(new Appearance().setUSE("AppearanceGrey")))))
      .addChild(new CADPart().setName("CADPartBottom").setRotation(-1.0,0.0,0.0,1.5708).setTranslation(0.0,-1.5,0.0)
        .addChild(new CADFace().setName("bottomCap")
          .setShape(new Shape()
            .setGeometry(new Disk2D().setInnerRadius(1).setOuterRadius(2))
            .setAppearance(new Appearance().setUSE("AppearanceGrey")))))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return CadDesignPatternExampleBushing model
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
        X3D thisExampleX3dModel = new CadDesignPatternExampleBushing().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.CadDesignPatternExampleBushing\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.CadDesignPatternExampleBushing\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

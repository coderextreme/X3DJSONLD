package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Texturing.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> X3D example Model of an Ikea Green Chair. </p>
 <p> Related links: <a href="../../../StudentProjects/IkeaGreenChair.java">IkeaGreenChair.java</a> source, <a href="../../../StudentProjects/IkeaGreenChairIndex.html" target="_top">IkeaGreenChair catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../StudentProjects/IkeaGreenChair.x3d">IkeaGreenChair.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> X3D example Model of an Ikea Green Chair </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 3 March 2004 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Vaughn Pangelinan </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/IkeaGreenChair.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/IkeaGreenChair.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../StudentProjects/../license.html">../license.html</a> </td>
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

	* @author Vaughn Pangelinan
 */

public class IkeaGreenChair
{
	/** Default constructor to create this object. */
	public IkeaGreenChair ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_INTERCHANGE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("IkeaGreenChair.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("X3D example Model of an Ikea Green Chair"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("3 March 2004"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Vaughn Pangelinan"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/IkeaGreenChair.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("IkeaGreenChair.x3d"))
    .addChild(new Transform()
      .addChild(new Group("IkeaGreenChair")
        .addChild(new Transform().setRotation(1.0,0.0,0.0,.45)
          .addChild(new Viewpoint("GreenChair").setDescription("View Green Chair").setFieldOfView(1.4).setOrientation(0.0,1.0,0.0,3.14).setPosition(0.0,.5,-.9)))
        .addChild(new Shape()
          .setGeometry(new Box().setSize(.3,.02,.3))
          .setAppearance(new Appearance("Blue")
            .setMaterial(new Material().setDiffuseColor(0.0,0.0,.8))))
        .addChild(new Transform().setTranslation(.13,-.16,.13)
          .addChild(new Shape("GreenChairFrontLeg")
            .setGeometry(new Box().setSize(.034,.3,.034))
            .setAppearance(new Appearance("Green")
              .setMaterial(new Material().setDiffuseColor(0.0,.6,0.0)))))
        .addChild(new Transform().setTranslation(-.13,-.16,.13)
          .addChild(new Shape().setUSE("GreenChairFrontLeg")))
        .addChild(new Transform().setTranslation(-.125,.04,-.16)
          .addChild(new Shape("GreenChairRearLeg")
            .setGeometry(new Box().setSize(.05,.7,.02))
            .setAppearance(new Appearance().setUSE("Green"))))
        .addChild(new Transform().setTranslation(.125,.04,-.16)
          .addChild(new Shape().setUSE("GreenChairRearLeg")))
        .addChild(new Transform().setTranslation(0.0,-.038,.13)
          .addChild(new Shape("GreenFrontChairBeam")
            .setGeometry(new Box().setSize(.226,.056,.02))
            .setAppearance(new Appearance().setUSE("Green"))))
        .addChild(new Transform().setTranslation(0.0,-.185,0.0)
          .addChild(new Shape("GreenLowCenterBeam")
            .setGeometry(new Box().setSize(.24,.05,.02))
            .setAppearance(new Appearance().setUSE("Green"))))
        .addChild(new Transform().setTranslation(.13,-.038,-.01)
          .addChild(new Shape("GreenHighShortBeam")
            .setGeometry(new Box().setSize(.02,.056,.28))
            .setAppearance(new Appearance().setUSE("Green"))))
        .addChild(new Transform().setTranslation(-.13,-.038,-.01)
          .addChild(new Shape().setUSE("GreenHighShortBeam")))
        .addChild(new Transform().setTranslation(.13,-.185,-.01)
          .addChild(new Shape("GreenLowShortBeam")
            .setGeometry(new Box().setSize(.02,.05,.28))
            .setAppearance(new Appearance().setUSE("Green"))))
        .addChild(new Transform().setTranslation(-.13,-.185,-.01)
          .addChild(new Shape().setUSE("GreenLowShortBeam")))
        .addChild(new Transform("GreenLowerBackBeamTranslation").setTranslation(0.0,.13,-.16)
          .addChild(new Shape("GreenBackBeam")
            .setGeometry(new Box().setSize(.2,.05,.016))
            .setAppearance(new Appearance().setUSE("Green"))))
        .addChild(new Transform().setTranslation(0.0,.36,-.16)
          .addChild(new Shape().setUSE("GreenBackBeam")))
        .addChild(new Transform().setScale(.2,.18,1.0).setTranslation(0.0,.245,-.16)
          .addChild(new Group("KittyBackPiece")
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setTexture(new ImageTexture().setUrl(new String[] {"KittyTransparent.png","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/KittyTransparent.png"})))
              .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,3})
                .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.5,-0.5,0.0,0.5,-0.5,0.0,0.5,0.5,0.0,-0.5,0.5,0.0}))))))))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return IkeaGreenChair model
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
        X3D thisExampleX3dModel = new IkeaGreenChair().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.IkeaGreenChair\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.IkeaGreenChair\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

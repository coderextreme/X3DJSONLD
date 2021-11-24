package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry2D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Examples showing native use of X3D Geometry2D component nodes (Arc2D ArcClose2D Circle2D Disk2D Polyline2D Polypoint2D Rectangle2D TriangleSet2D), implemented as prototypes for backwards compatibility with VRML 97. Also provides Unfilled ProtoInstance versions of some nodes since FillProperties not possible in VRML 97. 2D nodes are considered particularly helpful for CADPart geometry and building user interfaces such as Heads-Up Displays (HUDs). </p>
 <p> Related links: <a href="../../../development/Geometry2dComponentExamples.java">Geometry2dComponentExamples.java</a> source, <a href="../../../development/Geometry2dComponentExamplesIndex.html" target="_top">Geometry2dComponentExamples catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../development/Geometry2dComponentExamples.x3d">Geometry2dComponentExamples.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Examples showing native use of X3D Geometry2D component nodes (Arc2D ArcClose2D Circle2D Disk2D Polyline2D Polypoint2D Rectangle2D TriangleSet2D), implemented as prototypes for backwards compatibility with VRML 97. Also provides Unfilled ProtoInstance versions of some nodes since FillProperties not possible in VRML 97. 2D nodes are considered particularly helpful for CADPart geometry and building user interfaces such as Heads-Up Displays (HUDs). </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Christos Kalogrias, Don Brutzman, Ken Curtin, Duane Davis </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 16 November 2003 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../development/Geometry2dComponentExamplesBsContact.png">Geometry2dComponentExamplesBsContact.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../development/Geometry2dComponentExamplesCobweb.png">Geometry2dComponentExamplesCobweb.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../development/Geometry2dComponentExamplesFreeWRL.png">Geometry2dComponentExamplesFreeWRL.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../development/Geometry2dComponentExamplesH3dViewer.png">Geometry2dComponentExamplesH3dViewer.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../development/Geometry2dComponentExamplesInstantReality.png">Geometry2dComponentExamplesInstantReality.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../development/Geometry2dComponentExamplesOctagaVS.png">Geometry2dComponentExamplesOctagaVS.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../development/Geometry2dComponentExamplesView3dScene.png">Geometry2dComponentExamplesView3dScene.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../development/Geometry2dComponentExamplesX3DOM.png">Geometry2dComponentExamplesX3DOM.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../development/Geometry2dComponentExternProtos.x3d">Geometry2dComponentExternProtos.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../development/Geometry2dComponentPrototypes.x3d">Geometry2dComponentPrototypes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geometry2D.html" target="_blank">https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geometry2D.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> Geometry2D component nodes (Arc2D ArcClose2D Circle2D Disk2D Polyline2D Polypoint2D Rectangle2D TriangleSet2D) </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentExamples.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentExamples.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../development/../license.html">../license.html</a> </td>
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

	* @author Christos Kalogrias, Don Brutzman, Ken Curtin, Duane Davis
 */

public class Geometry2dComponentExamples
{
	/** Default constructor to create this object. */
	public Geometry2dComponentExamples ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addComponent(new component().setName("Geometry2D").setLevel(2))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("Geometry2dComponentExamples.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Examples showing native use of X3D Geometry2D component nodes (Arc2D ArcClose2D Circle2D Disk2D Polyline2D Polypoint2D Rectangle2D TriangleSet2D), implemented as prototypes for backwards compatibility with VRML 97. Also provides Unfilled ProtoInstance versions of some nodes since FillProperties not possible in VRML 97. 2D nodes are considered particularly helpful for CADPart geometry and building user interfaces such as Heads-Up Displays (HUDs)."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Christos Kalogrias, Don Brutzman, Ken Curtin, Duane Davis"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("16 November 2003"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("Geometry2dComponentExamplesBsContact.png"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("Geometry2dComponentExamplesCobweb.png"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("Geometry2dComponentExamplesFreeWRL.png"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("Geometry2dComponentExamplesH3dViewer.png"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("Geometry2dComponentExamplesInstantReality.png"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("Geometry2dComponentExamplesOctagaVS.png"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("Geometry2dComponentExamplesView3dScene.png"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("Geometry2dComponentExamplesX3DOM.png"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("Geometry2dComponentExternProtos.x3d"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("Geometry2dComponentPrototypes.x3d"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geometry2D.html"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("Geometry2D component nodes (Arc2D ArcClose2D Circle2D Disk2D Polyline2D Polypoint2D Rectangle2D TriangleSet2D)"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentExamples.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addComments(" ==================== ")
    .addChild(new WorldInfo().setTitle("Geometry2dComponentExamples.x3d"))
    .addChild(new Background().setGroundColor(new MFColor(new double[] {0.3,0.3,0.3})).setSkyColor(new MFColor(new double[] {0.3,0.3,0.3})))
    .addChild(new Viewpoint().setDescription("Geometry2D Component Examples").setPosition(0.0,0.0,12.0))
    .addComments(" ==================== ")
    .addComments(" Top row ")
    .addChild(new Transform().setTranslation(-6.0,2.0,0.0)
      .addChild(new TouchSensor().setDescription("ArcClose2D"))
      .addChild(new Shape()
        .setGeometry(new ArcClose2D().setClosureType("PIE").setEndAngle(3.0).setStartAngle(0.7))
        .addComments(" default radius='1' ")
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(0.0,0.0,1.0).setEmissiveColor(0.0,0.0,1.0)))))
    .addChild(new Transform().setTranslation(-2.0,2.0,0.0)
      .addChild(new TouchSensor().setDescription("Arc2D"))
      .addChild(new Shape()
        .setGeometry(new Arc2D())
        .addComments(" default radius='1' startAngle='0' ")
        .setAppearance(new Appearance()
          .setMaterial(new Material().setEmissiveColor(1.0,1.0,0.0))))
      .addChild(new Transform("TransparentBackdropForTouchSensor").setTranslation(0.0,0.0,-0.5)
        .addChild(new Shape()
          .setGeometry(new Rectangle2D())
          .addComments(" default ")
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0).setTransparency(1))))))
    .addChild(new Transform().setTranslation(2.0,2.0,0.0)
      .addChild(new TouchSensor().setDescription("Circle2D"))
      .addChild(new Shape()
        .setGeometry(new Circle2D())
        .addComments(" default radius='1' ")
        .setAppearance(new Appearance()
          .setMaterial(new Material().setEmissiveColor(1.0,0.0,0.0))))
      .addChild(new Transform().setUSE("TransparentBackdropForTouchSensor")))
    .addChild(new Transform().setTranslation(6.0,2.0,0.0)
      .addChild(new TouchSensor().setDescription("Disk2D"))
      .addChild(new Shape()
        .setGeometry(new Disk2D().setInnerRadius(0.5))
        .addComments(" default outerRadius='1' ")
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(0.5,1.0,1.0)))))
    .addComments(" ==================== ")
    .addComments(" Bottom row ")
    .addChild(new Transform().setTranslation(-6.0,-2.0,0.0)
      .addChild(new TouchSensor().setDescription("Rectangle2D"))
      .addChild(new Shape()
        .setGeometry(new Rectangle2D().setSize(1.0,2.0))
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))))
    .addChild(new Transform().setTranslation(-2.0,-2.0,0.0)
      .addChild(new TouchSensor().setDescription("Polyline2D"))
      .addChild(new Shape()
        .setGeometry(new Polyline2D().setLineSegments(new MFVec2f(new double[] {-1.0,0.0,-0.5,1.0,0.0,0.0,0.5,1.0,1.0,0.0})))
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(0.0,0.0,0.0).setEmissiveColor(1.0,0.5,1.0))))
      .addChild(new Transform().setUSE("TransparentBackdropForTouchSensor")))
    .addChild(new Transform().setTranslation(2.0,-2.0,0.0)
      .addChild(new TouchSensor().setDescription("Polypoint2D"))
      .addChild(new Shape()
        .setGeometry(new Polypoint2D().setPoint(new MFVec2f(new double[] {-1.0,0.0,-0.5,1.0,0.0,0.0,0.5,1.0,1.0,0.0})))
        .setAppearance(new Appearance()
          .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0))))
      .addChild(new Transform().setTranslation(0.1,0.4,-0.5)
        .addChild(new Shape()
          .setGeometry(new Rectangle2D("BackDrop").setSize(2.8,2.0))
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,0.0,0.0))))
        .addChild(new Transform().setTranslation(0.0,-0.15,0.2)
          .addChild(new Shape()
            .setGeometry(new Text().setString(new String[] {"PolyPoint2D","5 points"})
              .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(0.25).setCssStyle("BOLD")))
            .setAppearance(new Appearance()
              .setMaterial(new Material()))))))
    .addChild(new Transform().setTranslation(6.0,-2.0,0.0)
      .addChild(new TouchSensor().setDescription("TriangleSet2D"))
      .addChild(new Shape()
        .setGeometry(new TriangleSet2D().setVertices(new MFVec2f(new double[] {0.0,0.0,1.0,1.0,-1.0,1.0,0.0,0.0,1.0,-0.5,1.0,0.5,0.0,0.0,-2.0,-1.0,-1.0,-2.0})))
        .setAppearance(new Appearance()
          .setFillProperties(new FillProperties("TestFillProperties"))
          .setLineProperties(new LineProperties("TestLineProperties").setLinewidthScaleFactor(1)
            .setMetadata(new MetadataString("TestLinePropertiesMetaData").setName("test LineProperties metadata child")))
          .setMaterial(new Material().setDiffuseColor(0.0,1.0,0.0))))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return Geometry2dComponentExamples model
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
        X3D thisExampleX3dModel = new Geometry2dComponentExamples().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.Geometry2dComponentExamples\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.Geometry2dComponentExamples\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

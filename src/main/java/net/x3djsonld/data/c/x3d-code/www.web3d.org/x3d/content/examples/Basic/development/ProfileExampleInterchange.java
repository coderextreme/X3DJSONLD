package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Lighting.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Texturing.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> List of nodes available in a strictly compliant Interchange profile scene. Only Background renders in this example, other nodes have null values. </p>
 <p> Related links: <a href="../../../development/ProfileExampleInterchange.java">ProfileExampleInterchange.java</a> source, <a href="../../../development/ProfileExampleInterchangeIndex.html" target="_top">ProfileExampleInterchange catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../development/ProfileExampleInterchange.x3d">ProfileExampleInterchange.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 6 January 2000 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> List of nodes available in a strictly compliant Interchange profile scene. Only Background renders in this example, other nodes have null values. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/spec_editors/abstract/Part01/interchange.html" target="_blank">https://www.web3d.org/spec_editors/abstract/Part01/interchange.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> ProfileExampleInterchange.png </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/development/ProfileExampleInterchange.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/development/ProfileExampleInterchange.x3d</a> </td>
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

	* @author Don Brutzman
 */

public class ProfileExampleInterchange
{
	/** Default constructor to create this object. */
	public ProfileExampleInterchange ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_INTERCHANGE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("ProfileExampleInterchange.x3d"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("6 January 2000"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("List of nodes available in a strictly compliant Interchange profile scene. Only Background renders in this example, other nodes have null values."))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/spec_editors/abstract/Part01/interchange.html"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("ProfileExampleInterchange.png"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/development/ProfileExampleInterchange.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new Group()
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setTexture(new ImageTexture().setUrl(new String[] {"earth-topo.png","earth-topo.gif","https://www.web3d.org/x3d/content/examples/Basic/development/earth-topo.png","https://www.web3d.org/x3d/content/examples/Basic/development/earth-topo.gif"}))
          .setMaterial(new Material())
          .setTextureTransform(new TextureTransform()))
        .setGeometry(new IndexedFaceSet().setCreaseAngle(3.14159)
          .setColor(new Color().setColor(new MFColor(new double[] {1.0,1.0,1.0})))
          .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,0.0,0.0})))
          .setTexCoord(new MultiTextureCoordinate())))
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet()
          .setColor(new ColorRGBA().setColor(new MFColorRGBA(new double[] {1.0,1.0,1.0,1.0})))))
      .addChild(new Shape()
        .setGeometry(new Box())
        .setAppearance(new Appearance("SilenceWarnings")))
      .addChild(new Shape()
        .setGeometry(new Cone())
        .setAppearance(new Appearance().setUSE("SilenceWarnings")))
      .addChild(new Shape()
        .setGeometry(new Cylinder())
        .setAppearance(new Appearance().setUSE("SilenceWarnings")))
      .addChild(new Shape()
        .setGeometry(new IndexedTriangleFanSet().setCcw(true).setColorPerVertex(true).setNormalPerVertex(true).setSolid(true)
          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.0,0.0}))))
        .setAppearance(new Appearance().setUSE("SilenceWarnings")))
      .addChild(new Shape()
        .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setNormalPerVertex(true).setSolid(true)
          .setTexCoord(new TextureCoordinateGenerator()))
        .setAppearance(new Appearance().setUSE("SilenceWarnings")))
      .addChild(new Shape()
        .setGeometry(new IndexedTriangleStripSet().setCcw(true).setColorPerVertex(true).setNormalPerVertex(true).setSolid(true)
          .setNormal(new Normal().setVector(new MFVec3f(new double[] {0.0,1.0,0.0}))))
        .setAppearance(new Appearance().setUSE("SilenceWarnings")))
      .addChild(new Shape()
        .setGeometry(new LineSet())
        .setAppearance(new Appearance()
          .setTexture(new MultiTexture())
          .setTextureTransform(new MultiTextureTransform())))
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setTexture(new PixelTexture()))
        .setGeometry(new PointSet()))
      .addChild(new Shape()
        .setGeometry(new Sphere())
        .setAppearance(new Appearance().setUSE("SilenceWarnings")))
      .addChild(new Shape()
        .setGeometry(new TriangleFanSet().setCcw(true).setColorPerVertex(true).setNormalPerVertex(true).setSolid(true))
        .setAppearance(new Appearance().setUSE("SilenceWarnings")))
      .addChild(new Shape()
        .setGeometry(new TriangleSet().setCcw(true).setColorPerVertex(true).setNormalPerVertex(true).setSolid(true))
        .setAppearance(new Appearance().setUSE("SilenceWarnings")))
      .addChild(new Shape()
        .setGeometry(new TriangleStripSet().setCcw(true).setColorPerVertex(true).setNormalPerVertex(true).setSolid(true))
        .setAppearance(new Appearance().setUSE("SilenceWarnings"))))
    .addChild(new Background().setGroundColor(new MFColor(new double[] {0.0,0.0,0.0})).setSkyColor(new MFColor(new double[] {0.0,0.2,0.7})))
    .addChild(new CoordinateInterpolator("CI"))
    .addChild(new DirectionalLight())
    .addChild(new NavigationInfo())
    .addChild(new NormalInterpolator("NI").setKey(new double[] {0.0,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,1.0,0.0,0.0,1.0,0.0})))
    .addChild(new OrientationInterpolator("OI").setKey(new double[] {0.0,1.0}).setKeyValue(new MFRotation(new double[] {0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0})))
    .addChild(new PositionInterpolator("PI").setKey(new double[] {0.0,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,0.0,0.0})))
    .addChild(new ScalarInterpolator("SI").setKey(new double[] {0.0,1.0}).setKeyValue(new double[] {0.0,0.0}))
    .addChild(new TimeSensor("TS").setEnabled(false))
    .addChild(new ROUTE().setFromNode("TS").setFromField("fraction_changed").setToNode("NI").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("TS").setFromField("fraction_changed").setToNode("OI").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("TS").setFromField("fraction_changed").setToNode("PI").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("TS").setFromField("fraction_changed").setToNode("SI").setToField("set_fraction"))
    .addChild(new Transform())
    .addChild(new Viewpoint().setDescription("InterchangeProfileExample"))
    .addChild(new WorldInfo())
    .addChild(new ROUTE().setFromNode("TS").setFromField("fraction_changed").setToNode("PI").setToField("set_fraction")));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return ProfileExampleInterchange model
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
        X3D thisExampleX3dModel = new ProfileExampleInterchange().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.ProfileExampleInterchange\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.ProfileExampleInterchange\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

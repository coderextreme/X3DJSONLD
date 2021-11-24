package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Sound.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Texturing.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Demonstrate and test field-name wrapper tags. Links to document "Wrapper Tags Considered Harmful." Scene includes 21 nodes, 34 open/close element tags, 44 wrapper tags, producing 78 scene-graph tags total if wrapper tags are required. </p>
 <p> Related links: <a href="../../../development/WrapperTagsExample.java">WrapperTagsExample.java</a> source, <a href="../../../development/WrapperTagsExampleIndex.html" target="_top">WrapperTagsExample catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../development/WrapperTagsExample.x3d">WrapperTagsExample.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Demonstrate and test field-name wrapper tags. Links to document "Wrapper Tags Considered Harmful." Scene includes 21 nodes, 34 open/close element tags, 44 wrapper tags, producing 78 scene-graph tags total if wrapper tags are required. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 21 April 2000 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../development/WrapperTagsExampleWrapped.html">WrapperTagsExampleWrapped.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../development/WrapperTagsExampleUnwrapped.html">WrapperTagsExampleUnwrapped.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/development/WrapperTagsExample.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/development/WrapperTagsExample.x3d</a> </td>
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

public class WrapperTagsExample
{
	/** Default constructor to create this object. */
	public WrapperTagsExample ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("WrapperTagsExample.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Demonstrate and test field-name wrapper tags. Links to document \"Wrapper Tags Considered Harmful.\" Scene includes 21 nodes, 34 open/close element tags, 44 wrapper tags, producing 78 scene-graph tags total if wrapper tags are required."))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("21 April 2000"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("WrapperTagsExampleWrapped.html"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("WrapperTagsExampleUnwrapped.html"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/development/WrapperTagsExample.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addComments(" <children> *** wrapper tag *** ")
    .addChild(new WorldInfo().setTitle("WrapperTagsExample.x3d"))
    .addChild(new Transform().setTranslation(0.0,-3.0,0.0)
      .addComments(" <children> *** wrapper tag *** ")
      .addChild(new Shape()
        .addComments(" <geometry> *** wrapper tag *** ")
        .setGeometry(new Cylinder().setHeight(1.5).setRadius(.75))
        .addComments(" </geometry> *** wrapper tag *** ")
        .addComments(" <appearance> *** wrapper tag *** ")
        .setAppearance(new Appearance()
          .addComments(" <texture> *** wrapper tag *** ")
          .setTexture(new ImageTexture().setUrl(new String[] {"earth-topo-small.png","earth-topo-small.gif","https://www.web3d.org/x3d/content/examples/Basic/development/earth-topo-small.png","https://www.web3d.org/x3d/content/examples/Basic/development/earth-topo-small.gif"}))
          .addComments(" </texture> *** wrapper tag *** ")
          .addComments(" <textureTransform> *** wrapper tag *** ")
          .setTextureTransform(new TextureTransform().setRotation(-2.356))
          .addComments(" </textureTransform> *** wrapper tag *** "))
        .addComments(" </appearance> *** wrapper tag *** "))
      .addComments(" </children> *** wrapper tag *** "))
    .addComments(" </children> *** wrapper tag *** ")
    .addComments(" <children> *** wrapper tag *** ")
    .addChild(new LOD()
      .addComments(" <children> *** wrapper tag *** ")
      .addChild(new Anchor().setDescription("Click to read explanation page").setParameter(new String[] {"target=_blank"}).setUrl(new String[] {"WrapperTagsConsideredHarmful.html","https://www.web3d.org/x3d/content/examples/Basic/development/WrapperTagsConsideredHarmful.html"})
        .addComments(" <children> *** wrapper tag *** ")
        .addChild(new Shape()
          .addComments(" <appearance> *** wrapper tag *** ")
          .setAppearance(new Appearance()
            .addComments(" <material> *** wrapper tag *** ")
            .setMaterial(new Material().setDiffuseColor(.6,.1,.1))
            .addComments(" </material> *** wrapper tag *** "))
          .addComments(" <appearance> *** wrapper tag *** ")
          .addComments(" <geometry> *** wrapper tag *** ")
          .setGeometry(new Text().setString(new String[] {"wrapper tags are ","field container names","that hold nodes"})
            .addComments(" <fontStyle> *** wrapper tag *** ")
            .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE))
            .addComments(" </fontStyle> *** wrapper tag *** "))
          .addComments(" </geometry> *** wrapper tag *** "))
        .addComments(" </children> *** wrapper tag *** "))
      .addComments(" </children> *** wrapper tag *** ")
      .addComments(" <children> *** wrapper tag *** ")
      .addChild(new Sound()
        .addComments(" <source> *** wrapper tag *** ")
        .setSource(new AudioClip().setDescription("empty audio clip"))
        .addComments(" </source> *** wrapper tag *** "))
      .addComments(" </children> *** wrapper tag *** "))
    .addComments(" </children> *** wrapper tag *** ")
    .addComments(" <children> *** wrapper tag *** ")
    .addChild(new Switch().setWhichChoice(0)
      .addComments(" <children> *** wrapper tag *** ")
      .addChild(new Shape()
        .addComments(" <geometry> *** wrapper tag *** ")
        .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {0,1,2,3,-1})
          .addComments(" <color> *** wrapper tag *** ")
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,1.0,1.0})))
          .addComments(" </color> *** wrapper tag *** ")
          .addComments(" <coord> *** wrapper tag *** ")
          .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-5.0,-3.0,-2.0,5.0,-3.0,-2.0,5.0,1.0,-2.0,-5.0,1.0,-2.0})))
          .addComments(" </coord> *** wrapper tag *** ")
          .addComments(" <normal> *** wrapper tag *** ")
          .setNormal(new Normal().setVector(new MFVec3f(new double[] {0.0,0.0,-1.0,0.0,0.0,-1.0,0.0,0.0,-1.0,0.0,0.0,-1.0})))
          .addComments(" </normal> *** wrapper tag *** ")
          .addComments(" <texcoord> *** wrapper tag *** ")
          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {-1.0,-1.0,-1.0,1.0,1.0,1.0,1.0,-1.0})))
          .addComments(" </texcoord> *** wrapper tag *** "))
        .addComments(" </geometry> *** wrapper tag *** "))
      .addComments(" </children> *** wrapper tag *** "))
    .addComments(" </children> *** wrapper tag *** "));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return WrapperTagsExample model
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
        X3D thisExampleX3dModel = new WrapperTagsExample().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.WrapperTagsExample\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.WrapperTagsExample\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

package net.x3djsonld.data;

import java.util.*;
import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Shape.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Simple extrusion of a Valentine heart. </p>
 <p> Related links: <a href="../../../course/ExtrusionHeart.java">ExtrusionHeart.java</a> source, <a href="../../../course/ExtrusionHeartIndex.html" target="_top">ExtrusionHeart catalog page</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="http://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../course/ExtrusionHeart.x3d">ExtrusionHeart.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Simple extrusion of a Valentine heart. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Class participants in course Introduction to VRML/X3D. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 14 February 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 27 November 2015 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="http://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionHeart.x3d" target="_blank">http://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionHeart.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../course/../license.html">../license.html</a> </td>
		</tr>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center;" colspan="2">  &nbsp; </td>
		</tr>
	</table>

	<p>
		This program uses the
		<a href="http://www.web3d.org/specifications/java/X3DJSAIL.html" target="_blank">X3D Java Scene Access Interface Library (X3DJSAIL)</a>.
		It has been produced using the 
		<a href="http://www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">X3dToJava.xslt</a>
		stylesheet to create Java source code from an <code>.x3d</code> model.
	</p>

	* @author Class participants in course Introduction to VRML/X3D.
 */

public class ExtrusionHeart
{
	/** Default constructor to create this object. */
	public ExtrusionHeart ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3DObject().setProfile("Immersive").setVersion("3.0")
  .setHead(new headObject()
    .addMeta(new metaObject().setName("title").setContent("ExtrusionHeart.x3d"))
    .addMeta(new metaObject().setName("description").setContent("Simple extrusion of a Valentine heart."))
    .addMeta(new metaObject().setName("creator").setContent("Class participants in course Introduction to VRML/X3D."))
    .addMeta(new metaObject().setName("created").setContent("14 February 2001"))
    .addMeta(new metaObject().setName("modified").setContent("27 November 2015"))
    .addMeta(new metaObject().setName("identifier").setContent("http://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionHeart.x3d"))
    .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new metaObject().setName("license").setContent("../license.html")))
  .setScene(new SceneObject()
    .addChild(new ViewpointObject().setDescription("Extrusion Heart").setPosition(0.0f,-4.0f,0.0f).setOrientation(1.0f,0.0f,0.0f,1.57f))
    .addChild(new TransformObject().setTranslation(0.0f,-0.5f,0.0f)
      .addChild(new ShapeObject()
        .setGeometry(new ExtrusionObject().setSpine(new MFVec3fObject(new float[] {0.0f,0.0f,0.0f,0.0f,0.1f,0.0f,0.0f,0.5f,0.0f,0.0f,0.9f,0.0f,0.0f,1.0f,0.0f})).setCrossSection(new MFVec2fObject() /* splitting up long array to improve readability */
.append(new MFVec2fObject(new float[] {0.0f,0.8f,0.2f,1.0f,0.7f,0.95f,1.0f,0.5f,0.8f,0.0f,0.5f,-0.3f,0.0f,-0.7f,-0.5f,-0.3f,-0.8f,0.0f,-1.0f,0.5f}))
.append(new MFVec2fObject(new float[] {-0.7f,0.95f,-0.2f,1.0f,0.0f,0.8f}))).setScale(new MFVec2fObject(new float[] {0.01f,0.01f,0.8f,0.8f,1.0f,1.0f,0.8f,0.8f,0.01f,0.01f})).setCreaseAngle(3.14159f).setSolid(false))
        .setAppearance(new AppearanceObject()
          .setMaterial(new MaterialObject().setDiffuseColor(0.8f,0.3f,0.3f))))));
  }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3DObject x3dModel;

	/** Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="http://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html">X3DObject</a>
	 * @return ExtrusionHeart model
	 */
	public X3DObject getX3dModel()
	{	  
		return x3dModel;
	}
	   
    /** Default main() method provided for test purposes, uses CommandLine to set global ConfigurationProperties for this object.
     * @param args array of input parameters, provided as arguments
	 * @see <a href="http://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html#handleArguments-java.lang.String:A-">X3DObject.handleArguments(args)</a>
	 * @see <a href="http://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html#validationReport--">X3DObject.validationReport()</a>
     * @see <a href="http://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html">CommandLine</a>
     * @see <a href="http://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html#USAGE">CommandLine.USAGE</a>
     * @see <a href="http://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/ConfigurationProperties.html">ConfigurationProperties</a>
     */
    public static void main(String args[])
    {
        X3DObject exampleObject = new ExtrusionHeart().getX3dModel();

        exampleObject.handleArguments(args);
		boolean validate = (args.length == 0);
		for (String arg : args)
		{
			if (arg.toLowerCase().startsWith("-v") || arg.toLowerCase().contains("validate"))
			{
				validate = true;
				break;
			}
		}
		if (validate)
		{
			System.out.print("ExtrusionHeart self-validation test results: ");
			String validationResults = exampleObject.validationReport();
			System.out.println(validationResults);
		}
    }
}

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
 * <p> 12 extrusions to test prototype expander. </p>
 <p> Related links: qq3.java source, <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="http://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.qq3&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://coderextreme.net/x3d/qq3.x3d">qq3.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> John Carlson </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> John Carlson </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 11 Jan 2015 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 05 May 2017 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> 12 extrusions to test prototype expander </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://coderextreme.net/x3d/qq3.x3d" target="_blank">https://coderextreme.net/x3d/qq3.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> manual </td>
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

	* @author John Carlson
 */

public class qq3
{
	/** Default constructor to create this object. */
	public qq3 ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3DObject().setProfile("Immersive").setVersion("3.3")
  .setHead(new headObject()
    .addMeta(new metaObject().setName("title").setContent("qq3.x3d"))
    .addMeta(new metaObject().setName("creator").setContent("John Carlson"))
    .addMeta(new metaObject().setName("translator").setContent("John Carlson"))
    .addMeta(new metaObject().setName("created").setContent("11 Jan 2015"))
    .addMeta(new metaObject().setName("modified").setContent("05 May 2017"))
    .addMeta(new metaObject().setName("description").setContent("12 extrusions to test prototype expander"))
    .addMeta(new metaObject().setName("identifier").setContent("https://coderextreme.net/x3d/qq3.x3d"))
    .addMeta(new metaObject().setName("generator").setContent("manual")))
  .setScene(new SceneObject()
    .addChild(new ProtoDeclareObject().setName("Process")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new GroupObject()
          .addComments(" left ")
          .addChild(new TransformObject().setScale(new SFVec3fObject(new float[] {0.5f,0.5f,0.5f}))
            .addChild(new ShapeObject("ShapeLeftDown")
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(new SFColorObject(new float[] {0.7f,1.0f,0.0f}))))
              .setGeometry(new ExtrusionObject().setSpine(new MFVec3fObject(new float[] {-2.5f,0.0f,0.0f,-1.5f,0.0f,0.0f})).setCreaseAngle(0.785f).setCrossSection(new MFVec2fObject(new float[] {1.00f,0.00f,0.92f,-0.38f,0.71f,-0.71f,0.38f,-0.92f,0.00f,-1.00f,-0.38f,-0.92f,-0.71f,-0.71f,-0.92f,-0.38f,-1.00f,-0.00f,-0.92f,0.38f,-0.71f,0.71f,-0.38f,0.92f,0.00f,1.00f,0.38f,0.92f,0.71f,0.71f,0.92f,0.38f,1.00f,0.00f})))))
          .addComments(" right ")
          .addChild(new TransformObject().setScale(new SFVec3fObject(new float[] {0.5f,0.5f,0.5f}))
            .addChild(new ShapeObject("ShapeUpRight")
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(new SFColorObject(new float[] {0.0f,0.7f,1.0f}))))
              .setGeometry(new ExtrusionObject().setCreaseAngle(0.785f).setCrossSection(new MFVec2fObject(new float[] {1.00f,0.00f,0.92f,-0.38f,0.71f,-0.71f,0.38f,-0.92f,0.00f,-1.00f,-0.38f,-0.92f,-0.71f,-0.71f,-0.92f,-0.38f,-1.00f,-0.00f,-0.92f,0.38f,-0.71f,0.71f,-0.38f,0.92f,0.00f,1.00f,0.38f,0.92f,0.71f,0.71f,0.92f,0.38f,1.00f,0.00f})).setSpine(new MFVec3fObject(new float[] {1.5f,0.0f,0.0f,2.5f,0.0f,0.0f})))))
          .addComments(" up ")
          .addChild(new TransformObject().setScale(new SFVec3fObject(new float[] {0.5f,0.5f,0.5f}))
            .addChild(new ShapeObject().setUSE("ShapeUpRight")))
          .addComments(" down ")
          .addChild(new TransformObject().setScale(new SFVec3fObject(new float[] {0.5f,0.5f,0.5f}))
            .addChild(new ShapeObject().setUSE("ShapeLeftDown"))))))
    .addChild(new ViewpointObject().setDescription("Process pipes").setPosition(new SFVec3fObject(new float[] {0.0f,5.0f,12.0f})).setOrientation(new SFRotationObject(new float[] {1.0f,0.0f,0.0f,-0.4f})))
    .addChild(new TransformObject().setTranslation(new SFVec3fObject(new float[] {0.0f,-2.5f,0.0f}))
      .addChild(new ProtoInstanceObject().setName("Process")))
    .addChild(new TransformObject()
      .addChild(new ProtoInstanceObject().setName("Process")))
    .addChild(new TransformObject().setTranslation(new SFVec3fObject(new float[] {0.0f,2.5f,0.0f}))
      .addChild(new ProtoInstanceObject().setName("Process"))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3DObject x3dModel;

	/** Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="http://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html">X3DObject</a>
	 * @return qq3 model
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
        X3DObject thisExampleX3dObject = new qq3().getX3dModel();

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
				if (arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_X3D) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_CLASSICVRML) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_X3DB) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_VRML97) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_EXI) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_GZIP) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_ZIP) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_HTML) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_XHTML))
				{
					argumentsLoadNewModel = true;
					fileName = arg;
				}
			}
		}
		if      (argumentsLoadNewModel)
			System.out.print("WARNING: \"qq3\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dObject.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"qq3\" self-validation test results: ");
			String validationResults = thisExampleX3dObject.validationReport();
			System.out.println(validationResults);
		}
    }
}

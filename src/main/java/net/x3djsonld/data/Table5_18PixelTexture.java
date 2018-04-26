package net.x3djsonld.data;

import java.util.*;
import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Texturing.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> PixelTexture example for Table 5.18. </p>
 <p> Related links: <a href="../../../Chapter05AppearanceMaterialTextures/Table5_18PixelTexture.java">Table5_18PixelTexture.java</a> source, <a href="../../../Chapter05AppearanceMaterialTextures/Index.html" target="_top"> catalog page</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="http://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../Chapter05AppearanceMaterialTextures/Table5_18PixelTexture">Table5_18PixelTexture</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> PixelTexture example for Table 5.18 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Leonard Daly and Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 18 December 2006 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 2 April 2017 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://X3dGraphics.com" target="_blank">http://X3dGraphics.com</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">http://www.web3d.org/x3d/content/examples/X3dResources.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> rights </i> </td>
			<td> Copyright 2006, Daly Realism and Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> X3D, PixelTexture </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/Table5_18PixelTexture" target="_blank">http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/Table5_18PixelTexture</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../Chapter05AppearanceMaterialTextures/../license.html">../license.html</a> </td>
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

	* @author Leonard Daly and Don Brutzman
 */

public class Table5_18PixelTexture
{
	/** Default constructor to create this object. */
	public Table5_18PixelTexture ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3DObject().setProfile("Interchange").setVersion("3.3")
  .setHead(new headObject()
    .addMeta(new metaObject().setName("title").setContent("Table5_18PixelTexture"))
    .addMeta(new metaObject().setName("description").setContent("PixelTexture example for Table 5.18"))
    .addMeta(new metaObject().setName("creator").setContent("Leonard Daly and Don Brutzman"))
    .addMeta(new metaObject().setName("created").setContent("18 December 2006"))
    .addMeta(new metaObject().setName("modified").setContent("2 April 2017"))
    .addMeta(new metaObject().setName("reference").setContent("http://X3dGraphics.com"))
    .addMeta(new metaObject().setName("reference").setContent("http://www.web3d.org/x3d/content/examples/X3dResources.html"))
    .addMeta(new metaObject().setName("rights").setContent("Copyright 2006, Daly Realism and Don Brutzman"))
    .addMeta(new metaObject().setName("subject").setContent("X3D, PixelTexture"))
    .addMeta(new metaObject().setName("identifier").setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/Table5_18PixelTexture"))
    .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new metaObject().setName("license").setContent("../license.html")))
  .setScene(new SceneObject()
    .addChild(new BackgroundObject().setSkyColor(new MFColorObject(new float[] {0.0f,0.0f,1.0f})))
    .addChild(new TransformObject("Checkerboard").setTranslation(new SFVec3fObject(new float[] {0.0f,0.0f,-10.0f}))
      .addChild(new ShapeObject()
        .setAppearance(new AppearanceObject()
          .setTextureTransform(new TextureTransformObject().setScale(new SFVec2fObject(new float[] {500.0f,500.0f})))
          .setTexture(new PixelTextureObject().setImage(new int[] {2,2,3,0xE6B5FD,0xFFDBB7,0xFFDBB7,0xE6B5FD})))
        .setGeometry(new BoxObject().setSize(new SFVec3fObject(new float[] {1000.0f,1000.0f,.01f})))))
    .addChild(new ViewpointObject().setDescription("View All").setPosition(new SFVec3fObject(new float[] {0.0f,0.0f,20.0f})))
    .addChild(new ViewpointObject().setDescription("Empty Image").setPosition(new SFVec3fObject(new float[] {0.0f,5.0f,5.0f})))
    .addChild(new TransformObject("EmptyImage").setTranslation(new SFVec3fObject(new float[] {0.0f,5.0f,0.0f})).setRotation(new SFRotationObject(new float[] {1.0f,1.0f,0.0f,1.0f}))
      .addChild(new ShapeObject()
        .setAppearance(new AppearanceObject()
          .setTexture(new PixelTextureObject()))
        .setGeometry(new BoxObject("StandardBox"))))
    .addChild(new ViewpointObject().setDescription("Black and white PixelTexture").setPosition(new SFVec3fObject(new float[] {-5.0f,0.0f,5.0f})))
    .addChild(new TransformObject("BW").setTranslation(new SFVec3fObject(new float[] {-5.0f,0.0f,0.0f})).setRotation(new SFRotationObject(new float[] {1.0f,1.0f,0.0f,1.0f}))
      .addChild(new ShapeObject()
        .setAppearance(new AppearanceObject()
          .setTexture(new PixelTextureObject().setImage(new int[] {1,2,1,0xFF,0x00})))
        .setGeometry(new BoxObject().setUSE("StandardBox"))))
    .addChild(new ViewpointObject().setDescription("Black and white with Alpha PixelTexture").setPosition(new SFVec3fObject(new float[] {5.0f,0.0f,5.0f})))
    .addChild(new TransformObject("AlphaBW").setRotation(new SFRotationObject(new float[] {1.0f,1.0f,0.0f,1.0f})).setTranslation(new SFVec3fObject(new float[] {5.0f,0.0f,0.0f}))
      .addChild(new ShapeObject()
        .setAppearance(new AppearanceObject()
          .setTexture(new PixelTextureObject().setImage(new int[] {2,1,2,0xCCFF,0x2277})))
        .setGeometry(new BoxObject().setUSE("StandardBox"))))
    .addChild(new ViewpointObject().setDescription("RGB PixelTexture").setPosition(new SFVec3fObject(new float[] {-5.0f,-5.0f,5.0f})))
    .addChild(new TransformObject("RGB").setTranslation(new SFVec3fObject(new float[] {-5.0f,-5.0f,0.0f})).setRotation(new SFRotationObject(new float[] {1.0f,1.0f,0.0f,1.0f}))
      .addChild(new ShapeObject()
        .setAppearance(new AppearanceObject()
          .setTexture(new PixelTextureObject().setImage(new int[] {2,4,3,0xFF0000,0x00FF00,0,0,0,0,0xFFFFFF,0xFFFF00})))
        .setGeometry(new BoxObject().setUSE("StandardBox"))))
    .addChild(new ViewpointObject().setDescription("RGB with Alpha PixelTexture").setPosition(new SFVec3fObject(new float[] {5.0f,-5.0f,5.0f})))
    .addChild(new TransformObject("AlphaRGB").setRotation(new SFRotationObject(new float[] {1.0f,1.0f,0.0f,1.0f})).setTranslation(new SFVec3fObject(new float[] {5.0f,-5.0f,0.0f}))
      .addChild(new ShapeObject()
        .setAppearance(new AppearanceObject()
          .setTexture(new PixelTextureObject().setImage(new int[] {3,2,4,0xFF0000FF,0x00FF00FF,0x0000FFFF,0xFF00007F,0x00FF007F,0x0000FF7F})))
        .setGeometry(new BoxObject().setUSE("StandardBox")))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3DObject x3dModel;

	/** Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="http://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html">X3DObject</a>
	 * @return Table5_18PixelTexture model
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
        X3DObject thisExampleX3dObject = new Table5_18PixelTexture().getX3dModel();

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
			System.out.print("WARNING: \"Table5_18PixelTexture\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dObject.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"Table5_18PixelTexture\" self-validation test results: ");
			String validationResults = thisExampleX3dObject.validationReport();
			System.out.println(validationResults);
		}
    }
}

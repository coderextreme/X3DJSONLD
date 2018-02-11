package net.x3djsonld.data;

import java.util.*;
import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Texturing.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> This example shows the five PixelTexture components, with 0 to 4 components each, shown in Table 5-18. </p>
 <p> Related links: <a href="../../../Chapter05AppearanceMaterialTextures/PixelTextureComponentExamples.java">PixelTextureComponentExamples.java</a> source, <a href="../../../Chapter05AppearanceMaterialTextures/PixelTextureComponentExamplesIndex.html" target="_top">PixelTextureComponentExamples catalog page</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="http://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../Chapter05AppearanceMaterialTextures/PixelTextureComponentExamples.x3d">PixelTextureComponentExamples.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> This example shows the five PixelTexture components, with 0 to 4 components each, shown in Table 5-18. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Leonard Daly and Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 25 August 2008 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 7 January 2014 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://X3dGraphics.com" target="_blank">http://X3dGraphics.com</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> X3D for Web Authors, Table 5.18 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">http://www.web3d.org/x3d/content/examples/X3dResources.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> rights </i> </td>
			<td> Copyright (c) 2006, Daly Realism and Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> X3D book, X3D graphics, X3D-Edit, <a href="http://www.x3dGraphics.com" target="_blank">http://www.x3dGraphics.com</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/PixelTextureComponentExamples.x3d" target="_blank">http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/PixelTextureComponentExamples.x3d</a> </td>
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

public class PixelTextureComponentExamples
{
	/** Default constructor to create this object. */
	public PixelTextureComponentExamples ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3DObject().setProfile("Immersive").setVersion("3.3")
  .setHead(new headObject()
    .addMeta(new metaObject().setName("title").setContent("PixelTextureComponentExamples.x3d"))
    .addMeta(new metaObject().setName("description").setContent("This example shows the five PixelTexture components, with 0 to 4 components each, shown in Table 5-18."))
    .addMeta(new metaObject().setName("creator").setContent("Leonard Daly and Don Brutzman"))
    .addMeta(new metaObject().setName("created").setContent("25 August 2008"))
    .addMeta(new metaObject().setName("modified").setContent("7 January 2014"))
    .addMeta(new metaObject().setName("reference").setContent("http://X3dGraphics.com"))
    .addMeta(new metaObject().setName("reference").setContent("X3D for Web Authors, Table 5.18"))
    .addMeta(new metaObject().setName("reference").setContent("http://www.web3d.org/x3d/content/examples/X3dResources.html"))
    .addMeta(new metaObject().setName("rights").setContent("Copyright (c) 2006, Daly Realism and Don Brutzman"))
    .addMeta(new metaObject().setName("subject").setContent("X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com"))
    .addMeta(new metaObject().setName("identifier").setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/PixelTextureComponentExamples.x3d"))
    .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new metaObject().setName("license").setContent("../license.html")))
  .setScene(new SceneObject()
    .addChild(new BackgroundObject().setSkyColor(new MFColorObject(new float[] {0.1f,0.1f,0.4f})))
    .addChild(new ViewpointObject().setDescription("Table 5.18 SFImage component examples").setPosition(0.0f,0.0f,14.0f))
    .addChild(new TransformObject().setTranslation(-6.0f,0.0f,0.0f)
      .addChild(new ShapeObject()
        .setAppearance(new AppearanceObject()
          .setTexture(new PixelTextureObject("ZeroComponents")))
        .setGeometry(new BoxObject()))
      .addChild(new TransformObject().setTranslation(0.0f,-2.0f,0.0f)
        .addChild(new ShapeObject()
          .setGeometry(new TextObject().setString(new MFStringObject("\"0\""))
            .setFontStyle(new FontStyleObject("CenterJustify").setJustify(new MFStringObject("\"MIDDLE\" \"MIDDLE\""))))
          .setAppearance(new AppearanceObject("TextMaterial")
            .setMaterial(new MaterialObject().setDiffuseColor(1.0f,1.0f,1.0f))))))
    .addChild(new TransformObject().setTranslation(-3.0f,0.0f,0.0f)
      .addChild(new ShapeObject()
        .setAppearance(new AppearanceObject()
          .setTexture(new PixelTextureObject("OneComponent").setImage(new int[] {1,2,1,0xFF,0x00})))
        .setGeometry(new BoxObject()))
      .addChild(new TransformObject().setTranslation(0.0f,-2.0f,0.0f)
        .addChild(new ShapeObject()
          .setGeometry(new TextObject().setString(new MFStringObject("\"1\""))
            .setFontStyle(new FontStyleObject().setUSE("CenterJustify")))
          .setAppearance(new AppearanceObject().setUSE("TextMaterial")))))
    .addChild(new TransformObject()
      .addChild(new ShapeObject()
        .setAppearance(new AppearanceObject()
          .setTexture(new PixelTextureObject("TwoComponents").setImage(new int[] {2,1,2,0xCCFF,0x2277})))
        .setGeometry(new BoxObject()))
      .addChild(new TransformObject().setTranslation(0.0f,-2.0f,0.0f)
        .addChild(new ShapeObject()
          .setGeometry(new TextObject().setString(new MFStringObject("\"2\""))
            .setFontStyle(new FontStyleObject().setUSE("CenterJustify")))
          .setAppearance(new AppearanceObject().setUSE("TextMaterial")))))
    .addChild(new TransformObject().setTranslation(3.0f,0.0f,0.0f)
      .addChild(new ShapeObject()
        .setAppearance(new AppearanceObject()
          .addComments(" note 0x000000 = 0 ")
          .setTexture(new PixelTextureObject("ThreeComponents").setImage(new int[] {2,4,3,0xFF0000,0xFF00,0x000000,0,0,0,0xFFFFFF,0xFFFF00})))
        .setGeometry(new BoxObject()))
      .addChild(new TransformObject().setTranslation(0.0f,-2.0f,0.0f)
        .addChild(new ShapeObject()
          .setGeometry(new TextObject().setString(new MFStringObject("\"3\""))
            .setFontStyle(new FontStyleObject().setUSE("CenterJustify")))
          .setAppearance(new AppearanceObject().setUSE("TextMaterial")))))
    .addChild(new TransformObject().setTranslation(6.0f,0.0f,0.0f)
      .addChild(new ShapeObject()
        .setAppearance(new AppearanceObject()
          .addComments(" Erroneous value in book: 1 0 0 255, 0 1 0 255, 0 0 1 255, 1 0 0 127, 0 1 0 127, 0 0 1 127 ")
          .setTexture(new PixelTextureObject("FourComponents").setImage(new int[] {3,2,4,0xFF0000FF,0x00FF00FF,0x0000FFFF,0xFF00007F,0x00FF007F,0x0000FF7F})))
        .setGeometry(new BoxObject()))
      .addChild(new TransformObject().setTranslation(0.0f,-2.0f,0.0f)
        .addChild(new ShapeObject()
          .setGeometry(new TextObject().setString(new MFStringObject("\"4\""))
            .setFontStyle(new FontStyleObject().setUSE("CenterJustify")))
          .setAppearance(new AppearanceObject().setUSE("TextMaterial")))))
    .addComments(" Background from PixelTextureBW.x3d ")
    .addChild(new TransformObject().setTranslation(0.0f,6.0f,-2.0f)
      .addChild(new ShapeObject()
        .setAppearance(new AppearanceObject()
          .setTexture(new PixelTextureObject().setImage(PixelTexture_6_68_image)))
        .setGeometry(new BoxObject().setSize(16.0f,16.0f,.1f)))));
  }
	// end of initialize() method

	/** Large attribute array: PixelTexture image field, scene-graph level=6, element #68, 67 total numbers */
	private SFImageObject PixelTexture_6_68_image = new SFImageObject(new int[] {8,8,1,0xcc,0x00,0xcc,0x00,0xcc,0x00,0xcc,0x00,0x00,0xcc,0x00,0xcc,0x00,0xcc,0x00,0xcc,0xcc,0x00,0xcc,0x00,0xcc,0x00,0xcc,0x00,0x00,0xcc,0x00,0xcc,0x00,0xcc,0x00,0xcc,0xcc,0x00,0xcc,0x00,0xcc,0x00,0xcc,0x00,0x00,0xcc,0x00,0xcc,0x00,0xcc,0x00,0xcc,0xcc,0x00,0xcc,0x00,0xcc,0x00,0xcc,0x00,0x00,0xcc,0x00,0xcc,0x00,0xcc,0x00,0xcc});

	/** The initialized model object, created within initialize() method. */
	private X3DObject x3dModel;

	/** Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="http://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html">X3DObject</a>
	 * @return PixelTextureComponentExamples model
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
        X3DObject exampleObject = new PixelTextureComponentExamples().getX3dModel();

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
			System.out.print("PixelTextureComponentExamples self-validation test results: ");
			String validationResults = exampleObject.validationReport();
			System.out.println(validationResults);
		}
    }
}

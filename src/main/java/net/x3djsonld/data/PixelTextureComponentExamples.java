package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Texturing.*;

// Javadoc annotations follow, see below for Java source code.
/**
 * <p> This example shows the five PixelTexture components, with 0 to 4 components each, shown in Table 5-18. </p>
 <p> Related links: <a href="../../../Chapter05AppearanceMaterialTextures/PixelTextureComponentExamples.java">PixelTextureComponentExamples.java</a> source, <a href="../../../Chapter05AppearanceMaterialTextures/PixelTextureComponentExamplesIndex.html" target="_top">PixelTextureComponentExamples catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
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
			<td> <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">https://www.web3d.org/x3d/content/examples/X3dResources.html</a> </td>
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
		<a href="https://www.web3d.org/specifications/java/X3DJSAIL.html" target="_blank">X3D Java Scene Access Interface Library (X3DJSAIL)</a>.
		It has been produced using the 
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">X3dToJava.xslt</a>
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
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_3)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("PixelTextureComponentExamples.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("This example shows the five PixelTexture components, with 0 to 4 components each, shown in Table 5-18."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Leonard Daly and Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("25 August 2008"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("7 January 2014"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://X3dGraphics.com"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("X3D for Web Authors, Table 5.18"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/x3d/content/examples/X3dResources.html"))
    .addMeta(new meta().setName(meta.NAME_RIGHTS     ).setContent("Copyright (c) 2006, Daly Realism and Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/PixelTextureComponentExamples.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new Background().setSkyColor(new MFColor(new double[] {0.1,0.1,0.4})))
    .addChild(new Viewpoint().setDescription("Table 5.18 SFImage component examples").setPosition(0.0,0.0,14.0))
    .addChild(new Transform().setTranslation(-6.0,0.0,0.0)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setTexture(new PixelTexture("ZeroComponents")))
        .setGeometry(new Box()))
      .addChild(new Transform().setTranslation(0.0,-2.0,0.0)
        .addChild(new Shape()
          .setGeometry(new Text().setString(new String[] {"0"})
            .setFontStyle(new FontStyle("CenterJustify").setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE)))
          .setAppearance(new Appearance("TextMaterial")
            .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0))))))
    .addChild(new Transform().setTranslation(-3.0,0.0,0.0)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setTexture(new PixelTexture("OneComponent").setImage(new int[] {1,2,1,0xFF,0x00})))
        .setGeometry(new Box()))
      .addChild(new Transform().setTranslation(0.0,-2.0,0.0)
        .addChild(new Shape()
          .setGeometry(new Text().setString(new String[] {"1"})
            .setFontStyle(new FontStyle().setUSE("CenterJustify")))
          .setAppearance(new Appearance().setUSE("TextMaterial")))))
    .addChild(new Transform()
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setTexture(new PixelTexture("TwoComponents").setImage(new int[] {2,1,2,0xCCFF,0x2277})))
        .setGeometry(new Box()))
      .addChild(new Transform().setTranslation(0.0,-2.0,0.0)
        .addChild(new Shape()
          .setGeometry(new Text().setString(new String[] {"2"})
            .setFontStyle(new FontStyle().setUSE("CenterJustify")))
          .setAppearance(new Appearance().setUSE("TextMaterial")))))
    .addChild(new Transform().setTranslation(3.0,0.0,0.0)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .addComments(" note 0x000000 = 0 ")
          .setTexture(new PixelTexture("ThreeComponents").setImage(new int[] {2,4,3,0xFF0000,0xFF00,0x000000,0,0,0,0xFFFFFF,0xFFFF00})))
        .setGeometry(new Box()))
      .addChild(new Transform().setTranslation(0.0,-2.0,0.0)
        .addChild(new Shape()
          .setGeometry(new Text().setString(new String[] {"3"})
            .setFontStyle(new FontStyle().setUSE("CenterJustify")))
          .setAppearance(new Appearance().setUSE("TextMaterial")))))
    .addChild(new Transform().setTranslation(6.0,0.0,0.0)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .addComments(" Erroneous value in book: 1 0 0 255, 0 1 0 255, 0 0 1 255, 1 0 0 127, 0 1 0 127, 0 0 1 127 ")
          .setTexture(new PixelTexture("FourComponents").setImage(new int[] {3,2,4,0xFF0000FF,0x00FF00FF,0x0000FFFF,0xFF00007F,0x00FF007F,0x0000FF7F})))
        .setGeometry(new Box()))
      .addChild(new Transform().setTranslation(0.0,-2.0,0.0)
        .addChild(new Shape()
          .setGeometry(new Text().setString(new String[] {"4"})
            .setFontStyle(new FontStyle().setUSE("CenterJustify")))
          .setAppearance(new Appearance().setUSE("TextMaterial")))))
    .addComments(" Background from PixelTextureBW.x3d ")
    .addChild(new Transform().setTranslation(0.0,6.0,-2.0)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setTexture(new PixelTexture().setImage(new int[] {8,8,1,0xcc,0x00,0xcc,0x00,0xcc,0x00,0xcc,0x00,0x00,0xcc,0x00,0xcc,0x00,0xcc,0x00,0xcc,0xcc,0x00,0xcc,0x00,0xcc,0x00,0xcc,0x00,0x00,0xcc,0x00,0xcc,0x00,0xcc,0x00,0xcc,0xcc,0x00,0xcc,0x00,0xcc,0x00,0xcc,0x00,0x00,0xcc,0x00,0xcc,0x00,0xcc,0x00,0xcc,0xcc,0x00,0xcc,0x00,0xcc,0x00,0xcc,0x00,0x00,0xcc,0x00,0xcc,0x00,0xcc,0x00,0xcc})))
        .setGeometry(new Box().setSize(16.0,16.0,.1)))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return PixelTextureComponentExamples model
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
        X3D thisExampleX3dModel = new PixelTextureComponentExamples().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.PixelTextureComponentExamples\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.PixelTextureComponentExamples\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

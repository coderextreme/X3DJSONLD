package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Texturing.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Provides a cube-shaped model with interesting theme words for the Box of X3D Blog!. </p>
 <p> Related links: <a href="../../../Web3dOutreach/X3d4Cube.java">X3d4Cube.java</a> source, <a href="../../../Web3dOutreach/X3d4CubeIndex.html" target="_top">X3d4Cube catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../Web3dOutreach/X3d4Cube.x3d">X3d4Cube.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Anita Havele </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 30 September 2020 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 30 September 2020 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Provides a cube-shaped model with interesting theme words for the Box of X3D Blog! </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://X3dGraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/CubeWithLabeledSides.x3d" target="_blank">https://X3dGraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/CubeWithLabeledSides.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../Web3dOutreach/logo/X3d4CubeImages.png">logo/X3d4CubeImages.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> drawing </i> </td>
			<td> <a href="../../../Web3dOutreach/logo/X3d4CubeImages.vsd">logo/X3d4CubeImages.vsd</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> drawing </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/logo/TestBoxImages.vsd" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/logo/TestBoxImages.vsd</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/X3d4Cube.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/X3d4Cube.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../Web3dOutreach/../license.html">../license.html</a> </td>
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
	* @author Anita Havele
 */

public class X3d4Cube
{
	/** Default constructor to create this object. */
	public X3d4Cube ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_INTERCHANGE).setVersion(X3D.VERSION_3_3)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("X3d4Cube.x3d"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Anita Havele"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("30 September 2020"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("30 September 2020"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Provides a cube-shaped model with interesting theme words for the Box of X3D Blog!"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://X3dGraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/CubeWithLabeledSides.x3d"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("logo/X3d4CubeImages.png"))
    .addMeta(new meta().setName(meta.NAME_DRAWING    ).setContent("logo/X3d4CubeImages.vsd"))
    .addMeta(new meta().setName(meta.NAME_DRAWING    ).setContent("https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/logo/TestBoxImages.vsd"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/X3d4Cube.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("X3d4Cube.x3d"))
    .addChild(new Background().setSkyColor(new MFColor(new double[] {0.05,0.05,0.1})))
    .addChild(new Group()
      .addChild(new Viewpoint().setDescription("Front view").setOrientation(0.0,1.0,0.0,1.57).setPosition(8.0,0.0,0.0))
      .addChild(new Shape("Front")
        .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {0,1,2,3}).setTexCoordIndex(new int[] {0,1,2,3})
          .setCoord(new Coordinate("Points").setPoint(new MFVec3f(new double[] {1.0,1.0,1.0,1.0,-1.0,1.0,1.0,-1.0,-1.0,1.0,1.0,-1.0,-1.0,1.0,1.0,-1.0,-1.0,1.0,-1.0,-1.0,-1.0,-1.0,1.0,-1.0})))
          .setTexCoord(new TextureCoordinate("DefaultTextureCoordinate").setPoint(new MFVec2f(new double[] {0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0}))))
        .setAppearance(new Appearance()
          .setTexture(new ImageTexture().setUrl(new String[] {"logo/frontGlTF.png","https://X3dGraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/logo/frontGlTF.png","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/logo/frontGlTF.png"}))
          .addComments(" Possible variation: experiment with indices to as alternative to TextureTransform rotations ")
          .setTextureTransform(new TextureTransform("RotateRight").setRotation(-1.57))))
      .addChild(new Viewpoint().setDescription("Back view").setOrientation(0.0,1.0,0.0,-1.57).setPosition(-8.0,0.0,0.0))
      .addChild(new Shape("Back")
        .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {7,6,5,4}).setTexCoordIndex(new int[] {0,1,2,3})
          .setCoord(new Coordinate().setUSE("Points"))
          .setTexCoord(new TextureCoordinate().setUSE("DefaultTextureCoordinate")))
        .setAppearance(new Appearance()
          .setTexture(new ImageTexture().setUrl(new String[] {"logo/backWebGL.png","https://X3dGraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/logo/backWebGL.png","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/logo/backWebGL.png"}))
          .setTextureTransform(new TextureTransform().setUSE("RotateRight"))))
      .addChild(new Viewpoint().setDescription("Left view").setOrientation(0.0,1.0,0.0,3.1416).setPosition(0.0,0.0,-8.0))
      .addChild(new Shape("Left")
        .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {3,2,6,7}).setTexCoordIndex(new int[] {0,1,2,3})
          .setCoord(new Coordinate().setUSE("Points"))
          .setTexCoord(new TextureCoordinate().setUSE("DefaultTextureCoordinate")))
        .setAppearance(new Appearance()
          .setTexture(new ImageTexture().setUrl(new String[] {"logo/leftHTML5.png","https://X3dGraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/logo/leftHTML5.png","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/logo/leftHTML5.png"}))
          .setTextureTransform(new TextureTransform().setUSE("RotateRight"))))
      .addChild(new Viewpoint().setDescription("Right view").setPosition(0.0,0.0,8.0))
      .addChild(new Shape("Right")
        .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {0,4,5,1}).setTexCoordIndex(new int[] {0,1,2,3})
          .setCoord(new Coordinate().setUSE("Points"))
          .setTexCoord(new TextureCoordinate().setUSE("DefaultTextureCoordinate")))
        .setAppearance(new Appearance()
          .setTexture(new ImageTexture().setUrl(new String[] {"logo/rightWebAudio.png","https://X3dGraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/logo/rightWebAudio.png","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/logo/rightWebAudio.png"}))
          .setTextureTransform(new TextureTransform("Rotate180").setRotation(3.14159))))
      .addChild(new Viewpoint().setDescription("Top view").setOrientation(1.0,0.0,0.0,-1.57).setPosition(0.0,8.0,0.0))
      .addChild(new Shape("Top")
        .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {0,3,7,4}).setTexCoordIndex(new int[] {0,1,2,3})
          .setCoord(new Coordinate().setUSE("Points"))
          .setTexCoord(new TextureCoordinate().setUSE("DefaultTextureCoordinate")))
        .setAppearance(new Appearance()
          .setTexture(new ImageTexture().setUrl(new String[] {"logo/topX3D4.png","https://X3dGraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/logo/topX3D4.png","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/logo/topX3D4.png"}))
          .setTextureTransform(new TextureTransform("RotateLeft").setRotation(1.57))))
      .addChild(new Viewpoint().setDescription("Bottom view").setOrientation(1.0,0.0,0.0,1.57).setPosition(0.0,-8.0,0.0))
      .addChild(new Shape("Bottom")
        .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {1,5,6,2}).setTexCoordIndex(new int[] {0,1,2,3})
          .setCoord(new Coordinate().setUSE("Points"))
          .setTexCoord(new TextureCoordinate().setUSE("DefaultTextureCoordinate")))
        .setAppearance(new Appearance()
          .setTexture(new ImageTexture().setUrl(new String[] {"logo/bottomJoinWeb3D.png","https://X3dGraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/logo/bottomJoinWeb3D.png","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/logo/bottomJoinWeb3D.png"}))
          .setTextureTransform(new TextureTransform().setUSE("Rotate180"))))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return X3d4Cube model
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
        X3D thisExampleX3dModel = new X3d4Cube().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.X3d4Cube\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.X3d4Cube\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

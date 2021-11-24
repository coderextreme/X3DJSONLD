package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Texturing.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Example scene for RigidBodyPhysics component. </p>
 <p> Related links: <a href="../../../RigidBodyPhysics/CarDemoWorldModel.java">CarDemoWorldModel.java</a> source, <a href="../../../RigidBodyPhysics/CarDemoWorldModelIndex.html" target="_top">CarDemoWorldModel catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../RigidBodyPhysics/CarDemoWorldModel.x3d">CarDemoWorldModel.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Example scene for RigidBodyPhysics component </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Alan Hudson and Justin Couch </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 1 January 2008 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translated </i> </td>
			<td> 30 December 2008 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.xj3d.org/extensions/index.html#Physics" target="_blank">http://www.xj3d.org/extensions/index.html#Physics</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../RigidBodyPhysics/originals/car/main.x3dv">originals/car/main.x3dv</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../RigidBodyPhysics/originals/car/worldModel.x3dv">originals/car/worldModel.x3dv</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.xj3d.org/extensions/rigid_physics_examples.html" target="_blank">http://www.xj3d.org/extensions/rigid_physics_examples.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/rigid_physics.html" target="_blank">https://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/rigid_physics.html</a> </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> under development </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/RigidBodyPhysics/CarDemoWorldModel.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/RigidBodyPhysics/CarDemoWorldModel.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> Xj3D converter, <a href="http://www.xj3d.org" target="_blank">http://www.xj3d.org</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../RigidBodyPhysics/../../license.html">../../license.html</a> </td>
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

	* @author Alan Hudson and Justin Couch
 */

public class CarDemoWorldModel
{
	/** Default constructor to create this object. */
	public CarDemoWorldModel ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_INTERCHANGE).setVersion(X3D.VERSION_3_2)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("CarDemoWorldModel.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Example scene for RigidBodyPhysics component"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Alan Hudson and Justin Couch"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("1 January 2008"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATED ).setContent("30 December 2008"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.xj3d.org/extensions/index.html#Physics"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("originals/car/main.x3dv"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("originals/car/worldModel.x3dv"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.xj3d.org/extensions/rigid_physics_examples.html"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/rigid_physics.html"))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("under development"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/RigidBodyPhysics/CarDemoWorldModel.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Xj3D converter, http://www.xj3d.org"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("CarDemoWorldModel.x3d"))
    .addChild(new Transform("Ramp1").setRotation(0.0,0.0,-1.0,0.135494).setTranslation(347.056,4.87479,-376.17)
      .addChild(new Shape()
        .setAppearance(new Appearance("RAMP")
          .setTexture(new ImageTexture("TEXAG_1").setUrl(new String[] {"originals/car/textures/wall-stone-001.jpg","https://www.web3d.org/x3d/content/examples/Basic/RigidBodyPhysics/originals/car/textures/wall-stone-001.jpg"})))
        .setGeometry(new Box().setSize(90.0,1.0,70.0))))
    .addChild(new Transform("Ramp2").setTranslation(301.193,1.4,-376.315)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setTexture(new ImageTexture().setUSE("TEXAG_1")))
        .setGeometry(new IndexedFaceSet("_0").setDEF("_0").setCreaseAngle(0.5).setCoordIndex(new int[] {0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1}).setTexCoordIndex(new int[] {0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1})
          .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-1.5,10.0,35.0,-1.5,-10.0,35.0,1.5,10.0,35.0,1.5,-10.0,35.0,1.5,10.0,-35.0,1.5,-10.0,-35.0,-1.5,10.0,-35.0,-1.5,-10.0,-35.0})))
          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.478571,0.642857,0.478571,0.357143,0.521429,0.642857,0.521429,0.357143,0.478571,0.642857,0.478571,0.357143,0.521429,0.642857,0.521429,0.357143}))))))
    .addChild(new Transform("TallBuilding").setTranslation(-163.719,24.0,-590.325)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setTexture(new ImageTexture("TEXAG_3").setUrl(new String[] {"originals/car/textures/019619.jpg","https://www.web3d.org/x3d/content/examples/Basic/RigidBodyPhysics/originals/car/textures/019619.jpg"})))
        .setGeometry(new IndexedFaceSet("_1").setDEF("_1").setCreaseAngle(0.5).setCoordIndex(new int[] {0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,1,7,5,3,-1}).setTexCoordIndex(new int[] {0,1,3,2,-1,4,5,7,6,-1,8,9,11,10,-1,12,13,15,14,-1,16,17,19,18,-1})
          .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-20.0,24.0,20.0,-20.0,-24.0,20.0,20.0,24.0,20.0,20.0,-24.0,20.0,20.0,24.0,-20.0,20.0,-24.0,-20.0,-20.0,24.0,-20.0,-20.0,-24.0,-20.0})))
          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.0,1.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,1.0,1.0,0.0}))))))
    .addChild(new Transform().setTranslation(-163.719,24.0,-590.325)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setTexture(new ImageTexture("TEXAG_4").setUrl(new String[] {"originals/car/textures/stone0.gif","https://www.web3d.org/x3d/content/examples/Basic/RigidBodyPhysics/originals/car/textures/stone0.gif"}))
          .setTextureTransform(new TextureTransform().setScale(20.0,20.0)))
        .setGeometry(new IndexedFaceSet("_2").setDEF("_2").setCreaseAngle(0.5).setCoordIndex(new int[] {0,1,2,3,-1}).setTexCoordIndex(new int[] {0,1,2,3,-1})
          .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-20.0,24.0,-20.0,-20.0,24.0,20.0,20.0,24.0,20.0,20.0,24.0,-20.0})))
          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0}))))))
    .addChild(new Transform("SmallBuilding-001").setTranslation(-101.759,19.0,-451.126)
      .addChild(new Transform("SmallBuilding")
        .addChild(new Transform()
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setTexture(new ImageTexture().setUSE("TEXAG_3")))
            .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5).setCoordIndex(new int[] {0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,1,7,5,3,-1}).setTexCoordIndex(new int[] {0,1,3,2,-1,4,5,7,6,-1,8,9,11,10,-1,12,13,15,14,-1,16,17,19,18,-1})
              .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-20.0,19.0,20.0,-20.0,-19.0,20.0,20.0,19.0,20.0,20.0,-19.0,20.0,20.0,19.0,-20.0,20.0,-19.0,-20.0,-20.0,19.0,-20.0,-20.0,-19.0,-20.0})))
              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.0,1.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,1.0,1.0,0.0}))))))
        .addChild(new Transform()
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setTexture(new ImageTexture().setUSE("TEXAG_4"))
              .setTextureTransform(new TextureTransform().setScale(20.0,20.0)))
            .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5).setCoordIndex(new int[] {0,1,2,3,-1}).setTexCoordIndex(new int[] {0,1,2,3,-1})
              .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-20.0,19.0,-20.0,-20.0,19.0,20.0,20.0,19.0,20.0,20.0,19.0,-20.0})))
              .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0}))))))))
    .addChild(new Transform("SmallBuilding-002").setTranslation(-314.972,19.0,-656.376)
      .addChild(new Transform().setUSE("SmallBuilding")))
    .addChild(new Transform("SmallBuilding-003").setTranslation(-314.723,19.0,-580.647)
      .addChild(new Transform().setUSE("SmallBuilding")))
    .addChild(new Transform("SmallBuilding-004").setTranslation(-269.737,19.0,-452.626)
      .addChild(new Transform().setUSE("SmallBuilding")))
    .addChild(new Transform("SmallBuilding-005").setTranslation(-217.782,19.0,-450.082)
      .addChild(new Transform().setUSE("SmallBuilding")))
    .addChild(new Transform("SmallBuilding-006").setTranslation(-83.8395,19.0,-351.859)
      .addChild(new Transform().setUSE("SmallBuilding")))
    .addChild(new Transform("SmallBuilding-007").setTranslation(-348.799,19.0,-511.969)
      .addChild(new Transform().setUSE("SmallBuilding")))
    .addChild(new Transform("SmallBuilding-008").setTranslation(-23.9812,19.0,-501.768)
      .addChild(new Transform().setUSE("SmallBuilding")))
    .addChild(new Transform("SmallBuilding-009").setTranslation(-101.759,19.0,-451.126)
      .addChild(new Transform().setUSE("SmallBuilding")))
    .addChild(new Transform("Ground").setTranslation(125.0,0.0,-360.0)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setTexture(new ImageTexture("TEXAG_7").setUrl(new String[] {"originals/car/textures/grass.jpg","https://www.web3d.org/x3d/content/examples/Basic/RigidBodyPhysics/originals/car/textures/grass.jpg"}))
          .setTextureTransform(new TextureTransform().setScale(100.0,100.0)))
        .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,4,5,3,-1,4,6,12,16,7,5,-1,17,13,8,11,14,18,10,9,-1,6,8,13,12,-1,11,1,15,14,-1,17,9,7,16,-1,19,2,10,18,-1})
          .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-625.0,0.0,-500.0,-625.0,0.0,500.0,625.0,0.0,500.0,625.0,0.0,-500.0,-625.0,0.0,225.99,625.0,0.0,225.99,-625.194,0.0,303.572,624.806,0.0,294.933,-625.0,0.0,352.657,625.0,0.0,352.657,625.0,0.0,412.38,-625.0,0.0,412.38,-442.167,0.0,302.307,-442.167,0.0,352.657,-442.313,0.0,412.38,-442.313,0.0,500.0,449.668,0.0,296.143,449.668,0.0,352.657,449.828,0.0,412.38,449.828,0.0,500.0}))))))
    .addChild(new Transform("Sand").setTranslation(125.0,0.0,-360.0)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setTexture(new ImageTexture("TEXAG_8").setUrl(new String[] {"originals/car/textures/sand2.jpg","https://www.web3d.org/x3d/content/examples/Basic/RigidBodyPhysics/originals/car/textures/sand2.jpg"}))
          .setTextureTransform(new TextureTransform().setRotation(1.57079).setScale(10.0,50.0)))
        .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,3,-1,4,5,6,7,-1}).setTexCoordIndex(new int[] {0,1,2,3,-1,4,5,6,7,-1})
          .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-442.313,0.0,500.0,449.828,0.0,500.0,449.828,0.0,412.38,-442.313,0.0,412.38,-442.167,0.0,352.657,449.668,0.0,352.657,449.668,0.0,296.143,-442.167,0.0,302.307})))
          .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.0,0.0,1.0,0.0,1.0,0.0982132,0.0,0.0982132,1.63647E-4,0.165157,0.999821,0.165157,0.999821,0.228503,1.63647E-4,0.221594})))))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return CarDemoWorldModel model
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
        X3D thisExampleX3dModel = new CarDemoWorldModel().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.CarDemoWorldModel\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.CarDemoWorldModel\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Lighting.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Shape.*;

// Javadoc annotations follow, see below for Java source code.
/**
 * <p> Main stage for HAnim scene Winter and Spring. </p>
 <p> Related links: MainStage.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.MainStage&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/MainStage.x3d">MainStage.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Main stage for HAnim scene Winter and Spring. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Joe Williams </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Joe Williams and Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 25 May 2023 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 27 May 2023 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/originals/0MainStageScene0525.x3dv">originals/0MainStageScene0525.x3dv</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/MainStage.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/MainStage.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 4.0, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/../license.html">../license.html</a> </td>
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

	* @author Joe Williams
 */

public class MainStage
{
	/** Default constructor to create this object. */
	public MainStage ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_INTERCHANGE).setVersion(X3D.VERSION_4_0)
  .setHead(new head()
    .addComponent(new component().setName("HAnim").setLevel(1))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("MainStage.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Main stage for HAnim scene Winter and Spring."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Joe Williams"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Joe Williams and Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("25 May 2023"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("27 May 2023"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("originals/0MainStageScene0525.x3dv"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/MainStage.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("MainStage.x3d"))
    .addChild(new NavigationInfo().setHeadlight(false))
    .addChild(new DirectionalLight().setAmbientIntensity(1.0).setDirection(-.5,-.5,-.5).setGlobal(true))
    .addChild(new DirectionalLight().setAmbientIntensity(1.0).setDirection(-1.0,-1.0,-1.0).setGlobal(true))
    .addChild(new DirectionalLight().setAmbientIntensity(1.0).setDirection(1.0,1.0,-1.0).setGlobal(true).setIntensity(0.5))
    .addChild(new Viewpoint("Scene_StageFrontViewFar").setDescription("hanim_Stage Front View").setOrientation(1.0,0.0,0.0,-.449999988).setPosition(0.0,4.0,10.0))
    .addChild(new Viewpoint("Scene_InclinedView").setDescription("hanim_Inclined View").setOrientation(-.112999998,.992999971,.034699999,.671000004).setPosition(2.619999886,1.049999952,4.059999943))
    .addChild(new Viewpoint("Scene_StageFrontView").setDescription("hanim_Stage Front View").setPosition(0.0,1.0,5.0))
    .addChild(new Viewpoint("Scene_FeetStageBottomView").setDescription("hanim_feet View").setOrientation(1.0,0.0,0.0,1.570000052).setPosition(0.0,-10.0,0.0))
    .addChild(new Viewpoint("Scene_HeadTopView").setDescription("hanim_Head Top View").setOrientation(1.0,0.0,0.0,-1.570000052).setPosition(0.0,15.0,0.0))
    .addChild(new Viewpoint("Scene_TopFrontCloseView").setDescription("hanim_Head Top View").setOrientation(1.0,0.0,0.0,-1.100000024).setPosition(0.0,8.0,3.0))
    .addChild(new Group("HAnimStage")
      .addChild(new Transform("cordsysfloor").setScale(.174999997,.174999997,.174999997)
        .addChild(new Inline().setUrl(new String[] {"JointCoordinateAxes.x3dv"})))
      .addChild(new Transform("StageGeometry").setScale(1.0,.01,1.0).setTranslation(0.0,-.01,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setTransparency(0.6)))
          .setGeometry(new Box().setSize(9.0,1.0,9.0)))
        .addChild(new Transform("Circle0")
          .addChild(new Shape()
            .setAppearance(new Appearance("LineColor")
              .setMaterial(new Material().setAmbientIntensity(1.0).setDiffuseColor(.699999988,0.0,.899999976).setEmissiveColor(.449999988,.449999988,1.0).setShininess(1.0).setSpecularColor(0.0,0.0,1.0)))
            .setGeometry(new IndexedLineSet("Orbit1").setDEF("Orbit1").setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1})
              .setCoord(new Coordinate().setPoint(getCoordinate_8_32_point())))))
        .addChild(new Transform("Circle1").setScale(.5,1.0,.5)
          .addChild(new Shape()
            .setAppearance(new Appearance().setUSE("LineColor"))
            .setGeometry(new IndexedLineSet().setUSE("Orbit1"))))
        .addChild(new Transform("Circle2").setScale(.25,1.0,.25)
          .addChild(new Shape()
            .setAppearance(new Appearance().setUSE("LineColor"))
            .setGeometry(new IndexedLineSet().setUSE("Orbit1"))))
        .addChild(new Transform("Circle3").setScale(2.0,1.0,2.0)
          .addChild(new Shape()
            .setAppearance(new Appearance().setUSE("LineColor"))
            .setGeometry(new IndexedLineSet().setUSE("Orbit1"))))
        .addChild(new Transform("Circle4").setScale(3.0,1.0,3.0)
          .addChild(new Shape()
            .setAppearance(new Appearance().setUSE("LineColor"))
            .setGeometry(new IndexedLineSet().setUSE("Orbit1")))))));
    }
	// end of initialize() method

		/** Large attribute array: Coordinate point field, scene-graph level=8, element #32, 183 total numbers made up of 61 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_8_32_point()
		{
			MFVec3f Coordinate_8_32_point = new MFVec3f(new double[] {1.0,0.0,0.0,.995000005,0.0,-.104999997,.978999972,0.0,-.208000004,.950999975,0.0,-.308999985,.913999975,0.0,-.407000005,.865999997,0.0,-.5,.809000015,0.0,-.588,.742999971,0.0,-.66900003,.66900003,0.0,-.742999971,.588,0.0,-.809000015,.5,0.0,-.865999997,.407000005,0.0,-.913999975,.308999985,0.0,-.950999975,.208000004,0.0,-.977999985,.104999997,0.0,-.995000005,0.0,0.0,-1.0,-.104999997,0.0,-.994521976,-.208000004,0.0,-.977999985,-.308999985,0.0,-.950999975,-.407000005,0.0,-.913999975,-.5,0.0,-.865999997,-.588,0.0,-.809000015,-.66900003,0.0,-.742999971,-.742999971,0.0,-.66900003,-.809000015,0.0,-.588,-.865999997,0.0,-.5,-.913999975,0.0,-.407000005,-.950999975,0.0,-.308999985,-.977999985,0.0,-.208000004,-.995000005,0.0,-.104999997,-1.0,0.0,0.0,-.995000005,0.0,.104999997,-.977999985,0.0,.208000004,-.950999975,0.0,.308999985,-.913999975,0.0,.407000005,-.865999997,0.0,.5,-.809000015,0.0,.588,-.742999971,0.0,.66900003,-.66900003,0.0,.742999971,-.588,0.0,.809000015,-.5,0.0,.865999997,-.407000005,0.0,.913999975,-.308999985,0.0,.950999975,-.208000004,0.0,.977999985,-.104999997,0.0,.995000005,0.0,0.0,1.0,.104999997,0.0,.995000005,.208000004,0.0,.977999985,.308999985,0.0,.950999975,.407000005,0.0,.913999975,.5,0.0,.865999997,.588,0.0,.809000015,.66900003,0.0,.742999971,.742999971,0.0,.66900003,.809000015,0.0,.588,.865999997,0.0,.5,.913999975,0.0,.407000005,.950999975,0.0,.308999985,.977999985,0.0,.208000004,.995000005,0.0,.104000002,1.0,0.0,0.0});
			return Coordinate_8_32_point;
		}

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return MainStage model
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
        X3D thisExampleX3dModel = new MainStage().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.MainStage\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.MainStage\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

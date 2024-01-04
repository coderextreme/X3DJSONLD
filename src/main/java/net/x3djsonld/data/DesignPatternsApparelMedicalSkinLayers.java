package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.HAnim.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.RigidBodyPhysics.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;

// Javadoc metadata annotations follow, see below for X3DJSAIL Java source code.
/**
 * <p> Design patterns for skin and apparel using HAnim2 standard in X3D4. </p>
 <p> Related links: DesignPatternsApparelMedicalSkinLayers.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.DesignPatternsApparelMedicalSkinLayers&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayers.x3d">DesignPatternsApparelMedicalSkinLayers.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Design patterns for skin and apparel using HAnim2 standard in X3D4 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Joe D. Williams </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Dick Puk </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 23 December 2022 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 2 July 2023 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> DesignPatternsApparelVariations.txt </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> HAnim2 Part 1, HAnim architecture, 4.3 Humanoid object <a href="https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#HumanoidObject" target="_blank">https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#HumanoidObject</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> HAnim2 Part 1, HAnim architecture, E.4 Multiple humanoids per file <a href="https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile" target="_blank">https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> X3D4 Architecture, clause 26 HAnim component, 26.3.2 HAnimHumanoid <a href="https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-DIS/Part01/components/hanim.html#HAnimHumanoid" target="_blank">https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-DIS/Part01/components/hanim.html#HAnimHumanoid</a> </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> Under development. This template example does not produce renderable HAnim models. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayers.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayers.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 4.0, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/../license.html">../license.html</a> </td>
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
		stylesheet
	       (<a href="https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">version&amp;nbsp;control</a>)
                is used to create Java source code from an original <code>.x3d</code> model.
	</p>

	* @author Don Brutzman
	* @author Joe D. Williams
	* @author Dick Puk
 */

public class DesignPatternsApparelMedicalSkinLayers
{
	/** Default constructor to create this object. */
	public DesignPatternsApparelMedicalSkinLayers ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
            try { // catch-all
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_4_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("DesignPatternsApparelMedicalSkinLayers.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Design patterns for skin and apparel using HAnim2 standard in X3D4"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Joe D. Williams"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Dick Puk"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("23 December 2022"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("2 July 2023"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("DesignPatternsApparelVariations.txt"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("HAnim2 Part 1, HAnim architecture, 4.3 Humanoid object https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#HumanoidObject"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("HAnim2 Part 1, HAnim architecture, E.4 Multiple humanoids per file https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("X3D4 Architecture, clause 26 HAnim component, 26.3.2 HAnimHumanoid https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-DIS/Part01/components/hanim.html#HAnimHumanoid"))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("Under development. This template example does not produce renderable HAnim models."))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayers.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("HAnimHumanoid skin design patterns for apparel, medical"))
    .addChild(new Background().setSkyColor(new MFColor(new double[] {0.0,0.6,0.6})))
    .addChild(new Group("MultipleHumanoids")
      .setMetadata(new MetadataString().setName("HAnimArchitecture").setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile").setValue(new String[] {"E.4 Multiple humanoids per file"}))
      .addComments(" ============================== ")
      .addChild(new HAnimHumanoid("a_SimpleSkeleton").setName("SimpleSkeleton").setVersion("2.0")
        .addSkeleton(new HAnimJoint().setName("humanoid_root").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
          .addChild(new HAnimSegment().setName("sacrum")
            .addChild(new Shape("JointVisualization"))
            .addChild(new Shape("SegmentVisualization"))
            .addChild(new HAnimSite("a_feature01_tip").setName("feature01_tip")
              .addChild(new Shape("SiteVisualization"))))))
      .addComments(" ============================== ")
      .addChild(new HAnimHumanoid("b_SimpleSkeletonMesh").setName("SimpleSkeletonMesh").setVersion("2.0")
        .addSkeleton(new HAnimJoint().setName("humanoid_root").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
          .addChild(new HAnimSegment().setName("sacrum")
            .addChild(new Shape()
              .setGeometry(new IndexedFaceSet("SegmentBoneMesh").setDEF("SegmentBoneMesh"))))))
      .addComments(" ============================== ")
      .addChild(new HAnimHumanoid("c_SkinIndexedGeometry").setName("SkinIndexedGeometry").setVersion("2.0")
        .addSkeleton(new HAnimJoint().setName("humanoid_root").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
          .addChild(new HAnimSegment().setName("sacrum")))
        .addSkin(new IndexedFaceSet("SkinMeshIFS").setDEF("SkinMeshIFS")))
      .addComments(" ============================== ")
      .addChild(new HAnimHumanoid("d_SkinShapeIndexedGeometry").setName("SkinShapeIndexedGeometry").setVersion("2.0")
        .addSkeleton(new HAnimJoint().setName("humanoid_root").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
          .addChild(new HAnimSegment().setName("sacrum")))
        .addSkin(new Shape()
          .setGeometry(new IndexedFaceSet().setUSE("SkinMeshIFS"))))
      .addComments(" ============================== ")
      .addChild(new HAnimHumanoid("e_SkinSwitchShapeIndexedGeometry").setName("SkinSwitchShapeIndexedGeometry").setVersion("2.0")
        .addSkeleton(new HAnimJoint().setName("humanoid_root").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
          .addChild(new HAnimSegment().setName("sacrum")))
        .addComments(" TODO show X3D4.0 addition of <Switch DEF='AlternativeSkins' containerField='skin'> ")
        .addSkin(new Shape()
          .setGeometry(new IndexedFaceSet("IndexedSkinMeshIFS").setDEF("IndexedSkinMeshIFS")
            .setCoord(new Coordinate("SkinMeshCoordinate")))))
      .addComments(" similarly for LOD ")
      .addComments(" ============================== ")
      .addChild(new HAnimHumanoid("f_SynthesizedSkinShapeIndexedTwoPartGeometry").setName("SynthesizedSkinShapeIndexedTwoPartGeometry").setVersion("2.0")
        .addSkeleton(new HAnimJoint().setName("humanoid_root").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
          .addChild(new HAnimSegment().setName("sacrum")))
        .addSkin(new Shape()
          .setGeometry(new IndexedFaceSet("TwoPartIndexedSkinMesh").setDEF("TwoPartIndexedSkinMesh")
            .setCoord(new Coordinate("TwoPartSkinMesh")))))
      .addComments(" ============================== ")
      .addChild(new HAnimHumanoid("g_ApparelSkinIndexedGeometryMultipleShapes").setName("ApparelSkinIndexedGeometryMultipleShapes").setVersion("2.0")
        .addSkeleton(new HAnimJoint().setName("humanoid_root").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
          .addChild(new HAnimSegment().setName("sacrum")))
        .addSkin(new Shape())
        .addComments(" allow multiple Shape nodes with containerField='apparel', one for each layer of clothing ")
        .addComments(" TODO proposed for X3D4.1 <Shape containerField='apparel'/> "))
      .addComments(" ============================== ")
      .addChild(new HAnimHumanoid("h_AnatomySkinIndexedGeometryMultipleShapes").setName("AnatomySkinIndexedGeometryMultipleShapes").setVersion("2.0")
        .addSkeleton(new HAnimJoint().setName("humanoid_root").setLlimit(new double[] {0.0,0.0,0.0}).setUlimit(new double[] {0.0,0.0,0.0})
          .addChild(new HAnimSegment().setName("sacrum")))
        .addComments(" allow multiple Shape nodes with containerField='skin', one for each layer of skin ")
        .addSkin(new Shape()))
      .addComments(" ============================== "))
    .addChild(new Viewpoint("ViewHelpText").setDescription("Select text to see website").setPosition(0.0,0.0,12.0))
    .addComments(" Selectable Text design pattern has transparent Box and TouchSensor description as a tooltip ")
    .addChild(new Anchor().setDescription("DesignPatternsApparelMedicalSkinLayers.x3d explores potential apparel approaches").setParameter(new String[] {"target=blank"}).setUrl(new String[] {"https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayersIndex.html"})
      .addChild(new Shape()
        .addComments(" TODO adjust Text string and Box size, then set Material transparency='1' ")
        .setGeometry(new Text().setString(new String[] {"DesignPatternsApparelMedicalSkinLayers.x3d","","explores potential apparel approaches"})
          .setFontStyle(new FontStyle().setFamily(new String[] {"SANS"}).setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(0.6).setCssStyle("BOLD")))
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(0.9,0.9,0.9))))
      .addChild(new Shape()
        .addComments(" Author TODO: to adjust transparent Box as text-selection assist, set width and height to match size, then set transparency='1' to make invisible. ")
        .setGeometry(new Box().setSize(11.0,2.0,.001))
        .setAppearance(new Appearance()
          .setMaterial(new Material().setTransparency(1))))));
            }
            catch (Exception ex)
            {       
                System.err.println ("*** Further hints on X3DJSAIL errors and exceptions at");
                System.err.println ("*** https://www.web3d.org/specifications/java/X3DJSAIL.html");
                throw (ex);
            }
	}
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return DesignPatternsApparelMedicalSkinLayers model
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
        System.out.println("Build this X3D model, showing diagnostics...");
        X3D thisExampleX3dModel = new DesignPatternsApparelMedicalSkinLayers().getX3dModel();
//      System.out.println("X3D model construction complete.");
	
        // next handle command line arguments
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
                System.out.println("WARNING: \"net.x3djsonld.data.DesignPatternsApparelMedicalSkinLayers\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
        else if (hasArguments) // if no arguments provided, this method produces usage warning
                thisExampleX3dModel.handleArguments(args);
	
        if (validate)
        {
            //  System.out.println("--- TODO fix duplicated outputs ---"); // omit when duplicated outputs problem is solved/refactored
		String validationResults = thisExampleX3dModel.validationReport();
            //  System.out.println("-----------------------------------"); // omit when duplicated outputs problem is solved/refactored
                System.out.print("net.x3djsonld.data.DesignPatternsApparelMedicalSkinLayers self-validation test results: ");
                if (!validationResults.equals("success"))
                    System.out.println();
                System.out.println(validationResults.trim());
        }
    }
}

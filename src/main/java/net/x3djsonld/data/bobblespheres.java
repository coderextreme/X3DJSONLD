package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Lighting.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc metadata annotations follow, see below for X3DJSAIL Java source code.
/**
 * <p> Full scene with corrected Script nodes that use the initialize() function to safely reference nodes and prevent race conditions. </p>
 <p> Related links:  source bobblespheres.java, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.bobblespheres&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> Bobble Spheres Full Animation (Final Working) </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Full scene with corrected Script nodes that use the initialize() function to safely reference nodes and prevent race conditions. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Generated from Python script </td>
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
	       (<a href="https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">version control</a>)
                which is used to create Java source code from an original <code>.x3d</code> model.
	</p>

	* @author Generated from Python script
 */

public class bobblespheres
{
	/** Default constructor to create this object. */
	public bobblespheres ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
            try { // catch-all
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_4_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("Bobble Spheres Full Animation (Final Working)"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Full scene with corrected Script nodes that use the initialize() function to safely reference nodes and prevent race conditions."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Generated from Python script"))
    .addComponent(new component().setName("X_ITE").setLevel(1)))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("Bobble Spheres (PBR Full Animation)"))
    .addChild(new NavigationInfo())
    .addChild(new Background().setSkyAngle(new double[] {1.57}).setSkyColor(new MFColor(new double[] {0.15,0.25,0.8,0.9,0.9,0.9})))
    .addChild(new Viewpoint().setDescription("Initial Camera").setFieldOfView(0.349).setOrientation(0.147,0.989,0.005,-1.82).setPosition(-70.0,15.0,-25.0))
    .addChild(new DirectionalLight().setDirection(-0.5,-1.0,-0.5).setIntensity(2))
    .addComments(" Static objects ")
    .addChild(new Transform().setTranslation(0.0,-1000.0,-1.0)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new PhysicalMaterial().setBaseColor(0.5,0.5,0.5)))
        .setGeometry(new Sphere().setRadius(1000))))
    .addChild(new Transform().setTranslation(0.0,1.0,0.0)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new PhysicalMaterial().setBaseColor(0.9,0.9,0.9).setIndexOfRefraction("1.5"
// *** (X3dToJava.xslt error?) Encountered incorrect type, PhysicalMaterial indexOfRefraction: $isNumeric=true, $attributeType=FieldTypeNotFound, value='1.5']
).setRoughness(0.0).setTransmissionFactor("0.9"
// *** (X3dToJava.xslt error?) Encountered incorrect type, PhysicalMaterial transmissionFactor: $isNumeric=true, $attributeType=FieldTypeNotFound, value='0.9']
)))
        .setGeometry(new Sphere())))
    .addChild(new Transform().setTranslation(-4.0,1.0,0.0)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new PhysicalMaterial().setBaseColor(1.0,0.95,0.9).setIndexOfRefraction("1.1"
// *** (X3dToJava.xslt error?) Encountered incorrect type, PhysicalMaterial indexOfRefraction: $isNumeric=true, $attributeType=FieldTypeNotFound, value='1.1']
).setRoughness(0.05).setTransmissionFactor("0.8"
// *** (X3dToJava.xslt error?) Encountered incorrect type, PhysicalMaterial transmissionFactor: $isNumeric=true, $attributeType=FieldTypeNotFound, value='0.8']
)))
        .setGeometry(new Sphere())))
    .addChild(new Transform().setTranslation(4.0,1.0,0.0)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new PhysicalMaterial().setBaseColor(0.7,0.6,0.5).setRoughness(0.1)))
        .setGeometry(new Sphere())))
    .addComments(" === DYNAMICALLY GENERATED SPHERES === ")
    .addComments(" Example: Matte Sphere with animated color and roughness (Using initialize()) ")
    .addChild(new Transform("T_0").setTranslation(-10.871,0.2,-10.453)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new PhysicalMaterial("M_0").setBaseColor(0.627,0.003,0.165)))
        .setGeometry(new Sphere().setRadius(0.2))))
    .addChild(new TimeSensor("C_0").setCycleInterval(5.21).setLoop(true))
    .addChild(new PositionInterpolator("PI_0").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFVec3f(new double[] {-10.871,0.2,-10.453,-10.871,0.6,-10.453,-10.871,0.2,-10.453})))
    .addChild(new ColorInterpolator("CI_0").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFColor(new double[] {0.627,0.003,0.165,0.011,0.583,0.443,0.627,0.003,0.165})))
    .addChild(new ScalarInterpolator("SI_0").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new double[] {1.0,0.4,1.0}))
    .addChild(new Script("Animator_0").setSourceCode("""
ecmascript:
        var matNode = null; // Variable to hold the material node reference

        function initialize() {
          // This function runs AFTER the targetMaterial field is connected.
          // We safely store the reference to the actual material node.
          matNode = targetMaterial.value;
        }

        function set_color(value, timestamp) {
          if (matNode) { // Check if the node reference was stored
            matNode.baseColor = value;
          }
        }
        function set_roughness(value, timestamp) {
          if (matNode) {
            matNode.roughness = value;
          }
        }
""")
      .addField(new field().setName("set_color").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("set_roughness").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("targetMaterial").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
        .addChild(new PhysicalMaterial().setUSE("M_0"))))
    .addChild(new ROUTE().setFromNode("C_0").setFromField("fraction_changed").setToNode("PI_0").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("PI_0").setFromField("value_changed").setToNode("T_0").setToField("set_translation"))
    .addChild(new ROUTE().setFromNode("C_0").setFromField("fraction_changed").setToNode("CI_0").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("CI_0").setFromField("value_changed").setToNode("Animator_0").setToField("set_color"))
    .addChild(new ROUTE().setFromNode("C_0").setFromField("fraction_changed").setToNode("SI_0").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("SI_0").setFromField("value_changed").setToNode("Animator_0").setToField("set_roughness"))
    .addComments(" Example: Metal Sphere with animated roughness (Using initialize()) ")
    .addChild(new Transform("T_1").setTranslation(-10.411,0.2,-9.160)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new PhysicalMaterial("M_1").setBaseColor(0.707,0.888,0.536).setRoughness(0.2)))
        .setGeometry(new Sphere().setRadius(0.2))))
    .addChild(new TimeSensor("C_1").setCycleInterval(4.15).setLoop(true))
    .addChild(new PositionInterpolator("PI_1").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFVec3f(new double[] {-10.411,0.2,-9.160,-10.411,0.6,-9.160,-10.411,0.2,-9.160})))
    .addChild(new ScalarInterpolator("SI_1").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new double[] {0.5,0.0,0.5}))
    .addChild(new Script("Animator_1").setSourceCode("""
ecmascript:
        var matNode = null;

        function initialize() {
          matNode = targetMaterial.value;
        }

        function set_roughness(value, timestamp) {
          if (matNode) {
            matNode.roughness = value;
          }
        }
""")
      .addField(new field().setName("set_roughness").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("targetMaterial").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
        .addChild(new PhysicalMaterial().setUSE("M_1"))))
    .addChild(new ROUTE().setFromNode("C_1").setFromField("fraction_changed").setToNode("PI_1").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("PI_1").setFromField("value_changed").setToNode("T_1").setToField("set_translation"))
    .addChild(new ROUTE().setFromNode("C_1").setFromField("fraction_changed").setToNode("SI_1").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("SI_1").setFromField("value_changed").setToNode("Animator_1").setToField("set_roughness"))
    .addComments(" The extension-based spheres were already correct and need no changes ")
    .addChild(new Transform("T_2").setTranslation(-10.155,0.2,-8.324)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new PhysicalMaterial().setRoughness(0.05).setTransmissionFactor("0.95"
// *** (X3dToJava.xslt error?) Encountered incorrect type, PhysicalMaterial transmissionFactor: $isNumeric=true, $attributeType=FieldTypeNotFound, value='0.95']
)
            .setIORMaterialExtension(new IORMaterialExtension("IOR_2").setIndexOfRefraction("1.5"
// *** (X3dToJava.xslt error?) Encountered incorrect type, IORMaterialExtension indexOfRefraction: $isNumeric=true, $attributeType=FieldTypeNotFound, value='1.5']
))))
        .setGeometry(new Sphere().setRadius(0.2))))
    .addChild(new TimeSensor("C_2").setCycleInterval(3.88).setLoop(true))
    .addChild(new PositionInterpolator("PI_2").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFVec3f(new double[] {-10.155,0.2,-8.324,-10.155,0.6,-8.324,-10.155,0.2,-8.324})))
    .addChild(new ScalarInterpolator("SI_2").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new double[] {1.4,1.7,1.4}))
    .addChild(new ROUTE().setFromNode("C_2").setFromField("fraction_changed").setToNode("PI_2").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("PI_2").setFromField("value_changed").setToNode("T_2").setToField("set_translation"))
    .addChild(new ROUTE().setFromNode("C_2").setFromField("fraction_changed").setToNode("SI_2").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("SI_2").setFromField("value_changed").setToNode("IOR_2").setToField("set_indexOfRefraction"))
    .addChild(new Transform("T_3").setTranslation(-10.518,0.2,-7.283)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new PhysicalMaterial().setIndexOfRefraction("1.33"
// *** (X3dToJava.xslt error?) Encountered incorrect type, PhysicalMaterial indexOfRefraction: $isNumeric=true, $attributeType=FieldTypeNotFound, value='1.33']
).setRoughness(0.05).setTransmissionFactor("0.95"
// *** (X3dToJava.xslt error?) Encountered incorrect type, PhysicalMaterial transmissionFactor: $isNumeric=true, $attributeType=FieldTypeNotFound, value='0.95']
)
            .setIridescenceMaterialExtension(new IridescenceMaterialExtension("IRI_3").setIridescence("1.0"
// *** (X3dToJava.xslt error?) Encountered incorrect type, IridescenceMaterialExtension iridescence: $isNumeric=true, $attributeType=FieldTypeNotFound, value='1.0']
).setIridescenceIndexOfRefraction("1.3"
// *** (X3dToJava.xslt error?) Encountered incorrect type, IridescenceMaterialExtension iridescenceIndexOfRefraction: $isNumeric=true, $attributeType=FieldTypeNotFound, value='1.3']
).setIridescenceThicknessMinimum("100"
// *** (X3dToJava.xslt error?) Encountered incorrect type, IridescenceMaterialExtension iridescenceThicknessMinimum: $isNumeric=true, $attributeType=FieldTypeNotFound, value='100']
))))
        .setGeometry(new Sphere().setRadius(0.2))))
    .addChild(new TimeSensor("C_3").setCycleInterval(6.0).setLoop(true))
    .addChild(new PositionInterpolator("PI_3").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFVec3f(new double[] {-10.518,0.2,-7.283,-10.518,0.6,-7.283,-10.518,0.2,-7.283})))
    .addChild(new ScalarInterpolator("SI_3").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new double[] {100.0,700.0,100.0}))
    .addChild(new ROUTE().setFromNode("C_3").setFromField("fraction_changed").setToNode("PI_3").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("PI_3").setFromField("value_changed").setToNode("T_3").setToField("set_translation"))
    .addChild(new ROUTE().setFromNode("C_3").setFromField("fraction_changed").setToNode("SI_3").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("SI_3").setFromField("value_changed").setToNode("IRI_3").setToField("set_iridescenceThicknessMaximum")));
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
	 * @return bobblespheres model
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
        System.out.println("Build this X3D model, showing validation diagnostics...");
        X3D thisExampleX3dModel = new bobblespheres().getX3dModel();
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
                System.out.println("WARNING: \"net.x3djsonld.data.bobblespheres\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
        else if (hasArguments) // if no arguments provided, this method produces usage warning
                thisExampleX3dModel.handleArguments(args);
	
        if (validate)
        {
            //  System.out.println("--- TODO fix duplicated outputs ---"); // omit when duplicated outputs problem is solved/refactored
		String validationResults = thisExampleX3dModel.validationReport();
            //  System.out.println("-----------------------------------"); // omit when duplicated outputs problem is solved/refactored
                System.out.print("net.x3djsonld.data.bobblespheres self-validation test confirmation: ");
                if (!validationResults.equals("success"))
                    System.out.println();
                System.out.println(validationResults.trim());

                // experimental: test X3DJSAIL output files
                // ./bobblespheres_JavaExport.* file validation is checked when building X3D Example Archives
                String filenameX3D  = "./bobblespheres_JavaExport.x3d"; 
                String filenameX3DV = "./bobblespheres_JavaExport.x3dv"; 
                String filenameJSON = "./bobblespheres_JavaExport.json";
                thisExampleX3dModel.toFileX3D        (filenameX3D);
                thisExampleX3dModel.toFileClassicVRML(filenameX3DV);
// TODO         thisExampleX3dModel.toFileJSON       (filenameJSON);
        }
    }
}

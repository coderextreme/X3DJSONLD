import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.CubeMapTexturing.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shaders.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Texturing.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc metadata annotations follow, see below for X3DJSAIL Java source code.
/**
 * <p> sphere with alternating backgrounds. </p>
 <p> Related links:  source mirror.java, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">mirror&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/src/main/data/mirror.x3d">mirror.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> John Carlson </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> manual </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/src/main/data/mirror.x3d" target="_blank">https://coderextreme.net/X3DJSONLD/src/main/data/mirror.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> sphere with alternating backgrounds </td>
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

	* @author John Carlson
 */

public class mirror
{
	/** Default constructor to create this object. */
	public mirror ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
            try { // catch-all
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_4_0)
  .setHead(new head()
    .addComponent(new component().setName("Scripting").setLevel(1))
    .addComponent(new component().setName("EnvironmentalEffects").setLevel(3))
    .addComponent(new component().setName("Shaders").setLevel(1))
    .addComponent(new component().setName("CubeMapTexturing").setLevel(1))
    .addComponent(new component().setName("Texturing").setLevel(1))
    .addComponent(new component().setName("Rendering").setLevel(1))
    .addComments("<component name='Shape' level='4'></component>")
    .addComponent(new component().setName("Grouping").setLevel(3))
    .addComponent(new component().setName("Core").setLevel(1))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("mirror.x3d"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("John Carlson"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("manual"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://coderextreme.net/X3DJSONLD/src/main/data/mirror.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("sphere with alternating backgrounds")))
  .setScene(new Scene()
    .addChild(new Viewpoint().setDescription("Switch background and images texture").setPosition(0.0,5.0,100.0))
    .addChild(new TextureBackground()
      .setLeftTexture(new ImageTexture("leftBackgroundTexture").setUrl(new String[] {"../resources/images/all_probes/beach_cross/beach_left.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"}))
      .setRightTexture(new ImageTexture("rightBackgroundTexture").setUrl(new String[] {"../resources/images/all_probes/beach_cross/beach_right.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"}))
      .setFrontTexture(new ImageTexture("frontBackgroundTexture").setUrl(new String[] {"../resources/images/all_probes/beach_cross/beach_front.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"}))
      .setBackTexture(new ImageTexture("backBackgroundTexture").setUrl(new String[] {"../resources/images/all_probes/beach_cross/beach_back.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"}))
      .setTopTexture(new ImageTexture("topBackgroundTexture").setUrl(new String[] {"../resources/images/all_probes/beach_cross/beach_top.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"}))
      .setBottomTexture(new ImageTexture("bottomBackgroundTexture").setUrl(new String[] {"../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"})))
    .addChild(new Transform()
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(.7,.7,.7).setSpecularColor(.5,.5,.5))
          .setTexture(new ComposedCubeMapTexture()
            .setBackTexture(new ImageTexture("backShader").setUrl(new String[] {"../resources/images/all_probes/beach_cross/beach_back.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"}))
            .setBottomTexture(new ImageTexture("bottomShader").setUrl(new String[] {"../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"}))
            .setFrontTexture(new ImageTexture("frontShader").setUrl(new String[] {"../resources/images/all_probes/beach_cross/beach_front.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"}))
            .setLeftTexture(new ImageTexture("leftShader").setUrl(new String[] {"../resources/images/all_probes/beach_cross/beach_left.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"}))
            .setRightTexture(new ImageTexture("rightShader").setUrl(new String[] {"../resources/images/all_probes/beach_cross/beach_right.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"}))
            .setTopTexture(new ImageTexture("topShader").setUrl(new String[] {"../resources/images/all_probes/beach_cross/beach_top.png","https://coderextrme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"})))
          .addShaders(new ComposedShader("x3dom").setLanguage("GLSL")
            .addField(new field().setName("chromaticDispertion").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.98,1.0,1.033)))
            .addField(new field().setName("cube").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0))
            .addField(new field().setName("bias").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0.5))
            .addField(new field().setName("scale").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0.5))
            .addField(new field().setName("power").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(2))
            .addParts(new ShaderPart().setUrl(new String[] {"../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"}))
            .addParts(new ShaderPart().setType("FRAGMENT").setUrl(new String[] {"../shaders/mix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs"})))
          .addShaders(new ComposedShader("x_ite").setLanguage("GLSL")
            .addComments("http://hypertextbook.com/facts/2005/JustinChe.shtml")
            .addField(new field().setName("chromaticDispertion").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.98,1.0,1.033)))
            .addField(new field().setName("cube").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0))
            .addField(new field().setName("bias").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0.5))
            .addField(new field().setName("scale").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0.5))
            .addField(new field().setName("power").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(2))
            .addParts(new ShaderPart().setUrl(new String[] {"../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"}))
            .addParts(new ShaderPart().setType("FRAGMENT").setUrl(new String[] {"../shaders/x_itemix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itemix.fs"}))))
        .setGeometry(new Sphere().setRadius(30)))
      .addChild(new Script("UrlSelector").setDirectOutput(true).setSourceCode("""
ecmascript:
        function set_fraction( f, tm ) {
	    var side = Math.floor(f*frontUrls.length);
	    if (side > frontUrls.length-1) {
	    	side = 0;
	    }
	    if (side != old) {
	    	    Browser.print(f+" "+side);
	    	    old = side;
		    front_changed[0] = frontUrls[side];
		    back_changed[0] = backUrls[side];
		    left_changed[0] = leftUrls[side];
		    right_changed[0] = rightUrls[side];
		    top_changed[0] = topUrls[side];
		    bottom_changed[0] = bottomUrls[side];
            }
        }
""")
        .addField(new field().setName("frontUrls").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"../resources/images/all_probes/beach_cross/beach_front.png","../resources/images/all_probes/building_cross/building_front.png","../resources/images/all_probes/campus_cross/campus_front.png","../resources/images/all_probes/galileo_cross/galileo_front.png","../resources/images/all_probes/grace_cross/grace_front.png","../resources/images/all_probes/kitchen_cross/kitchen_front.png","../resources/images/all_probes/rnl_cross/rnl_front.png","../resources/images/all_probes/stpeters_cross/stpeters_front.png","../resources/images/all_probes/uffizi_cross/uffizi_front.png"}))
        .addField(new field().setName("backUrls").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"../resources/images/all_probes/beach_cross/beach_back.png","../resources/images/all_probes/building_cross/building_back.png","../resources/images/all_probes/campus_cross/campus_back.png","../resources/images/all_probes/galileo_cross/galileo_back.png","../resources/images/all_probes/grace_cross/grace_back.png","../resources/images/all_probes/kitchen_cross/kitchen_back.png","../resources/images/all_probes/rnl_cross/rnl_back.png","../resources/images/all_probes/stpeters_cross/stpeters_back.png","../resources/images/all_probes/uffizi_cross/uffizi_back.png"}))
        .addField(new field().setName("leftUrls").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"../resources/images/all_probes/beach_cross/beach_left.png","../resources/images/all_probes/building_cross/building_left.png","../resources/images/all_probes/campus_cross/campus_left.png","../resources/images/all_probes/galileo_cross/galileo_left.png","../resources/images/all_probes/grace_cross/grace_left.png","../resources/images/all_probes/kitchen_cross/kitchen_left.png","../resources/images/all_probes/rnl_cross/rnl_left.png","../resources/images/all_probes/stpeters_cross/stpeters_left.png","../resources/images/all_probes/uffizi_cross/uffizi_left.png"}))
        .addField(new field().setName("rightUrls").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"../resources/images/all_probes/beach_cross/beach_right.png","../resources/images/all_probes/building_cross/building_right.png","../resources/images/all_probes/campus_cross/campus_right.png","../resources/images/all_probes/galileo_cross/galileo_right.png","../resources/images/all_probes/grace_cross/grace_right.png","../resources/images/all_probes/kitchen_cross/kitchen_right.png","../resources/images/all_probes/rnl_cross/rnl_right.png","../resources/images/all_probes/stpeters_cross/stpeters_right.png","../resources/images/all_probes/uffizi_cross/uffizi_right.png"}))
        .addField(new field().setName("topUrls").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"../resources/images/all_probes/beach_cross/beach_top.png","../resources/images/all_probes/building_cross/building_top.png","../resources/images/all_probes/campus_cross/campus_top.png","../resources/images/all_probes/galileo_cross/galileo_top.png","../resources/images/all_probes/grace_cross/grace_top.png","../resources/images/all_probes/kitchen_cross/kitchen_top.png","../resources/images/all_probes/rnl_cross/rnl_top.png","../resources/images/all_probes/stpeters_cross/stpeters_top.png","../resources/images/all_probes/uffizi_cross/uffizi_top.png"}))
        .addField(new field().setName("bottomUrls").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"../resources/images/all_probes/beach_cross/beach_bottom.png","../resources/images/all_probes/building_cross/building_bottom.png","../resources/images/all_probes/campus_cross/campus_bottom.png","../resources/images/all_probes/galileo_cross/galileo_bottom.png","../resources/images/all_probes/grace_cross/grace_bottom.png","../resources/images/all_probes/kitchen_cross/kitchen_bottom.png","../resources/images/all_probes/rnl_cross/rnl_bottom.png","../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","../resources/images/all_probes/uffizi_cross/uffizi_bottom.png"}))
        .addField(new field().setName("front_changed").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("back_changed").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("left_changed").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("right_changed").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("top_changed").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("bottom_changed").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("set_fraction").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
        .addField(new field().setName("old").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(-1)))
      .addChild(new TimeSensor("Clock").setCycleInterval(45).setLoop(true))
      .addChild(new ROUTE().setFromNode("Clock").setFromField("fraction_changed").setToNode("UrlSelector").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("UrlSelector").setFromField("front_changed").setToNode("frontBackgroundTexture").setToField("url"))
      .addChild(new ROUTE().setFromNode("UrlSelector").setFromField("back_changed").setToNode("backBackgroundTexture").setToField("url"))
      .addChild(new ROUTE().setFromNode("UrlSelector").setFromField("left_changed").setToNode("leftBackgroundTexture").setToField("url"))
      .addChild(new ROUTE().setFromNode("UrlSelector").setFromField("right_changed").setToNode("rightBackgroundTexture").setToField("url"))
      .addChild(new ROUTE().setFromNode("UrlSelector").setFromField("top_changed").setToNode("topBackgroundTexture").setToField("url"))
      .addChild(new ROUTE().setFromNode("UrlSelector").setFromField("bottom_changed").setToNode("bottomBackgroundTexture").setToField("url"))
      .addChild(new ROUTE().setFromNode("UrlSelector").setFromField("front_changed").setToNode("frontShader").setToField("url"))
      .addChild(new ROUTE().setFromNode("UrlSelector").setFromField("back_changed").setToNode("backShader").setToField("url"))
      .addChild(new ROUTE().setFromNode("UrlSelector").setFromField("left_changed").setToNode("leftShader").setToField("url"))
      .addChild(new ROUTE().setFromNode("UrlSelector").setFromField("right_changed").setToNode("rightShader").setToField("url"))
      .addChild(new ROUTE().setFromNode("UrlSelector").setFromField("top_changed").setToNode("topShader").setToField("url"))
      .addChild(new ROUTE().setFromNode("UrlSelector").setFromField("bottom_changed").setToNode("bottomShader").setToField("url"))));
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
	 * @return mirror model
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
        X3D thisExampleX3dModel = new mirror().getX3dModel();
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
                System.out.println("WARNING: \"mirror\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
        else if (hasArguments) // if no arguments provided, this method produces usage warning
                thisExampleX3dModel.handleArguments(args);
	
        if (validate)
        {
            //  System.out.println("--- TODO fix duplicated outputs ---"); // omit when duplicated outputs problem is solved/refactored
		String validationResults = thisExampleX3dModel.validationReport();
            //  System.out.println("-----------------------------------"); // omit when duplicated outputs problem is solved/refactored
                System.out.print("mirror self-validation test results: ");
                if (!validationResults.equals("success"))
                    System.out.println();
                System.out.println(validationResults.trim());

                // experimental: test X3DJSAIL output files
                // ./mirror_JavaExport.* file validation is checked when building X3D Example Archives
                String filenameX3D  = "./mirror_JavaExport.x3d"; 
                String filenameX3DV = "./mirror_JavaExport.x3dv"; 
                String filenameJSON = "./mirror_JavaExport.json";
                thisExampleX3dModel.toFileX3D        (filenameX3D);
                thisExampleX3dModel.toFileClassicVRML(filenameX3DV);
// TODO         thisExampleX3dModel.toFileJSON       (filenameJSON);
        }
    }
}

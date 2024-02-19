package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.KeyDeviceSensor.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;

// Javadoc metadata annotations follow, see below for X3DJSAIL Java source code.
/**
 * <p> A process pipeline between three spheres (try typing on spheres and blue. </p>
 <p> Related links: pp3.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.pp3&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://coderextreme.net/x3d/pp3.x3d">pp3.x3d</a> </td>
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
			<td> 5 May 2015 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 23 Dec 2022 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> A process pipeline between three spheres (try typing on spheres and blue </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://coderextreme.net/x3d/pp3.x3d" target="_blank">https://coderextreme.net/x3d/pp3.x3d</a> </td>
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
		<a href="https://www.web3d.org/specifications/java/X3DJSAIL.html" target="_blank">X3D Java Scene Access Interface Library (X3DJSAIL)</a>.
		It has been produced using the 
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">X3dToJava.xslt</a>
		stylesheet
	       (<a href="https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">version&amp;nbsp;control</a>)
                is used to create Java source code from an original <code>.x3d</code> model.
	</p>

	* @author John Carlson
 */

public class pp3
{
	/** Default constructor to create this object. */
	public pp3 ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
            try { // catch-all
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_3)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("pp3.x3d"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("John Carlson"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("John Carlson"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("5 May 2015"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("23 Dec 2022"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("A process pipeline between three spheres (try typing on spheres and blue"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://coderextreme.net/x3d/pp3.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("manual")))
  .setScene(new Scene()
    .addChild(new ProtoDeclare("Process").setName("Process")
      .setProtoBody(new ProtoBody()
        .addChild(new Group()
          .addComments("left")
          .addChild(new Transform().setScale(0.5,0.5,0.5)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(0.7,1.0,0.0).setTransparency(0.5)))
              .setGeometry(new Extrusion().setCreaseAngle(0.785).setCrossSection(new MFVec2f(new double[] {1.0,0.0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.0,-1.0,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.0,0.0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0.0,1.0,0.38,0.92,0.71,0.71,0.92,0.38,1.0,0.0})).setSpine(new MFVec3f(new double[] {-2.5,0.0,0.0,-1.5,0.0,0.0}))))
            .addComments("<Transform translation=\"-2.5 0 0\"> <Shape> <Text DEF=\"LeftString\" string='\"l\"'/> </Shape> </Transform> <StringSensor DEF=\"LeftSensor\" enabled=\"false\"/> <TouchSensor DEF=\"LeftTouch\" enabled=\"true\"/>"))
          .addComments("right")
          .addChild(new Transform().setScale(0.5,0.5,0.5)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(0.0,0.7,1.0).setTransparency(0.5)))
              .setGeometry(new Extrusion().setCreaseAngle(0.785).setCrossSection(new MFVec2f(new double[] {1.0,0.0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.0,-1.0,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.0,0.0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0.0,1.0,0.38,0.92,0.71,0.71,0.92,0.38,1.0,0.0})).setSpine(new MFVec3f(new double[] {1.5,0.0,0.0,2.5,0.0,0.0}))))
            .addChild(new Transform().setTranslation(2.0,0.0,0.0)
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material("MaterialLightBlue").setDiffuseColor(1.0,1.0,1.0)))
                .setGeometry(new Text("RightString").setString(new String[] {"r"}))))
            .addChild(new StringSensor("RightSensor").setEnabled(false))
            .addChild(new TouchSensor("RightTouch").setDescription("touch to activate")))
          .addComments("up")
          .addChild(new Transform().setScale(0.5,0.5,0.5)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(0.0,0.7,1.0).setTransparency(0.5)))
              .setGeometry(new Extrusion().setCreaseAngle(0.785).setCrossSection(new MFVec2f(new double[] {1.0,0.0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.0,-1.0,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.0,0.0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0.0,1.0,0.38,0.92,0.71,0.71,0.92,0.38,1.0,0.0})).setSpine(new MFVec3f(new double[] {0.0,1.5,0.0,0.0,2.5,0.0}))))
            .addChild(new Transform().setTranslation(-0.5,2.0,0.0)
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setUSE("MaterialLightBlue")))
                .setGeometry(new Text("UpString").setString(new String[] {"u"}))))
            .addChild(new StringSensor("UpSensor").setEnabled(false))
            .addChild(new TouchSensor("UpTouch").setDescription("touch to activate")))
          .addComments("down")
          .addChild(new Transform().setScale(0.5,0.5,0.5)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(0.7,1.0,0.0).setTransparency(0.5)))
              .setGeometry(new Extrusion().setCreaseAngle(0.785).setCrossSection(new MFVec2f(new double[] {1.0,0.0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.0,-1.0,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.0,0.0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0.0,1.0,0.38,0.92,0.71,0.71,0.92,0.38,1.0,0.0})).setSpine(new MFVec3f(new double[] {0.0,-2.5,0.0,0.0,-1.5,0.0}))))
            .addComments("<Transform translation=\"-0.5 -2.5 0\"> <Shape> <Text DEF=\"DownString\" string='\"d\"'/> </Shape> </Transform> <StringSensor DEF=\"DownSensor\" enabled=\"false\"/> <TouchSensor description='touch to activate' DEF=\"DownTouch\" enabled=\"true\"/>"))
          .addComments("center")
          .addChild(new Transform()
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.7)))
              .setGeometry(new Sphere()))
            .addChild(new Transform().setScale(0.5,0.5,0.5).setTranslation(-0.5,0.0,1.0)
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setUSE("MaterialLightBlue")))
                .setGeometry(new Text("CenterString"))))
            .addChild(new StringSensor("CenterSensor").setEnabled(false))
            .addChild(new TouchSensor("CenterTouch").setDescription("touch to activate"))))
        .addChild(new Script("RightSingleToMultiString").setSourceCode("""
ecmascript:

function initialize() {
	rightlines = new MFString("");
}

function set_rightstring(rightstr) {
	rightlines = new MFString(rightstr);
}
""")
          .addField(new field().setName("set_rightstring").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setName("rightlines").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
        .addChild(new Script("UpSingleToMultiString").setSourceCode("""
ecmascript:

function initialize() {
	uplines = new MFString("");
}

function set_upstring(upstr) {
	uplines = new MFString(upstr);
}
""")
          .addField(new field().setName("set_upstring").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setName("uplines").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
        .addChild(new Script("CenterSingleToMultiString").setSourceCode("""
ecmascript:

function initialize() {
	centerlines = new MFString("");
}

function set_centerstring(centerstr) {
	centerlines = new MFString(centerstr);
}
""")
          .addField(new field().setName("set_centerstring").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setName("centerlines").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
        .addChild(new ROUTE().setFromNode("CenterSensor").setFromField("enteredText").setToNode("CenterSingleToMultiString").setToField("set_centerstring"))
        .addChild(new ROUTE().setFromNode("CenterSingleToMultiString").setFromField("centerlines").setToNode("CenterString").setToField("set_string"))
        .addChild(new ROUTE().setFromNode("CenterTouch").setFromField("isOver").setToNode("CenterSensor").setToField("set_enabled"))
        .addChild(new ROUTE().setFromNode("RightSensor").setFromField("enteredText").setToNode("RightSingleToMultiString").setToField("set_rightstring"))
        .addChild(new ROUTE().setFromNode("RightSingleToMultiString").setFromField("rightlines").setToNode("RightString").setToField("set_string"))
        .addChild(new ROUTE().setFromNode("RightTouch").setFromField("isOver").setToNode("RightSensor").setToField("set_enabled"))
        .addChild(new ROUTE().setFromNode("UpSensor").setFromField("enteredText").setToNode("UpSingleToMultiString").setToField("set_upstring"))
        .addChild(new ROUTE().setFromNode("UpSingleToMultiString").setFromField("uplines").setToNode("UpString").setToField("set_string"))
        .addChild(new ROUTE().setFromNode("UpTouch").setFromField("isOver").setToNode("UpSensor").setToField("set_enabled"))))
    .addChild(new NavigationInfo())
    .addChild(new Viewpoint().setDescription("Process pipes").setOrientation(1.0,0.0,0.0,-0.4).setPosition(0.0,5.0,12.0))
    .addChild(new Transform().setTranslation(0.0,-2.5,0.0)
      .addChild(new ProtoInstance("Process").setContainerField("children")))
    .addChild(new Transform()
      .addChild(new ProtoInstance("Process").setContainerField("children")))
    .addChild(new Transform().setTranslation(0.0,2.5,0.0)
      .addChild(new ProtoInstance("Process").setContainerField("children"))));
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
	 * @return pp3 model
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
        X3D thisExampleX3dModel = new pp3().getX3dModel();
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
                System.out.println("WARNING: \"net.x3djsonld.data.pp3\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
        else if (hasArguments) // if no arguments provided, this method produces usage warning
                thisExampleX3dModel.handleArguments(args);
	
        if (validate)
        {
            //  System.out.println("--- TODO fix duplicated outputs ---"); // omit when duplicated outputs problem is solved/refactored
		String validationResults = thisExampleX3dModel.validationReport();
            //  System.out.println("-----------------------------------"); // omit when duplicated outputs problem is solved/refactored
                System.out.print("net.x3djsonld.data.pp3 self-validation test results: ");
                if (!validationResults.equals("success"))
                    System.out.println();
                System.out.println(validationResults.trim());
        }
    }
}

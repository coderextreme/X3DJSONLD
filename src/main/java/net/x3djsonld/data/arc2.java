package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> a generic proto to connect two objects. </p>
 <p> Related links: arc2.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.arc2&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="arc2.x3d">arc2.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Lost, Doug Sanden I think </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> manual </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/src/main/data/arc1.x3d" target="_blank">https://coderextreme.net/X3DJSONLD/src/main/data/arc1.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> a generic proto to connect two objects </td>
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

	* @author Lost, Doug Sanden I think
 */

public class arc2
{
	/** Default constructor to create this object. */
	public arc2 ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_3)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("arc2.x3d"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Lost, Doug Sanden I think"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("manual"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://coderextreme.net/X3DJSONLD/src/main/data/arc1.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("a generic proto to connect two objects")))
  .setScene(new Scene()
    .addChild(new Viewpoint().setDescription("Only Viewpoint").setPosition(0.0,0.0,5.0))
    .addChild(new Background().setSkyColor(new MFColor(new double[] {0.4,0.4,0.4})))
    .addChild(new Transform("G1")
      .addChild(new Transform("DECLpoint_INSTANCE_node")
        .addChild(new Shape()
          .setGeometry(new Sphere().setRadius(0.1))
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0))))
        .addChild(new PositionInterpolator("DECLpoint_INSTANCE_PI1").setKey(new double[] {0.0,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,5.0,0.0})))
        .addChild(new Script("DECLpoint_INSTANCE_MB1").setSourceCode("\n" + 
"\n" + 
"\n" + 
"ecmascript:" + "\n" + 
"               function set_location(value) {" + "\n" + 
"                    old = translation;" + "\n" + 
"                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);" + "\n" + 
"                    keyValue = new MFVec3f(old, translation);" + "\n" + 
"               }" + "\n")
          .addField(new field().setName("translation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,0.0)))
          .addField(new field().setName("old").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,0.0)))
          .addField(new field().setName("set_location").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setName("keyValue").setType(field.TYPE_MFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new MFVec3f(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,5.0,0.0})))))
        .addChild(new TimeSensor("DECLpoint_INSTANCE_CL1").setCycleInterval(3).setLoop(true))
        .addChild(new ROUTE().setFromNode("DECLpoint_INSTANCE_CL1").setFromField("cycleTime").setToNode("DECLpoint_INSTANCE_MB1").setToField("set_location"))
        .addChild(new ROUTE().setFromNode("DECLpoint_INSTANCE_CL1").setFromField("fraction_changed").setToNode("DECLpoint_INSTANCE_PI1").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("DECLpoint_INSTANCE_MB1").setFromField("keyValue").setToNode("DECLpoint_INSTANCE_PI1").setToField("keyValue"))
        .addChild(new ROUTE().setFromNode("DECLpoint_INSTANCE_PI1").setFromField("value_changed").setToNode("DECLpoint_INSTANCE_node").setToField("set_translation"))
        .addChild(new ROUTE().setFromNode("DECLpoint_INSTANCE_MB1").setFromField("translation_changed").setToNode("DECLpoint_INSTANCE_node").setToField("set_translation"))))
    .addChild(new Transform("G2")
      .addChild(new Transform("DECLpoint_INSTANCE1000_node")
        .addChild(new Shape()
          .setGeometry(new Sphere().setRadius(0.1))
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0))))
        .addChild(new PositionInterpolator("DECLpoint_INSTANCE1000_PI1").setKey(new double[] {0.0,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,5.0,0.0})))
        .addChild(new Script("DECLpoint_INSTANCE1000_MB1").setSourceCode("\n" + 
"\n" + 
"\n" + 
"ecmascript:" + "\n" + 
"               function set_location(value) {" + "\n" + 
"                    old = translation;" + "\n" + 
"                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);" + "\n" + 
"                    keyValue = new MFVec3f(old, translation);" + "\n" + 
"               }" + "\n")
          .addField(new field().setName("translation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,0.0)))
          .addField(new field().setName("old").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,0.0)))
          .addField(new field().setName("set_location").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setName("keyValue").setType(field.TYPE_MFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new MFVec3f(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,5.0,0.0})))))
        .addChild(new TimeSensor("DECLpoint_INSTANCE1000_CL1").setCycleInterval(3).setLoop(true))
        .addChild(new ROUTE().setFromNode("DECLpoint_INSTANCE1000_CL1").setFromField("cycleTime").setToNode("DECLpoint_INSTANCE1000_MB1").setToField("set_location"))
        .addChild(new ROUTE().setFromNode("DECLpoint_INSTANCE1000_CL1").setFromField("fraction_changed").setToNode("DECLpoint_INSTANCE1000_PI1").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("DECLpoint_INSTANCE1000_MB1").setFromField("keyValue").setToNode("DECLpoint_INSTANCE1000_PI1").setToField("keyValue"))
        .addChild(new ROUTE().setFromNode("DECLpoint_INSTANCE1000_PI1").setFromField("value_changed").setToNode("DECLpoint_INSTANCE1000_node").setToField("set_translation"))
        .addChild(new ROUTE().setFromNode("DECLpoint_INSTANCE1000_MB1").setFromField("translation_changed").setToNode("DECLpoint_INSTANCE1000_node").setToField("set_translation"))))
    .addChild(new Transform("transC1")
      .addChild(new Transform("rotscaleC1")
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.2,0.7,0.7).setTransparency(0.5)))
          .setGeometry(new Cylinder().setRadius(0.05)))))
    .addChild(new Script("DECLx3dconnector_connector1_S1").setSourceCode("\n" + 
"\n" + 
"            ecmascript:" + "\n" + 
"        function recompute(startpoint,endpoint){" + "\n" + 
"	    if (typeof endpoint === 'undefined') {" + "\n" + 
"		return;" + "\n" + 
"	    }" + "\n" + 
"            var dif = endpoint.subtract(startpoint);" + "\n" + 
"            var dist = dif.length()*0.5;" + "\n" + 
"            var dif2 = dif.multiply(0.5);" + "\n" + 
"            var norm = dif.normalize();" + "\n" + 
"            var transl = startpoint.add(dif2);" + "\n" + 
"	    if (typeof Quaternion !== 'undefined') {" + "\n" + 
"		    return {" + "\n" + 
"			    scale : new SFVec3f(1.0,dist,1.0)," + "\n" + 
"			    translation : transl," + "\n" + 
"			    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), norm)" + "\n" + 
"		    };" + "\n" + 
"	    } else {" + "\n" + 
"		    return {" + "\n" + 
"			    scale : new SFVec3f(1.0,dist,1.0)," + "\n" + 
"			    translation : transl," + "\n" + 
"			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)" + "\n" + 
"		    };" + "\n" + 
"	    }" + "\n" + 
"	}" + "\n" + 
"	function recompute_and_route(startpoint, endpoint) {" + "\n" + 
"	      var trafo = recompute(startpoint, endpoint);" + "\n" + 
"	      transC1.translation = trafo.translation;" + "\n" + 
"	      rotscaleC1.rotation = trafo.rotation;" + "\n" + 
"	      rotscaleC1.scale = trafo.scale;" + "\n" + 
"	}" + "\n" + 
"        function initialize(){" + "\n" + 
"            recompute_and_route(startnode.translation,endnode.translation);" + "\n" + 
"        }" + "\n" + 
"        function set_startpoint(val,t){" + "\n" + 
"            recompute_and_route(val,endnode.translation);" + "\n" + 
"        }" + "\n" + 
"        function set_endpoint(val,t){" + "\n" + 
"            recompute_and_route(startnode.translation,val);" + "\n" + 
"        }" + "\n")
      .addField(new field().setName("startnode").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
        .addChild(new Transform().setUSE("G1")))
      .addField(new field().setName("endnode").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
        .addChild(new Transform().setUSE("G2")))
      .addField(new field().setName("transC1").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
        .addChild(new Transform().setUSE("transC1")))
      .addField(new field().setName("rotscaleC1").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
        .addChild(new Transform().setUSE("rotscaleC1")))
      .addField(new field().setName("set_startpoint").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("set_endpoint").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTONLY)))
    .addChild(new ROUTE().setFromNode("G1").setFromField("translation_changed").setToNode("DECLx3dconnector_connector1_S1").setToField("set_startpoint"))
    .addChild(new ROUTE().setFromNode("G2").setFromField("translation_changed").setToNode("DECLx3dconnector_connector1_S1").setToField("set_endpoint")));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return arc2 model
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
        X3D thisExampleX3dModel = new arc2().getX3dModel();

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
			System.out.println("WARNING: \"arc2\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"arc2\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

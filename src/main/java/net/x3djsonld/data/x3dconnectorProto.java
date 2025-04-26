package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;

// Javadoc metadata annotations follow, see below for X3DJSAIL Java source code.
/**
 * <p> a generic proto to connect two objects. </p>
 <p> Related links:  source x3dconnectorProto.java, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.x3dconnectorProto&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/src/main/data/x3dconnectorProto.x3d">x3dconnectorProto.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Lost, Doug Sanden I think </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> Unknown </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> July 30 2023 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> manual </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/src/main/data/x3dconnectorProto.x3d" target="_blank">https://coderextreme.net/X3DJSONLD/src/main/data/x3dconnectorProto.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> a generic proto to connect two objects </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/license.html" target="_blank">https://www.web3d.org/x3d/content/examples/license.html</a> </td>
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

	* @author Lost, Doug Sanden I think
 */

public class x3dconnectorProto
{
	/** Default constructor to create this object. */
	public x3dconnectorProto ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
            try { // catch-all
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_3)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("x3dconnectorProto.x3d"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Lost, Doug Sanden I think"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("Unknown"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("July 30 2023"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("manual"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://coderextreme.net/X3DJSONLD/src/main/data/x3dconnectorProto.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("a generic proto to connect two objects"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("https://www.web3d.org/x3d/content/examples/license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("Connector Proto"))
    .addChild(new Viewpoint().setDescription("Only Viewpoint").setPosition(0.0,0.0,5.0))
    .addChild(new Background().setSkyColor(new MFColor(new double[] {0.4,0.4,0.4})))
    .addChild(new Transform("G1")
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(0.7,0.2,0.2)))
        .setGeometry(new Sphere().setRadius(.1)))
      .addChild(new PlaneSensor("PS1").setDescription("Grab to move"))
      .addChild(new ROUTE().setFromNode("PS1").setFromField("translation_changed").setToNode("G1").setToField("set_translation")))
    .addChild(new Transform("G2").setTranslation(1.0,-1.0,.01)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(0.2,0.7,0.2)))
        .setGeometry(new Sphere().setRadius(.1)))
      .addChild(new PlaneSensor("PS2").setDescription("Grab to move").setOffset(1.0,-1.0,.01))
      .addChild(new ROUTE().setFromNode("PS2").setFromField("translation_changed").setToNode("G2").setToField("set_translation")))
    .addChild(new Transform("G3").setTranslation(1.0,1.0,.01)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(0.2,0.7,0.2)))
        .setGeometry(new Sphere().setRadius(.1)))
      .addChild(new PlaneSensor("PS3").setDescription("Grab to move").setOffset(1.0,1.0,.01))
      .addChild(new ROUTE().setFromNode("PS3").setFromField("translation_changed").setToNode("G3").setToField("set_translation")))
    .addChild(new Transform("G4").setTranslation(-1.0,1.0,.01)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(0.2,0.7,0.2)))
        .setGeometry(new Sphere().setRadius(.1)))
      .addChild(new PlaneSensor("PS4").setDescription("Grab to move").setOffset(-1.0,1.0,.01))
      .addChild(new ROUTE().setFromNode("PS4").setFromField("translation_changed").setToNode("G4").setToField("set_translation")))
    .addChild(new Transform("transC1")
      .addChild(new Transform("rotscaleC1")
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.2,0.7,0.7).setTransparency(.5)))
          .setGeometry(new Cylinder().setRadius(.05)))))
    .addChild(new Transform("transC2")
      .addChild(new Transform("rotscaleC2")
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.2,0.7,0.7).setTransparency(.5)))
          .setGeometry(new Cylinder().setRadius(.05)))))
    .addChild(new Transform("transC3")
      .addChild(new Transform("rotscaleC3")
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.2,0.7,0.7).setTransparency(.5)))
          .setGeometry(new Cylinder().setRadius(.05)))))
    .addChild(new ProtoDeclare("x3dconnector").setName("x3dconnector")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("startnode").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
        .addField(new field().setName("endnode").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
        .addField(new field().setName("transnode").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
        .addField(new field().setName("rotscalenode").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
        .addField(new field().setName("set_startpoint").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTONLY))
        .addField(new field().setName("set_endpoint").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTONLY)))
      .setProtoBody(new ProtoBody()
        .addChild(new Script("S1").setDirectOutput(true).setSourceCode("""
ecmascript:
        function recompute(startpoint,endpoint){
	    if (typeof endpoint === 'undefined') {
		return;
	    }
            var dif = endpoint.subtract(startpoint);
            var dist = dif.length()*0.5;
            var dif2 = dif.multiply(0.5);
            var norm = dif.normalize();
            var transl = startpoint.add(dif2);
	    if (typeof Quaternion !== 'undefined') {
		    return {
			    scale : new SFVec3f(1.0,dist,1.0),
			    translation : transl,
			    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), norm)
		    };
	    } else {
		    return {
			    scale : new SFVec3f(1.0,dist,1.0),
			    translation : transl,
			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)
		    };
	    }
	}
	function recompute_and_route(startpoint, endpoint) {
	      var trafo = recompute(startpoint, endpoint);
	      if (trafo) {
		      transnode.translation = trafo.translation;
		      rotscalenode.rotation = trafo.rotation;
		      rotscalenode.scale = trafo.scale;
	      }
	}
        function initialize(){
            recompute_and_route(startnode.translation,endnode.translation);
        }
        function set_startpoint(val,t){
            recompute_and_route(val,endnode.translation);
        }
        function set_endpoint(val,t){
            recompute_and_route(startnode.translation,val);
        }
""")
          .addField(new field().setName("startnode").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("endnode").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("transnode").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("rotscalenode").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("set_startpoint").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setName("set_endpoint").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTONLY))
          .setIS(new IS()
            .addConnect(new connect().setNodeField("startnode").setProtoField("startnode"))
            .addConnect(new connect().setNodeField("endnode").setProtoField("endnode"))
            .addConnect(new connect().setNodeField("transnode").setProtoField("transnode"))
            .addConnect(new connect().setNodeField("rotscalenode").setProtoField("rotscalenode"))
            .addConnect(new connect().setNodeField("set_startpoint").setProtoField("set_startpoint"))
            .addConnect(new connect().setNodeField("set_endpoint").setProtoField("set_endpoint"))))))
    .addChild(new ProtoInstance("x3dconnector", "connector1").setContainerField("children")
      .addFieldValue(new fieldValue().setName("startnode")
        .addChild(new Transform().setUSE("G1")))
      .addFieldValue(new fieldValue().setName("endnode")
        .addChild(new Transform().setUSE("G2")))
      .addFieldValue(new fieldValue().setName("transnode")
        .addChild(new Transform().setUSE("transC1")))
      .addFieldValue(new fieldValue().setName("rotscalenode")
        .addChild(new Transform().setUSE("rotscaleC1")))
      .addFieldValue(new fieldValue().setName("set_startpoint").setValue(new SFVec3f(0.0,0.0,0.0)))
      .addFieldValue(new fieldValue().setName("set_endpoint").setValue(new SFVec3f(0.0,0.0,0.0))))
    .addChild(new ProtoInstance("x3dconnector", "connector2").setContainerField("children")
      .addFieldValue(new fieldValue().setName("startnode")
        .addChild(new Transform().setUSE("G1")))
      .addFieldValue(new fieldValue().setName("endnode")
        .addChild(new Transform().setUSE("G3")))
      .addFieldValue(new fieldValue().setName("transnode")
        .addChild(new Transform().setUSE("transC2")))
      .addFieldValue(new fieldValue().setName("rotscalenode")
        .addChild(new Transform().setUSE("rotscaleC2")))
      .addFieldValue(new fieldValue().setName("set_startpoint").setValue(new SFVec3f(0.0,0.0,0.0)))
      .addFieldValue(new fieldValue().setName("set_endpoint").setValue(new SFVec3f(0.0,0.0,0.0))))
    .addChild(new ProtoInstance("x3dconnector", "connector3").setContainerField("children")
      .addFieldValue(new fieldValue().setName("startnode")
        .addChild(new Transform().setUSE("G1")))
      .addFieldValue(new fieldValue().setName("endnode")
        .addChild(new Transform().setUSE("G4")))
      .addFieldValue(new fieldValue().setName("transnode")
        .addChild(new Transform().setUSE("transC3")))
      .addFieldValue(new fieldValue().setName("rotscalenode")
        .addChild(new Transform().setUSE("rotscaleC3")))
      .addFieldValue(new fieldValue().setName("set_startpoint").setValue(new SFVec3f(0.0,0.0,0.0)))
      .addFieldValue(new fieldValue().setName("set_endpoint").setValue(new SFVec3f(0.0,0.0,0.0))))
    .addChild(new ROUTE().setFromNode("G1").setFromField("translation_changed").setToNode("connector1").setToField("set_startpoint"))
    .addChild(new ROUTE().setFromNode("G2").setFromField("translation_changed").setToNode("connector1").setToField("set_endpoint"))
    .addChild(new ROUTE().setFromNode("G1").setFromField("translation_changed").setToNode("connector2").setToField("set_startpoint"))
    .addChild(new ROUTE().setFromNode("G3").setFromField("translation_changed").setToNode("connector2").setToField("set_endpoint"))
    .addChild(new ROUTE().setFromNode("G1").setFromField("translation_changed").setToNode("connector3").setToField("set_startpoint"))
    .addChild(new ROUTE().setFromNode("G4").setFromField("translation_changed").setToNode("connector3").setToField("set_endpoint")));
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
	 * @return x3dconnectorProto model
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
        X3D thisExampleX3dModel = new x3dconnectorProto().getX3dModel();
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
                System.out.println("WARNING: \"net.x3djsonld.data.x3dconnectorProto\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
        else if (hasArguments) // if no arguments provided, this method produces usage warning
                thisExampleX3dModel.handleArguments(args);
	
        if (validate)
        {
            //  System.out.println("--- TODO fix duplicated outputs ---"); // omit when duplicated outputs problem is solved/refactored
		String validationResults = thisExampleX3dModel.validationReport();
            //  System.out.println("-----------------------------------"); // omit when duplicated outputs problem is solved/refactored
                System.out.print("net.x3djsonld.data.x3dconnectorProto self-validation test confirmation: ");
                if (!validationResults.equals("success"))
                    System.out.println();
                System.out.println(validationResults.trim());

                // experimental: test X3DJSAIL output files
                // ./x3dconnectorProto_JavaExport.* file validation is checked when building X3D Example Archives
                String filenameX3D  = "./x3dconnectorProto_JavaExport.x3d"; 
                String filenameX3DV = "./x3dconnectorProto_JavaExport.x3dv"; 
                String filenameJSON = "./x3dconnectorProto_JavaExport.json";
                thisExampleX3dModel.toFileX3D        (filenameX3D);
                thisExampleX3dModel.toFileClassicVRML(filenameX3DV);
// TODO         thisExampleX3dModel.toFileJSON       (filenameJSON);
        }
    }
}

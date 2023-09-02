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

// Javadoc metadata annotations follow, see below for X3DJSAIL Java source code.
/**
 * <p> a generic proto to connect two objects. </p>
 <p> Related links: arc.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.arc&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="arc">arc</a> </td>
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
			<td> <a href="https://coderextreme.net/X3DJSONLD/src/main/data/x3dconnectorProto.x3d" target="_blank">https://coderextreme.net/X3DJSONLD/src/main/data/x3dconnectorProto.x3d</a> </td>
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
		stylesheet
	       (<a href="https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">version&amp;nbsp;control</a>)
                is used to create Java source code from an original <code>.x3d</code> model.
	</p>

	* @author Lost, Doug Sanden I think
 */

public class arc
{
	/** Default constructor to create this object. */
	public arc ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
            try { // catch-all
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_3)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("arc"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Lost, Doug Sanden I think"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("manual"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://coderextreme.net/X3DJSONLD/src/main/data/x3dconnectorProto.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("a generic proto to connect two objects")))
  .setScene(new Scene()
    .addChild(new Viewpoint().setDescription("Only Viewpoint").setPosition(0.0,0.0,5.0))
    .addChild(new Background().setSkyColor(new MFColor(new double[] {0.4,0.4,0.4})))
    .addChild(new ProtoDeclare("point").setName("point")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("translation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,0.0))))
      .setProtoBody(new ProtoBody()
        .addChild(new Transform("node")
          .setIS(new IS()
            .addConnect(new connect().setNodeField("translation").setProtoField("translation")))
          .addChild(new Shape()
            .setGeometry(new Sphere().setRadius(0.1))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0))))
          .addChild(new PositionInterpolator("PI1").setKey(new double[] {0.0,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,5.0,0.0})))
          .addChild(new Script("MB1").setSourceCode("""
ecmascript:
		function set_location(value) {
                    old = translation;
		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);
                    keyValue = new MFVec3f([old, translation]);
		    // Browser.println(keyValue);
		}
""")
            .addField(new field().setName("translation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(50.0,50.0,0.0)))
            .addField(new field().setName("old").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,0.0)))
            .addField(new field().setName("set_location").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setName("keyValue").setType(field.TYPE_MFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new MFVec3f(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,5.0,0.0})))))
          .addChild(new TimeSensor("CL1").setCycleInterval(3).setLoop(true))
          .addChild(new ROUTE().setFromNode("CL1").setFromField("cycleTime").setToNode("MB1").setToField("set_location"))
          .addChild(new ROUTE().setFromNode("CL1").setFromField("fraction_changed").setToNode("PI1").setToField("set_fraction"))
          .addChild(new ROUTE().setFromNode("MB1").setFromField("keyValue").setToNode("PI1").setToField("keyValue"))
          .addChild(new ROUTE().setFromNode("PI1").setFromField("value_changed").setToNode("node").setToField("set_translation")))))
    .addChild(new ProtoDeclare("x3dconnector").setName("x3dconnector")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("startnode").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
        .addField(new field().setName("endnode").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
        .addField(new field().setName("set_startpoint").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTONLY))
        .addField(new field().setName("set_endpoint").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTONLY)))
      .setProtoBody(new ProtoBody()
        .addChild(new Group()
          .addChild(new Transform("trans")
            .addChild(new Transform("rotscale")
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(0.2,0.7,0.7).setTransparency(.5)))
                .setGeometry(new Cylinder().setRadius(.05)))))
          .addChild(new Script("S1").setSourceCode("""
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
	    } else if (typeof SFRotation !== 'undefined') {
		    return {
			    scale : new SFVec3f(1.0,dist,1.0),
			    translation : transl,
			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)
		    };
	    } else {
		    return {
			    scale : new SFVec3f(1.0,dist,1.0),
			    translation : transl
		    };
	    }
	}
	function recompute_and_route(startpoint, endpoint) {
	      var trafo = recompute(startpoint, endpoint);
	      if (trafo) {
		      position.translation = trafo.translation;
		      rotscale.rotation = trafo.rotation;
		      rotscale.scale = trafo.scale;
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
            .addField(new field().setName("position").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)
              .addChild(new Transform().setUSE("trans")))
            .addField(new field().setName("rotscale").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)
              .addChild(new Transform().setUSE("rotscale")))
            .addField(new field().setName("set_startpoint").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setName("set_endpoint").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTONLY))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("startnode").setProtoField("startnode"))
              .addConnect(new connect().setNodeField("endnode").setProtoField("endnode"))
              .addConnect(new connect().setNodeField("set_startpoint").setProtoField("set_startpoint"))
              .addConnect(new connect().setNodeField("set_endpoint").setProtoField("set_endpoint")))))))
    .addChild(new ProtoInstance("point", "G1").setContainerField("children"))
    .addChild(new ProtoInstance("point", "G2").setContainerField("children"))
    .addChild(new ProtoInstance("point", "G3").setContainerField("children"))
    .addChild(new ProtoInstance("point", "G4").setContainerField("children"))
    .addChild(new ProtoInstance("x3dconnector", "connector1").setContainerField("children")
      .addFieldValue(new fieldValue().setName("startnode")
        .addChild(new ProtoInstance().setUSE("G1").setContainerField("children")))
      .addFieldValue(new fieldValue().setName("endnode")
        .addChild(new ProtoInstance().setUSE("G2").setContainerField("children")))
      .addFieldValue(new fieldValue().setName("set_startpoint"))
      .addFieldValue(new fieldValue().setName("set_endpoint")))
    .addChild(new ProtoInstance("x3dconnector", "connector2").setContainerField("children")
      .addFieldValue(new fieldValue().setName("startnode")
        .addChild(new ProtoInstance().setUSE("G1").setContainerField("children")))
      .addFieldValue(new fieldValue().setName("endnode")
        .addChild(new ProtoInstance().setUSE("G3").setContainerField("children")))
      .addFieldValue(new fieldValue().setName("set_startpoint"))
      .addFieldValue(new fieldValue().setName("set_endpoint")))
    .addChild(new ProtoInstance("x3dconnector", "connector3").setContainerField("children")
      .addFieldValue(new fieldValue().setName("startnode")
        .addChild(new ProtoInstance().setUSE("G1").setContainerField("children")))
      .addFieldValue(new fieldValue().setName("endnode")
        .addChild(new ProtoInstance().setUSE("G4").setContainerField("children")))
      .addFieldValue(new fieldValue().setName("set_startpoint"))
      .addFieldValue(new fieldValue().setName("set_endpoint")))
    .addChild(new ROUTE().setFromNode("G1").setFromField("translation").setToNode("connector1").setToField("set_startpoint"))
    .addChild(new ROUTE().setFromNode("G2").setFromField("translation").setToNode("connector1").setToField("set_endpoint"))
    .addChild(new ROUTE().setFromNode("G1").setFromField("translation").setToNode("connector2").setToField("set_startpoint"))
    .addChild(new ROUTE().setFromNode("G3").setFromField("translation").setToNode("connector2").setToField("set_endpoint"))
    .addChild(new ROUTE().setFromNode("G1").setFromField("translation").setToNode("connector3").setToField("set_startpoint"))
    .addChild(new ROUTE().setFromNode("G4").setFromField("translation").setToNode("connector3").setToField("set_endpoint")));
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
	 * @return arc model
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
        X3D thisExampleX3dModel = new arc().getX3dModel();
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
                System.out.println("WARNING: \"net.x3djsonld.data.arc\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
        else if (hasArguments) // if no arguments provided, this method produces usage warning
                thisExampleX3dModel.handleArguments(args);
	
        if (validate)
        {
                System.out.print("Java program \"net.x3djsonld.data.arc\" self-validation test results: ");
		String validationResults = thisExampleX3dModel.validationReport();
                if (validationResults.length() > 10)
                    System.out.println();
                System.out.println(validationResults);
        }
    }
}

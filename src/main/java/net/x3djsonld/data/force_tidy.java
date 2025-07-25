package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc metadata annotations follow, see below for X3DJSAIL Java source code.
/**
 * <p> beginnings of a force directed graph in 3D. </p>
 <p> Related links:  source force_tidy.java, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.force_tidy&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> John W Carlson </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> December 13 2015 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> July 14 2025 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d">force.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d" target="_blank">https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> beginnings of a force directed graph in 3D </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> Vim, X3D-Edit, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> x3d-tidy V1.0.175, <a href="https://www.npmjs.com/package/x3d-tidy" target="_blank">https://www.npmjs.com/package/x3d-tidy</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> Sat, 9 Nov 2024 19:29:39 GMT </td>
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

	* @author John W Carlson
 */

public class force_tidy
{
	/** Default constructor to create this object. */
	public force_tidy ()
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
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("John W Carlson"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("December 13 2015"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("July 14 2025"))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("force.x3d"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("beginnings of a force directed graph in 3D"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("x3d-tidy V1.0.175, https://www.npmjs.com/package/x3d-tidy"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("Sat, 9 Nov 2024 19:29:39 GMT")))
  .setScene(new Scene()
    .addChild(new ProtoDeclare("node").setName("node")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("position").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)))
      .setProtoBody(new ProtoBody()
        .addChild(new Group()
          .addChild(new Transform("transform")
            .setIS(new IS()
              .addConnect(new connect().setNodeField("translation").setProtoField("position")))
            .addChild(new Shape()
              .setGeometry(new Sphere())
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0))))
            .addChild(new Transform().setTranslation(1.0,0.0,0.0)
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(0.0,0.0,1.0)))
                .setGeometry(new Text().setString(new String[] {"Node"})
                  .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(5))))))
          .addChild(new PositionInterpolator("NodePosition").setKey(new double[] {0.0,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,5.0,0.0})))
          .addChild(new Script("MoveBall").setSourceCode("""
ecmascript:
		function set_cycle(value) {
			old = translation;
			translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);
			keyValue = new MFVec3f(old, translation);
		}
""")
            .addField(new field().setName("translation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(50.0,50.0,0.0)))
            .addField(new field().setName("old").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
            .addField(new field().setName("set_cycle").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setName("keyValue").setType(field.TYPE_MFVEC3F).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
          .addChild(new TimeSensor("nodeClock").setCycleInterval(3).setLoop(true))
          .addChild(new ROUTE().setFromNode("nodeClock").setFromField("cycleTime").setToNode("MoveBall").setToField("set_cycle"))
          .addChild(new ROUTE().setFromNode("nodeClock").setFromField("fraction_changed").setToNode("NodePosition").setToField("set_fraction"))
          .addChild(new ROUTE().setFromNode("MoveBall").setFromField("keyValue").setToNode("NodePosition").setToField("set_keyValue"))
          .addChild(new ROUTE().setFromNode("NodePosition").setFromField("value_changed").setToNode("transform").setToField("set_translation")))))
    .addChild(new ProtoDeclare("cyl").setName("cyl")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("set_positionA").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("set_positionB").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)))
      .setProtoBody(new ProtoBody()
        .addChild(new Group()
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(0.0,1.0,0.0)))
            .setGeometry(new Extrusion("extrusion").setCreaseAngle(0.785).setCrossSection(new MFVec2f(new double[] {1.0,0.0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.0,-1.0,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.0,-0.0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0.0,1.0,0.38,0.92,0.71,0.71,0.92,0.38,1.0,0.0})).setSpine(new MFVec3f(new double[] {0.0,-50.0,0.0,0.0,0.0,0.0,0.0,50.0,0.0}))))
          .addChild(new Script("MoveCylinder").setSourceCode("""
ecmascript:

                function set_endA(value) {
		    spine = new MFVec3f(value, spine[1]);
                }
                
                function set_endB(value) {
		    spine = new MFVec3f(spine[0], value);
                }
""")
            .addField(new field().setName("spine").setType(field.TYPE_MFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new MFVec3f(new MFVec3f(new double[] {0.0,-50.0,0.0,0.0,0.0,0.0,0.0,50.0,0.0}))))
            .addField(new field().setName("endA").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
            .addField(new field().setName("endB").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("endA").setProtoField("set_positionA"))
              .addConnect(new connect().setNodeField("endB").setProtoField("set_positionB"))))
          .addChild(new ROUTE().setFromNode("MoveCylinder").setFromField("spine_changed").setToNode("extrusion").setToField("set_spine")))))
    .addChild(new Transform("HoldsContent").setScale(0.1,0.1,0.1)
      .addChild(new PlaneSensor("clickGenerator").setDescription("click on background to add nodes, click on nodes to add links").setMaxPosition(50.0,50.0).setMinPosition(-50.0,-50.0))
      .addChild(new ProtoInstance("node", "nodeA").setContainerField("children")
        .addFieldValue(new fieldValue().setName("position").setValue(new SFVec3f(0.0,1.388333,0.0))))
      .addChild(new ProtoInstance("node", "nodeB").setContainerField("children")
        .addFieldValue(new fieldValue().setName("position").setValue(new SFVec3f(0.0,1.388333,0.0))))
      .addChild(new ProtoInstance("node", "nodeC").setContainerField("children")
        .addFieldValue(new fieldValue().setName("position").setValue(new SFVec3f(0.0,1.388333,0.0))))
      .addChild(new ProtoInstance("node", "nodeD").setContainerField("children")
        .addFieldValue(new fieldValue().setName("position").setValue(new SFVec3f(0.0,1.388333,0.0))))
      .addChild(new ProtoInstance("cyl", "linkA").setContainerField("children"))
      .addChild(new ProtoInstance("cyl", "linkB").setContainerField("children"))
      .addChild(new ProtoInstance("cyl", "linkC").setContainerField("children")))
    .addChild(new Script("clickHandler").setSourceCode("""
ecmascript:
	function add_node(value) {
                // Browser.print('hey ', counter);
                counter = counter++;
		Browser.appendTo(Browser.getDocument().querySelector("field [name=ModifiableNode]"),
			{ "ProtoInstance":
				{ "@name":"node",
				  "@DEF":"node'+counter+'",
				  "fieldValue": [
					{
						 "@name":"position",
						 "@value":[0.0,0.0,0.0]
					}
				  ]
				}
			});
                
        }
""")
      .addField(new field().setName("counter").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("node_changed").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("add_node").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY)))
    .addChild(new ROUTE().setFromNode("clickGenerator").setFromField("isActive").setToNode("clickHandler").setToField("add_node"))
    .addChild(new ROUTE().setFromNode("nodeA").setFromField("position_changed").setToNode("linkA").setToField("set_positionA"))
    .addChild(new ROUTE().setFromNode("nodeB").setFromField("position_changed").setToNode("linkA").setToField("set_positionB"))
    .addChild(new ROUTE().setFromNode("nodeA").setFromField("position_changed").setToNode("linkB").setToField("set_positionA"))
    .addChild(new ROUTE().setFromNode("nodeC").setFromField("position_changed").setToNode("linkB").setToField("set_positionB"))
    .addChild(new ROUTE().setFromNode("nodeA").setFromField("position_changed").setToNode("linkC").setToField("set_positionA"))
    .addChild(new ROUTE().setFromNode("nodeD").setFromField("position_changed").setToNode("linkC").setToField("set_positionB")));
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
	 * @return force_tidy model
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
        X3D thisExampleX3dModel = new force_tidy().getX3dModel();
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
                System.out.println("WARNING: \"net.x3djsonld.data.force_tidy\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
        else if (hasArguments) // if no arguments provided, this method produces usage warning
                thisExampleX3dModel.handleArguments(args);
	
        if (validate)
        {
            //  System.out.println("--- TODO fix duplicated outputs ---"); // omit when duplicated outputs problem is solved/refactored
		String validationResults = thisExampleX3dModel.validationReport();
            //  System.out.println("-----------------------------------"); // omit when duplicated outputs problem is solved/refactored
                System.out.print("net.x3djsonld.data.force_tidy self-validation test confirmation: ");
                if (!validationResults.equals("success"))
                    System.out.println();
                System.out.println(validationResults.trim());

                // experimental: test X3DJSAIL output files
                // ./force_tidy_JavaExport.* file validation is checked when building X3D Example Archives
                String filenameX3D  = "./force_tidy_JavaExport.x3d"; 
                String filenameX3DV = "./force_tidy_JavaExport.x3dv"; 
                String filenameJSON = "./force_tidy_JavaExport.json";
                thisExampleX3dModel.toFileX3D        (filenameX3D);
                thisExampleX3dModel.toFileClassicVRML(filenameX3DV);
// TODO         thisExampleX3dModel.toFileJSON       (filenameJSON);
        }
    }
}

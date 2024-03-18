package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Shape.*;

// Javadoc metadata annotations follow, see below for X3DJSAIL Java source code.
/**
 * <p> a kind of rubik cube with spheres. </p>
 <p> Related links: rubik.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.rubik&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/src/main/data/rubik.x3d">rubik.x3d</a> </td>
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
			<td> <a href="https://coderextreme.net/X3DJSONLD/src/main/data/rubik.x3d" target="_blank">https://coderextreme.net/X3DJSONLD/src/main/data/rubik.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> a kind of rubik cube with spheres </td>
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

public class rubik
{
	/** Default constructor to create this object. */
	public rubik ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
            try { // catch-all
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_3)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("rubik.x3d"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("John Carlson"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("manual"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://coderextreme.net/X3DJSONLD/src/main/data/rubik.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("a kind of rubik cube with spheres")))
  .setScene(new Scene()
    .addChild(new NavigationInfo().setType("\"EXAMINE\""))
    .addChild(new Viewpoint().setDescription("Rubiks Cube").setPosition(0.0,0.0,12.0))
    .addChild(new ProtoDeclare("sphereproto").setName("sphereproto")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("xtranslation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,0.0))))
      .setProtoBody(new ProtoBody()
        .addChild(new Transform()
          .setIS(new IS()
            .addConnect(new connect().setNodeField("translation").setProtoField("xtranslation")))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0)))
            .setGeometry(new Sphere())))))
    .addChild(new ProtoDeclare("three").setName("three")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("ytranslation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,0.0))))
      .setProtoBody(new ProtoBody()
        .addChild(new Transform()
          .setIS(new IS()
            .addConnect(new connect().setNodeField("translation").setProtoField("ytranslation")))
          .addChild(new ProtoInstance("sphereproto").setContainerField("children")
            .addFieldValue(new fieldValue().setName("xtranslation").setValue(new SFVec3f(0.0,0.0,0.0))))
          .addChild(new ProtoInstance("sphereproto").setContainerField("children")
            .addFieldValue(new fieldValue().setName("xtranslation").setValue(new SFVec3f(2.0,0.0,0.0))))
          .addChild(new ProtoInstance("sphereproto").setContainerField("children")
            .addFieldValue(new fieldValue().setName("xtranslation").setValue(new SFVec3f(-2.0,0.0,0.0)))))))
    .addChild(new ProtoDeclare("nine").setName("nine")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("ztranslation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,0.0))))
      .setProtoBody(new ProtoBody()
        .addChild(new Transform()
          .setIS(new IS()
            .addConnect(new connect().setNodeField("translation").setProtoField("ztranslation")))
          .addChild(new ProtoInstance("three").setContainerField("children")
            .addFieldValue(new fieldValue().setName("ytranslation").setValue(new SFVec3f(0.0,0.0,0.0))))
          .addChild(new ProtoInstance("three").setContainerField("children")
            .addFieldValue(new fieldValue().setName("ytranslation").setValue(new SFVec3f(0.0,2.0,0.0))))
          .addChild(new ProtoInstance("three").setContainerField("children")
            .addFieldValue(new fieldValue().setName("ytranslation").setValue(new SFVec3f(0.0,-2.0,0.0)))))))
    .addChild(new ProtoDeclare("twentyseven").setName("twentyseven")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("ttranslation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,0.0))))
      .setProtoBody(new ProtoBody()
        .addChild(new Transform()
          .setIS(new IS()
            .addConnect(new connect().setNodeField("translation").setProtoField("ttranslation")))
          .addChild(new ProtoInstance("nine").setContainerField("children")
            .addFieldValue(new fieldValue().setName("ztranslation").setValue(new SFVec3f(0.0,0.0,0.0))))
          .addChild(new ProtoInstance("nine").setContainerField("children")
            .addFieldValue(new fieldValue().setName("ztranslation").setValue(new SFVec3f(0.0,0.0,2.0))))
          .addChild(new ProtoInstance("nine").setContainerField("children")
            .addFieldValue(new fieldValue().setName("ztranslation").setValue(new SFVec3f(0.0,0.0,-2.0)))))))
    .addChild(new ProtoInstance("twentyseven").setContainerField("children")
      .addFieldValue(new fieldValue().setName("ttranslation").setValue(new SFVec3f(0.0,0.0,0.0)))));
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
	 * @return rubik model
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
        X3D thisExampleX3dModel = new rubik().getX3dModel();
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
                System.out.println("WARNING: \"net.x3djsonld.data.rubik\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
        else if (hasArguments) // if no arguments provided, this method produces usage warning
                thisExampleX3dModel.handleArguments(args);
	
        if (validate)
        {
            //  System.out.println("--- TODO fix duplicated outputs ---"); // omit when duplicated outputs problem is solved/refactored
		String validationResults = thisExampleX3dModel.validationReport();
            //  System.out.println("-----------------------------------"); // omit when duplicated outputs problem is solved/refactored
                System.out.print("net.x3djsonld.data.rubik self-validation test results: ");
                if (!validationResults.equals("success"))
                    System.out.println();
                System.out.println(validationResults.trim());
        }
    }
}

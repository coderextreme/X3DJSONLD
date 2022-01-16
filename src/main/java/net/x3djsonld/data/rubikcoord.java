package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Shape.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> a kind of 2x2x2 rubik cube. </p>
 <p> Related links: rubikcoord.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.rubikcoord&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="rubikcoord.x3d">rubikcoord.x3d</a> </td>
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
			<td> <a href="https://coderextreme.net/X3DJSONLD/rubik.x3d" target="_blank">https://coderextreme.net/X3DJSONLD/rubik.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> a kind of 2x2x2 rubik cube </td>
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

	* @author John Carlson
 */

public class rubikcoord
{
	/** Default constructor to create this object. */
	public rubikcoord ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_3)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("rubikcoord.x3d"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("John Carlson"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("manual"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://coderextreme.net/X3DJSONLD/rubik.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("a kind of 2x2x2 rubik cube")))
  .setScene(new Scene()
    .addChild(new NavigationInfo().setType("\"EXAMINE\""))
    .addChild(new Viewpoint().setDescription("Rubiks Cube").setPosition(0.0,0.0,12.0))
    .addChild(new Background().setSkyColor(new MFColor(new double[] {1.0,1.0,1.0})))
    .addChild(new ProtoDeclare("boxproto").setName("boxproto")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("xtranslation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,0.0)))
        .addField(new field().setName("diffuseColor").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFColor(1.0,1.0,1.0))))
      .setProtoBody(new ProtoBody()
        .addChild(new Transform()
          .setIS(new IS()
            .addConnect(new connect().setNodeField("translation").setProtoField("xtranslation")))
          .addChild(new Shape()
            .setGeometry(new Box())
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0)
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("diffuseColor").setProtoField("diffuseColor")))))))))
    .addChild(new ProtoDeclare("two").setName("two")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("ytranslation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,0.0)))
        .addField(new field().setName("diffuseColor").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFColor(1.0,0.0,0.0))))
      .setProtoBody(new ProtoBody()
        .addChild(new Transform()
          .setIS(new IS()
            .addConnect(new connect().setNodeField("translation").setProtoField("ytranslation")))
          .addChild(new ProtoInstance("boxproto").setContainerField("children")
            .addFieldValue(new fieldValue().setName("xtranslation").setValue(new SFVec3f(0.0,0.0,0.0)))
            .addFieldValue(new fieldValue().setName("diffuseColor").setValue(new SFColor(1.0,0.0,0.0))
              .addChild(new IS()
                .addConnect(new connect().setNodeField("diffuseColor").setProtoField("diffuseColor")))))
          .addChild(new ProtoInstance("boxproto").setContainerField("children")
            .addFieldValue(new fieldValue().setName("xtranslation").setValue(new SFVec3f(2.0,0.0,0.0)))
            .addFieldValue(new fieldValue().setName("diffuseColor").setValue(new SFColor(1.0,0.0,0.0))
              .addChild(new IS()
                .addConnect(new connect().setNodeField("diffuseColor").setProtoField("diffuseColor"))))))))
    .addChild(new ProtoDeclare("four").setName("four")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("ztranslation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,0.0)))
        .addField(new field().setName("x1diffuseColor").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFColor(1.0,0.0,0.0)))
        .addField(new field().setName("x2diffuseColor").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFColor(0.0,1.0,0.0))))
      .setProtoBody(new ProtoBody()
        .addChild(new Transform()
          .setIS(new IS()
            .addConnect(new connect().setNodeField("translation").setProtoField("ztranslation")))
          .addChild(new ProtoInstance("two").setContainerField("children")
            .addFieldValue(new fieldValue().setName("ytranslation").setValue(new SFVec3f(0.0,0.0,0.0)))
            .addFieldValue(new fieldValue().setName("diffuseColor").setValue(new SFColor(1.0,0.0,0.0))
              .addChild(new IS()
                .addConnect(new connect().setNodeField("diffuseColor").setProtoField("x1diffuseColor")))))
          .addChild(new ProtoInstance("two").setContainerField("children")
            .addFieldValue(new fieldValue().setName("ytranslation").setValue(new SFVec3f(0.0,2.0,0.0)))
            .addFieldValue(new fieldValue().setName("diffuseColor").setValue(new SFColor(0.0,1.0,0.0))
              .addChild(new IS()
                .addConnect(new connect().setNodeField("diffuseColor").setProtoField("x2diffuseColor"))))))))
    .addChild(new ProtoDeclare("eight").setName("eight")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("ttranslation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,0.0))))
      .setProtoBody(new ProtoBody()
        .addChild(new Transform()
          .setIS(new IS()
            .addConnect(new connect().setNodeField("translation").setProtoField("ttranslation")))
          .addChild(new ProtoInstance("four").setContainerField("children")
            .addFieldValue(new fieldValue().setName("ztranslation").setValue(new SFVec3f(0.0,0.0,0.0)))
            .addFieldValue(new fieldValue().setName("x1diffuseColor").setValue(new SFColor(1.0,0.0,0.0)))
            .addFieldValue(new fieldValue().setName("x2diffuseColor").setValue(new SFColor(0.0,1.0,0.0))))
          .addChild(new ProtoInstance("four").setContainerField("children")
            .addFieldValue(new fieldValue().setName("ztranslation").setValue(new SFVec3f(0.0,0.0,2.0)))
            .addFieldValue(new fieldValue().setName("x1diffuseColor").setValue(new SFColor(0.0,0.0,1.0)))
            .addFieldValue(new fieldValue().setName("x2diffuseColor").setValue(new SFColor(1.0,1.0,0.0)))))))
    .addChild(new ProtoInstance("eight").setContainerField("children")
      .addFieldValue(new fieldValue().setName("ttranslation").setValue(new SFVec3f(0.0,0.0,0.0))))
    .addComments(new String[] {" Axes below",
"      <Group>",
"        <Group DEF='ArrowGreen'>",
"          <Shape>",
"            <Cylinder DEF='ArrowCylinder' radius='.025' top='false'/>",
"            <Appearance DEF='Green'>",
"              <Material diffuseColor='0 0 0'/>",
"            </Appearance>",
"          </Shape>",
"          <Transform translation='0 1 0'>",
"            <Shape>",
"              <Cone DEF='ArrowCone' bottomRadius='.05' height='.1'/>",
"              <Appearance USE='Green'/>",
"            </Shape>",
"          </Transform>",
"        </Group>",
"        <Transform translation='0 1.08 0'>",
"          <Billboard>",
"            <Shape>",
"              <Appearance DEF='LABEL_APPEARANCE'>",
"                <Material diffuseColor='0 0 0'/>",
"              </Appearance>",
"              <Text string='\"Y\"'>",
"                <FontStyle DEF='LABEL_FONT' family='\"SANS\"' justify='\"MIDDLE\" \"MIDDLE\"' size='.2'/>",
"              </Text>",
"            </Shape>",
"          </Billboard>",
"        </Transform>",
"      </Group>",
"      <Transform rotation='0 0 1 -1.57079'>",
"        <Group>",
"          <Group DEF='ArrowRed'>",
"            <Shape>",
"              <Cylinder USE='ArrowCylinder'/>",
"              <Appearance DEF='Red'>",
"                <Material diffuseColor='0 0 0'/>",
"              </Appearance>",
"            </Shape>",
"            <Transform translation='0 1 0'>",
"              <Shape>",
"                <Cone USE='ArrowCone'/>",
"                <Appearance USE='Red'/>",
"              </Shape>",
"            </Transform>",
"          </Group>",
"          <Transform rotation='0 0 1 1.57079' translation='.072 1.1 0'>",
"            <Billboard>",
"              <Shape>",
"                <Appearance USE='LABEL_APPEARANCE'/>",
"                <Text string='\"X\"'>",
"                  <FontStyle USE='LABEL_FONT'/>",
"                </Text>",
"              </Shape>",
"            </Billboard>",
"          </Transform>",
"        </Group>",
"      </Transform>",
"      <Transform rotation='1 0 0 1.57079'>",
"        <Group>",
"          <Group DEF='ArrowBlue'>",
"            <Shape>",
"              <Cylinder USE='ArrowCylinder'/>",
"              <Appearance DEF='Blue'>",
"                <Material diffuseColor='0 0 0'/>",
"              </Appearance>",
"            </Shape>",
"            <Transform translation='0 1 0'>",
"              <Shape>",
"                <Cone USE='ArrowCone'/>",
"                <Appearance USE='Blue'/>",
"              </Shape>",
"            </Transform>",
"          </Group>",
"          <Transform rotation='1 0 0 -1.57079' translation='0 1.1 .072'>",
"            <Billboard>",
"              <Shape>",
"                <Appearance USE='LABEL_APPEARANCE'/>",
"                <Text string='\"Z\"'>",
"                  <FontStyle USE='LABEL_FONT'/>",
"                </Text>",
"              </Shape>",
"            </Billboard>",
"          </Transform>",
"        </Group>",
"      </Transform>"}));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return rubikcoord model
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
        X3D thisExampleX3dModel = new rubikcoord().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.rubikcoord\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.rubikcoord\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

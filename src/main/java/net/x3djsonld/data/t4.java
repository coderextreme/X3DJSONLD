package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.Shape.*;

// Javadoc annotations follow, see below for Java source code.
/**
 * <p> Test Case for Proto Expander. </p>
 <p> Related links: t4.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.t4&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="http://coderextreme.net/X3DJSONLD/src/main/data/t4.x3d">t4.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="http://coderextreme.net/X3DJSONLD/src/main/data/t4.x3d" target="_blank">http://coderextreme.net/X3DJSONLD/src/main/data/t4.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> view3dscene, <a href="https://castle-engine.io/view3dscene.php" target="_blank">https://castle-engine.io/view3dscene.php</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Andreas Plesch and John Carlson </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> source </i> </td>
			<td> t1.wrl </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Test Case for Proto Expander </td>
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
		stylesheet to create Java source code from an <code>.x3d</code> model.
	</p>

	* @author Andreas Plesch and John Carlson
 */

public class t4
{
	/** Default constructor to create this object. */
	public t4 ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_3)
  .setHead(new head()
    .addComponent(new component().setName("Networking").setLevel(2))
    .addComponent(new component().setName("Core").setLevel(2))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("t4.x3d"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("http://coderextreme.net/X3DJSONLD/src/main/data/t4.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("view3dscene, https://castle-engine.io/view3dscene.php"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Andreas Plesch and John Carlson"))
    .addMeta(new meta().setName(meta.NAME_SOURCE     ).setContent("t1.wrl"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Test Case for Proto Expander"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("https://www.web3d.org/x3d/content/examples/license.html")))
  .setScene(new Scene()
    .addChild(new NavigationInfo().setAvatarSize(new double[] {200.0,200.0,120.0}).setSpeed(3).setType("\"EXAMINE\" \"FLY\" \"WALK\""))
    .addChild(new WorldInfo().setTitle("Arts Mapper"))
    .addChild(new Viewpoint().setDescription("looking North").setFieldOfView(0.785398125648499).setOrientation(1.0,0.0,0.0,-0.699999988079071).setPosition(0.0,60.0,110.0))
    .addChild(new ProtoDeclare("org").setName("org")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("posi").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(0.0,0.0,0.0)))
        .addField(new field().setName("col").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFColor(0.0,0.0,0.0))))
      .setProtoBody(new ProtoBody()
        .addChild(new Transform()
          .setIS(new IS()
            .addConnect(new connect().setNodeField("translation").setProtoField("posi")))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0)
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("emissiveColor").setProtoField("col")))))
            .setGeometry(new Sphere().setRadius(5.10000002384186))))))
    .addChild(new ProtoDeclare("r").setName("r")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("pos").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(0.0,0.0,0.0))))
      .setProtoBody(new ProtoBody()
        .addChild(new ProtoInstance("org").setContainerField("children")
          .addFieldValue(new fieldValue().setName("col").setValue(new SFColor(0.0,0.300000011920929,1.0)))
          .setIS(new IS()
            .addConnect(new connect().setNodeField("posi").setProtoField("pos"))))))
    .addChild(new ProtoDeclare("n").setName("n")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("pos").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(0.0,0.0,0.0))))
      .setProtoBody(new ProtoBody()
        .addChild(new ProtoInstance("org").setContainerField("children")
          .addFieldValue(new fieldValue().setName("col").setValue(new SFColor(1.0,0.0,0.200000002980232)))
          .setIS(new IS()
            .addConnect(new connect().setNodeField("posi").setProtoField("pos"))))))
    .addChild(new ProtoDeclare("i").setName("i")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("pos").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(0.0,0.0,0.0))))
      .setProtoBody(new ProtoBody()
        .addChild(new ProtoInstance("org").setContainerField("children")
          .addFieldValue(new fieldValue().setName("col").setValue(new SFColor(0.600000023841858,0.0,0.600000023841858)))
          .setIS(new IS()
            .addConnect(new connect().setNodeField("posi").setProtoField("pos"))))))
    .addChild(new Transform().setTranslation(-468.0,0.0,315.0)
      .addChild(new Anchor().setDescription("High Peak Community Arts").setUrl(new String[] {"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("r").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(400.0,0.100000001490116,-385.0)))))
      .addChild(new Anchor().setDescription("People Express").setUrl(new String[] {"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("i").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(429.899993896484,0.100000001490116,-319.600006103516)))))
      .addChild(new Anchor().setDescription("QArts/Studios").setUrl(new String[] {"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("i").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(430.0,0.100000001490116,-335.0)))))
      .addChild(new Anchor().setDescription("First Movement").setUrl(new String[] {"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("n").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(429.899993896484,0.100000001490116,-360.299987792969)))))
      .addChild(new Anchor().setDescription("City Arts").setUrl(new String[] {"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("i").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(455.899993896484,0.100000001490116,-341.299987792969)))))
      .addChild(new Anchor().setDescription("Indigo Dance Group (Salamanda Tandem)").setUrl(new String[] {"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("r").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(456.100006103516,0.100000001490116,-341.5)))))
      .addChild(new Anchor().setDescription("Watering Seeds").setUrl(new String[] {"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("r").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(454.0,0.100000001490116,-361.299987792969)))))
      .addChild(new Anchor().setDescription("Fased In The Arts").setUrl(new String[] {"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("r").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(440.0,0.100000001490116,-350.0)))))
      .addChild(new Anchor().setDescription("27a Access Artspace").setUrl(new String[] {"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("n").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(458.899993896484,0.100000001490116,-304.299987792969)))))
      .addChild(new Anchor().setDescription("Bamboozle Theatre Company").setUrl(new String[] {"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("r").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(457.100006103516,0.100000001490116,-300.799987792969)))))
      .addChild(new Anchor().setDescription("Mantle Community Arts").setUrl(new String[] {"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("r").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(442.399993896484,0.100000001490116,-314.5)))))
      .addChild(new Anchor().setDescription("Artlink East").setUrl(new String[] {"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("r").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(491.600006103516,0.100000001490116,-335.700012207031)))))
      .addChild(new Anchor().setDescription("Creations").setUrl(new String[] {"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("r").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(467.0,0.100000001490116,-243.899993896484)))))
      .addChild(new Anchor().setDescription("New Perspectives").setUrl(new String[] {"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("n").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(457.399993896484,0.100000001490116,-262.700012207031)))))
      .addChild(new Anchor().setDescription("UKan2").setUrl(new String[] {"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
        .addChild(new ProtoInstance("r").setContainerField("children")
          .addFieldValue(new fieldValue().setName("pos").setValue(new SFVec3f(458.700012207031,0.100000001490116,-262.700012207031)))))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return t4 model
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
        X3D thisExampleX3dModel = new t4().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.t4\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.t4\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

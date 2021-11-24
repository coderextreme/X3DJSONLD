package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.RigidBodyPhysics.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Example scene for RigidBodyPhysics component. </p>
 <p> Related links: <a href="../../../RigidBodyPhysics/BounceTrimesh.java">BounceTrimesh.java</a> source, <a href="../../../RigidBodyPhysics/BounceTrimeshIndex.html" target="_top">BounceTrimesh catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../RigidBodyPhysics/BounceTrimesh.x3d">BounceTrimesh.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Example scene for RigidBodyPhysics component </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Alan Hudson and Justin Couch </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 1 January 2008 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translated </i> </td>
			<td> 26 December 2008 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.xj3d.org/extensions/index.html#Physics" target="_blank">http://www.xj3d.org/extensions/index.html#Physics</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../RigidBodyPhysics/originals/bounce_trimesh.x3dv">originals/bounce_trimesh.x3dv</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/rigid_physics.html" target="_blank">https://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/rigid_physics.html</a> </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> under development </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/RigidBodyPhysics/BounceTrimesh.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/RigidBodyPhysics/BounceTrimesh.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> Xj3D converter, <a href="http://www.xj3d.org" target="_blank">http://www.xj3d.org</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../RigidBodyPhysics/../license.html">../license.html</a> </td>
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

	* @author Alan Hudson and Justin Couch
 */

public class BounceTrimesh
{
	/** Default constructor to create this object. */
	public BounceTrimesh ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_2)
  .setHead(new head()
    .addComponent(new component().setName("RigidBodyPhysics").setLevel(2))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("BounceTrimesh.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Example scene for RigidBodyPhysics component"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Alan Hudson and Justin Couch"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("1 January 2008"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATED ).setContent("26 December 2008"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.xj3d.org/extensions/index.html#Physics"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("originals/bounce_trimesh.x3dv"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/rigid_physics.html"))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("under development"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/RigidBodyPhysics/BounceTrimesh.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Xj3D converter, http://www.xj3d.org"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("BounceTrimesh.x3d"))
    .addChild(new Viewpoint().setPosition(0.0,0.0,4.0))
    .addChild(new Group()
      .addChild(new CollidableShape("BALL-GEOM")
        .setShape(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setEmissiveColor(1.0,0.0,0.0)))
          .setGeometry(new Sphere().setRadius(0.1))))
      .addChild(new CollidableShape("GROUND-GEOM").setTranslation(0.0,-0.5,0.0)
        .setShape(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setEmissiveColor(0.0,1.0,0.0)))
          .setGeometry(new TriangleSet().setCcw(true).setColorPerVertex(true).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-10.0,0.0,10.0,10.0,0.0,10.0,10.0,0.0,-10.0,-10.0,0.0,10.0,10.0,0.0,-10.0,-10.0,0.0,-10.0})))))))
    .addChild(new Transform().setTranslation(1.0,1.0,0.0)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material("INDICATOR-MATERIAL").setEmissiveColor(0.0,0.0,1.0)))
        .setGeometry(new Sphere().setRadius(0.2))))
    .addChild(new RigidBodyCollection("BODY-COLLECTION")
      .addBodies(new RigidBody("BODY-1").setPosition(0.0,2.0,0.0)
        .addGeometry(new CollidableShape().setUSE("BALL-GEOM"))))
    .addChild(new CollisionSensor("COLLISION-OUTPUT")
      .setCollider(new CollisionCollection("COLLISION-GROUP").setBounce(1.0).setMinBounceSpeed(1.0)
        .addCollidables(new CollidableShape().setUSE("BALL-GEOM"))
        .addCollidables(new CollidableShape().setUSE("GROUND-GEOM"))))
    .addChild(new Script("CONTACT-SCRIPT").setDirectOutput(true).setSourceCode("\n" + 
"      " + "\n" + 
"ecmascript:" + "\n" + 
"    function set_jointContacts(val) {" + "\n" + 
"      for(i = 0; i < val.length; i++) {" + "\n" + 
"        if(val[i].geometry1.equals(ground)) {" + "\n" + 
"	  val[i].geometry1 = null;" + "\n" + 
"	  val[i].body1 = null;" + "\n" + 
"	  val[i].bounce = 1;" + "\n" + 
"	}" + "\n" + 
"\n" + 
"        if(val[i].geometry2.equals(ground)) {" + "\n" + 
"	  val[i].geometry2 = null;" + "\n" + 
"	  val[i].body2 = null;" + "\n" + 
"	  val[i].bounce = 1;" + "\n" + 
"	}" + "\n" + 
"      }" + "\n" + 
"      correctedContacts = val;" + "\n" + 
"    }" + "\n" + 
"\n" + 
"    function activeSensor(val) {" + "\n" + 
"      if(val) {" + "\n" + 
"        indicatorColor.r = 0;" + "\n" + 
"        indicatorColor.g = 1;" + "\n" + 
"        indicatorColor.b = 0;" + "\n" + 
"      }	else {" + "\n" + 
"        indicatorColor.r = 1;" + "\n" + 
"        indicatorColor.g = 0;" + "\n" + 
"        indicatorColor.b = 0;" + "\n" + 
"      }" + "\n" + 
"    }" + "\n")
      .addField(new field().setName("activeSensor").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("indicatorColor").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("set_jointContacts").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("correctedContacts").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("ground").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
        .addChild(new CollidableShape().setUSE("GROUND-GEOM"))))
    .addChild(new ROUTE().setFromNode("COLLISION-OUTPUT").setFromField("contacts").setToNode("CONTACT-SCRIPT").setToField("set_jointContacts"))
    .addChild(new ROUTE().setFromNode("COLLISION-OUTPUT").setFromField("isActive").setToNode("CONTACT-SCRIPT").setToField("activeSensor"))
    .addChild(new ROUTE().setFromNode("CONTACT-SCRIPT").setFromField("indicatorColor").setToNode("INDICATOR-MATERIAL").setToField("emissiveColor"))
    .addChild(new ROUTE().setFromNode("CONTACT-SCRIPT").setFromField("correctedContacts").setToNode("BODY-COLLECTION").setToField("set_contacts")));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return BounceTrimesh model
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
        X3D thisExampleX3dModel = new BounceTrimesh().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.BounceTrimesh\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.BounceTrimesh\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.DIS.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Scripting.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Prototype for a DIS enabled (including articulated parameters) for inclusion in a VRML Scene. Articulation parameters are in AUV Dynamics (AUV Workbench) order. </p>
 <p> Related links: <a href="../../../DistributedInteractiveSimulation/AriesEspduPrototype.java">AriesEspduPrototype.java</a> source, <a href="../../../DistributedInteractiveSimulation/AriesEspduPrototypeIndex.html" target="_top">AriesEspduPrototype catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../DistributedInteractiveSimulation/AriesEspduPrototype.x3d">AriesEspduPrototype.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Prototype for a DIS enabled (including articulated parameters) for inclusion in a VRML Scene. Articulation parameters are in AUV Dynamics (AUV Workbench) order. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Duane Davis </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Vrml97ToX3dNist </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 15 November 2003 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> Distributed Interactive Simulation DIS ESPDU Aries AUV </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/AriesEspduPrototype.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/AriesEspduPrototype.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> Vrml97ToX3dNist, <a href="http://ovrt.nist.gov/v2_x3d.html" target="_blank">http://ovrt.nist.gov/v2_x3d.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../DistributedInteractiveSimulation/../license.html">../license.html</a> </td>
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

	* @author Duane Davis
 */

public class AriesEspduPrototype
{
	/** Default constructor to create this object. */
	public AriesEspduPrototype ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addComponent(new component().setName("DIS").setLevel(1))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("AriesEspduPrototype.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Prototype for a DIS enabled (including articulated parameters) for inclusion in a VRML Scene. Articulation parameters are in AUV Dynamics (AUV Workbench) order."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Duane Davis"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Vrml97ToX3dNist"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("15 November 2003"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("Distributed Interactive Simulation DIS ESPDU Aries AUV"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/AriesEspduPrototype.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("AriesEspduPrototype.x3d"))
    .addChild(new ExternProtoDeclare("Aries").setName("Aries").setAppinfo("Acoustic Radio Interactive Exploratory Server (ARIES) is an operational NPS-designed Unmanned Underwater Vehicle (AUV)").setUrl(new String[] {"../../Savage/Robots/UnmannedUnderwaterVehicles/AriesPrototype.x3d#Aries","https://savage.nps.edu/Savage/Robots/UnmannedUnderwaterVehicles/AriesPrototype.x3d#Aries","../../Savage/Robots/UnmannedUnderwaterVehicles/AriesPrototype.wrl#Aries","https://savage.nps.edu/Savage/Robots/UnmannedUnderwaterVehicles/AriesPrototype.wrl#Aries"})
      .addField(new field().setName("translation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("rotation").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("portRpm").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("stbdRpm").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("forwardRudders").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("afterRudders").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("forwardPlanes").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("afterPlanes").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("forwardVerticalThruster").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("afterVerticalThruster").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("forwardLateralThruster").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("afterLateralThruster").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("ST725Range").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("ST1000Range").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("ST725Bearing").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("ST1000Bearing").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("ST725Intensity").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("ST1000Intensity").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("hullColor").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("hull color for this UUV instance"))
      .addField(new field().setName("hullName").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("can be overridden at instantiation time only"))
      .addField(new field().setName("set_ST725Intensity").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("signal-to-noise ratio decibels"))
      .addField(new field().setName("set_forwardLateralThruster").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("set_ST1000Bearing").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("degrees about vertical axis"))
      .addField(new field().setName("set_forwardVerticalThruster").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("set_afterVerticalThruster").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("set_afterRudders").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("set_ST1000Intensity").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("signal-to-noise ratio decibels"))
      .addField(new field().setName("set_forwardPlanes").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("set_ST725Range").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("meters along sonar axis"))
      .addField(new field().setName("set_ST725Bearing").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("degrees about vertical axis"))
      .addField(new field().setName("set_afterLateralThruster").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("set_ST1000Range").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("meters along sonar axis"))
      .addField(new field().setName("set_stbdRpm").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("set_forwardRudders").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("set_portRpm").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("planeColor").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("plane color for this UUV instance"))
      .addField(new field().setName("set_afterPlanes").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY)))
    .addChild(new ProtoDeclare("AriesEspdu").setName("AriesEspdu")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("marking").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("AriesAUV"))
        .addField(new field().setName("siteID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0))
        .addField(new field().setName("applicationID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(1))
        .addField(new field().setName("entityID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(2))
        .addField(new field().setName("readInterval").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0.1))
        .addField(new field().setName("writeInterval").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(1.0))
        .addField(new field().setName("networkMode").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("standAlone"))
        .addField(new field().setName("address").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("224.2.181.145"))
        .addField(new field().setName("port").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(62040))
        .addField(new field().setName("translation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,0.0)))
        .addField(new field().setName("rotation").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFRotation(0.0,0.0,1.0,0.0))))
      .setProtoBody(new ProtoBody()
        .addComments(" ============================= ")
        .addChild(new EspduTransform("ET")
          .setIS(new IS()
            .addConnect(new connect().setNodeField("marking").setProtoField("marking"))
            .addConnect(new connect().setNodeField("siteID").setProtoField("siteID"))
            .addConnect(new connect().setNodeField("applicationID").setProtoField("applicationID"))
            .addConnect(new connect().setNodeField("entityID").setProtoField("entityID"))
            .addConnect(new connect().setNodeField("readInterval").setProtoField("readInterval"))
            .addConnect(new connect().setNodeField("writeInterval").setProtoField("writeInterval"))
            .addConnect(new connect().setNodeField("networkMode").setProtoField("networkMode"))
            .addConnect(new connect().setNodeField("address").setProtoField("address"))
            .addConnect(new connect().setNodeField("port").setProtoField("port"))
            .addConnect(new connect().setNodeField("translation").setProtoField("translation"))
            .addConnect(new connect().setNodeField("rotation").setProtoField("rotation")))
          .addComments(" applet 0 1 2, auv dynamics 36 1 1 ")
          .addChild(new Switch().setWhichChoice(0)
            .addChild(new ProtoInstance("Aries", "AriesAUV").setContainerField("children")
              .addFieldValue(new fieldValue().setName("hullColor").setValue(new SFColor(.9,.9,.9)))
              .addFieldValue(new fieldValue().setName("hullName").setValue("Aries AUV"))))
          .addChild(new Group()
            .addChild(new Script("ArticulationParameterControl").setSourceCode("\n" + 
"              " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function initialize()" + "\n" + 
"{" + "\n" + 
"   portRpm                 = 0;" + "\n" + 
"   stbdRpm                 = 0;" + "\n" + 
"   forwardVerticalThruster = 0;" + "\n" + 
"   afterVerticalThruster   = 0;" + "\n" + 
"   forwardLateralThruster  = 0;" + "\n" + 
"   afterLateralThruster    = 0;" + "\n" + 
"   forwardRudders          = 0;" + "\n" + 
"   afterRudders            = 0;" + "\n" + 
"   forwardPlanes           = 0;" + "\n" + 
"   afterPlanes             = 0;" + "\n" + 
"   ST725Range              = 30;" + "\n" + 
"   ST725Bearing            = 0;" + "\n" + 
"   ST1000Range             = 30;" + "\n" + 
"   ST1000Bearing           = 0;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_articulationParameters( value, timestamp )" + "\n" + 
"{" + "\n" + 
"   // TODO:  what about value[0] ?" + "\n" + 
"   portRpm                 = value[1];" + "\n" + 
"   stbdRpm                 = value[2];" + "\n" + 
"   forwardRudders          = value[3];" + "\n" + 
"   afterRudders            = value[4];" + "\n" + 
"   forwardPlanes           = value[5];" + "\n" + 
"   afterPlanes             = value[6];" + "\n" + 
"   forwardVerticalThruster = value[7];" + "\n" + 
"   afterVerticalThruster   = value[8];" + "\n" + 
"   forwardLateralThruster  = value[9];" + "\n" + 
"   afterLateralThruster    = value[10];" + "\n" + 
"   ST725Range              = value[11];" + "\n" + 
"   ST725Bearing            = value[12];" + "\n" + 
"   ST1000Range             = value[13];" + "\n" + 
"   ST1000Bearing           = value[14];" + "\n" + 
"}" + "\n")
              .addField(new field().setName("set_articulationParameters").setType(field.TYPE_MFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("portRpm").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .addField(new field().setName("stbdRpm").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .addField(new field().setName("forwardVerticalThruster").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .addField(new field().setName("afterVerticalThruster").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .addField(new field().setName("forwardLateralThruster").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .addField(new field().setName("afterLateralThruster").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .addField(new field().setName("forwardRudders").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .addField(new field().setName("afterRudders").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .addField(new field().setName("forwardPlanes").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .addField(new field().setName("afterPlanes").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .addField(new field().setName("ST725Range").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .addField(new field().setName("ST725Bearing").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .addField(new field().setName("ST1000Range").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .addField(new field().setName("ST1000Bearing").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
            .addChild(new ROUTE().setFromNode("ET").setFromField("articulationParameterArray").setToNode("ArticulationParameterControl").setToField("set_articulationParameters"))
            .addChild(new ROUTE().setFromNode("ArticulationParameterControl").setFromField("portRpm").setToNode("AriesAUV").setToField("portRpm"))
            .addChild(new ROUTE().setFromNode("ArticulationParameterControl").setFromField("stbdRpm").setToNode("AriesAUV").setToField("stbdRpm"))
            .addChild(new ROUTE().setFromNode("ArticulationParameterControl").setFromField("forwardVerticalThruster").setToNode("AriesAUV").setToField("forwardVerticalThruster"))
            .addChild(new ROUTE().setFromNode("ArticulationParameterControl").setFromField("afterVerticalThruster").setToNode("AriesAUV").setToField("afterVerticalThruster"))
            .addChild(new ROUTE().setFromNode("ArticulationParameterControl").setFromField("forwardLateralThruster").setToNode("AriesAUV").setToField("forwardLateralThruster"))
            .addChild(new ROUTE().setFromNode("ArticulationParameterControl").setFromField("afterLateralThruster").setToNode("AriesAUV").setToField("afterLateralThruster"))
            .addChild(new ROUTE().setFromNode("ArticulationParameterControl").setFromField("forwardRudders").setToNode("AriesAUV").setToField("forwardRudders"))
            .addChild(new ROUTE().setFromNode("ArticulationParameterControl").setFromField("afterRudders").setToNode("AriesAUV").setToField("afterRudders"))
            .addChild(new ROUTE().setFromNode("ArticulationParameterControl").setFromField("forwardPlanes").setToNode("AriesAUV").setToField("forwardPlanes"))
            .addChild(new ROUTE().setFromNode("ArticulationParameterControl").setFromField("afterPlanes").setToNode("AriesAUV").setToField("afterPlanes"))
            .addChild(new ROUTE().setFromNode("ArticulationParameterControl").setFromField("ST725Range").setToNode("AriesAUV").setToField("ST725Range"))
            .addChild(new ROUTE().setFromNode("ArticulationParameterControl").setFromField("ST725Bearing").setToNode("AriesAUV").setToField("ST725Bearing"))
            .addChild(new ROUTE().setFromNode("ArticulationParameterControl").setFromField("ST1000Range").setToNode("AriesAUV").setToField("ST1000Range"))
            .addChild(new ROUTE().setFromNode("ArticulationParameterControl").setFromField("ST1000Bearing").setToNode("AriesAUV").setToField("ST1000Bearing"))))))
    .addChild(new Group()
      .addChild(new ProtoInstance("AriesEspdu").setContainerField("children")
        .addFieldValue(new fieldValue().setName("networkMode").setValue("networkReader")))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return AriesEspduPrototype model
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
        X3D thisExampleX3dModel = new AriesEspduPrototype().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.AriesEspduPrototype\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.AriesEspduPrototype\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

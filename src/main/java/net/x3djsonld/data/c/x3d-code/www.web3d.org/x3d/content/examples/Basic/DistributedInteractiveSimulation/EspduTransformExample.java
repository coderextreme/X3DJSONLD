package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.DIS.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> This is the simplest example on how to add DIS networking to a VRML/X3D scene. </p>
 <p> Related links: <a href="../../../DistributedInteractiveSimulation/EspduTransformExample.java">EspduTransformExample.java</a> source, <a href="../../../DistributedInteractiveSimulation/EspduTransformExampleIndex.html" target="_top">EspduTransformExample catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../DistributedInteractiveSimulation/EspduTransformExample.x3d">EspduTransformExample.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> This is the simplest example on how to add DIS networking to a VRML/X3D scene. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Vrml97ToX3dNist </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 17 March 2002 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> Distributed Interactive Simulation DIS ESPDU </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/EspduTransformExample.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/EspduTransformExample.x3d</a> </td>
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

	* @author Don Brutzman
 */

public class EspduTransformExample
{
	/** Default constructor to create this object. */
	public EspduTransformExample ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addComponent(new component().setName("DIS").setLevel(1))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("EspduTransformExample.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("This is the simplest example on how to add DIS networking to a VRML/X3D scene."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Vrml97ToX3dNist"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("17 March 2002"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("Distributed Interactive Simulation DIS ESPDU"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/EspduTransformExample.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("EspduTransformExample.x3d"))
    .addChild(new ExternProtoDeclare("Aries").setName("Aries").setAppinfo("Acoustic Radio Interactive Exploratory Server (ARIES) is an operational NPS-designed Autonomous Underwater Vehicle (AUV)").setUrl(new String[] {"../../Savage/Robots/UnmannedUnderwaterVehicles/AriesPrototype.x3d#Aries","https://savage.nps.edu/Savage/Robots/UnmannedUnderwaterVehicles/AriesPrototype.x3d#Aries","../../Savage/Robots/UnmannedUnderwaterVehicles/AriesPrototype.wrl#Aries","https://savage.nps.edu/Savage/Robots/UnmannedUnderwaterVehicles/AriesPrototype.wrl#Aries"})
      .addField(new field().setName("translation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("rotation").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("hullColor").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("hullName").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("can be overridden at instantiation time only"))
      .addField(new field().setName("set_afterPlanes").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("set_ST1000Intensity").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("signal-to-noise ratio decibels"))
      .addField(new field().setName("set_ST725Range").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("meters along sonar axis"))
      .addField(new field().setName("set_afterVerticalThruster").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("set_stbdRpm").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("set_forwardRudders").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("set_ST1000Range").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("meters along sonar axis"))
      .addField(new field().setName("set_afterLateralThruster").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("set_forwardVerticalThruster").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("set_ST725Bearing").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("degrees about vertical axis"))
      .addField(new field().setName("set_portRpm").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("set_forwardLateralThruster").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("set_afterRudders").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("set_forwardPlanes").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("set_ST1000Bearing").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("degrees about vertical axis"))
      .addField(new field().setName("set_ST725Intensity").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("signal-to-noise ratio decibels")))
    .addChild(new ExternProtoDeclare("EspduTransformTrace").setName("EspduTransformTrace").setAppinfo("EspduTransformTrace provides 3D trace values for a corresponding EspduTransorm usually as a child so that it stays local to an entity's position. EspduTransformTrace compatibly adds billboarded text-trace capabilities for run-time debugging inside a scene.").setUrl(new String[] {"EspduTransformPrototypes.x3d#EspduTransformTrace","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/EspduTransformPrototypes.x3d#EspduTransformTrace","EspduTransformPrototypes.wrl#EspduTransformTrace","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/EspduTransformPrototypes.wrl#EspduTransformTrace"})
      .addField(new field().setName("espduTransformNode").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("initialize with <EspduTransform USE=\"NodeToBeTraced\"/> so that networked data is passed by reference"))
      .addField(new field().setName("traceColor").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Trace text color"))
      .addField(new field().setName("traceOffset").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Trace text position relative to entity"))
      .addField(new field().setName("traceFontSize").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Trace text scale"))
      .addField(new field().setName("traceJava").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("whether or not to include verbose trace comments in Java console in order to help debug network connectivity"))
      .addField(new field().setName("localTraceEnabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Whether EspduTransformTrace debug scripting is visible inside the X3D scene")))
    .addComments(" ============================= ")
    .addComments(" Default scene listens for PDUs with networkMode=networkReader. This is the basic design pattern. ")
    .addChild(new EspduTransform("ET").setAddress("224.2.181.145").setEntityID(2).setMarking("local AUV").setNetworkMode("networkReader").setPort(62040)
      .addComments(" applet 0 1 2, auv dynamics 36 1 1 ")
      .addChild(new ProtoInstance("Aries", "AriesAUV").setContainerField("children")
        .addFieldValue(new fieldValue().setName("hullColor").setValue(new SFColor(.9,.9,.9)))
        .addFieldValue(new fieldValue().setName("hullName").setValue("Aries AUV")))
      .addChild(new Viewpoint().setDescription("Local viewpoint moving with AUV"))
      .addChild(new TimeSensor("TestTimer").setCycleInterval(5).setLoop(true))
      .addChild(new Group("GroupETROUTES")
        .addChild(new ROUTE().setFromNode("ET").setFromField("articulationParameterValue0_changed").setToNode("AriesAUV").setToField("set_portRpm"))
        .addChild(new ROUTE().setFromNode("ET").setFromField("articulationParameterValue0_changed").setToNode("AriesAUV").setToField("set_stbdRpm"))
        .addChild(new ROUTE().setFromNode("ET").setFromField("articulationParameterValue1_changed").setToNode("AriesAUV").setToField("set_forwardVerticalThruster"))
        .addChild(new ROUTE().setFromNode("ET").setFromField("articulationParameterValue1_changed").setToNode("AriesAUV").setToField("set_afterVerticalThruster"))
        .addChild(new ROUTE().setFromNode("ET").setFromField("articulationParameterValue2_changed").setToNode("AriesAUV").setToField("set_forwardLateralThruster"))
        .addChild(new ROUTE().setFromNode("ET").setFromField("articulationParameterValue3_changed").setToNode("AriesAUV").setToField("set_afterLateralThruster"))
        .addChild(new ROUTE().setFromNode("ET").setFromField("articulationParameterValue4_changed").setToNode("AriesAUV").setToField("set_ST725Range"))
        .addChild(new ROUTE().setFromNode("ET").setFromField("articulationParameterValue5_changed").setToNode("AriesAUV").setToField("set_ST725Bearing"))
        .addChild(new ROUTE().setFromNode("ET").setFromField("articulationParameterValue6_changed").setToNode("AriesAUV").setToField("set_ST1000Range"))
        .addChild(new ROUTE().setFromNode("ET").setFromField("articulationParameterValue7_changed").setToNode("AriesAUV").setToField("set_ST1000Bearing"))))
    .addChild(new Transform("EspduTransformTraceParent")
      .addChild(new ProtoInstance("EspduTransformTrace", "EspduTransformTraceNode").setContainerField("children")))
    .addChild(new ROUTE().setFromNode("ET").setFromField("translation_changed").setToNode("EspduTransformTraceParent").setToField("translation"))
    .addChild(new ROUTE().setFromNode("ET").setFromField("rotation_changed").setToNode("EspduTransformTraceParent").setToField("rotation"))
    .addComments(" ============================= ")
    .addChild(new NavigationInfo().setSpeed(2.0).setVisibilityLimit(2000.0))
    .addChild(new Background().setGroundAngle(new double[] {0.15,1.0}).setGroundColor(new MFColor(new double[] {0.02,0.04,0.11,0.02,0.11,0.45,0.04,0.22,0.45})).setSkyAngle(new double[] {0.15,3.0}).setSkyColor(new MFColor(new double[] {0.44,0.66,0.9,0.08,0.44,0.9,0.06,0.33,0.45})).setBackUrl(new String[] {"mountains.png","https://www.web3d.org/x3d/content/examples/Basic/Vrml2Sourcebook/Chapter22-Background/mountains.png"}).setFrontUrl(new String[] {"mountains.png","https://www.web3d.org/x3d/content/examples/Basic/Vrml2Sourcebook/Chapter22-Background/mountains.png"}).setLeftUrl(new String[] {"mountains.png","https://www.web3d.org/x3d/content/examples/Basic/Vrml2Sourcebook/Chapter22-Background/mountains.png"}).setRightUrl(new String[] {"mountains.png","https://www.web3d.org/x3d/content/examples/Basic/Vrml2Sourcebook/Chapter22-Background/mountains.png"}))
    .addChild(new Viewpoint().setDescription("looking down from above surface 50m").setOrientation(1.0,0.0,0.0,-1.57).setPosition(0.0,50.0,0.0))
    .addChild(new Transform().setTranslation(-20.0,-10.0,-20.0)
      .addChild(new Shape()
        .setGeometry(new ElevationGrid("SimpleCheckboard").setColorPerVertex(false).setSolid(false).setXDimension(5).setXSpacing(10).setZDimension(5).setZSpacing(10).setHeight(new double[] {0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0})
          .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.6,0.2,0.0,0.3,0.1,0.0,0.6,0.2,0.0,0.3,0.1,0.0,0.3,0.1,0.0,0.6,0.2,0.0,0.3,0.1,0.0,0.6,0.2,0.0,0.6,0.2,0.0,0.3,0.1,0.0,0.6,0.2,0.0,0.3,0.1,0.0,0.3,0.1,0.0,0.6,0.2,0.0,0.3,0.1,0.0,0.6,0.2}))))
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(0.0,0.0,0.0).setTransparency(0.25)))))
    .addComments(" ============================= ")
    .addComments(" To make this an actively animated scene on the network, change EspduTransform networkMode=master and set TimeSensor enable=true ")
    .addChild(new Group("AnimationGroup")
      .addChild(new TimeSensor("LoopTimeSensor").setCycleInterval(33.0).setEnabled(false).setLoop(true))
      .addChild(new PositionInterpolator("PI").setKey(getPI_4_73_key()).setKeyValue(getPI_4_73_keyValue()))
      .addChild(new ROUTE().setFromNode("LoopTimeSensor").setFromField("fraction_changed").setToNode("PI").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("PI").setFromField("value_changed").setToNode("ET").setToField("set_translation"))
      .addChild(new OrientationInterpolator("OI").setKey(new double[] {0.0,0.06728,0.11315,0.16208,0.22018,0.2844,0.33945,0.37309,0.39755,0.41896,0.43731,0.45566,0.47401,0.49235,0.5107,0.52905,0.55046,0.57187,0.59327,0.61468,0.63609,0.65749,0.6789,0.70336,0.72783,0.75229,0.77982,0.80734,0.83486,0.86239,0.89297,0.92355,0.95413,0.98471,1.0}).setKeyValue(new MFRotation(new double[] {0.0,1.0,0.0,0.0,0.0,1.0,0.0,-0.18469,0.0,1.0,0.0,-0.37008,0.0,1.0,0.0,-0.54531,0.0,1.0,0.0,-0.72211,0.0,1.0,0.0,-0.8994,0.0,1.0,0.0,-1.07997,0.0,1.0,0.0,-1.25779,0.0,1.0,0.0,-1.45067,0.0,1.0,0.0,-1.65407,0.0,1.0,0.0,-1.8375,0.0,1.0,0.0,-2.02252,0.0,1.0,0.0,-2.20652,0.0,1.0,0.0,-2.38843,0.0,1.0,0.0,-2.56787,0.0,1.0,0.0,-2.74479,0.0,1.0,0.0,-2.94807,0.0,1.0,0.0,-3.14826,0.0,1.0,0.0,-3.34564,0.0,1.0,0.0,-3.5401,0.0,1.0,0.0,-3.72909,0.0,1.0,0.0,-3.91127,0.0,1.0,0.0,-4.08679,0.0,1.0,0.0,-4.27977,0.0,1.0,0.0,-4.4653,0.0,1.0,0.0,-4.64413,0.0,1.0,0.0,-4.83818,0.0,1.0,0.0,-5.02559,0.0,1.0,0.0,-5.2074,0.0,1.0,0.0,-5.38457,0.0,1.0,0.0,-5.57596,0.0,1.0,0.0,-5.76035,0.0,1.0,0.0,-5.94039,0.0,1.0,0.0,-6.12005,0.0,1.0,0.0,-6.21114})))
      .addChild(new ROUTE().setFromNode("LoopTimeSensor").setFromField("fraction_changed").setToNode("OI").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("OI").setFromField("value_changed").setToNode("ET").setToField("set_rotation"))));
    }
	// end of initialize() method

		/** Define subarrays using type double[] */
		private double[] getPI_4_73_key_1()
		{
			double[] value = {0.0,0.03976,0.0581,0.07034,0.08257,0.09174,0.10092,0.11009,0.11927,0.12844,0.13761,0.14373,0.14985,0.15596,0.16208,0.1682,0.17431,0.18043,0.18654,0.19266,0.19878,0.20489,0.21101,0.21713,0.22324,0.22936,0.23547,0.24159,0.24771,0.25382,0.25994,0.26606,0.27217,0.27829,0.2844,0.29052,0.29664,0.30275,0.30887,0.31498,0.3211,0.32416,0.32722,0.33028,0.33333,0.33639,0.33945,0.34251,0.34557,0.34862,0.35168,0.35474,0.3578,0.36086,0.36391,0.36697,0.37003,0.37309,0.37615,0.3792,0.38226,0.38532,0.38838,0.39144,0.3945,0.39755,0.40061,0.40367,0.40673,0.40979,0.41284,0.4159,0.41896,0.42202,0.42508,0.42813,0.43119,0.43425,0.43731,0.44037,0.44342,0.44648,0.44954,0.4526,0.45566,0.45872,0.46177,0.46483,0.46789,0.47095,0.47401,0.47706,0.48012,0.48318,0.48624,0.4893,0.49235,0.49541,0.49847,0.50153,0.50459,0.50765,0.5107,0.51376,0.51682,0.51988,0.52294,0.52599,0.52905,0.53211,0.53517,0.53823,0.54128,0.54434,0.5474,0.55046,0.55352,0.55657,0.55963,0.56269,0.56575,0.56881,0.57187,0.57492,0.58104,0.58716,0.59327,0.59939,0.6055,0.61162,0.61774,0.62385,0.62997,0.63609,0.6422,0.64832,0.65443,0.66055,0.66667,0.67278,0.6789,0.68502,0.69113,0.69725,0.70336,0.70948,0.7156,0.72171,0.72783,0.73394,0.74006,0.74618,0.75229,0.75841,0.76453,0.77064,0.77676,0.78287,0.78899,0.79511,0.80122,0.80734,0.81346,0.81957,0.82569,0.8318,0.83792,0.84404,0.85015,0.85627,0.86239,0.8685,0.87462,0.88073,0.88685,0.89297,0.89908,0.9052,0.91131,0.91743,0.92355,0.92966,0.93578,0.9419,0.94801,0.95413,0.96024,0.96636,0.97248,0.97859,0.98471,0.99083,0.99388,0.99694,1.0};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getPI_4_73_keyValue_1()
		{
			double[] value = {5.0,-2.0,5.0,5.08,-2.06,5.0,5.19,-2.13,5.01,5.28,-2.19,5.02,5.38,-2.25,5.04,5.47,-2.31,5.05,5.57,-2.36,5.07,5.68,-2.42,5.1,5.79,-2.48,5.13,5.91,-2.55,5.17,6.04,-2.61,5.21,6.13,-2.65,5.25,6.23,-2.69,5.28,6.32,-2.73,5.32,6.42,-2.78,5.36,6.53,-2.82,5.41,6.63,-2.86,5.46,6.74,-2.9,5.51,6.85,-2.94,5.57,6.96,-2.98,5.63,7.08,-3.02,5.69,7.19,-3.05,5.76,7.31,-3.09,5.83,7.43,-3.13,5.9,7.55,-3.16,5.98,7.68,-3.2,6.06,7.8,-3.24,6.15,7.93,-3.27,6.24,8.06,-3.31,6.34,8.18,-3.34,6.44,8.31,-3.38,6.54,8.44,-3.41,6.65,8.57,-3.44,6.76,8.7,-3.48,6.88,8.84,-3.51,7.0,8.97,-3.55,7.12,9.1,-3.58,7.25,9.23,-3.61,7.38,9.36,-3.65,7.52,9.49,-3.68,7.67,9.62,-3.72,7.81,9.69,-3.73,7.89,9.75,-3.75,7.96,9.81,-3.77,8.04,9.88,-3.79,8.12,9.94,-3.8,8.2,10.0,-3.82,8.28,10.07,-3.84,8.36,10.13,-3.86,8.45,10.19,-3.87,8.53,10.25,-3.89,8.62,10.31,-3.91,8.7,10.37,-3.93,8.79,10.42,-3.95,8.88,10.48,-3.96,8.97,10.54,-3.98,9.06,10.59,-4.0,9.16,10.64,-4.02,9.25,10.7,-4.04,9.35,10.75,-4.06,9.44,10.8,-4.08,9.54,10.84,-4.1,9.64,10.89,-4.11,9.74,10.93,-4.13,9.84,10.97,-4.15,9.94,11.01,-4.17,10.04,11.05,-4.19,10.15,11.09,-4.21,10.25,11.12,-4.23,10.36,11.15,-4.25,10.47,11.18,-4.27,10.57,11.21,-4.29,10.68,11.23,-4.31,10.79,11.25,-4.33,10.9,11.27,-4.34,11.01,11.29,-4.36,11.12,11.3,-4.38,11.23,11.31,-4.4,11.34,11.32,-4.42,11.45,11.32,-4.44,11.56,11.33,-4.46,11.68,11.33,-4.48,11.79,11.32,-4.5,11.9,11.32,-4.51,12.01,11.31,-4.53,12.12,11.3,-4.55,12.23,11.28,-4.57,12.34,11.26,-4.59,12.44,11.24,-4.61,12.55,11.22,-4.62,12.66,11.19,-4.64,12.76,11.17,-4.66,12.87,11.14,-4.68,12.98,11.1,-4.7,13.08,11.06,-4.71,13.18,11.03,-4.73,13.28,10.98,-4.75,13.38,10.94,-4.76,13.48,10.89,-4.78,13.57,10.84,-4.8,13.67};
			return value;
		}
		private double[] getPI_4_73_keyValue_2()
		{
			double[] value = {10.79,-4.82,13.76,10.74,-4.83,13.85,10.68,-4.85,13.94,10.62,-4.87,14.03,10.56,-4.88,14.12,10.5,-4.9,14.2,10.44,-4.92,14.28,10.37,-4.93,14.36,10.3,-4.95,14.44,10.23,-4.97,14.52,10.16,-4.98,14.59,10.09,-5.0,14.66,10.01,-5.02,14.73,9.94,-5.03,14.8,9.86,-5.05,14.87,9.78,-5.07,14.93,9.7,-5.08,14.99,9.61,-5.1,15.05,9.53,-5.12,15.1,9.45,-5.14,15.15,9.36,-5.15,15.21,9.27,-5.17,15.25,9.18,-5.18,15.3,9.1,-5.2,15.34,8.92,-5.23,15.42,8.73,-5.27,15.49,8.55,-5.3,15.55,8.36,-5.33,15.6,8.17,-5.37,15.63,7.98,-5.4,15.66,7.79,-5.43,15.68,7.61,-5.47,15.69,7.42,-5.5,15.68,7.23,-5.53,15.67,7.05,-5.57,15.65,6.87,-5.6,15.62,6.69,-5.64,15.58,6.51,-5.67,15.53,6.34,-5.7,15.47,6.17,-5.74,15.4,6.0,-5.77,15.33,5.84,-5.8,15.25,5.69,-5.84,15.16,5.54,-5.87,15.06,5.39,-5.9,14.95,5.25,-5.94,14.84,5.12,-5.97,14.73,4.99,-6.01,14.6,4.87,-6.04,14.47,4.75,-6.07,14.34,4.64,-6.11,14.2,4.54,-6.14,14.05,4.45,-6.17,13.9,4.36,-6.21,13.75,4.28,-6.24,13.59,4.21,-6.27,13.43,4.14,-6.31,13.26,4.08,-6.34,13.1,4.03,-6.37,12.92,3.99,-6.41,12.75,3.95,-6.44,12.58,3.93,-6.47,12.4,3.91,-6.51,12.22,3.9,-6.54,12.04,3.89,-6.57,11.86,3.9,-6.61,11.68,3.91,-6.64,11.5,3.93,-6.67,11.32,3.95,-6.71,11.15,3.99,-6.74,10.97,4.03,-6.77,10.79,4.08,-6.8,10.61,4.14,-6.84,10.44,4.2,-6.87,10.27,4.28,-6.9,10.1,4.36,-6.94,9.93,4.44,-6.97,9.77,4.53,-7.0,9.61,4.64,-7.04,9.45,4.74,-7.07,9.3,4.86,-7.1,9.14,4.97,-7.14,9.0,5.1,-7.17,8.85,5.23,-7.2,8.72,5.37,-7.24,8.58,5.51,-7.27,8.45,5.66,-7.3,8.33,5.82,-7.34,8.21,5.98,-7.37,8.1,6.14,-7.41,7.99,6.31,-7.44,7.89,6.48,-7.47,7.8,6.57,-7.49,7.76,6.66,-7.51,7.71,6.75,-7.52,7.67};
			return value;
		}

		/** Large attribute array: PositionInterpolator DEF='PI' key field, scene-graph level=4, element #73, 195 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFFloat getPI_4_73_key()
		{
			MFFloat PI_4_73_key = new MFFloat()/*2.finalize*/
				.append(new MFFloat(getPI_4_73_key_1()));
			return PI_4_73_key;
		}
		/** Large attribute array: PositionInterpolator DEF='PI' keyValue field, scene-graph level=4, element #73, 585 total numbers made up of 195 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getPI_4_73_keyValue()
		{
			MFVec3f PI_4_73_keyValue = new MFVec3f()/*2.finalize*/
				.append(new MFVec3f(getPI_4_73_keyValue_1()))
				.append(new MFVec3f(getPI_4_73_keyValue_2()));
			return PI_4_73_keyValue;
		}

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return EspduTransformExample model
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
        X3D thisExampleX3dModel = new EspduTransformExample().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.EspduTransformExample\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.EspduTransformExample\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

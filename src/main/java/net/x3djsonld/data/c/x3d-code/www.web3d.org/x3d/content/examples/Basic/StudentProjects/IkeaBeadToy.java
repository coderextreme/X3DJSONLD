package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> X3D example Model of an ikea bead toy. It has intense extrusions and animation. </p>
 <p> Related links: <a href="../../../StudentProjects/IkeaBeadToy.java">IkeaBeadToy.java</a> source, <a href="../../../StudentProjects/IkeaBeadToyIndex.html" target="_top">IkeaBeadToy catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../StudentProjects/IkeaBeadToy.x3d">IkeaBeadToy.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> X3D example Model of an ikea bead toy. It has intense extrusions and animation </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 3 March 2004 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Vaughn Pangelinan </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/IkeaBeadToy.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/IkeaBeadToy.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../StudentProjects/../license.html">../license.html</a> </td>
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

	* @author Vaughn Pangelinan
 */

public class IkeaBeadToy
{
	/** Default constructor to create this object. */
	public IkeaBeadToy ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("IkeaBeadToy.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("X3D example Model of an ikea bead toy. It has intense extrusions and animation"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("3 March 2004"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Vaughn Pangelinan"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/IkeaBeadToy.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("IkeaBeadToy.x3d"))
    .addChild(new Transform("Toy")
      .addChild(new Transform().setRotation(0.0,1.0,0.0,1.57).setTranslation(0.0,8.0,7.0)
        .addChild(new Viewpoint("ToyView").setDescription("Toy View").setOrientation(1.0,0.0,0.0,-.68).setPosition(3.6,-2.5,6.5)))
      .addChild(new Group("ToyGroup")
        .addChild(new Transform("Frame").setTranslation(0.0,-1.3,0.0)
          .addChild(new Transform("CrossBeamTransform").setTranslation(.5,0.0,0.0)
            .addChild(new Shape("CrossBeam")
              .setAppearance(new Appearance()
                .setMaterial(new Material("Wood").setDiffuseColor(.6,.5,.2)))
              .setGeometry(new Box().setSize(5.0,1.0,0.75))))
          .addChild(new Transform().setTranslation(.5,0.0,7.0)
            .addChild(new Shape().setUSE("CrossBeam")))
          .addChild(new Transform().setRotation(1.0,0.0,0.0,1.57).setTranslation(-1.3,0.0,3.5)
            .addChild(new Shape("LongLog")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("Wood")))
              .setGeometry(new Cylinder().setHeight(7).setRadius(.4))))
          .addChild(new Transform().setRotation(1.0,0.0,0.0,1.57).setTranslation(2.3,0.0,3.5)
            .addChild(new Shape().setUSE("LongLog"))))
        .addChild(new Transform("RedWire").setScale(1.0,1.0,.96).setTranslation(-.5,0.0,.3)
          .addChild(new TimeSensor("BlueClock").setCycleInterval(15).setLoop(true))
          .addChild(new Transform().setRotation(1.0,0.0,0.0,1.57).setTranslation(0.0,1.0,0.0)
            .addChild(new Transform().setRotation(0.0,0.0,1.0,-.15)
              .addChild(new Transform()
                .addChild(new Transform()
                  .addChild(new Shape()
                    .setGeometry(new Extrusion().setConvex(false).setCreaseAngle(0.785).setCrossSection(new MFVec2f(new double[] {.100,0.00,0.092,-0.038,0.071,-0.071,0.038,-0.092,0.00,-.100,-0.038,-0.092,-0.071,-0.071,-0.092,-0.038,-.100,-0.00,-0.092,0.038,-0.071,0.071,-0.038,0.092,0.00,.100,0.038,0.092,0.071,0.071,0.092,0.038,.100,0.00})).setSpine(new MFVec3f(new double[] {2.00,0.00,2.10,2.00,0.00,0.77,2.00,0.00,-0.00,1.85,0.12,-0.77,1.41,0.24,-1.41,0.77,0.36,-1.85,0.00,0.48,-2.00,-0.77,0.61,-1.85,-1.41,0.73,-1.41,-1.85,0.85,-0.77,-2.00,0.97,0.00,-1.85,1.09,0.77,-1.41,1.21,1.41,-0.77,1.33,1.85,0.00,1.45,2.00,0.77,1.58,1.85,1.41,1.70,1.41,1.85,1.82,0.77,2.00,1.94,0.00,1.85,2.06,-0.77,1.41,2.18,-1.41,0.77,2.30,-1.85,0.00,2.42,-2.00,-0.77,2.55,-1.85,-1.41,2.67,-1.41,-1.85,2.79,-0.77,-2.00,2.91,0.00,-1.85,3.03,0.77,-1.41,3.15,1.41,-0.77,3.27,1.85,0.00,3.39,2.00,0.77,3.52,1.85,1.41,3.64,1.41,1.85,3.76,0.77,2.00,3.88,0.00,1.85,4.00,-0.77,1.41,4.12,-1.41,0.77,4.24,-1.85,0.00,4.36,-2.00,-0.77,4.49,-1.85,-1.41,4.61,-1.41,-1.85,4.73,-0.77,-2.00,4.85,-0.00,-1.85,4.97,0.77,-1.41,5.09,1.41,-0.77,5.21,1.85,0.00,5.34,2.00,0.77,5.46,1.85,1.41,5.58,1.41,1.85,5.70,0.77,2.00,5.82,0.00,1.85,5.94,-0.77,1.41,6.07,-1.41,0.77,6.19,-1.85,-0.00,6.31,-2.00,-0.77,6.43,-1.85,-1.41,6.55,-1.41,-1.85,6.68,-0.77,-2.00,6.80,-0.00,-2.00,6.80,0.77,-2.00,6.80,2.10})))
                    .setAppearance(new Appearance("NewRed")
                      .setMaterial(new Material().setDiffuseColor(0.75,0.0,0.0)))))
                .addChild(new Transform("RedwireBlueBall1aTransform")
                  .addChild(new PositionInterpolator("BlueBallPath1a").setKey(getBlueBallPath1a_10_34_key()).setKeyValue(getBlueBallPath1a_10_34_keyValue()))
                  .addChild(new ROUTE().setFromNode("BlueClock").setFromField("fraction_changed").setToNode("BlueBallPath1a").setToField("set_fraction"))
                  .addChild(new Transform("BlueBallTransform1a").setTranslation(2.0,0.0,1.33)
                    .addChild(new Shape()
                      .setGeometry(new Sphere().setRadius(.5))
                      .setAppearance(new Appearance("NewBlue")
                        .setMaterial(new Material().setDiffuseColor(0.0,0.0,.7)))))
                  .addChild(new ROUTE().setFromNode("BlueBallPath1a").setFromField("value_changed").setToNode("BlueBallTransform1a").setToField("set_translation")))
                .addChild(new Transform("RedwireGreenBall1aTransform")
                  .addChild(new PositionInterpolator("GreenBallPath1a").setKey(getGreenBallPath1a_10_43_key()).setKeyValue(getGreenBallPath1a_10_43_keyValue()))
                  .addChild(new ROUTE().setFromNode("BlueClock").setFromField("fraction_changed").setToNode("GreenBallPath1a").setToField("set_fraction"))
                  .addChild(new Transform("GreenBallTransform1a").setTranslation(2.00,0.00,0.43)
                    .addChild(new Shape()
                      .setGeometry(new Sphere().setRadius(.5))
                      .setAppearance(new Appearance("NewGreen")
                        .setMaterial(new Material().setDiffuseColor(0.0,.6,0.0)))))
                  .addChild(new ROUTE().setFromNode("GreenBallPath1a").setFromField("value_changed").setToNode("GreenBallTransform1a").setToField("set_translation")))
                .addChild(new Transform("RedwireYellowBallTransform")
                  .addChild(new PositionInterpolator("YellowBallPath1").setKey(getYellowBallPath1_10_52_key()).setKeyValue(getYellowBallPath1_10_52_keyValue()))
                  .addChild(new ROUTE().setFromNode("BlueClock").setFromField("fraction_changed").setToNode("YellowBallPath1").setToField("set_fraction"))
                  .addChild(new Transform("YellowBallTransform1").setTranslation(1.93,0.14,-.47)
                    .addChild(new Shape()
                      .setGeometry(new Sphere().setRadius(.5))
                      .setAppearance(new Appearance("NewYellow")
                        .setMaterial(new Material().setDiffuseColor(.8,.8,0.0)))))
                  .addChild(new ROUTE().setFromNode("YellowBallPath1").setFromField("value_changed").setToNode("YellowBallTransform1").setToField("set_translation")))
                .addChild(new Transform("RedwireBlueBall1bTransform")
                  .addChild(new PositionInterpolator("BlueBallPath1b").setKey(getBlueBallPath1b_10_61_key()).setKeyValue(getBlueBallPath1b_10_61_keyValue()))
                  .addChild(new ROUTE().setFromNode("BlueClock").setFromField("fraction_changed").setToNode("BlueBallPath1b").setToField("set_fraction"))
                  .addChild(new Transform("BlueBallTransform1b").setTranslation(1.50,0.18,-1.27)
                    .addChild(new Shape()
                      .setGeometry(new Sphere().setRadius(.5))
                      .setAppearance(new Appearance().setUSE("NewBlue"))))
                  .addChild(new ROUTE().setFromNode("BlueBallPath1b").setFromField("value_changed").setToNode("BlueBallTransform1b").setToField("set_translation")))
                .addChild(new Transform("RedwireGreenBall1bTransform")
                  .addChild(new PositionInterpolator("GreenBallPath1b").setKey(getGreenBallPath1b_10_69_key()).setKeyValue(getGreenBallPath1b_10_69_keyValue()))
                  .addChild(new ROUTE().setFromNode("BlueClock").setFromField("fraction_changed").setToNode("GreenBallPath1b").setToField("set_fraction"))
                  .addChild(new Transform("GreenBallTransform1b").setTranslation(0.77,0.36,-1.85)
                    .addChild(new Shape()
                      .setGeometry(new Sphere().setRadius(.5))
                      .setAppearance(new Appearance().setUSE("NewGreen"))))
                  .addChild(new ROUTE().setFromNode("GreenBallPath1b").setFromField("value_changed").setToNode("GreenBallTransform1b").setToField("set_translation")))))))
        .addChild(new Transform().setRotation(0.0,1.0,0.0,0.31).setScale(1.0,1.0,1.09).setTranslation(-1.5,0.0,0.0)
          .addChild(new Transform("GreenWire").setRotation(1.0,0.0,0.0,1.57).setTranslation(0.0,1.0,0.0)
            .addChild(new Shape()
              .setGeometry(new Extrusion().setConvex(false).setCreaseAngle(0.785).setCrossSection(new MFVec2f(new double[] {.100,0.00,0.092,-0.038,0.071,-0.071,0.038,-0.092,0.00,-.100,-0.038,-0.092,-0.071,-0.071,-0.092,-0.038,-.100,-0.00,-0.092,0.038,-0.071,0.071,-0.038,0.092,0.00,.100,0.038,0.092,0.071,0.071,0.092,0.038,.100,0.00})).setSpine(getExtrusion_8_81_spine()))
              .setAppearance(new Appearance().setUSE("NewGreen")))
            .addChild(new Transform()
              .addChild(new TimeSensor("YellowClock").setCycleInterval(6).setLoop(true))
              .addChild(new PositionInterpolator("YellowBallPath2").setKey(getYellowBallPath2_8_85_key()).setKeyValue(getYellowBallPath2_8_85_keyValue()))
              .addChild(new ROUTE().setFromNode("YellowClock").setFromField("fraction_changed").setToNode("YellowBallPath2").setToField("set_fraction"))
              .addChild(new Transform("YellowBallTransform2").setTranslation(0.00,0.00,0.47)
                .addChild(new Shape()
                  .setGeometry(new Sphere().setRadius(.5))
                  .setAppearance(new Appearance().setUSE("NewYellow"))))
              .addChild(new ROUTE().setFromNode("YellowBallPath2").setFromField("value_changed").setToNode("YellowBallTransform2").setToField("set_translation"))
              .addChild(new Transform("BlueBallTransform2").setTranslation(0.00,6.80,.43)
                .addChild(new Shape()
                  .setGeometry(new Sphere().setRadius(.5))
                  .setAppearance(new Appearance().setUSE("NewBlue"))))
              .addChild(new Transform("RedBallTransform2").setTranslation(0.00,0.00,1.33)
                .addChild(new Shape()
                  .setGeometry(new Sphere().setRadius(.5))
                  .setAppearance(new Appearance().setUSE("NewRed"))))
              .addChild(new Transform("GreenBallTransform2").setTranslation(0.00,6.80,1.33)
                .addChild(new Shape()
                  .setGeometry(new Sphere().setRadius(.5))
                  .setAppearance(new Appearance().setUSE("NewGreen")))))))
        .addChild(new Transform().setScale(1.0,1.0,1.04).setTranslation(2.5,0.0,0.0)
          .addChild(new Transform("BlueWire").setRotation(1.0,0.0,0.0,1.57).setTranslation(0.0,1.0,0.0)
            .addChild(new Shape()
              .setGeometry(new Extrusion().setConvex(false).setCreaseAngle(0.785).setCrossSection(new MFVec2f(new double[] {.100,0.00,0.092,-0.038,0.071,-0.071,0.038,-0.092,0.00,-.100,-0.038,-0.092,-0.071,-0.071,-0.092,-0.038,-.100,-0.00,-0.092,0.038,-0.071,0.071,-0.038,0.092,0.00,.100,0.038,0.092,0.071,0.071,0.092,0.038,.100,0.00})).setSpine(getExtrusion_8_107_spine()))
              .setAppearance(new Appearance().setUSE("NewBlue")))
            .addChild(new Transform()
              .addChild(new TimeSensor("BlueWireClock").setCycleInterval(13).setLoop(true))
              .addChild(new PositionInterpolator("RedBallPath3").setKey(getRedBallPath3_8_111_key()).setKeyValue(getRedBallPath3_8_111_keyValue()))
              .addChild(new ROUTE().setFromNode("BlueWireClock").setFromField("fraction_changed").setToNode("RedBallPath3").setToField("set_fraction"))
              .addChild(new Transform("RedBallTransform3").setTranslation(0.00,0.00,1.33)
                .addChild(new Shape()
                  .setGeometry(new Sphere().setRadius(.5))
                  .setAppearance(new Appearance().setUSE("NewRed"))))
              .addChild(new ROUTE().setFromNode("RedBallPath3").setFromField("value_changed").setToNode("RedBallTransform3").setToField("set_translation"))
              .addChild(new PositionInterpolator("GreenBallPath3").setKey(getGreenBallPath3_8_118_key()).setKeyValue(getGreenBallPath3_8_118_keyValue()))
              .addChild(new ROUTE().setFromNode("BlueWireClock").setFromField("fraction_changed").setToNode("GreenBallPath3").setToField("set_fraction"))
              .addChild(new Transform("GreenBallTransform3").setTranslation(0.00,0.00,0.43)
                .addChild(new Shape()
                  .setGeometry(new Sphere().setRadius(.5))
                  .setAppearance(new Appearance().setUSE("NewGreen"))))
              .addChild(new ROUTE().setFromNode("GreenBallPath3").setFromField("value_changed").setToNode("GreenBallTransform3").setToField("set_translation"))
              .addChild(new PositionInterpolator("YellowBallPath3").setKey(getYellowBallPath3_8_125_key()).setKeyValue(getYellowBallPath3_8_125_keyValue()))
              .addChild(new ROUTE().setFromNode("BlueWireClock").setFromField("fraction_changed").setToNode("YellowBallPath3").setToField("set_fraction"))
              .addChild(new Transform("YellowBallTransform3").setTranslation(0.00,0.07,-0.47)
                .addChild(new Shape()
                  .setGeometry(new Sphere().setRadius(.5))
                  .setAppearance(new Appearance().setUSE("NewYellow"))))
              .addChild(new ROUTE().setFromNode("YellowBallPath3").setFromField("value_changed").setToNode("YellowBallTransform3").setToField("set_translation")))))
        .addChild(new TouchSensor("StartToySensor").setDescription("Starts Toy Motion"))
        .addChild(new ROUTE().setFromNode("StartToySensor").setFromField("touchTime").setToNode("BlueClock").setToField("set_startTime"))
        .addChild(new ROUTE().setFromNode("StartToySensor").setFromField("touchTime").setToNode("YellowClock").setToField("set_startTime"))
        .addChild(new ROUTE().setFromNode("StartToySensor").setFromField("touchTime").setToNode("BlueWireClock").setToField("set_startTime")))));
    }
	// end of initialize() method

		/** Define subarrays using type double[] */
		private double[] getBlueBallPath1a_10_34_key_1()
		{
			double[] value = {0.005,0.01,0.015,0.02,0.025,0.03,0.035,0.04,0.045,0.05,0.055,0.06,0.065,0.07,0.075,0.08,0.085,0.09,0.095,0.1,0.105,0.11,0.115,0.12,0.125,0.13,0.135,0.14,0.145,0.15,0.155,0.16,0.165,0.17,0.175,0.18,0.185,0.19,0.195,0.2,0.205,0.21,0.215,0.22,0.225,0.23,0.235,0.24,0.245,0.25,0.255,0.26,0.265,0.27,0.275,0.28,0.285,0.29,0.295,0.3,0.305,0.31,0.315,0.32,0.325,0.33,0.335,0.34,0.345,0.35,0.355,0.36,0.365,0.37,0.375,0.38,0.385,0.39,0.395,0.4,0.405,0.41,0.415,0.42,0.425,0.43,0.435,0.44,0.445,0.45,0.455,0.46,0.465,0.47,0.475,0.48,0.485,0.49,0.495,0.5,0.505,0.51,0.515,0.52,0.525,0.53,0.535,0.54,0.545,0.55,0.555,0.56,0.565,0.57,0.575,0.58,0.585,0.59,0.595,0.6,0.605,0.61,0.615,0.62,0.625,0.63,0.635,0.64,0.645,0.65,0.655,0.66,0.665,0.67,0.675,0.68,0.685,0.69,0.695,0.7,0.705,0.71,0.715,0.72,0.725,0.73,0.735,0.74,0.745,0.75,0.755,0.76,0.765,0.77,0.775,0.78,0.785,0.79,0.795,0.8,0.805,0.81,0.815,0.82,0.825,0.83,0.835,0.84,0.845,0.85,0.855,0.86,0.865,0.87,0.875,0.88,0.885,0.89,0.895,0.9,0.905,0.91,0.915,0.92,0.925,0.93,0.935,0.94,0.945,0.95,0.955,0.96,0.965,0.97,0.975,0.98,0.985,0.99,0.9951};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getBlueBallPath1a_10_34_keyValue_1()
		{
			double[] value = {2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.10,2.00,0.00,0.90,2.00,0.00,0.77,2.00,0.00,-0.00,1.85,0.12,-0.77,1.41,0.24,-1.41,0.77,0.36,-1.85,0.00,0.48,-2.00,-0.77,0.61,-1.85,-1.41,0.73,-1.41,-1.85,0.85,-0.77,-2.00,0.97,0.00,-1.85,1.09,0.77,-1.41,1.21,1.41,-0.77,1.33,1.85,0.00,1.45,2.00,0.77,1.58,1.85,1.41,1.70,1.41,1.85,1.82,0.77,2.00,1.94,0.00,1.85,2.06,-0.77,1.41,2.18,-1.41,0.77,2.30,-1.85,0.00,2.42,-2.00,-0.77,2.55,-1.85,-1.41,2.67,-1.41,-1.85,2.79,-0.77,-2.00,2.91,0.00,-1.85,3.03,0.77,-1.41,3.15,1.41,-0.77,3.27,1.85,0.00,3.39,2.00,0.77,3.52,1.85,1.41,3.64,1.41,1.85,3.76,0.77,2.00,3.88,0.00,1.85,4.00,-0.77,1.41,4.12,-1.41,0.77,4.24,-1.85};
			return value;
		}
		private double[] getBlueBallPath1a_10_34_keyValue_2()
		{
			double[] value = {0.00,4.36,-2.00,-0.77,4.49,-1.85,-1.41,4.61,-1.41,-1.85,4.73,-0.77,-2.00,4.85,-0.00,-1.85,4.97,0.77,-1.41,5.09,1.41,-0.77,5.21,1.85,0.00,5.34,2.00,0.77,5.46,1.85,1.41,5.58,1.41,1.85,5.70,0.77,2.00,5.82,0.00,1.85,5.94,-0.77,1.41,6.07,-1.41,0.77,6.19,-1.85,-0.00,6.31,-2.00,-0.80,6.50,-1.85,-0.80,6.50,-1.85,-0.80,6.50,-1.85,-0.80,6.50,-1.85,-0.80,6.50,-1.85,-0.80,6.50,-1.85,-0.80,6.50,-1.85,-0.80,6.50,-1.85,-0.80,6.50,-1.85,-0.80,6.50,-1.85,-0.80,6.50,-1.85,-0.80,6.50,-1.85,-0.80,6.50,-1.85,-0.80,6.50,-1.85,-0.80,6.50,-1.85,-0.80,6.50,-1.85,-0.80,6.50,-1.85,-0.80,6.50,-1.85,-0.80,6.50,-1.85,-0.00,6.31,-2.00,0.77,6.19,-1.85,1.41,6.07,-1.41,1.85,5.94,-0.77,2.00,5.82,0.00,1.85,5.70,0.77,1.41,5.58,1.41,0.77,5.46,1.85,0.00,5.34,2.00,-0.77,5.21,1.85,-1.41,5.09,1.41,-1.85,4.97,0.77,-2.00,4.85,-0.00,-1.85,4.73,-0.77,-1.41,4.61,-1.41,-0.77,4.49,-1.85,0.00,4.36,-2.00,0.77,4.24,-1.85,1.41,4.12,-1.41,1.85,4.00,-0.77,2.00,3.88,0.00,1.85,3.76,0.77,1.41,3.64,1.41,0.77,3.52,1.85,0.00,3.39,2.00,-0.77,3.27,1.85,-1.41,3.15,1.41,-1.85,3.03,0.77,-2.00,2.91,0.00,-1.85,2.79,-0.77,-1.41,2.67,-1.41,-0.77,2.55,-1.85,0.00,2.42,-2.00,0.77,2.30,-1.85,1.41,2.18,-1.41,1.85,2.06,-0.77,2.00,1.94,0.00,1.85,1.82,0.77,1.41,1.70,1.41,0.77,1.58,1.85,0.00,1.45,2.00,-0.77,1.33,1.85,-1.41,1.21,1.41,-1.85,1.09,0.77,-2.00,0.97,0.00,-1.85,0.85,-0.77,-1.41,0.73,-1.41,-0.77,0.61,-1.85,0.00,0.48,-2.00,0.77,0.36,-1.85,1.41,0.24,-1.41,1.85,0.12,-0.77,2.00,0.00,-0.00,2.00,0.00,0.77,2.00,0.00,1.05,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33,2.00,0.00,1.33};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getGreenBallPath1a_10_43_key_1()
		{
			double[] value = {0.005,0.01,0.015,0.02,0.025,0.03,0.035,0.04,0.045,0.05,0.055,0.06,0.065,0.07,0.075,0.08,0.085,0.09,0.095,0.1,0.105,0.11,0.115,0.12,0.125,0.13,0.135,0.14,0.145,0.15,0.155,0.16,0.165,0.17,0.175,0.18,0.185,0.19,0.195,0.2,0.205,0.21,0.215,0.22,0.225,0.23,0.235,0.24,0.245,0.25,0.255,0.26,0.265,0.27,0.275,0.28,0.285,0.29,0.295,0.3,0.305,0.31,0.315,0.32,0.325,0.33,0.335,0.34,0.345,0.35,0.355,0.36,0.365,0.37,0.375,0.38,0.385,0.39,0.395,0.4,0.405,0.41,0.415,0.42,0.425,0.43,0.435,0.44,0.445,0.45,0.455,0.46,0.465,0.47,0.475,0.48,0.485,0.49,0.495,0.5,0.505,0.51,0.515,0.52,0.525,0.53,0.535,0.54,0.545,0.55,0.555,0.56,0.565,0.57,0.575,0.58,0.585,0.59,0.595,0.6,0.605,0.61,0.615,0.62,0.625,0.63,0.635,0.64,0.645,0.65,0.655,0.66,0.665,0.67,0.675,0.68,0.685,0.69,0.695,0.7,0.705,0.71,0.715,0.72,0.725,0.73,0.735,0.74,0.745,0.75,0.755,0.76,0.765,0.77,0.775,0.78,0.785,0.79,0.795,0.8,0.805,0.81,0.815,0.82,0.825,0.83,0.835,0.84,0.845,0.85,0.855,0.86,0.865,0.87,0.875,0.88,0.885,0.89,0.895,0.9,0.905,0.91,0.915,0.92,0.925,0.93,0.935,0.94,0.945,0.95,0.955,0.96,0.965,0.97,0.975,0.98,0.985,0.99,0.9951};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getGreenBallPath1a_10_43_keyValue_1()
		{
			double[] value = {2.00,0.00,0.43,2.00,0.00,0.43,2.00,0.00,0.43,2.00,0.00,0.43,2.00,0.00,0.43,2.00,0.00,0.43,2.00,0.00,0.43,2.00,0.00,0.43,2.00,0.00,0.43,2.00,0.00,0.43,2.00,0.00,0.43,2.00,0.00,0.43,2.00,0.00,0.43,2.00,0.00,0.43,2.00,0.00,0.43,2.00,0.00,0.43,2.00,0.00,0.43,2.00,0.00,0.43,2.00,0.00,0.43,2.00,0.00,0.43,2.00,0.00,0.43,2.00,0.00,0.43,2.00,0.00,0.43,2.00,0.00,0.43,2.00,0.00,0.43,2.00,0.00,0.43,2.00,0.00,0.43,2.00,0.00,0.43,2.00,0.00,0.43,2.00,0.00,0.43,2.00,0.00,0.43,2.00,0.00,0.43,2.00,0.00,0.43,2.00,0.00,0.43,2.00,0.00,0.43,2.00,0.00,0.43,2.00,0.00,0.43,2.00,0.00,0.43,2.00,0.00,0.43,2.00,0.00,0.43,2.00,0.00,0.43,2.00,0.00,0.43,2.00,0.00,0.43,2.00,0.00,0.43,2.00,0.00,0.43,2.00,0.00,0.33,2.00,0.00,0.20,2.00,0.00,0.10,2.00,0.00,0.05,2.00,0.00,-0.00,1.85,0.12,-0.77,1.41,0.24,-1.41,0.77,0.36,-1.85,0.00,0.48,-2.00,-0.77,0.61,-1.85,-1.41,0.73,-1.41,-1.85,0.85,-0.77,-2.00,0.97,0.00,-1.85,1.09,0.77,-1.41,1.21,1.41,-0.77,1.33,1.85,0.00,1.45,2.00,0.77,1.58,1.85,1.41,1.70,1.41,1.85,1.82,0.77,2.00,1.94,0.00,1.85,2.06,-0.77,1.41,2.18,-1.41,0.77,2.30,-1.85,0.00,2.42,-2.00,-0.77,2.55,-1.85,-1.41,2.67,-1.41,-1.85,2.79,-0.77,-2.00,2.91,0.00,-1.85,3.03,0.77,-1.41,3.15,1.41,-0.77,3.27,1.85,0.00,3.39,2.00,0.77,3.52,1.85,1.41,3.64,1.41,1.85,3.76,0.77,2.00,3.88,0.00,1.85,4.00,-0.77,1.41,4.12,-1.41,0.77,4.24,-1.85,0.00,4.36,-2.00,-0.77,4.49,-1.85,-1.41,4.61,-1.41,-1.85,4.73,-0.77,-2.00,4.85,-0.00,-1.85,4.97,0.77,-1.41,5.09,1.41,-0.77,5.21,1.85,0.00,5.34,2.00,0.77,5.46,1.85,1.41,5.58,1.41,1.85,5.70,0.77,2.00,5.82,0.00,1.85,5.94,-0.77,1.41,6.07,-1.41};
			return value;
		}
		private double[] getGreenBallPath1a_10_43_keyValue_2()
		{
			double[] value = {0.77,6.19,-1.85,-0.00,6.31,-2.00,-0.77,6.43,-1.85,-1.41,6.55,-1.41,-1.50,6.62,-1.27,-1.50,6.62,-1.27,-1.50,6.62,-1.27,-1.50,6.62,-1.27,-1.50,6.62,-1.27,-1.50,6.62,-1.27,-1.50,6.62,-1.27,-1.50,6.62,-1.27,-1.50,6.62,-1.27,-1.50,6.62,-1.27,-1.50,6.62,-1.27,-1.50,6.62,-1.27,-1.50,6.62,-1.27,-1.50,6.62,-1.27,-1.50,6.62,-1.27,-1.50,6.62,-1.27,-1.50,6.62,-1.27,-1.50,6.62,-1.27,-1.50,6.62,-1.27,-1.50,6.62,-1.27,-1.50,6.62,-1.27,-1.50,6.62,-1.27,-1.50,6.62,-1.27,-1.50,6.62,-1.27,-1.50,6.62,-1.27,-1.50,6.62,-1.27,-1.50,6.62,-1.27,-1.50,6.62,-1.27,-1.50,6.62,-1.27,-1.50,6.62,-1.27,-1.50,6.62,-1.27,-1.50,6.62,-1.27,-1.41,6.55,-1.41,-0.77,6.43,-1.85,-0.00,6.31,-2.00,0.77,6.19,-1.85,1.41,6.07,-1.41,1.85,5.94,-0.77,2.00,5.82,0.00,1.85,5.70,0.77,1.41,5.58,1.41,0.77,5.46,1.85,0.00,5.34,2.00,-0.77,5.21,1.85,-1.41,5.09,1.41,-1.85,4.97,0.77,-2.00,4.85,-0.00,-1.85,4.73,-0.77,-1.41,4.61,-1.41,-0.77,4.49,-1.85,0.00,4.36,-2.00,0.77,4.24,-1.85,1.41,4.12,-1.41,1.85,4.00,-0.77,2.00,3.88,0.00,1.85,3.76,0.77,1.41,3.64,1.41,0.77,3.52,1.85,0.00,3.39,2.00,-0.77,3.27,1.85,-1.41,3.15,1.41,-1.85,3.03,0.77,-2.00,2.91,0.00,-1.85,2.79,-0.77,-1.41,2.67,-1.41,-0.77,2.55,-1.85,0.00,2.42,-2.00,0.77,2.30,-1.85,1.41,2.18,-1.41,1.85,2.06,-0.77,2.00,1.94,0.00,1.85,1.82,0.77,1.41,1.70,1.41,0.77,1.58,1.85,0.00,1.45,2.00,-0.77,1.33,1.85,-1.41,1.21,1.41,-1.85,1.09,0.77,-2.00,0.97,0.00,-1.85,0.85,-0.77,-1.41,0.73,-1.41,-0.77,0.61,-1.85,0.00,0.48,-2.00,0.77,0.36,-1.85,1.41,0.24,-1.41,1.85,0.12,-0.77,2.00,0.00,-0.00,2.00,0.00,0.20,2.00,0.00,0.33,2.00,0.00,0.43,2.00,0.00,0.43,2.00,0.00,0.43,2.00,0.00,0.43,2.00,0.00,0.43,2.00,0.00,0.43,2.00,0.00,0.43};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getYellowBallPath1_10_52_key_1()
		{
			double[] value = {0.005,0.01,0.015,0.02,0.025,0.03,0.035,0.04,0.045,0.05,0.055,0.06,0.065,0.07,0.075,0.08,0.085,0.09,0.095,0.1,0.105,0.11,0.115,0.12,0.125,0.13,0.135,0.14,0.145,0.15,0.155,0.16,0.165,0.17,0.175,0.18,0.185,0.19,0.195,0.2,0.205,0.21,0.215,0.22,0.225,0.23,0.235,0.24,0.245,0.25,0.255,0.26,0.265,0.27,0.275,0.28,0.285,0.29,0.295,0.3,0.305,0.31,0.315,0.32,0.325,0.33,0.335,0.34,0.345,0.35,0.355,0.36,0.365,0.37,0.375,0.38,0.385,0.39,0.395,0.4,0.405,0.41,0.415,0.42,0.425,0.43,0.435,0.44,0.445,0.45,0.455,0.46,0.465,0.47,0.475,0.48,0.485,0.49,0.495,0.5,0.505,0.51,0.515,0.52,0.525,0.53,0.535,0.54,0.545,0.55,0.555,0.56,0.565,0.57,0.575,0.58,0.585,0.59,0.595,0.6,0.605,0.61,0.615,0.62,0.625,0.63,0.635,0.64,0.645,0.65,0.655,0.66,0.665,0.67,0.675,0.68,0.685,0.69,0.695,0.7,0.705,0.71,0.715,0.72,0.725,0.73,0.735,0.74,0.745,0.75,0.755,0.76,0.765,0.77,0.775,0.78,0.785,0.79,0.795,0.8,0.805,0.81,0.815,0.82,0.825,0.83,0.835,0.84,0.845,0.85,0.855,0.86,0.865,0.87,0.875,0.88,0.885,0.89,0.895,0.9,0.905,0.91,0.915,0.92,0.925,0.93,0.935,0.94,0.945,0.95,0.955,0.96,0.965,0.97,0.975,0.98,0.985,0.99,0.9951};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getYellowBallPath1_10_52_keyValue_1()
		{
			double[] value = {1.93,0.14,-.47,1.93,0.14,-.47,1.93,0.14,-.47,1.93,0.14,-.47,1.93,0.14,-.47,1.93,0.14,-.47,1.93,0.14,-.47,1.93,0.14,-.47,1.93,0.14,-.47,1.93,0.14,-.47,1.93,0.14,-.47,1.93,0.14,-.47,1.93,0.14,-.47,1.93,0.14,-.47,1.93,0.14,-.47,1.93,0.14,-.47,1.93,0.14,-.47,1.93,0.14,-.47,1.93,0.14,-.47,1.93,0.14,-.47,1.93,0.14,-.47,1.93,0.14,-.47,1.93,0.14,-.47,1.93,0.14,-.47,1.93,0.14,-.47,1.93,0.14,-.47,1.93,0.14,-.47,1.93,0.14,-.47,1.93,0.14,-.47,1.93,0.14,-.47,1.93,0.14,-.47,1.93,0.18,-.57,1.93,0.18,-.67,1.93,0.18,-.77,1.93,0.18,-0.87,1.85,0.12,-1.07,1.41,0.24,-1.41,0.77,0.36,-1.85,0.00,0.48,-2.00,-0.77,0.61,-1.85,-1.41,0.73,-1.41,-1.85,0.85,-0.77,-2.00,0.97,0.00,-1.85,1.09,0.77,-1.41,1.21,1.41,-0.77,1.33,1.85,0.00,1.45,2.00,0.77,1.58,1.85,1.41,1.70,1.41,1.85,1.82,0.77,2.00,1.94,0.00,1.85,2.06,-0.77,1.41,2.18,-1.41,0.77,2.30,-1.85,0.00,2.42,-2.00,-0.77,2.55,-1.85,-1.41,2.67,-1.41,-1.85,2.79,-0.77,-2.00,2.91,0.00,-1.85,3.03,0.77,-1.41,3.15,1.41,-0.77,3.27,1.85,0.00,3.39,2.00,0.77,3.52,1.85,1.41,3.64,1.41,1.85,3.76,0.77,2.00,3.88,0.00,1.85,4.00,-0.77,1.41,4.12,-1.41,0.77,4.24,-1.85,0.00,4.36,-2.00,-0.77,4.49,-1.85,-1.41,4.61,-1.41,-1.85,4.73,-0.77,-2.00,4.85,-0.00,-1.85,4.97,0.77,-1.41,5.09,1.41,-0.77,5.21,1.85,0.00,5.34,2.00,0.77,5.46,1.85,1.41,5.58,1.41,1.85,5.70,0.77,2.00,5.82,0.00,1.85,5.94,-0.77,1.41,6.07,-1.41,0.77,6.19,-1.85,-0.00,6.31,-2.00,-0.77,6.43,-1.85,-1.41,6.55,-1.41,-1.85,6.62,-0.77,-1.93,6.67,-0.47,-1.93,6.67,-0.47,-1.93,6.67,-0.47,-1.93,6.67,-0.47,-1.93,6.67,-0.47,-1.93,6.67,-0.47,-1.93,6.67,-0.47,-1.93,6.67,-0.47,-1.93,6.67,-0.47,-1.93,6.67,-0.47};
			return value;
		}
		private double[] getYellowBallPath1_10_52_keyValue_2()
		{
			double[] value = {-1.93,6.67,-0.47,-1.93,6.67,-0.47,-1.93,6.67,-0.47,-1.93,6.67,-0.47,-1.93,6.67,-0.47,-1.93,6.67,-0.47,-1.93,6.67,-0.47,-1.93,6.67,-0.47,-1.93,6.67,-0.47,-1.93,6.67,-0.47,-1.93,6.67,-0.47,-1.93,6.67,-0.47,-1.93,6.67,-0.47,-1.93,6.67,-0.47,-1.93,6.67,-0.47,-1.93,6.67,-0.47,-1.93,6.67,-0.47,-1.93,6.67,-0.47,-1.93,6.67,-0.47,-1.93,6.67,-0.47,-1.93,6.67,-0.47,-1.93,6.67,-0.47,-1.93,6.67,-0.47,-1.93,6.67,-0.47,-1.93,6.67,-0.47,-1.93,6.67,-0.47,-1.93,6.67,-0.47,-1.93,6.67,-0.47,-1.93,6.67,-0.47,-1.93,6.67,-0.47,-1.93,6.67,-0.47,-1.93,6.67,-0.47,-1.93,6.67,-0.47,-1.93,6.67,-0.47,-1.93,6.67,-0.47,-1.93,6.67,-0.47,-1.85,6.62,-0.77,-1.41,6.55,-1.41,-0.77,6.43,-1.85,-0.00,6.31,-2.00,0.77,6.19,-1.85,1.41,6.07,-1.41,1.85,5.94,-0.77,2.00,5.82,0.00,1.85,5.70,0.77,1.41,5.58,1.41,0.77,5.46,1.85,0.00,5.34,2.00,-0.77,5.21,1.85,-1.41,5.09,1.41,-1.85,4.97,0.77,-2.00,4.85,-0.00,-1.85,4.73,-0.77,-1.41,4.61,-1.41,-0.77,4.49,-1.85,0.00,4.36,-2.00,0.77,4.24,-1.85,1.41,4.12,-1.41,1.85,4.00,-0.77,2.00,3.88,0.00,1.85,3.76,0.77,1.41,3.64,1.41,0.77,3.52,1.85,0.00,3.39,2.00,-0.77,3.27,1.85,-1.41,3.15,1.41,-1.85,3.03,0.77,-2.00,2.91,0.00,-1.85,2.79,-0.77,-1.41,2.67,-1.41,-0.77,2.55,-1.85,0.00,2.42,-2.00,0.77,2.30,-1.85,1.41,2.18,-1.41,1.85,2.06,-0.77,2.00,1.94,0.00,1.85,1.82,0.77,1.41,1.70,1.41,0.77,1.58,1.85,0.00,1.45,2.00,-0.77,1.33,1.85,-1.41,1.21,1.41,-1.85,1.09,0.77,-2.00,0.97,0.00,-1.85,0.85,-0.77,-1.41,0.73,-1.41,-0.77,0.61,-1.85,0.00,0.48,-2.00,0.77,0.36,-1.85,1.41,0.24,-1.41,1.85,0.18,-1.07,1.93,0.18,-0.87,1.93,0.18,-.67,1.93,0.18,-.57,1.93,0.14,-.47,1.93,0.14,-.47,1.93,0.14,-.47,1.93,0.14,-.47,1.93,0.14,-.47,1.93,0.14,-.47};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getBlueBallPath1b_10_61_key_1()
		{
			double[] value = {0.005,0.01,0.015,0.02,0.025,0.03,0.035,0.04,0.045,0.05,0.055,0.06,0.065,0.07,0.075,0.08,0.085,0.09,0.095,0.1,0.105,0.11,0.115,0.12,0.125,0.13,0.135,0.14,0.145,0.15,0.155,0.16,0.165,0.17,0.175,0.18,0.185,0.19,0.195,0.2,0.205,0.21,0.215,0.22,0.225,0.23,0.235,0.24,0.245,0.25,0.255,0.26,0.265,0.27,0.275,0.28,0.285,0.29,0.295,0.3,0.305,0.31,0.315,0.32,0.325,0.33,0.335,0.34,0.345,0.35,0.355,0.36,0.365,0.37,0.375,0.38,0.385,0.39,0.395,0.4,0.405,0.41,0.415,0.42,0.425,0.43,0.435,0.44,0.445,0.45,0.455,0.46,0.465,0.47,0.475,0.48,0.485,0.49,0.495,0.5,0.505,0.51,0.515,0.52,0.525,0.53,0.535,0.54,0.545,0.55,0.555,0.56,0.565,0.57,0.575,0.58,0.585,0.59,0.595,0.6,0.605,0.61,0.615,0.62,0.625,0.63,0.635,0.64,0.645,0.65,0.655,0.66,0.665,0.67,0.675,0.68,0.685,0.69,0.695,0.7,0.705,0.71,0.715,0.72,0.725,0.73,0.735,0.74,0.745,0.75,0.755,0.76,0.765,0.77,0.775,0.78,0.785,0.79,0.795,0.8,0.805,0.81,0.815,0.82,0.825,0.83,0.835,0.84,0.845,0.85,0.855,0.86,0.865,0.87,0.875,0.88,0.885,0.89,0.895,0.9,0.905,0.91,0.915,0.92,0.925,0.93,0.935,0.94,0.945,0.95,0.955,0.96,0.965,0.97,0.975,0.98,0.985,0.99,0.9951};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getBlueBallPath1b_10_61_keyValue_1()
		{
			double[] value = {1.50,0.18,-1.27,1.50,0.18,-1.27,1.50,0.18,-1.27,1.50,0.18,-1.27,1.50,0.18,-1.27,1.50,0.18,-1.27,1.50,0.18,-1.27,1.50,0.18,-1.27,1.50,0.18,-1.27,1.50,0.18,-1.27,1.50,0.18,-1.27,1.50,0.18,-1.27,1.50,0.18,-1.27,1.50,0.18,-1.27,1.50,0.18,-1.27,1.50,0.18,-1.27,1.50,0.18,-1.27,1.50,0.18,-1.27,1.50,0.18,-1.27,1.50,0.18,-1.37,1.50,0.18,-1.37,1.41,0.24,-1.78,0.77,0.36,-1.85,0.00,0.48,-2.00,-0.77,0.61,-1.85,-1.41,0.73,-1.41,-1.85,0.85,-0.77,-2.00,0.97,0.00,-1.85,1.09,0.77,-1.41,1.21,1.41,-0.77,1.33,1.85,0.00,1.45,2.00,0.77,1.58,1.85,1.41,1.70,1.41,1.85,1.82,0.77,2.00,1.94,0.00,1.85,2.06,-0.77,1.41,2.18,-1.41,0.77,2.30,-1.85,0.00,2.42,-2.00,-0.77,2.55,-1.85,-1.41,2.67,-1.41,-1.85,2.79,-0.77,-2.00,2.91,0.00,-1.85,3.03,0.77,-1.41,3.15,1.41,-0.77,3.27,1.85,0.00,3.39,2.00,0.77,3.52,1.85,1.41,3.64,1.41,1.85,3.76,0.77,2.00,3.88,0.00,1.85,4.00,-0.77,1.41,4.12,-1.41,0.77,4.24,-1.85,0.00,4.36,-2.00,-0.77,4.49,-1.85,-1.41,4.61,-1.41,-1.85,4.73,-0.77,-2.00,4.85,-0.00,-1.85,4.97,0.77,-1.41,5.09,1.41,-0.77,5.21,1.85,0.00,5.34,2.00,0.77,5.46,1.85,1.41,5.58,1.41,1.85,5.70,0.77,2.00,5.82,0.00,1.85,5.94,-0.77,1.41,6.07,-1.41,0.77,6.19,-1.85,-0.00,6.31,-2.00,-0.77,6.43,-1.85,-1.41,6.55,-1.41,-1.85,6.68,-0.77,-2.00,6.80,-0.00,-2.00,6.80,0.27,-2.00,6.80,0.43,-2.00,6.80,0.43,-2.00,6.80,0.43,-2.00,6.80,0.43,-2.00,6.80,0.43,-2.00,6.80,0.43,-2.00,6.80,0.43,-2.00,6.80,0.43,-2.00,6.80,0.43,-2.00,6.80,0.43,-2.00,6.80,0.43,-2.00,6.80,0.43,-2.00,6.80,0.43,-2.00,6.80,0.43,-2.00,6.80,0.43,-2.00,6.80,0.43,-2.00,6.80,0.43,-2.00,6.80,0.43,-2.00,6.80,0.43,-2.00,6.80,0.43,-2.00,6.80,0.43,-2.00,6.80,0.43,-2.00,6.80,0.43};
			return value;
		}
		private double[] getBlueBallPath1b_10_61_keyValue_2()
		{
			double[] value = {-2.00,6.80,0.43,-2.00,6.80,0.43,-2.00,6.80,0.43,-2.00,6.80,0.43,-2.00,6.80,0.43,-2.00,6.80,0.43,-2.00,6.80,0.43,-2.00,6.80,0.43,-2.00,6.80,0.43,-2.00,6.80,0.43,-2.00,6.80,0.43,-2.00,6.80,0.43,-2.00,6.80,0.43,-2.00,6.80,0.43,-2.00,6.80,0.43,-2.00,6.80,0.43,-2.00,6.80,0.43,-2.00,6.80,0.43,-2.00,6.80,0.43,-2.00,6.80,0.43,-2.00,6.80,0.43,-2.00,6.80,0.43,-2.00,6.80,0.43,-2.00,6.80,0.43,-2.00,6.80,0.43,-2.00,6.80,0.43,-2.00,6.80,0.43,-2.00,6.80,0.43,-2.00,6.80,0.43,-2.00,6.80,0.43,-2.00,6.80,0.43,-2.00,6.80,0.43,-2.00,6.80,0.43,-2.00,6.80,0.43,-2.00,6.80,0.43,-2.00,6.80,0.43,-2.00,6.80,0.43,-2.00,6.80,0.43,-2.00,6.80,0.43,-2.00,6.80,0.27,-2.00,6.80,-0.00,-1.85,6.68,-0.77,-1.41,6.55,-1.41,-0.77,6.43,-1.85,-0.00,6.31,-2.00,0.77,6.19,-1.85,1.41,6.07,-1.41,1.85,5.94,-0.77,2.00,5.82,0.00,1.85,5.70,0.77,1.41,5.58,1.41,0.77,5.46,1.85,0.00,5.34,2.00,-0.77,5.21,1.85,-1.41,5.09,1.41,-1.85,4.97,0.77,-2.00,4.85,-0.00,-1.85,4.73,-0.77,-1.41,4.61,-1.41,-0.77,4.49,-1.85,0.00,4.36,-2.00,0.77,4.24,-1.85,1.41,4.12,-1.41,1.85,4.00,-0.77,2.00,3.88,0.00,1.85,3.76,0.77,1.41,3.64,1.41,0.77,3.52,1.85,0.00,3.39,2.00,-0.77,3.27,1.85,-1.41,3.15,1.41,-1.85,3.03,0.77,-2.00,2.91,0.00,-1.85,2.79,-0.77,-1.41,2.67,-1.41,-0.77,2.55,-1.85,0.00,2.42,-2.00,0.77,2.30,-1.85,1.41,2.18,-1.41,1.85,2.06,-0.77,2.00,1.94,0.00,1.85,1.82,0.77,1.41,1.70,1.41,0.77,1.58,1.85,0.00,1.45,2.00,-0.77,1.33,1.85,-1.41,1.21,1.41,-1.85,1.09,0.77,-2.00,0.97,0.00,-1.85,0.85,-0.77,-1.41,0.73,-1.41,-0.77,0.61,-1.85,0.00,0.48,-2.00,0.77,0.36,-1.85,1.41,0.24,-1.74,1.50,0.18,-1.27,1.50,0.18,-1.27,1.50,0.18,-1.27,1.50,0.18,-1.27,1.50,0.18,-1.27};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getGreenBallPath1b_10_69_key_1()
		{
			double[] value = {0.005,0.01,0.015,0.02,0.025,0.03,0.035,0.04,0.045,0.05,0.055,0.06,0.065,0.07,0.075,0.08,0.085,0.09,0.095,0.1,0.105,0.11,0.115,0.12,0.125,0.13,0.135,0.14,0.145,0.15,0.155,0.16,0.165,0.17,0.175,0.18,0.185,0.19,0.195,0.2,0.205,0.21,0.215,0.22,0.225,0.23,0.235,0.24,0.245,0.25,0.255,0.26,0.265,0.27,0.275,0.28,0.285,0.29,0.295,0.3,0.305,0.31,0.315,0.32,0.325,0.33,0.335,0.34,0.345,0.35,0.355,0.36,0.365,0.37,0.375,0.38,0.385,0.39,0.395,0.4,0.405,0.41,0.415,0.42,0.425,0.43,0.435,0.44,0.445,0.45,0.455,0.46,0.465,0.47,0.475,0.48,0.485,0.49,0.495,0.5,0.505,0.51,0.515,0.52,0.525,0.53,0.535,0.54,0.545,0.55,0.555,0.56,0.565,0.57,0.575,0.58,0.585,0.59,0.595,0.6,0.605,0.61,0.615,0.62,0.625,0.63,0.635,0.64,0.645,0.65,0.655,0.66,0.665,0.67,0.675,0.68,0.685,0.69,0.695,0.7,0.705,0.71,0.715,0.72,0.725,0.73,0.735,0.74,0.745,0.75,0.755,0.76,0.765,0.77,0.775,0.78,0.785,0.79,0.795,0.8,0.805,0.81,0.815,0.82,0.825,0.83,0.835,0.84,0.845,0.85,0.855,0.86,0.865,0.87,0.875,0.88,0.885,0.89,0.895,0.9,0.905,0.91,0.915,0.92,0.925,0.93,0.935,0.94,0.945,0.95,0.955,0.96,0.965,0.97,0.975,0.98,0.985,0.99,0.9951};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getGreenBallPath1b_10_69_keyValue_1()
		{
			double[] value = {0.77,0.36,-1.85,0.00,0.48,-2.00,-0.77,0.61,-1.85,-1.41,0.73,-1.41,-1.85,0.85,-0.77,-2.00,0.97,0.00,-1.85,1.09,0.77,-1.41,1.21,1.41,-0.77,1.33,1.85,0.00,1.45,2.00,0.77,1.58,1.85,1.41,1.70,1.41,1.85,1.82,0.77,2.00,1.94,0.00,1.85,2.06,-0.77,1.41,2.18,-1.41,0.77,2.30,-1.85,0.00,2.42,-2.00,-0.77,2.55,-1.85,-1.41,2.67,-1.41,-1.85,2.79,-0.77,-2.00,2.91,0.00,-1.85,3.03,0.77,-1.41,3.15,1.41,-0.77,3.27,1.85,0.00,3.39,2.00,0.77,3.52,1.85,1.41,3.64,1.41,1.85,3.76,0.77,2.00,3.88,0.00,1.85,4.00,-0.77,1.41,4.12,-1.41,0.77,4.24,-1.85,0.00,4.36,-2.00,-0.77,4.49,-1.85,-1.41,4.61,-1.41,-1.85,4.73,-0.77,-2.00,4.85,-0.00,-1.85,4.97,0.77,-1.41,5.09,1.41,-0.77,5.21,1.85,0.00,5.34,2.00,0.77,5.46,1.85,1.41,5.58,1.41,1.85,5.70,0.77,2.00,5.82,0.00,1.85,5.94,-0.77,1.41,6.07,-1.41,0.77,6.19,-1.85,-0.00,6.31,-2.00,-0.77,6.43,-1.85,-1.41,6.55,-1.41,-1.85,6.68,-0.77,-2.00,6.80,-0.00,-2.00,6.80,0.77,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33};
			return value;
		}
		private double[] getGreenBallPath1b_10_69_keyValue_2()
		{
			double[] value = {-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,1.33,-2.00,6.80,0.77,-2.00,6.80,-0.00,-1.85,6.68,-0.77,-1.41,6.55,-1.41,-0.77,6.43,-1.85,-0.00,6.31,-2.00,0.77,6.19,-1.85,1.41,6.07,-1.41,1.85,5.94,-0.77,2.00,5.82,0.00,1.85,5.70,0.77,1.41,5.58,1.41,0.77,5.46,1.85,0.00,5.34,2.00,-0.77,5.21,1.85,-1.41,5.09,1.41,-1.85,4.97,0.77,-2.00,4.85,-0.00,-1.85,4.73,-0.77,-1.41,4.61,-1.41,-0.77,4.49,-1.85,0.00,4.36,-2.00,0.77,4.24,-1.85,1.41,4.12,-1.41,1.85,4.00,-0.77,2.00,3.88,0.00,1.85,3.76,0.77,1.41,3.64,1.41,0.77,3.52,1.85,0.00,3.39,2.00,-0.77,3.27,1.85,-1.41,3.15,1.41,-1.85,3.03,0.77,-2.00,2.91,0.00,-1.85,2.79,-0.77,-1.41,2.67,-1.41,-0.77,2.55,-1.85,0.00,2.42,-2.00,0.77,2.30,-1.85,1.41,2.18,-1.41,1.85,2.06,-0.77,2.00,1.94,0.00,1.85,1.82,0.77,1.41,1.70,1.41,0.77,1.58,1.85,0.00,1.45,2.00,-0.77,1.33,1.85,-1.41,1.21,1.41,-1.85,1.09,0.77,-2.00,0.97,0.00,-1.85,0.85,-0.77,-1.41,0.73,-1.41,-0.77,0.61,-1.85,0.00,0.48,-2.00,0.77,0.36,-1.85,0.77,0.36,-1.85,0.77,0.36,-1.85,0.77,0.36,-1.85,0.77,0.36,-1.85};
			return value;
		}



		/** Define subarrays using type double[] */
		private double[] getYellowBallPath2_8_85_key_1()
		{
			double[] value = {0.005,0.01,0.015,0.02,0.025,0.03,0.035,0.04,0.045,0.05,0.055,0.06,0.065,0.07,0.075,0.08,0.085,0.09,0.095,0.1,0.105,0.11,0.115,0.12,0.125,0.13,0.135,0.14,0.145,0.15,0.155,0.16,0.165,0.17,0.175,0.18,0.185,0.19,0.195,0.2,0.205,0.21,0.215,0.22,0.225,0.23,0.235,0.24,0.245,0.25,0.255,0.26,0.265,0.27,0.275,0.28,0.285,0.29,0.295,0.3,0.305,0.31,0.315,0.32,0.325,0.33,0.335,0.34,0.345,0.35,0.355,0.36,0.365,0.37,0.375,0.38,0.385,0.39,0.395,0.4,0.405,0.41,0.415,0.42,0.425,0.43,0.435,0.44,0.445,0.45,0.455,0.46,0.465,0.47,0.475,0.48,0.485,0.49,0.495,0.5,0.505,0.51,0.515,0.52,0.525,0.53,0.535,0.54,0.545,0.55,0.555,0.56,0.565,0.57,0.575,0.58,0.585,0.59,0.595,0.6,0.605,0.61,0.615,0.62,0.625,0.63,0.635,0.64,0.645,0.65,0.655,0.66,0.665,0.67,0.675,0.68,0.685,0.69,0.695,0.7,0.705,0.71,0.715,0.72,0.725,0.73,0.735,0.74,0.745,0.75,0.755,0.76,0.765,0.77,0.775,0.78,0.785,0.79,0.795,0.8,0.805,0.81,0.815,0.82,0.825,0.83,0.835,0.84,0.845,0.85,0.855,0.86,0.865,0.87,0.875,0.88,0.885,0.89,0.895,0.9,0.905,0.91,0.915,0.92,0.925,0.93,0.935,0.94,0.945,0.95,0.955,0.96,0.965,0.97,0.975,0.98,0.985,0.99,0.995,1.0};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getYellowBallPath2_8_85_keyValue_1()
		{
			double[] value = {0.00,0.00,0.47,0.00,0.00,0.10,0.00,0.10,-0.17,0.00,0.20,-0.43,0.00,0.30,-0.60,0.00,0.40,-0.75,0.00,0.50,-0.89,0.00,0.60,-0.98,0.00,0.70,-1.06,0.00,0.80,-1.12,0.00,0.90,-1.17,0.00,1.00,-1.21,0.00,1.10,-1.25,0.00,1.20,-1.29,0.00,1.30,-1.32,0.00,1.40,-1.35,0.00,1.50,-1.37,0.00,1.60,-1.39,0.00,1.70,-1.40,0.00,1.75,-1.40,0.00,1.80,-1.38,0.00,1.90,-1.35,0.00,2.00,-1.31,0.00,2.10,-1.26,0.00,2.20,-1.19,0.00,2.30,-1.05,0.00,2.40,-0.80,0.00,2.50,-0.52,0.00,2.60,-0.20,0.00,2.70,0.18,0.00,2.80,0.48,0.00,2.90,0.68,0.00,3.00,0.82,0.00,3.10,0.90,0.00,3.20,0.95,0.00,3.30,0.98,0.00,3.40,1.00,0.00,3.50,0.99,0.00,3.60,0.98,0.00,3.70,0.95,0.00,3.80,0.90,0.00,3.90,0.82,0.00,4.00,0.68,0.00,4.05,0.58,0.00,4.08,0.53,0.00,4.05,0.58,0.00,4.00,0.68,0.00,3.90,0.82,0.00,3.80,0.90,0.00,3.70,0.95,0.00,3.60,0.98,0.00,3.50,0.99,0.00,3.40,1.00,0.00,3.30,0.98,0.00,3.20,0.95,0.00,3.10,0.90,0.00,3.00,0.82,0.00,2.90,0.68,0.00,2.84,0.58,0.00,2.87,0.52,0.00,2.80,0.48,0.00,2.90,0.68,0.00,3.00,0.82,0.00,3.10,0.90,0.00,3.20,0.95,0.00,3.30,0.98,0.00,3.40,1.00,0.00,3.50,0.99,0.00,3.60,0.98,0.00,3.70,0.95,0.00,3.80,0.90,0.00,3.90,0.82,0.00,4.00,0.68,0.00,4.10,0.48,0.00,4.20,0.18,0.00,4.30,-0.20,0.00,4.40,-0.52,0.00,4.50,-0.80,0.00,4.60,-1.05,0.00,4.70,-1.19,0.00,4.80,-1.26,0.00,4.90,-1.31,0.00,5.00,-1.35,0.00,5.10,-1.38,0.00,5.15,-1.40,0.00,5.20,-1.40,0.00,5.30,-1.39,0.00,5.40,-1.37,0.00,5.50,-1.35,0.00,5.60,-1.32,0.00,5.70,-1.29,0.00,5.80,-1.25,0.00,5.90,-1.21,0.00,6.00,-1.17,0.00,6.10,-1.12,0.00,6.20,-1.06,0.00,6.30,-0.98,0.00,6.40,-0.89,0.00,6.50,-0.75,0.00,6.60,-0.62};
			return value;
		}
		private double[] getYellowBallPath2_8_85_keyValue_2()
		{
			double[] value = {0.00,6.63,-0.55,0.00,6.65,-0.47,0.00,6.65,-0.47,0.00,6.65,-0.47,0.00,6.65,-0.47,0.00,6.65,-0.47,0.00,6.65,-0.47,0.00,6.65,-0.47,0.00,6.65,-0.47,0.00,6.65,-0.47,0.00,6.65,-0.47,0.00,6.65,-0.47,0.00,6.65,-0.47,0.00,6.65,-0.47,0.00,6.65,-0.47,0.00,6.63,-0.55,0.00,6.60,-0.62,0.00,6.50,-0.75,0.00,6.40,-0.89,0.00,6.30,-0.98,0.00,6.20,-1.06,0.00,6.10,-1.12,0.00,6.00,-1.17,0.00,5.90,-1.21,0.00,5.80,-1.25,0.00,5.70,-1.29,0.00,5.60,-1.32,0.00,5.50,-1.35,0.00,5.40,-1.37,0.00,5.30,-1.39,0.00,5.20,-1.40,0.00,5.15,-1.40,0.00,5.10,-1.38,0.00,5.00,-1.35,0.00,4.90,-1.31,0.00,4.80,-1.26,0.00,4.70,-1.19,0.00,4.60,-1.05,0.00,4.50,-0.80,0.00,4.40,-0.52,0.00,4.30,-0.20,0.00,4.20,0.18,0.00,4.10,0.48,0.00,4.00,0.68,0.00,3.90,0.82,0.00,3.80,0.90,0.00,3.70,0.95,0.00,3.60,0.98,0.00,3.50,0.99,0.00,3.40,1.00,0.00,3.30,0.98,0.00,3.20,0.95,0.00,3.10,0.90,0.00,3.00,0.82,0.00,2.90,0.68,0.00,2.80,0.48,0.00,2.70,0.18,0.00,2.60,-0.20,0.00,2.50,-0.52,0.00,2.40,-0.80,0.00,2.30,-1.05,0.00,2.20,-1.19,0.00,2.10,-1.26,0.00,2.00,-1.31,0.00,1.90,-1.35,0.00,1.80,-1.38,0.00,1.75,-1.40,0.00,1.70,-1.40,0.00,1.60,-1.39,0.00,1.50,-1.37,0.00,1.40,-1.35,0.00,1.30,-1.32,0.00,1.20,-1.29,0.00,1.10,-1.25,0.00,1.00,-1.21,0.00,0.90,-1.17,0.00,0.80,-1.12,0.00,0.70,-1.06,0.00,0.60,-0.98,0.00,0.50,-0.89,0.00,0.40,-0.75,0.00,0.30,-0.60,0.00,0.20,-0.43,0.00,0.10,-0.17,0.00,0.00,0.10,0.00,0.00,0.47,0.00,0.00,0.47,0.00,0.00,0.47,0.00,0.00,0.47,0.00,0.00,0.47,0.00,0.00,0.47,0.00,0.00,0.47,0.00,0.00,0.47,0.00,0.00,0.47,0.00,0.00,0.47,0.00,0.00,0.47,0.00,0.00,0.47,0.00,0.00,0.47,0.00,0.00,0.47,0.00,0.00,0.47};
			return value;
		}



		/** Define subarrays using type double[] */
		private double[] getRedBallPath3_8_111_key_1()
		{
			double[] value = {0.003,0.006,0.009,0.012,0.015,0.018,0.021,0.024,0.027,0.03,0.033,0.036,0.039,0.042,0.045,0.048,0.051,0.054,0.057,0.06,0.063,0.066,0.069,0.072,0.075,0.078,0.081,0.084,0.087,0.09,0.093,0.096,0.099,0.102,0.105,0.108,0.111,0.114,0.117,0.12,0.123,0.126,0.129,0.132,0.135,0.138,0.141,0.144,0.147,0.15,0.153,0.156,0.159,0.162,0.165,0.168,0.171,0.174,0.177,0.18,0.183,0.186,0.189,0.192,0.195,0.198,0.201,0.204,0.207,0.21,0.213,0.216,0.219,0.222,0.225,0.228,0.231,0.234,0.237,0.24,0.243,0.246,0.249,0.252,0.255,0.258,0.261,0.264,0.267,0.27,0.273,0.276,0.279,0.282,0.285,0.288,0.291,0.294,0.297,0.3,0.303,0.306,0.309,0.312,0.315,0.318,0.321,0.324,0.327,0.33,0.333,0.336,0.339,0.342,0.345,0.348,0.351,0.354,0.357,0.36,0.363,0.366,0.369,0.372,0.375,0.378,0.381,0.384,0.387,0.39,0.393,0.396,0.399,0.402,0.405,0.408,0.411,0.414,0.417,0.42,0.423,0.426,0.429,0.432,0.435,0.438,0.441,0.444,0.447,0.45,0.453,0.456,0.459,0.462,0.465,0.468,0.471,0.474,0.477,0.48,0.483,0.486,0.489,0.492,0.495,0.498,0.501,0.504,0.507,0.51,0.513,0.516,0.519,0.522,0.525,0.528,0.531,0.534,0.537,0.54,0.543,0.546,0.549,0.552,0.555,0.558,0.561,0.564,0.567,0.57,0.573,0.576,0.579,0.582,0.585,0.588,0.591,0.594,0.597,0.6,0.603,0.606,0.609,0.612,0.615,0.618,0.621,0.624,0.627,0.63,0.633,0.636,0.639,0.642,0.645,0.648,0.651,0.654,0.657,0.66,0.663,0.667,0.67,0.673,0.676,0.679,0.682,0.685,0.688,0.691,0.694,0.697,0.7,0.703,0.706,0.709,0.712,0.715,0.718,0.721,0.724,0.727,0.73,0.733,0.736,0.739,0.742,0.745,0.748,0.751,0.754,0.757,0.76,0.763,0.766,0.769,0.772,0.775,0.778,0.781,0.784,0.787,0.79,0.793,0.796,0.799,0.802,0.805,0.808,0.811,0.814,0.817,0.82,0.823,0.826,0.829,0.832,0.835,0.838,0.841,0.844,0.847,0.85,0.853,0.856,0.859,0.862,0.865,0.868,0.871,0.874,0.877,0.88,0.883,0.886,0.889,0.892,0.895,0.898,0.901,0.904,0.907,0.91,0.913,0.916,0.919,0.922,0.925,0.928,0.931,0.934,0.937,0.94,0.943,0.946,0.949,0.952,0.955,0.958,0.961,0.964,0.967,0.97,0.973,0.976,0.979,0.982,0.985,0.988,0.991,0.994,0.9971};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getRedBallPath3_8_111_keyValue_1()
		{
			double[] value = {0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33};
			return value;
		}
		private double[] getRedBallPath3_8_111_keyValue_2()
		{
			double[] value = {0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,-0.00,0.00,0.10,-0.40,0.00,0.20,-0.70,0.00,0.30,-0.95,0.00,0.40,-1.15,0.00,0.50,-1.35,0.00,0.60,-1.45,0.00,0.70,-1.53,0.00,0.80,-1.63,0.00,0.90,-1.71,0.00,1.00,-1.79,0.00,1.10,-1.87,0.00,1.20,-1.94,0.00,1.30,-2.00,0.00,1.40,-2.04,0.00,1.50,-2.07,0.00,1.60,-2.09,0.00,1.70,-2.10,0.00,1.75,-2.10,0.00,1.80,-2.09,0.00,1.90,-2.06,0.00,2.00,-2.00,0.00,2.10,-1.92,0.00,2.20,-1.81,0.00,2.30,-1.65,0.00,2.40,-1.30,0.00,2.50,-0.85,0.00,2.60,-0.40,0.00,2.70,0.10,0.00,2.80,0.50,0.00,2.90,0.73,0.00,3.00,0.87,0.00,3.10,0.97,0.00,3.20,1.03,0.00,3.30,1.06,0.00,3.40,1.08,0.00,3.50,1.06,0.00,3.60,1.02,0.00,3.70,0.95,0.00,3.80,0.85,0.00,3.90,0.70,0.00,4.00,0.50,0.00,4.10,0.15,0.00,4.20,-0.35,0.00,4.30,-0.80,0.00,4.40,-1.15,0.00,4.50,-1.70,0.00,4.60,-2.05,0.00,4.70,-2.25,0.00,4.80,-2.40,0.00,4.90,-2.50,0.00,5.00,-2.56,0.00,5.10,-2.58,0.00,5.20,-2.56,0.00,5.30,-2.53,0.00,5.40,-2.49,0.00,5.50,-2.44,0.00,5.60,-2.38,0.00,5.70,-2.30,0.00,5.80,-2.18,0.00,5.90,-2.02,0.00,6.00,-1.82,0.00,6.20,-1.54,0.00,6.30,-1.18,0.00,6.40,-0.78,0.00,6.43,-0.70,0.00,6.47,-0.60,0.00,6.50,-0.54,0.00,6.53,-0.50,0.00,6.55,-0.47,0.00,6.55,-0.47,0.00,6.55,-0.47,0.00,6.55,-0.47,0.00,6.55,-0.47,0.00,6.55,-0.47,0.00,6.55,-0.47,0.00,6.53,-0.50,0.00,6.51,-0.54,0.00,6.47,-0.60,0.00,6.44,-0.70,0.00,6.40,-0.78,0.00,6.30,-1.18,0.00,6.20,-1.54};
			return value;
		}
		private double[] getRedBallPath3_8_111_keyValue_3()
		{
			double[] value = {0.00,6.00,-1.82,0.00,5.90,-2.02,0.00,5.80,-2.18,0.00,5.70,-2.30,0.00,5.60,-2.38,0.00,5.50,-2.44,0.00,5.40,-2.49,0.00,5.30,-2.53,0.00,5.20,-2.56,0.00,5.10,-2.58,0.00,5.10,-2.58,0.00,5.10,-2.58,0.00,5.10,-2.58,0.00,5.10,-2.58,0.00,5.10,-2.58,0.00,5.10,-2.58,0.00,5.10,-2.58,0.00,5.10,-2.58,0.00,5.10,-2.58,0.00,5.10,-2.58,0.00,5.10,-2.58,0.00,5.10,-2.58,0.00,5.10,-2.58,0.00,5.10,-2.58,0.00,5.10,-2.58,0.00,5.00,-2.56,0.00,4.90,-2.50,0.00,4.80,-2.40,0.00,4.70,-2.25,0.00,4.60,-2.05,0.00,4.50,-1.70,0.00,4.40,-1.15,0.00,4.30,-0.80,0.00,4.20,-0.35,0.00,4.10,0.15,0.00,4.00,0.50,0.00,3.90,0.70,0.00,3.80,0.85,0.00,3.70,0.95,0.00,3.60,1.02,0.00,3.50,1.06,0.00,3.40,1.08,0.00,3.30,1.06,0.00,3.20,1.03,0.00,3.10,0.97,0.00,3.00,0.87,0.00,2.90,0.73,0.00,2.80,0.50,0.00,2.70,0.10,0.00,2.60,-0.40,0.00,2.50,-0.85,0.00,2.40,-1.30,0.00,2.30,-1.65,0.00,2.20,-1.81,0.00,2.10,-1.92,0.00,2.00,-2.00,0.00,1.90,-2.06,0.00,1.80,-2.09,0.00,1.75,-2.10,0.00,1.70,-2.10,0.00,1.60,-2.09,0.00,1.50,-2.07,0.00,1.40,-2.04,0.00,1.30,-2.00,0.00,1.20,-1.94,0.00,1.10,-1.87,0.00,1.00,-1.79,0.00,0.90,-1.71,0.00,0.80,-1.63,0.00,0.70,-1.53,0.00,0.60,-1.45,0.00,0.50,-1.35,0.00,0.40,-1.15,0.00,0.30,-0.95,0.00,0.20,-0.70,0.00,0.10,-0.40,0.00,0.00,-0.00,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33};
			return value;
		}
		private double[] getRedBallPath3_8_111_keyValue_4()
		{
			double[] value = {0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33,0.00,0.00,1.33};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getGreenBallPath3_8_118_key_1()
		{
			double[] value = {0.003,0.006,0.009,0.012,0.015,0.018,0.021,0.024,0.027,0.03,0.033,0.036,0.039,0.042,0.045,0.048,0.051,0.054,0.057,0.06,0.063,0.066,0.069,0.072,0.075,0.078,0.081,0.084,0.087,0.09,0.093,0.096,0.099,0.102,0.105,0.108,0.111,0.114,0.117,0.12,0.123,0.126,0.129,0.132,0.135,0.138,0.141,0.144,0.147,0.15,0.153,0.156,0.159,0.162,0.165,0.168,0.171,0.174,0.177,0.18,0.183,0.186,0.189,0.192,0.195,0.198,0.201,0.204,0.207,0.21,0.213,0.216,0.219,0.222,0.225,0.228,0.231,0.234,0.237,0.24,0.243,0.246,0.249,0.252,0.255,0.258,0.261,0.264,0.267,0.27,0.273,0.276,0.279,0.282,0.285,0.288,0.291,0.294,0.297,0.3,0.303,0.306,0.309,0.312,0.315,0.318,0.321,0.324,0.327,0.33,0.333,0.336,0.339,0.342,0.345,0.348,0.351,0.354,0.357,0.36,0.363,0.366,0.369,0.372,0.375,0.378,0.381,0.384,0.387,0.39,0.393,0.396,0.399,0.402,0.405,0.408,0.411,0.414,0.417,0.42,0.423,0.426,0.429,0.432,0.435,0.438,0.441,0.444,0.447,0.45,0.453,0.456,0.459,0.462,0.465,0.468,0.471,0.474,0.477,0.48,0.483,0.486,0.489,0.492,0.495,0.498,0.501,0.504,0.507,0.51,0.513,0.516,0.519,0.522,0.525,0.528,0.531,0.534,0.537,0.54,0.543,0.546,0.549,0.552,0.555,0.558,0.561,0.564,0.567,0.57,0.573,0.576,0.579,0.582,0.585,0.588,0.591,0.594,0.597,0.6,0.603,0.606,0.609,0.612,0.615,0.618,0.621,0.624,0.627,0.63,0.633,0.636,0.639,0.642,0.645,0.648,0.651,0.654,0.657,0.66,0.663,0.667,0.67,0.673,0.676,0.679,0.682,0.685,0.688,0.691,0.694,0.697,0.7,0.703,0.706,0.709,0.712,0.715,0.718,0.721,0.724,0.727,0.73,0.733,0.736,0.739,0.742,0.745,0.748,0.751,0.754,0.757,0.76,0.763,0.766,0.769,0.772,0.775,0.778,0.781,0.784,0.787,0.79,0.793,0.796,0.799,0.802,0.805,0.808,0.811,0.814,0.817,0.82,0.823,0.826,0.829,0.832,0.835,0.838,0.841,0.844,0.847,0.85,0.853,0.856,0.859,0.862,0.865,0.868,0.871,0.874,0.877,0.88,0.883,0.886,0.889,0.892,0.895,0.898,0.901,0.904,0.907,0.91,0.913,0.916,0.919,0.922,0.925,0.928,0.931,0.934,0.937,0.94,0.943,0.946,0.949,0.952,0.955,0.958,0.961,0.964,0.967,0.97,0.973,0.976,0.979,0.982,0.985,0.988,0.991,0.994,0.9971};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getGreenBallPath3_8_118_keyValue_1()
		{
			double[] value = {0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,-0.00,0.00,0.10,-0.40,0.00,0.20,-0.70,0.00,0.30,-0.95,0.00,0.40,-1.15,0.00,0.50,-1.35,0.00,0.45,-1.39,0.00,0.45,-1.39,0.00,0.50,-1.35,0.00,0.40,-1.15,0.00,0.30,-0.95,0.00,0.20,-0.70,0.00,0.10,-0.40,0.00,0.00,-0.00,0.00,0.00,0.43,0.00,0.00,0.43};
			return value;
		}
		private double[] getGreenBallPath3_8_118_keyValue_2()
		{
			double[] value = {0.00,0.00,-0.00,0.00,0.10,-0.40,0.00,0.20,-0.70,0.00,0.30,-0.95,0.00,0.40,-1.15,0.00,0.50,-1.35,0.00,0.60,-1.45,0.00,0.70,-1.53,0.00,0.80,-1.63,0.00,0.90,-1.71,0.00,1.00,-1.79,0.00,1.10,-1.87,0.00,1.20,-1.94,0.00,1.30,-2.00,0.00,1.40,-2.04,0.00,1.50,-2.07,0.00,1.60,-2.09,0.00,1.70,-2.10,0.00,1.75,-2.10,0.00,1.80,-2.09,0.00,1.90,-2.06,0.00,2.00,-2.00,0.00,2.10,-1.92,0.00,2.20,-1.81,0.00,2.30,-1.65,0.00,2.40,-1.30,0.00,2.50,-0.85,0.00,2.60,-0.40,0.00,2.70,0.10,0.00,2.80,0.50,0.00,2.90,0.73,0.00,3.00,0.87,0.00,3.10,0.97,0.00,3.20,1.03,0.00,3.30,1.06,0.00,3.40,1.08,0.00,3.50,1.06,0.00,3.60,1.02,0.00,3.70,0.95,0.00,3.80,0.85,0.00,3.90,0.70,0.00,4.00,0.50,0.00,4.10,0.15,0.00,4.20,-0.35,0.00,4.30,-0.80,0.00,4.40,-1.15,0.00,4.50,-1.70,0.00,4.60,-2.05,0.00,4.70,-2.25,0.00,4.80,-2.40,0.00,4.90,-2.50,0.00,5.00,-2.56,0.00,5.10,-2.58,0.00,5.20,-2.56,0.00,5.30,-2.53,0.00,5.40,-2.49,0.00,5.50,-2.44,0.00,5.60,-2.38,0.00,5.70,-2.30,0.00,5.80,-2.18,0.00,5.90,-2.02,0.00,6.00,-1.82,0.00,6.20,-1.54,0.00,6.30,-1.18,0.00,6.40,-0.78,0.00,6.50,-0.35,0.00,6.60,0.10,0.00,6.70,0.15,0.00,6.70,0.20,0.00,6.70,0.43,0.00,6.70,0.43,0.00,6.70,0.43,0.00,6.70,0.43,0.00,6.70,0.43,0.00,6.70,0.43,0.00,6.70,0.43,0.00,6.70,0.43,0.00,6.70,0.43,0.00,6.70,0.43,0.00,6.70,0.43,0.00,6.70,0.43,0.00,6.70,0.43,0.00,6.70,0.43,0.00,6.70,0.43,0.00,6.70,0.43,0.00,6.70,0.43,0.00,6.70,0.43,0.00,6.70,0.43,0.00,6.70,0.43,0.00,6.70,0.43,0.00,6.70,0.43,0.00,6.70,0.43,0.00,6.70,0.43,0.00,6.70,0.43,0.00,6.70,0.43,0.00,6.70,0.43,0.00,6.70,0.43,0.00,6.70,0.43,0.00,6.70,0.43,0.00,6.70,0.43};
			return value;
		}
		private double[] getGreenBallPath3_8_118_keyValue_3()
		{
			double[] value = {0.00,6.70,0.43,0.00,6.70,0.43,0.00,6.70,0.43,0.00,6.70,0.43,0.00,6.70,0.43,0.00,6.70,0.43,0.00,6.70,0.43,0.00,6.70,0.43,0.00,6.70,0.43,0.00,6.70,0.43,0.00,6.70,0.43,0.00,6.70,0.43,0.00,6.70,0.43,0.00,6.70,0.43,0.00,6.70,0.43,0.00,6.70,0.43,0.00,6.70,0.25,0.00,6.70,0.20,0.00,6.60,0.10,0.00,6.50,-0.35,0.00,6.40,-0.78,0.00,6.30,-1.18,0.00,6.20,-1.54,0.00,6.00,-1.82,0.00,5.90,-2.02,0.00,5.80,-2.20,0.00,6.00,-2.02,0.00,5.90,-1.82,0.00,6.20,-1.54,0.00,6.30,-1.18,0.00,6.40,-0.78,0.00,6.50,-0.35,0.00,6.60,0.10,0.00,6.70,0.20,0.00,6.75,0.25,0.00,6.70,0.43,0.00,6.70,0.43,0.00,6.75,0.25,0.00,6.70,0.20,0.00,6.60,0.10,0.00,6.50,-0.35,0.00,6.40,-0.78,0.00,6.30,-1.18,0.00,6.20,-1.54,0.00,6.00,-1.82,0.00,5.90,-2.02,0.00,5.80,-2.18,0.00,5.70,-2.30,0.00,5.60,-2.38,0.00,5.50,-2.44,0.00,5.40,-2.49,0.00,5.30,-2.53,0.00,5.20,-2.56,0.00,5.10,-2.58,0.00,5.00,-2.56,0.00,4.90,-2.50,0.00,4.80,-2.40,0.00,4.70,-2.25,0.00,4.60,-2.05,0.00,4.50,-1.70,0.00,4.40,-1.15,0.00,4.30,-0.80,0.00,4.20,-0.35,0.00,4.10,0.15,0.00,4.00,0.50,0.00,3.90,0.70,0.00,3.80,0.85,0.00,3.70,0.95,0.00,3.60,1.02,0.00,3.50,1.06,0.00,3.40,1.08,0.00,3.30,1.06,0.00,3.20,1.03,0.00,3.10,0.97,0.00,3.00,0.87,0.00,2.90,0.73,0.00,2.80,0.50,0.00,2.70,0.10,0.00,2.60,-0.40,0.00,2.50,-0.85,0.00,2.40,-1.30,0.00,2.30,-1.65,0.00,2.20,-1.81,0.00,2.10,-1.92,0.00,2.00,-2.00,0.00,1.90,-2.06,0.00,1.80,-2.09,0.00,1.75,-2.10,0.00,1.70,-2.10,0.00,1.60,-2.09,0.00,1.50,-2.07,0.00,1.40,-2.04,0.00,1.40,-2.04,0.00,1.40,-2.04,0.00,1.40,-2.04,0.00,1.40,-2.04,0.00,1.40,-2.04,0.00,1.40,-2.04,0.00,1.40,-2.04,0.00,1.40,-2.04};
			return value;
		}
		private double[] getGreenBallPath3_8_118_keyValue_4()
		{
			double[] value = {0.00,1.40,-2.04,0.00,1.40,-2.04,0.00,1.40,-2.04,0.00,1.40,-2.04,0.00,1.30,-2.00,0.00,1.20,-1.94,0.00,1.10,-1.87,0.00,1.00,-1.79,0.00,0.90,-1.71,0.00,0.80,-1.63,0.00,0.70,-1.53,0.00,0.60,-1.45,0.00,0.50,-1.35,0.00,0.40,-1.15,0.00,0.30,-0.95,0.00,0.20,-0.70,0.00,0.10,-0.40,0.00,0.00,-0.00,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43,0.00,0.00,0.43};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getYellowBallPath3_8_125_key_1()
		{
			double[] value = {0.003,0.006,0.009,0.012,0.015,0.018,0.021,0.024,0.027,0.03,0.033,0.036,0.039,0.042,0.045,0.048,0.051,0.054,0.057,0.06,0.063,0.066,0.069,0.072,0.075,0.078,0.081,0.084,0.087,0.09,0.093,0.096,0.099,0.102,0.105,0.108,0.111,0.114,0.117,0.12,0.123,0.126,0.129,0.132,0.135,0.138,0.141,0.144,0.147,0.15,0.153,0.156,0.159,0.162,0.165,0.168,0.171,0.174,0.177,0.18,0.183,0.186,0.189,0.192,0.195,0.198,0.201,0.204,0.207,0.21,0.213,0.216,0.219,0.222,0.225,0.228,0.231,0.234,0.237,0.24,0.243,0.246,0.249,0.252,0.255,0.258,0.261,0.264,0.267,0.27,0.273,0.276,0.279,0.282,0.285,0.288,0.291,0.294,0.297,0.3,0.303,0.306,0.309,0.312,0.315,0.318,0.321,0.324,0.327,0.33,0.333,0.336,0.339,0.342,0.345,0.348,0.351,0.354,0.357,0.36,0.363,0.366,0.369,0.372,0.375,0.378,0.381,0.384,0.387,0.39,0.393,0.396,0.399,0.402,0.405,0.408,0.411,0.414,0.417,0.42,0.423,0.426,0.429,0.432,0.435,0.438,0.441,0.444,0.447,0.45,0.453,0.456,0.459,0.462,0.465,0.468,0.471,0.474,0.477,0.48,0.483,0.486,0.489,0.492,0.495,0.498,0.501,0.504,0.507,0.51,0.513,0.516,0.519,0.522,0.525,0.528,0.531,0.534,0.537,0.54,0.543,0.546,0.549,0.552,0.555,0.558,0.561,0.564,0.567,0.57,0.573,0.576,0.579,0.582,0.585,0.588,0.591,0.594,0.597,0.6,0.603,0.606,0.609,0.612,0.615,0.618,0.621,0.624,0.627,0.63,0.633,0.636,0.639,0.642,0.645,0.648,0.651,0.654,0.657,0.66,0.663,0.667,0.67,0.673,0.676,0.679,0.682,0.685,0.688,0.691,0.694,0.697,0.7,0.703,0.706,0.709,0.712,0.715,0.718,0.721,0.724,0.727,0.73,0.733,0.736,0.739,0.742,0.745,0.748,0.751,0.754,0.757,0.76,0.763,0.766,0.769,0.772,0.775,0.778,0.781,0.784,0.787,0.79,0.793,0.796,0.799,0.802,0.805,0.808,0.811,0.814,0.817,0.82,0.823,0.826,0.829,0.832,0.835,0.838,0.841,0.844,0.847,0.85,0.853,0.856,0.859,0.862,0.865,0.868,0.871,0.874,0.877,0.88,0.883,0.886,0.889,0.892,0.895,0.898,0.901,0.904,0.907,0.91,0.913,0.916,0.919,0.922,0.925,0.928,0.931,0.934,0.937,0.94,0.943,0.946,0.949,0.952,0.955,0.958,0.961,0.964,0.967,0.97,0.973,0.976,0.979,0.982,0.985,0.988,0.991,0.994,0.9971};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getYellowBallPath3_8_125_keyValue_1()
		{
			double[] value = {0.00,0.07,-0.47,0.00,0.07,-0.51,0.00,0.10,-0.60,0.00,0.20,-0.70,0.00,0.30,-0.95,0.00,0.30,-0.98,0.00,0.30,-0.98,0.00,0.30,-0.95,0.00,0.20,-0.70,0.00,0.10,-0.60,0.00,0.07,-0.51,0.00,0.07,-0.47,0.00,0.07,-0.47,0.00,0.07,-0.47,0.00,0.07,-0.51,0.00,0.10,-0.60,0.00,0.20,-0.70,0.00,0.30,-0.95,0.00,0.40,-1.15,0.00,0.50,-1.35,0.00,0.60,-1.45,0.00,0.70,-1.53,0.00,0.80,-1.63,0.00,0.80,-1.63,0.00,0.70,-1.53,0.00,0.60,-1.45,0.00,0.50,-1.35,0.00,0.40,-1.15,0.00,0.30,-0.95,0.00,0.20,-0.70,0.00,0.10,-0.60,0.00,0.07,-0.51,0.00,0.07,-0.47,0.00,0.07,-0.47,0.00,0.07,-0.51,0.00,0.10,-0.60,0.00,0.20,-0.70,0.00,0.30,-0.95,0.00,0.40,-1.15,0.00,0.50,-1.35,0.00,0.60,-1.45,0.00,0.70,-1.53,0.00,0.80,-1.63,0.00,0.90,-1.71,0.00,1.00,-1.79,0.00,1.10,-1.87,0.00,1.20,-1.94,0.00,1.30,-2.00,0.00,1.40,-2.04,0.00,1.50,-2.07,0.00,1.60,-2.09,0.00,1.70,-2.10,0.00,1.75,-2.10,0.00,1.80,-2.09,0.00,1.90,-2.06,0.00,2.00,-2.00,0.00,2.10,-1.92,0.00,2.20,-1.81,0.00,2.30,-1.65,0.00,2.40,-1.30,0.00,2.50,-0.85,0.00,2.60,-0.40,0.00,2.70,0.10,0.00,2.80,0.50,0.00,2.90,0.73,0.00,3.00,0.87,0.00,3.10,0.97,0.00,3.20,1.03,0.00,3.30,1.06,0.00,3.40,1.08,0.00,3.50,1.06,0.00,3.60,1.02,0.00,3.70,0.95,0.00,3.80,0.85,0.00,3.90,0.70,0.00,4.00,0.50,0.00,4.10,0.15,0.00,4.20,-0.35,0.00,4.30,-0.80,0.00,4.30,-0.87,0.00,4.30,-0.89,0.00,4.30,-0.87,0.00,4.30,-0.80,0.00,4.30,-0.80,0.00,4.20,-0.35,0.00,4.10,0.15,0.00,4.00,0.50,0.00,3.90,0.70,0.00,3.80,0.85,0.00,3.70,0.95,0.00,3.60,1.02,0.00,3.50,1.06,0.00,3.40,1.08,0.00,3.40,1.08,0.00,3.30,1.06,0.00,3.20,1.03,0.00,3.10,0.97,0.00,3.00,0.87,0.00,2.90,0.73,0.00,2.80,0.50};
			return value;
		}
		private double[] getYellowBallPath3_8_125_keyValue_2()
		{
			double[] value = {0.00,2.70,0.10,0.00,2.60,-0.40,0.00,2.50,-0.85,0.00,2.40,-1.30,0.00,2.30,-1.65,0.00,2.20,-1.81,0.00,2.20,-1.85,0.00,2.20,-1.85,0.00,2.20,-1.81,0.00,2.30,-1.65,0.00,2.40,-1.30,0.00,2.50,-0.85,0.00,2.60,-0.40,0.00,2.70,0.10,0.00,2.80,0.50,0.00,2.90,0.73,0.00,3.00,0.87,0.00,3.10,0.97,0.00,3.20,1.03,0.00,3.30,1.06,0.00,3.40,1.08,0.00,3.50,1.06,0.00,3.60,1.02,0.00,3.70,0.95,0.00,3.80,0.85,0.00,3.90,0.70,0.00,4.00,0.50,0.00,4.10,0.15,0.00,4.20,-0.35,0.00,4.30,-0.80,0.00,4.40,-1.15,0.00,4.50,-1.70,0.00,4.60,-2.05,0.00,4.70,-2.25,0.00,4.80,-2.40,0.00,4.90,-2.50,0.00,5.00,-2.56,0.00,5.10,-2.58,0.00,5.20,-2.56,0.00,5.30,-2.53,0.00,5.40,-2.49,0.00,5.50,-2.44,0.00,5.60,-2.38,0.00,5.70,-2.30,0.00,5.80,-2.18,0.00,5.90,-2.02,0.00,6.00,-1.82,0.00,6.20,-1.54,0.00,6.30,-1.18,0.00,6.40,-0.78,0.00,6.50,-0.35,0.00,6.60,0.10,0.00,6.70,0.35,0.00,6.75,0.75,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33};
			return value;
		}
		private double[] getYellowBallPath3_8_125_keyValue_3()
		{
			double[] value = {0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.80,1.33,0.00,6.75,0.85,0.00,6.70,0.55,0.00,6.60,0.10,0.00,6.50,-0.35,0.00,6.40,-0.78,0.00,6.30,-1.18,0.00,6.20,-1.54,0.00,6.00,-1.82,0.00,5.90,-2.02,0.00,5.80,-2.18,0.00,5.70,-2.30,0.00,5.60,-2.38,0.00,5.50,-2.44,0.00,5.40,-2.49,0.00,5.30,-2.53,0.00,5.20,-2.56,0.00,5.10,-2.58,0.00,5.00,-2.56,0.00,4.90,-2.50,0.00,4.80,-2.40,0.00,4.70,-2.25,0.00,4.60,-2.05,0.00,4.50,-1.70,0.00,4.40,-1.15,0.00,4.30,-0.80,0.00,4.20,-0.35,0.00,4.10,0.15,0.00,4.00,0.50,0.00,3.90,0.70,0.00,3.80,0.85,0.00,3.70,0.95,0.00,3.60,1.02,0.00,3.50,1.06,0.00,3.40,1.08,0.00,3.30,1.06,0.00,3.20,1.03,0.00,3.10,0.97,0.00,3.00,0.87,0.00,2.90,0.73,0.00,2.80,0.50,0.00,2.70,0.10};
			return value;
		}
		private double[] getYellowBallPath3_8_125_keyValue_4()
		{
			double[] value = {0.00,2.60,-0.40,0.00,2.50,-0.85,0.00,2.40,-1.30,0.00,2.30,-1.65,0.00,2.20,-1.81,0.00,2.10,-1.92,0.00,2.00,-2.00,0.00,1.90,-2.06,0.00,1.80,-2.09,0.00,1.75,-2.10,0.00,1.70,-2.10,0.00,1.60,-2.09,0.00,1.50,-2.07,0.00,1.40,-2.04,0.00,1.30,-2.00,0.00,1.20,-1.94,0.00,1.10,-1.87,0.00,1.00,-1.79,0.00,0.90,-1.71,0.00,0.80,-1.63,0.00,0.70,-1.53,0.00,0.60,-1.45,0.00,0.50,-1.35,0.00,0.40,-1.15,0.00,0.30,-0.95,0.00,0.20,-0.70,0.00,0.10,-0.60,0.00,0.07,-0.530,0.00,0.07,-0.47,0.00,0.07,-0.47,0.00,0.07,-0.47,0.00,0.07,-0.47,0.00,0.07,-0.47};
			return value;
		}

		/** Large attribute array: PositionInterpolator DEF='BlueBallPath1a' key field, scene-graph level=10, element #34, 199 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFFloat getBlueBallPath1a_10_34_key()
		{
			MFFloat BlueBallPath1a_10_34_key = new MFFloat()/*2.finalize*/
				.append(new MFFloat(getBlueBallPath1a_10_34_key_1()));
			return BlueBallPath1a_10_34_key;
		}
		/** Large attribute array: PositionInterpolator DEF='BlueBallPath1a' keyValue field, scene-graph level=10, element #34, 600 total numbers made up of 200 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getBlueBallPath1a_10_34_keyValue()
		{
			MFVec3f BlueBallPath1a_10_34_keyValue = new MFVec3f()/*2.finalize*/
				.append(new MFVec3f(getBlueBallPath1a_10_34_keyValue_1()))
				.append(new MFVec3f(getBlueBallPath1a_10_34_keyValue_2()));
			return BlueBallPath1a_10_34_keyValue;
		}
		/** Large attribute array: PositionInterpolator DEF='GreenBallPath1a' key field, scene-graph level=10, element #43, 199 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFFloat getGreenBallPath1a_10_43_key()
		{
			MFFloat GreenBallPath1a_10_43_key = new MFFloat()/*2.finalize*/
				.append(new MFFloat(getGreenBallPath1a_10_43_key_1()));
			return GreenBallPath1a_10_43_key;
		}
		/** Large attribute array: PositionInterpolator DEF='GreenBallPath1a' keyValue field, scene-graph level=10, element #43, 600 total numbers made up of 200 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getGreenBallPath1a_10_43_keyValue()
		{
			MFVec3f GreenBallPath1a_10_43_keyValue = new MFVec3f()/*2.finalize*/
				.append(new MFVec3f(getGreenBallPath1a_10_43_keyValue_1()))
				.append(new MFVec3f(getGreenBallPath1a_10_43_keyValue_2()));
			return GreenBallPath1a_10_43_keyValue;
		}
		/** Large attribute array: PositionInterpolator DEF='YellowBallPath1' key field, scene-graph level=10, element #52, 199 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFFloat getYellowBallPath1_10_52_key()
		{
			MFFloat YellowBallPath1_10_52_key = new MFFloat()/*2.finalize*/
				.append(new MFFloat(getYellowBallPath1_10_52_key_1()));
			return YellowBallPath1_10_52_key;
		}
		/** Large attribute array: PositionInterpolator DEF='YellowBallPath1' keyValue field, scene-graph level=10, element #52, 600 total numbers made up of 200 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getYellowBallPath1_10_52_keyValue()
		{
			MFVec3f YellowBallPath1_10_52_keyValue = new MFVec3f()/*2.finalize*/
				.append(new MFVec3f(getYellowBallPath1_10_52_keyValue_1()))
				.append(new MFVec3f(getYellowBallPath1_10_52_keyValue_2()));
			return YellowBallPath1_10_52_keyValue;
		}
		/** Large attribute array: PositionInterpolator DEF='BlueBallPath1b' key field, scene-graph level=10, element #61, 199 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFFloat getBlueBallPath1b_10_61_key()
		{
			MFFloat BlueBallPath1b_10_61_key = new MFFloat()/*2.finalize*/
				.append(new MFFloat(getBlueBallPath1b_10_61_key_1()));
			return BlueBallPath1b_10_61_key;
		}
		/** Large attribute array: PositionInterpolator DEF='BlueBallPath1b' keyValue field, scene-graph level=10, element #61, 600 total numbers made up of 200 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getBlueBallPath1b_10_61_keyValue()
		{
			MFVec3f BlueBallPath1b_10_61_keyValue = new MFVec3f()/*2.finalize*/
				.append(new MFVec3f(getBlueBallPath1b_10_61_keyValue_1()))
				.append(new MFVec3f(getBlueBallPath1b_10_61_keyValue_2()));
			return BlueBallPath1b_10_61_keyValue;
		}
		/** Large attribute array: PositionInterpolator DEF='GreenBallPath1b' key field, scene-graph level=10, element #69, 199 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFFloat getGreenBallPath1b_10_69_key()
		{
			MFFloat GreenBallPath1b_10_69_key = new MFFloat()/*2.finalize*/
				.append(new MFFloat(getGreenBallPath1b_10_69_key_1()));
			return GreenBallPath1b_10_69_key;
		}
		/** Large attribute array: PositionInterpolator DEF='GreenBallPath1b' keyValue field, scene-graph level=10, element #69, 600 total numbers made up of 200 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getGreenBallPath1b_10_69_keyValue()
		{
			MFVec3f GreenBallPath1b_10_69_keyValue = new MFVec3f()/*2.finalize*/
				.append(new MFVec3f(getGreenBallPath1b_10_69_keyValue_1()))
				.append(new MFVec3f(getGreenBallPath1b_10_69_keyValue_2()));
			return GreenBallPath1b_10_69_keyValue;
		}
		/** Large attribute array: Extrusion spine field, scene-graph level=8, element #81, 219 total numbers made up of 73 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getExtrusion_8_81_spine()
		{
			MFVec3f Extrusion_8_81_spine = new MFVec3f(new double[] {0.00,0.00,2.10,0.00,0.00,0.40,0.00,0.10,-0.10,0.00,0.20,-0.40,0.00,0.30,-0.60,0.00,0.40,-0.75,0.00,0.50,-0.89,0.00,0.60,-0.98,0.00,0.70,-1.06,0.00,0.80,-1.12,0.00,0.90,-1.17,0.00,1.00,-1.21,0.00,1.10,-1.25,0.00,1.20,-1.29,0.00,1.30,-1.32,0.00,1.40,-1.35,0.00,1.50,-1.37,0.00,1.60,-1.39,0.00,1.70,-1.40,0.00,1.75,-1.40,0.00,1.80,-1.38,0.00,1.90,-1.35,0.00,2.00,-1.31,0.00,2.10,-1.26,0.00,2.20,-1.19,0.00,2.30,-1.05,0.00,2.40,-0.80,0.00,2.50,-0.52,0.00,2.60,-0.20,0.00,2.70,0.18,0.00,2.80,0.48,0.00,2.90,0.68,0.00,3.00,0.82,0.00,3.10,0.90,0.00,3.20,0.95,0.00,3.30,0.98,0.00,3.40,1.00,0.00,3.50,0.99,0.00,3.60,0.98,0.00,3.70,0.95,0.00,3.80,0.90,0.00,3.90,0.82,0.00,4.00,0.68,0.00,4.10,0.48,0.00,4.20,0.18,0.00,4.30,-0.20,0.00,4.40,-0.52,0.00,4.50,-0.80,0.00,4.60,-1.05,0.00,4.70,-1.19,0.00,4.80,-1.26,0.00,4.90,-1.31,0.00,5.00,-1.35,0.00,5.10,-1.38,0.00,5.15,-1.40,0.00,5.20,-1.40,0.00,5.30,-1.39,0.00,5.40,-1.37,0.00,5.50,-1.35,0.00,5.60,-1.32,0.00,5.70,-1.29,0.00,5.80,-1.25,0.00,5.90,-1.21,0.00,6.00,-1.17,0.00,6.10,-1.12,0.00,6.20,-1.06,0.00,6.30,-0.98,0.00,6.40,-0.89,0.00,6.50,-0.75,0.00,6.60,-0.40,0.00,6.70,-0.10,0.00,6.80,0.40,0.00,6.80,2.10});
			return Extrusion_8_81_spine;
		}
		/** Large attribute array: PositionInterpolator DEF='YellowBallPath2' key field, scene-graph level=8, element #85, 200 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFFloat getYellowBallPath2_8_85_key()
		{
			MFFloat YellowBallPath2_8_85_key = new MFFloat()/*2.finalize*/
				.append(new MFFloat(getYellowBallPath2_8_85_key_1()));
			return YellowBallPath2_8_85_key;
		}
		/** Large attribute array: PositionInterpolator DEF='YellowBallPath2' keyValue field, scene-graph level=8, element #85, 600 total numbers made up of 200 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getYellowBallPath2_8_85_keyValue()
		{
			MFVec3f YellowBallPath2_8_85_keyValue = new MFVec3f()/*2.finalize*/
				.append(new MFVec3f(getYellowBallPath2_8_85_keyValue_1()))
				.append(new MFVec3f(getYellowBallPath2_8_85_keyValue_2()));
			return YellowBallPath2_8_85_keyValue;
		}
		/** Large attribute array: Extrusion spine field, scene-graph level=8, element #107, 213 total numbers made up of 71 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getExtrusion_8_107_spine()
		{
			MFVec3f Extrusion_8_107_spine = new MFVec3f(new double[] {0.00,0.00,2.10,0.00,0.00,-0.00,0.00,0.10,-0.40,0.00,0.20,-0.70,0.00,0.30,-0.95,0.00,0.40,-1.15,0.00,0.50,-1.35,0.00,0.60,-1.45,0.00,0.70,-1.53,0.00,0.80,-1.63,0.00,0.90,-1.71,0.00,1.00,-1.79,0.00,1.10,-1.87,0.00,1.20,-1.94,0.00,1.30,-2.00,0.00,1.40,-2.04,0.00,1.50,-2.07,0.00,1.60,-2.09,0.00,1.70,-2.10,0.00,1.75,-2.10,0.00,1.80,-2.09,0.00,1.90,-2.06,0.00,2.00,-2.00,0.00,2.10,-1.92,0.00,2.20,-1.81,0.00,2.30,-1.65,0.00,2.40,-1.30,0.00,2.50,-0.85,0.00,2.60,-0.40,0.00,2.70,0.10,0.00,2.80,0.50,0.00,2.90,0.73,0.00,3.00,0.87,0.00,3.10,0.97,0.00,3.20,1.03,0.00,3.30,1.06,0.00,3.40,1.08,0.00,3.50,1.06,0.00,3.60,1.02,0.00,3.70,0.95,0.00,3.80,0.85,0.00,3.90,0.70,0.00,4.00,0.50,0.00,4.10,0.15,0.00,4.20,-0.35,0.00,4.30,-0.80,0.00,4.40,-1.15,0.00,4.50,-1.70,0.00,4.60,-2.05,0.00,4.70,-2.25,0.00,4.80,-2.40,0.00,4.90,-2.50,0.00,5.00,-2.56,0.00,5.10,-2.58,0.00,5.20,-2.56,0.00,5.30,-2.53,0.00,5.40,-2.49,0.00,5.50,-2.44,0.00,5.60,-2.38,0.00,5.70,-2.30,0.00,5.80,-2.18,0.00,5.90,-2.02,0.00,6.00,-1.82,0.00,6.20,-1.54,0.00,6.30,-1.18,0.00,6.40,-0.78,0.00,6.50,-0.35,0.00,6.60,0.10,0.00,6.70,0.60,0.00,6.75,1.15,0.00,6.80,2.10});
			return Extrusion_8_107_spine;
		}
		/** Large attribute array: PositionInterpolator DEF='RedBallPath3' key field, scene-graph level=8, element #111, 332 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFFloat getRedBallPath3_8_111_key()
		{
			MFFloat RedBallPath3_8_111_key = new MFFloat()/*2.finalize*/
				.append(new MFFloat(getRedBallPath3_8_111_key_1()));
			return RedBallPath3_8_111_key;
		}
		/** Large attribute array: PositionInterpolator DEF='RedBallPath3' keyValue field, scene-graph level=8, element #111, 999 total numbers made up of 333 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getRedBallPath3_8_111_keyValue()
		{
			MFVec3f RedBallPath3_8_111_keyValue = new MFVec3f()/*2.finalize*/
				.append(new MFVec3f(getRedBallPath3_8_111_keyValue_1()))
				.append(new MFVec3f(getRedBallPath3_8_111_keyValue_2()))
				.append(new MFVec3f(getRedBallPath3_8_111_keyValue_3()))
				.append(new MFVec3f(getRedBallPath3_8_111_keyValue_4()));
			return RedBallPath3_8_111_keyValue;
		}
		/** Large attribute array: PositionInterpolator DEF='GreenBallPath3' key field, scene-graph level=8, element #118, 332 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFFloat getGreenBallPath3_8_118_key()
		{
			MFFloat GreenBallPath3_8_118_key = new MFFloat()/*2.finalize*/
				.append(new MFFloat(getGreenBallPath3_8_118_key_1()));
			return GreenBallPath3_8_118_key;
		}
		/** Large attribute array: PositionInterpolator DEF='GreenBallPath3' keyValue field, scene-graph level=8, element #118, 999 total numbers made up of 333 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getGreenBallPath3_8_118_keyValue()
		{
			MFVec3f GreenBallPath3_8_118_keyValue = new MFVec3f()/*2.finalize*/
				.append(new MFVec3f(getGreenBallPath3_8_118_keyValue_1()))
				.append(new MFVec3f(getGreenBallPath3_8_118_keyValue_2()))
				.append(new MFVec3f(getGreenBallPath3_8_118_keyValue_3()))
				.append(new MFVec3f(getGreenBallPath3_8_118_keyValue_4()));
			return GreenBallPath3_8_118_keyValue;
		}
		/** Large attribute array: PositionInterpolator DEF='YellowBallPath3' key field, scene-graph level=8, element #125, 332 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFFloat getYellowBallPath3_8_125_key()
		{
			MFFloat YellowBallPath3_8_125_key = new MFFloat()/*2.finalize*/
				.append(new MFFloat(getYellowBallPath3_8_125_key_1()));
			return YellowBallPath3_8_125_key;
		}
		/** Large attribute array: PositionInterpolator DEF='YellowBallPath3' keyValue field, scene-graph level=8, element #125, 999 total numbers made up of 333 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getYellowBallPath3_8_125_keyValue()
		{
			MFVec3f YellowBallPath3_8_125_keyValue = new MFVec3f()/*2.finalize*/
				.append(new MFVec3f(getYellowBallPath3_8_125_keyValue_1()))
				.append(new MFVec3f(getYellowBallPath3_8_125_keyValue_2()))
				.append(new MFVec3f(getYellowBallPath3_8_125_keyValue_3()))
				.append(new MFVec3f(getYellowBallPath3_8_125_keyValue_4()));
			return YellowBallPath3_8_125_keyValue;
		}

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return IkeaBeadToy model
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
        X3D thisExampleX3dModel = new IkeaBeadToy().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.IkeaBeadToy\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.IkeaBeadToy\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> A file describing a wall clock. </p>
 <p> Related links: <a href="../../../StudentProjects/WallClock.java">WallClock.java</a> source, <a href="../../../StudentProjects/WallClockIndex.html" target="_top">WallClock catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../StudentProjects/WallClock.x3d">WallClock.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> A file describing a wall clock </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Frederic Roussille </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 1 April 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/WallClock.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/WallClock.x3d</a> </td>
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

	* @author Frederic Roussille
 */

public class WallClock
{
	/** Default constructor to create this object. */
	public WallClock ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("WallClock.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("A file describing a wall clock"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Frederic Roussille"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("1 April 2001"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/WallClock.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("WallClock.x3d"))
    .addChild(new Group()
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material("blue").setDiffuseColor(0.3,0.2,0.8)))
        .setGeometry(new Extrusion().setBeginCap(false).setCreaseAngle(1).setCrossSection(new MFVec2f(new double[] {0.0,0.0,4.0,0.0,4.0,0.7,3.6,0.7,3.6,0.2,0.0,0.2})).setEndCap(false).setSpine(new MFVec3f(new double[] {1.0,0.0,0.0,0.92,-0.38,0.0,0.71,-0.71,0.0,0.38,-0.92,0.0,0.0,-1.0,0.0,-0.38,-0.92,0.0,-0.71,-0.71,0.0,-0.92,-0.38,0.0,-1.0,0.0,0.0,-0.92,0.38,0.0,-0.71,0.71,0.0,-0.38,0.92,0.0,0.0,1.0,0.0,0.38,0.92,0.0,0.71,0.71,0.0,0.92,0.38,0.0,1.0,0.0,0.0}))))
      .addChild(new Transform().setRotation(1.0,0.0,0.0,1.57).setTranslation(0.0,0.0,0.2)
        .addChild(new Shape()
          .setGeometry(new Cylinder().setHeight(0.2).setRadius(2.8))))
      .addChild(new Group()
        .addChild(new Transform().setCenter(0.0,0.0,0.4).setRotation(0.0,0.0,1.0,-0.5233)
          .addChild(new Transform("mark1").setTranslation(0.0,2.2,0.4)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material("m1").setDiffuseColor(0.3,0.2,0.8)))
              .setGeometry(new Box().setSize(0.25,0.5,0.15)))))
        .addChild(new Transform().setCenter(0.0,0.0,0.4).setRotation(0.0,0.0,1.0,-1.0466)
          .addChild(new Transform("mark2").setTranslation(0.0,2.2,0.4)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material("m2").setDiffuseColor(0.3,0.2,0.8)))
              .setGeometry(new Box().setSize(0.25,0.5,0.15)))))
        .addChild(new Transform().setCenter(0.0,0.0,0.4).setRotation(0.0,0.0,1.0,-1.57)
          .addChild(new Transform("mark3").setTranslation(0.0,2.2,0.4)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material("m3").setDiffuseColor(0.3,0.2,0.8)))
              .setGeometry(new Box().setSize(0.25,0.5,0.15)))))
        .addChild(new Transform().setCenter(0.0,0.0,0.4).setRotation(0.0,0.0,1.0,-2.0933)
          .addChild(new Transform("mark4").setTranslation(0.0,2.2,0.4)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material("m4").setDiffuseColor(0.3,0.2,0.8)))
              .setGeometry(new Box().setSize(0.25,0.5,0.15)))))
        .addChild(new Transform().setCenter(0.0,0.0,0.4).setRotation(0.0,0.0,1.0,-2.6166)
          .addChild(new Transform("mark5").setTranslation(0.0,2.2,0.4)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material("m5").setDiffuseColor(0.3,0.2,0.8)))
              .setGeometry(new Box().setSize(0.25,0.5,0.15)))))
        .addChild(new Transform().setCenter(0.0,0.0,0.4).setRotation(0.0,0.0,1.0,-3.1399)
          .addChild(new Transform("mark6").setTranslation(0.0,2.2,0.4)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material("m6").setDiffuseColor(0.3,0.2,0.8)))
              .setGeometry(new Box().setSize(0.25,0.5,0.15)))))
        .addChild(new Transform().setCenter(0.0,0.0,0.4).setRotation(0.0,0.0,1.0,-3.6632)
          .addChild(new Transform("mark7").setTranslation(0.0,2.2,0.4)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material("m7").setDiffuseColor(0.3,0.2,0.8)))
              .setGeometry(new Box().setSize(0.25,0.5,0.15)))))
        .addChild(new Transform().setCenter(0.0,0.0,0.4).setRotation(0.0,0.0,1.0,-4.1865)
          .addChild(new Transform("mark8").setTranslation(0.0,2.2,0.4)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material("m8").setDiffuseColor(0.3,0.2,0.8)))
              .setGeometry(new Box().setSize(0.25,0.5,0.15)))))
        .addChild(new Transform().setCenter(0.0,0.0,0.4).setRotation(0.0,0.0,1.0,-4.7098)
          .addChild(new Transform("mark9").setTranslation(0.0,2.2,0.4)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material("m9").setDiffuseColor(0.3,0.2,0.8)))
              .setGeometry(new Box().setSize(0.25,0.5,0.15)))))
        .addChild(new Transform().setCenter(0.0,0.0,0.4).setRotation(0.0,0.0,1.0,-5.2331)
          .addChild(new Transform("mark10").setTranslation(0.0,2.2,0.4)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material("m10").setDiffuseColor(0.3,0.2,0.8)))
              .setGeometry(new Box().setSize(0.25,0.5,0.15)))))
        .addChild(new Transform().setCenter(0.0,0.0,0.4).setRotation(0.0,0.0,1.0,-5.7564)
          .addChild(new Transform("mark11").setTranslation(0.0,2.2,0.4)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material("m11").setDiffuseColor(0.3,0.2,0.8)))
              .setGeometry(new Box().setSize(0.25,0.5,0.15)))))
        .addChild(new Transform().setCenter(0.0,0.0,0.4).setRotation(0.0,0.0,1.0,-6.2797)
          .addChild(new Transform("mark12").setTranslation(0.0,2.2,0.4)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material("m12").setDiffuseColor(0.3,0.2,0.8)))
              .setGeometry(new Box().setSize(0.25,0.5,0.15))))))
      .addChild(new Transform("small").setCenter(0.0,0.0,0.4)
        .addChild(new Transform().setRotation(1.0,0.0,0.0,-1.57).setTranslation(0.0,0.0,0.5)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setUSE("blue")))
            .setGeometry(new Extrusion().setCrossSection(new MFVec2f(new double[] {-0.15,0.0,0.15,0.0,0.0,1.4,-0.15,0.0})).setSpine(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,0.15,0.0}))))))
      .addChild(new Transform("medium").setCenter(0.0,0.0,0.4)
        .addChild(new Transform().setRotation(1.0,0.0,0.0,-1.57).setTranslation(0.0,0.0,0.5)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setUSE("blue")))
            .setGeometry(new Extrusion().setCrossSection(new MFVec2f(new double[] {-0.11,0.0,0.15,0.0,0.0,1.65,-0.11,0.0})).setSpine(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,0.15,0.0}))))))
      .addChild(new Transform("tall").setCenter(0.0,0.0,0.4)
        .addChild(new Transform().setTranslation(0.0,0.0,0.4)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setUSE("blue")))
            .setGeometry(new IndexedLineSet().setCoordIndex(new int[] {0,1,-1})
              .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,1.8,0.0})))))))
      .addChild(new TimeSensor("cm").setEnabled(false).setLoop(true))
      .addChild(new TimeSensor("refresh").setCycleInterval(0.1).setLoop(true))
      .addChild(new ColorInterpolator("cm1p").setKey(new double[] {0.0,0.0833,0.0833,0.167,0.167,1.0}).setKeyValue(new MFColor(new double[] {0.3,0.2,0.8,0.3,0.2,0.8,1.0,1.0,0.0,1.0,1.0,0.0,0.3,0.2,0.8,0.3,0.2,0.8})))
      .addChild(new ColorInterpolator("cm2p").setKey(new double[] {0.0,0.167,0.167,0.25,0.25,1.0}).setKeyValue(new MFColor(new double[] {0.3,0.2,0.8,0.3,0.2,0.8,1.0,1.0,0.0,1.0,1.0,0.0,0.3,0.2,0.8,0.3,0.2,0.8})))
      .addChild(new ColorInterpolator("cm3p").setKey(new double[] {0.0,0.25,0.25,0.333,0.333,1.0}).setKeyValue(new MFColor(new double[] {0.3,0.2,0.8,0.3,0.2,0.8,1.0,1.0,0.0,1.0,1.0,0.0,0.3,0.2,0.8,0.3,0.2,0.8})))
      .addChild(new ColorInterpolator("cm4p").setKey(new double[] {0.0,0.333,0.333,0.417,0.417,1.0}).setKeyValue(new MFColor(new double[] {0.3,0.2,0.8,0.3,0.2,0.8,1.0,1.0,0.0,1.0,1.0,0.0,0.3,0.2,0.8,0.3,0.2,0.8})))
      .addChild(new ColorInterpolator("cm5p").setKey(new double[] {0.0,0.417,0.417,0.5,0.5,1.0}).setKeyValue(new MFColor(new double[] {0.3,0.2,0.8,0.3,0.2,0.8,1.0,1.0,0.0,1.0,1.0,0.0,0.3,0.2,0.8,0.3,0.2,0.8})))
      .addChild(new ColorInterpolator("cm6p").setKey(new double[] {0.0,0.5,0.5,0.583,0.583,1.0}).setKeyValue(new MFColor(new double[] {0.3,0.2,0.8,0.3,0.2,0.8,1.0,1.0,0.0,1.0,1.0,0.0,0.3,0.2,0.8,0.3,0.2,0.8})))
      .addChild(new ColorInterpolator("cm7p").setKey(new double[] {0.0,0.583,0.583,0.667,0.667,1.0}).setKeyValue(new MFColor(new double[] {0.3,0.2,0.8,0.3,0.2,0.8,1.0,1.0,0.0,1.0,1.0,0.0,0.3,0.2,0.8,0.3,0.2,0.8})))
      .addChild(new ColorInterpolator("cm8p").setKey(new double[] {0.0,0.667,0.667,0.75,0.75,1.0}).setKeyValue(new MFColor(new double[] {0.3,0.2,0.8,0.3,0.2,0.8,1.0,1.0,0.0,1.0,1.0,0.0,0.3,0.2,0.8,0.3,0.2,0.8})))
      .addChild(new ColorInterpolator("cm9p").setKey(new double[] {0.0,0.75,0.75,0.833,0.833,1.0}).setKeyValue(new MFColor(new double[] {0.3,0.2,0.8,0.3,0.2,0.8,1.0,1.0,0.0,1.0,1.0,0.0,0.3,0.2,0.8,0.3,0.2,0.8})))
      .addChild(new ColorInterpolator("cm10p").setKey(new double[] {0.0,0.833,0.833,0.917,0.917,1.0}).setKeyValue(new MFColor(new double[] {0.3,0.2,0.8,0.3,0.2,0.8,1.0,1.0,0.0,1.0,1.0,0.0,0.3,0.2,0.8,0.3,0.2,0.8})))
      .addChild(new ColorInterpolator("cm11p").setKey(new double[] {0.0,0.917,0.917,1.0,1.0}).setKeyValue(new MFColor(new double[] {0.3,0.2,0.8,0.3,0.2,0.8,1.0,1.0,0.0,1.0,1.0,0.0,0.3,0.2,0.8})))
      .addChild(new ColorInterpolator("cm12p").setKey(new double[] {0.0,0.0833,0.0833,1.0}).setKeyValue(new MFColor(new double[] {1.0,1.0,0.0,1.0,1.0,0.0,0.3,0.2,0.8,0.3,0.2,0.8})))
      .addChild(new Script("writing").setSourceCode("\n" + 
"        " + "\n" + 
"ecmascript:" + "\n" + 
"function set_float () {" + "\n" + 
" var today = new Date();" + "\n" + 
" var date = today.toLocaleString();" + "\n" + 
" string_changed[0]= date;" + "\n" + 
"}" + "\n")
        .addField(new field().setName("set_float").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
        .addField(new field().setName("string_changed").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("g").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(0)))
      .addChild(new Transform().setTranslation(0.0,1.2,0.3)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.3,0.2,0.8)))
          .setGeometry(new Text("text")
            .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(0.3)))))
      .addChild(new Script("more_time").setSourceCode("\n" + 
"        " + "\n" + 
"ecmascript:" + "\n" + 
"function initialize(){" + "\n" + 
"}" + "\n" + 
"\n" + 
"\n" + 
"function set_second () {" + "\n" + 
" var today = new Date();" + "\n" + 
" var seconds = today.getSeconds();" + "\n" + 
" var minutes =  -(Math.PI/30)*today.getMinutes();" + "\n" + 
" var hours = -(Math.PI/6)*today.getHours();" + "\n" + 
" second_changed[3] = -(Math.PI/30)*seconds ;" + "\n" + 
" minute_changed[3]= minutes -(Math.PI/30)*seconds/60; " + "\n" + 
" hour_changed[3]= hours -(Math.PI/6)*today.getMinutes()/60;" + "\n" + 
"}" + "\n")
        .addField(new field().setName("second_changed").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("set_second").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
        .addField(new field().setName("minute_changed").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("hour_changed").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
      .addChild(new Script("cm_enabled").setSourceCode("\n" + 
"        " + "\n" + 
"ecmascript:" + "\n" + 
"function set_milli () {" + "\n" + 
" var today = new Date();" + "\n" + 
" var milli = today.getTime();" + "\n" + 
" var milli_changed= (milli/1000) - Math.floor(milli/1000);" + "\n" + 
" Browser.print (milli_changed);" + "\n" + 
" if (milli_changed>0 && milli_changed<0.1) {start=true;}" + "\n" + 
"}" + "\n")
        .addField(new field().setName("start").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("set_milli").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))))
    .addChild(new ROUTE().setFromNode("refresh").setFromField("cycleTime").setToNode("cm_enabled").setToField("set_milli"))
    .addChild(new ROUTE().setFromNode("cm_enabled").setFromField("start").setToNode("cm").setToField("set_enabled"))
    .addChild(new ROUTE().setFromNode("refresh").setFromField("cycleTime").setToNode("more_time").setToField("set_second"))
    .addChild(new ROUTE().setFromNode("more_time").setFromField("second_changed").setToNode("tall").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("more_time").setFromField("minute_changed").setToNode("medium").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("more_time").setFromField("hour_changed").setToNode("small").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("cm").setFromField("fraction_changed").setToNode("cm1p").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("cm1p").setFromField("value_changed").setToNode("m1").setToField("set_diffuseColor"))
    .addChild(new ROUTE().setFromNode("cm").setFromField("fraction_changed").setToNode("cm2p").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("cm2p").setFromField("value_changed").setToNode("m2").setToField("set_diffuseColor"))
    .addChild(new ROUTE().setFromNode("cm").setFromField("fraction_changed").setToNode("cm3p").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("cm").setFromField("fraction_changed").setToNode("cm4p").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("cm").setFromField("fraction_changed").setToNode("cm5p").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("cm").setFromField("fraction_changed").setToNode("cm6p").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("cm").setFromField("fraction_changed").setToNode("cm7p").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("cm").setFromField("fraction_changed").setToNode("cm8p").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("cm").setFromField("fraction_changed").setToNode("cm9p").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("cm").setFromField("fraction_changed").setToNode("cm10p").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("cm").setFromField("fraction_changed").setToNode("cm12p").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("cm3p").setFromField("value_changed").setToNode("m3").setToField("set_diffuseColor"))
    .addChild(new ROUTE().setFromNode("cm4p").setFromField("value_changed").setToNode("m4").setToField("set_diffuseColor"))
    .addChild(new ROUTE().setFromNode("cm5p").setFromField("value_changed").setToNode("m5").setToField("set_diffuseColor"))
    .addChild(new ROUTE().setFromNode("cm6p").setFromField("value_changed").setToNode("m6").setToField("set_diffuseColor"))
    .addChild(new ROUTE().setFromNode("cm7p").setFromField("value_changed").setToNode("m7").setToField("set_diffuseColor"))
    .addChild(new ROUTE().setFromNode("cm8p").setFromField("value_changed").setToNode("m8").setToField("set_diffuseColor"))
    .addChild(new ROUTE().setFromNode("cm9p").setFromField("value_changed").setToNode("m9").setToField("set_diffuseColor"))
    .addChild(new ROUTE().setFromNode("cm10p").setFromField("value_changed").setToNode("m10").setToField("set_diffuseColor"))
    .addChild(new ROUTE().setFromNode("cm12p").setFromField("value_changed").setToNode("m12").setToField("set_diffuseColor"))
    .addChild(new ROUTE().setFromNode("cm").setFromField("fraction_changed").setToNode("cm11p").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("cm11p").setFromField("value_changed").setToNode("m11").setToField("set_diffuseColor"))
    .addChild(new ROUTE().setFromNode("refresh").setFromField("cycleTime").setToNode("writing").setToField("set_float"))
    .addChild(new ROUTE().setFromNode("writing").setFromField("string_changed").setToNode("text").setToField("set_string")));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return WallClock model
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
        X3D thisExampleX3dModel = new WallClock().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.WallClock\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.WallClock\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

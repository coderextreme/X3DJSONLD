package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.KeyDeviceSensor.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Texturing.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> A simple scene to show KeySensor functionality using Core Profile. </p>
 <p> Related links: <a href="../../../../Sensors/Keyboard/KeySensorActivationKeySwitchTestInterchange.java">KeySensorActivationKeySwitchTestInterchange.java</a> source, <a href="../../../../Sensors/Keyboard/KeySensorActivationKeySwitchTestInterchangeIndex.html" target="_top">KeySensorActivationKeySwitchTestInterchange catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../../Sensors/Keyboard/KeySensorActivationKeySwitchTestInterchange.x3d">KeySensorActivationKeySwitchTestInterchange.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> A simple scene to show KeySensor functionality using Core Profile. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Mr. Philip Sand Hansel II, mr.phillip@home.com </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 8 July 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> This won't work because there is no KeySensor implementation yet! Prototype script (written in Java) or native node support for KeySensor is needed. </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> enabled needs to be changed to exposedField once supported by Script capabilities </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/specification-2000july/part1/nodesDef.html#KeySensor" target="_blank">https://www.web3d.org/x3d/specification-2000july/part1/nodesDef.html#KeySensor</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/sai/javadoc/org/web3d/x3d/sai/Core/KeySensor.html" target="_blank">https://www.web3d.org/x3d/sai/javadoc/org/web3d/x3d/sai/Core/KeySensor.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> KeySensor Core Profile </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/development/KeySensorActivationKeySwitchTestInterchange.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/development/KeySensorActivationKeySwitchTestInterchange.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/ConformanceNist/Sensors/Keyboard/KeySensorActivationKeySwitchTestInterchange.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/ConformanceNist/Sensors/Keyboard/KeySensorActivationKeySwitchTestInterchange.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../../Sensors/Keyboard/../../license.html">../../license.html</a> </td>
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

	* @author Mr. Philip Sand Hansel II, mr.phillip@home.com
 */

public class KeySensorActivationKeySwitchTestInterchange
{
	/** Default constructor to create this object. */
	public KeySensorActivationKeySwitchTestInterchange ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_INTERCHANGE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addComponent(new component().setName("Core").setLevel(2))
    .addComments(" component Core level 2 in support of ExternProtoDeclare hack for KeySensor ")
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("KeySensorActivationKeySwitchTestInterchange.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("A simple scene to show KeySensor functionality using Core Profile."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Mr. Philip Sand Hansel II, mr.phillip@home.com"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("8 July 2001"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("This won't work because there is no KeySensor implementation yet! Prototype script (written in Java) or native node support for KeySensor is needed."))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("enabled needs to be changed to exposedField once supported by Script capabilities"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/x3d/specification-2000july/part1/nodesDef.html#KeySensor"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/x3d/sai/javadoc/org/web3d/x3d/sai/Core/KeySensor.html"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("KeySensor Core Profile"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/x3d/content/examples/development/KeySensorActivationKeySwitchTestInterchange.x3d"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/ConformanceNist/Sensors/Keyboard/KeySensorActivationKeySwitchTestInterchange.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("KeySensorActivationKeySwitchTestInterchange.x3d"))
    .addChild(new ExternProtoDeclare("KeySensor").setName("KeySensor").setUrl(new String[] {"KeySensorActivationKeySwitchTest.wrl#KeySensor","https://www.web3d.org/x3d/content/examples/development/KeySensorActivationKeySwitchTest.wrl#KeySensor","KeySensorActivationKeySwitchTest.x3d#KeySensor","https://www.web3d.org/x3d/content/examples/development/KeySensorActivationKeySwitchTest.x3d#KeySensor"})
      .addField(new field().setName("altKey").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("keyPress").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("set_enabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("keyRelease").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("enabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("shiftKey").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("actionKeyRelease").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("isActive").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("enabled_changed").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("actionKeyPress").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("controlKey").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
    .addChild(new Viewpoint("Viewpoint1").setDescription("Viewpoint1").setFieldOfView(0.79).setPosition(0.0,0.0,30.0))
    .addChild(new KeySensor("SingleKeySensor").setEnabled(false))
    .addChild(new Shape("A")
      .setAppearance(new Appearance()
        .setMaterial(new Material("red").setDiffuseColor(1.0,0.0,0.0))
        .setTexture(new PixelTexture().setImage(new int[] {8,8,1,0,0,0,0,0,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,255,255,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,255,255,255,0,0,0,0,0,0,0,0,0,0,0})))
      .setGeometry(new IndexedFaceSet("slab").setDEF("slab").setCreaseAngle(0.5).setCoordIndex(new int[] {0,1,2,-1,0,2,3,-1})
        .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.5,0.5,0.5,-0.5,-0.5,0.5,0.5,-0.5,0.5,0.5,0.5,0.5})))))
    .addChild(new Shape("B")
      .setAppearance(new Appearance()
        .setMaterial(new Material().setUSE("red"))
        .setTexture(new PixelTexture().setImage(new int[] {8,8,1,0,0,0,0,0,0,0,0,0,255,255,255,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,255,255,0,0,0,0,0,255,0,0,255,0,0,0,0,255,255,255,255,0,0,0,0,0,0,0,0,0,0,0})))
      .setGeometry(new IndexedFaceSet().setUSE("slab")))
    .addChild(new Shape("C")
      .setAppearance(new Appearance()
        .setTextureTransform(new TextureTransform().setScale(0.75,1.0))
        .setMaterial(new Material().setUSE("red"))
        .setTexture(new PixelTexture().setImage(new int[] {8,8,1,0,0,0,0,0,0,0,0,0,0,255,255,255,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0})))
      .setGeometry(new IndexedFaceSet().setUSE("slab")))
    .addChild(new Shape("D")
      .setAppearance(new Appearance()
        .setTextureTransform(new TextureTransform().setScale(0.75,1.0))
        .setMaterial(new Material().setUSE("red"))
        .setTexture(new PixelTexture().setImage(new int[] {8,8,1,0,0,0,0,0,0,0,0,0,255,255,255,0,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0})))
      .setGeometry(new IndexedFaceSet().setUSE("slab")))
    .addChild(new Shape("E")
      .setAppearance(new Appearance()
        .setTextureTransform(new TextureTransform().setScale(0.75,1.0))
        .setMaterial(new Material().setUSE("red"))
        .setTexture(new PixelTexture().setImage(new int[] {8,8,1,0,0,0,0,0,0,0,0,0,255,255,255,255,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,255,255,255,0,0,0,0,255,0,0,0,0,0,0,0,255,255,255,255,0,0,0,0,0,0,0,0,0,0,0})))
      .setGeometry(new IndexedFaceSet().setUSE("slab")))
    .addChild(new Shape("F")
      .setAppearance(new Appearance()
        .setTextureTransform(new TextureTransform().setScale(0.75,1.0))
        .setMaterial(new Material().setUSE("red"))
        .setTexture(new PixelTexture().setImage(new int[] {8,8,1,0,0,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,255,255,255,0,0,0,0,255,0,0,0,0,0,0,0,255,255,255,255,0,0,0,0,0,0,0,0,0,0,0})))
      .setGeometry(new IndexedFaceSet().setUSE("slab")))
    .addChild(new Shape("G")
      .setAppearance(new Appearance()
        .setTextureTransform(new TextureTransform().setScale(0.75,1.0))
        .setMaterial(new Material().setUSE("red"))
        .setTexture(new PixelTexture().setImage(new int[] {8,8,1,0,0,0,0,0,0,0,0,0,0,255,255,0,0,0,0,0,255,0,0,255,0,0,0,0,255,0,255,255,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0})))
      .setGeometry(new IndexedFaceSet().setUSE("slab")))
    .addChild(new Shape("H")
      .setAppearance(new Appearance()
        .setTextureTransform(new TextureTransform().setScale(0.75,1.0))
        .setMaterial(new Material().setUSE("red"))
        .setTexture(new PixelTexture().setImage(new int[] {8,8,1,0,0,0,0,0,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,255,255,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,0,0,0,0,0,0,0})))
      .setGeometry(new IndexedFaceSet().setUSE("slab")))
    .addChild(new Shape("I")
      .setAppearance(new Appearance()
        .setTextureTransform(new TextureTransform().setScale(0.75,1.0))
        .setMaterial(new Material().setUSE("red"))
        .setTexture(new PixelTexture().setImage(new int[] {8,8,1,0,0,0,0,0,0,0,0,255,255,255,255,255,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0,0})))
      .setGeometry(new IndexedFaceSet().setUSE("slab")))
    .addChild(new Shape("J")
      .setAppearance(new Appearance()
        .setTextureTransform(new TextureTransform().setScale(0.75,1.0))
        .setMaterial(new Material().setUSE("red"))
        .setTexture(new PixelTexture().setImage(new int[] {8,8,1,0,0,0,0,0,0,0,0,0,0,255,0,0,0,0,0,0,255,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0})))
      .setGeometry(new IndexedFaceSet().setUSE("slab")))
    .addChild(new Shape("K")
      .setAppearance(new Appearance()
        .setTextureTransform(new TextureTransform().setScale(0.75,1.0))
        .setMaterial(new Material().setUSE("red"))
        .setTexture(new PixelTexture().setImage(new int[] {8,8,1,0,0,0,0,0,0,0,0,0,255,0,0,255,0,0,0,0,255,0,255,0,0,0,0,0,255,0,255,0,0,0,0,0,255,255,0,0,0,0,0,0,255,0,255,0,0,0,0,0,255,0,0,255,0,0,0,0,0,0,0,0,0,0,0})))
      .setGeometry(new IndexedFaceSet().setUSE("slab")))
    .addChild(new Shape("L")
      .setAppearance(new Appearance()
        .setTextureTransform(new TextureTransform().setScale(0.75,1.0))
        .setMaterial(new Material().setUSE("red"))
        .setTexture(new PixelTexture().setImage(new int[] {8,8,1,0,0,0,0,0,0,0,0,0,255,255,255,255,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0})))
      .setGeometry(new IndexedFaceSet().setUSE("slab")))
    .addChild(new Shape("M")
      .setAppearance(new Appearance()
        .setTextureTransform(new TextureTransform().setScale(0.75,1.0))
        .setMaterial(new Material().setUSE("red"))
        .setTexture(new PixelTexture().setImage(new int[] {8,8,1,0,0,0,0,0,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,255,0,255,0,0,0,255,0,255,0,255,0,0,0,0,255,0,255,0,0,0,0,0,0,0,0,0,0,0,0})))
      .setGeometry(new IndexedFaceSet().setUSE("slab")))
    .addChild(new Shape("N")
      .setAppearance(new Appearance()
        .setTextureTransform(new TextureTransform().setScale(0.75,1.0))
        .setMaterial(new Material().setUSE("red"))
        .setTexture(new PixelTexture().setImage(new int[] {8,8,1,0,0,0,0,0,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,255,255,0,0,0,0,255,255,0,255,0,0,0,0,255,0,0,255,0,0,0,0,0,0,0,0,0,0,0})))
      .setGeometry(new IndexedFaceSet().setUSE("slab")))
    .addChild(new Shape("O")
      .setAppearance(new Appearance()
        .setTextureTransform(new TextureTransform().setScale(0.75,1.0))
        .setMaterial(new Material().setUSE("red"))
        .setTexture(new PixelTexture().setImage(new int[] {8,8,1,0,0,0,0,0,0,0,0,0,255,255,255,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,255,255,255,0,0,0,0,0,0,0,0,0,0,0})))
      .setGeometry(new IndexedFaceSet().setUSE("slab")))
    .addChild(new Shape("P")
      .setAppearance(new Appearance()
        .setTextureTransform(new TextureTransform().setScale(0.75,1.0))
        .setMaterial(new Material().setUSE("red"))
        .setTexture(new PixelTexture().setImage(new int[] {8,8,1,0,0,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,255,255,0,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0})))
      .setGeometry(new IndexedFaceSet().setUSE("slab")))
    .addChild(new Shape("Q")
      .setAppearance(new Appearance()
        .setTextureTransform(new TextureTransform().setScale(0.75,1.0))
        .setMaterial(new Material().setUSE("red"))
        .setTexture(new PixelTexture().setImage(new int[] {8,8,1,0,0,0,0,0,255,0,0,0,0,255,255,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,0,255,255,0,0,0,0,0,0,0,0,0,0,0,0})))
      .setGeometry(new IndexedFaceSet().setUSE("slab")))
    .addChild(new Shape("R")
      .setAppearance(new Appearance()
        .setTextureTransform(new TextureTransform().setScale(0.75,1.0))
        .setMaterial(new Material().setUSE("red"))
        .setTexture(new PixelTexture().setImage(new int[] {8,8,1,0,0,0,0,0,0,0,0,0,255,0,0,255,0,0,0,0,255,0,255,0,0,0,0,0,255,255,0,0,0,0,0,0,255,0,255,0,0,0,0,0,255,0,0,255,0,0,0,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0})))
      .setGeometry(new IndexedFaceSet().setUSE("slab")))
    .addChild(new Shape("S")
      .setAppearance(new Appearance()
        .setTextureTransform(new TextureTransform().setScale(0.75,1.0))
        .setMaterial(new Material().setUSE("red"))
        .setTexture(new PixelTexture().setImage(new int[] {8,8,1,0,0,0,0,0,0,0,0,0,255,255,255,0,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,255,255,0,0,0,0,0,255,0,0,0,0,0,0,0,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0})))
      .setGeometry(new IndexedFaceSet().setUSE("slab")))
    .addChild(new Shape("T")
      .setAppearance(new Appearance()
        .setTextureTransform(new TextureTransform().setScale(0.75,1.0))
        .setMaterial(new Material().setUSE("red"))
        .setTexture(new PixelTexture().setImage(new int[] {8,8,1,0,0,0,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0,0})))
      .setGeometry(new IndexedFaceSet().setUSE("slab")))
    .addChild(new Shape("U")
      .setAppearance(new Appearance()
        .setTextureTransform(new TextureTransform().setScale(0.75,1.0))
        .setMaterial(new Material().setUSE("red"))
        .setTexture(new PixelTexture().setImage(new int[] {8,8,1,0,0,0,0,0,0,0,0,0,255,255,255,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,0,0,0,0,0,0,0})))
      .setGeometry(new IndexedFaceSet().setUSE("slab")))
    .addChild(new Shape("V")
      .setAppearance(new Appearance()
        .setTextureTransform(new TextureTransform().setScale(0.75,1.0))
        .setMaterial(new Material().setUSE("red"))
        .setTexture(new PixelTexture().setImage(new int[] {8,8,1,0,0,0,0,0,0,0,0,0,0,255,0,0,0,0,0,0,255,0,255,0,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,0,0,0,0,0,0,0,0})))
      .setGeometry(new IndexedFaceSet().setUSE("slab")))
    .addChild(new Shape("W")
      .setAppearance(new Appearance()
        .setTextureTransform(new TextureTransform().setScale(0.75,1.0))
        .setMaterial(new Material().setUSE("red"))
        .setTexture(new PixelTexture().setImage(new int[] {8,8,1,0,0,0,0,0,0,0,0,0,255,0,255,0,0,0,0,255,0,255,0,255,0,0,0,255,0,255,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,0,0,0,0,0,0,0,0})))
      .setGeometry(new IndexedFaceSet().setUSE("slab")))
    .addChild(new Shape("X")
      .setAppearance(new Appearance()
        .setTextureTransform(new TextureTransform().setScale(0.75,1.0))
        .setMaterial(new Material().setUSE("red"))
        .setTexture(new PixelTexture().setImage(new int[] {8,8,1,0,0,0,0,0,0,0,0,255,0,0,0,255,0,0,0,0,255,0,255,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,255,0,255,0,0,0,0,255,0,0,0,255,0,0,0,0,0,0,0,0,0,0,0})))
      .setGeometry(new IndexedFaceSet().setUSE("slab")))
    .addChild(new Shape("Y")
      .setAppearance(new Appearance()
        .setTextureTransform(new TextureTransform().setScale(0.75,1.0))
        .setMaterial(new Material().setUSE("red"))
        .setTexture(new PixelTexture().setImage(new int[] {8,8,1,0,0,0,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,255,0,255,0,0,0,0,255,0,0,0,255,0,0,0,0,0,0,0,0,0,0,0})))
      .setGeometry(new IndexedFaceSet().setUSE("slab")))
    .addChild(new Shape("Z")
      .setAppearance(new Appearance()
        .setTextureTransform(new TextureTransform().setScale(0.75,1.0))
        .setMaterial(new Material().setUSE("red"))
        .setTexture(new PixelTexture().setImage(new int[] {8,8,1,0,0,0,0,0,0,0,0,0,255,255,255,255,0,0,0,0,255,0,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,0,255,0,0,0,0,255,255,255,255,0,0,0,0,0,0,0,0,0,0,0})))
      .setGeometry(new IndexedFaceSet().setUSE("slab")))
    .addChild(new Shape("One")
      .setAppearance(new Appearance()
        .setTextureTransform(new TextureTransform().setScale(0.75,1.0))
        .setMaterial(new Material().setUSE("red"))
        .setTexture(new PixelTexture().setImage(new int[] {8,8,1,0,0,0,0,0,0,0,0,0,255,255,255,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0})))
      .setGeometry(new IndexedFaceSet().setUSE("slab")))
    .addChild(new Shape("Two")
      .setAppearance(new Appearance()
        .setTextureTransform(new TextureTransform().setScale(0.75,1.0))
        .setMaterial(new Material().setUSE("red"))
        .setTexture(new PixelTexture().setImage(new int[] {8,8,1,0,0,0,0,0,0,0,0,0,255,255,255,255,0,0,0,0,0,255,0,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0})))
      .setGeometry(new IndexedFaceSet().setUSE("slab")))
    .addChild(new Shape("Three")
      .setAppearance(new Appearance()
        .setTextureTransform(new TextureTransform().setScale(0.75,1.0))
        .setMaterial(new Material().setUSE("red"))
        .setTexture(new PixelTexture().setImage(new int[] {8,8,1,0,0,0,0,0,0,0,0,0,255,255,255,0,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,0,255,0,0,0,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0})))
      .setGeometry(new IndexedFaceSet().setUSE("slab")))
    .addChild(new Shape("Four")
      .setAppearance(new Appearance()
        .setTextureTransform(new TextureTransform().setScale(0.75,1.0))
        .setMaterial(new Material().setUSE("red"))
        .setTexture(new PixelTexture().setImage(new int[] {8,8,1,0,0,0,0,0,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,255,255,255,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,0,0,0,0,0,0,0})))
      .setGeometry(new IndexedFaceSet().setUSE("slab")))
    .addChild(new Shape("Five")
      .setAppearance(new Appearance()
        .setTextureTransform(new TextureTransform().setScale(0.75,1.0))
        .setMaterial(new Material().setUSE("red"))
        .setTexture(new PixelTexture().setImage(new int[] {8,8,1,0,0,0,0,0,0,0,0,0,255,255,255,0,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,255,255,255,0,0,0,0,0,255,0,0,0,0,0,0,0,255,255,255,255,0,0,0,0,0,0,0,0,0,0,0})))
      .setGeometry(new IndexedFaceSet().setUSE("slab")))
    .addChild(new Shape("Six")
      .setAppearance(new Appearance()
        .setTextureTransform(new TextureTransform().setScale(0.75,1.0))
        .setMaterial(new Material().setUSE("red"))
        .setTexture(new PixelTexture().setImage(new int[] {8,8,1,0,0,0,0,0,0,0,0,0,0,255,255,0,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,255,255,0,0,0,0,0,255,0,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,0,0,0,0,0,0})))
      .setGeometry(new IndexedFaceSet().setUSE("slab")))
    .addChild(new Shape("Seven")
      .setAppearance(new Appearance()
        .setTextureTransform(new TextureTransform().setScale(0.75,1.0))
        .setMaterial(new Material().setUSE("red"))
        .setTexture(new PixelTexture().setImage(new int[] {8,8,1,0,0,0,0,0,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,255,255,255,255,0,0,0,0,0,0,0,0,0,0,0})))
      .setGeometry(new IndexedFaceSet().setUSE("slab")))
    .addChild(new Shape("Eight")
      .setAppearance(new Appearance()
        .setTextureTransform(new TextureTransform().setScale(0.75,1.0))
        .setMaterial(new Material().setUSE("red"))
        .setTexture(new PixelTexture().setImage(new int[] {8,8,1,0,0,0,0,0,0,0,0,0,0,255,255,0,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,0,255,255,0,0,0,0,0,255,0,0,255,0,0,0,0,0,255,255,0,0,0,0,0,0,0,0,0,0,0,0})))
      .setGeometry(new IndexedFaceSet().setUSE("slab")))
    .addChild(new Shape("Nine")
      .setAppearance(new Appearance()
        .setTextureTransform(new TextureTransform().setScale(0.75,1.0))
        .setMaterial(new Material().setUSE("red"))
        .setTexture(new PixelTexture().setImage(new int[] {8,8,1,0,0,0,0,0,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,255,0,0,0,0,0,255,255,255,0,0,0,0,255,0,0,255,0,0,0,0,0,255,255,255,0,0,0,0,0,0,0,0,0,0,0})))
      .setGeometry(new IndexedFaceSet().setUSE("slab")))
    .addChild(new Shape("Zero")
      .setAppearance(new Appearance()
        .setTextureTransform(new TextureTransform().setScale(0.75,1.0))
        .setMaterial(new Material().setUSE("red"))
        .setTexture(new PixelTexture().setImage(new int[] {8,8,1,0,0,0,0,0,0,0,0,0,0,255,255,0,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,255,0,0,255,0,0,0,0,0,255,255,0,0,0,0,0,0,0,0,0,0,0,0})))
      .setGeometry(new IndexedFaceSet().setUSE("slab")))
    .addChild(new Shape("Colon")
      .setAppearance(new Appearance()
        .setTextureTransform(new TextureTransform().setScale(0.75,1.0))
        .setMaterial(new Material().setUSE("red"))
        .setTexture(new PixelTexture().setImage(new int[] {8,8,1,0,0,0,0,0,0,0,0,0,0,255,255,0,0,0,0,0,0,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,0,0,0,0,0,0,255,255,0,0,0,0,0,0,0,0,0,0,0,0})))
      .setGeometry(new IndexedFaceSet().setUSE("slab")))
    .addChild(new Shape("Comma")
      .setAppearance(new Appearance()
        .setTextureTransform(new TextureTransform().setScale(0.75,1.0))
        .setMaterial(new Material().setUSE("red"))
        .setTexture(new PixelTexture().setImage(new int[] {8,8,1,0,0,0,255,0,0,0,0,0,0,255,255,0,0,0,0,0,0,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0})))
      .setGeometry(new IndexedFaceSet().setUSE("slab")))
    .addChild(new Shape("Dot")
      .setAppearance(new Appearance()
        .setTextureTransform(new TextureTransform().setScale(0.75,1.0))
        .setMaterial(new Material().setUSE("red"))
        .setTexture(new PixelTexture().setImage(new int[] {8,8,1,0,0,0,0,0,0,0,0,0,0,255,255,0,0,0,0,0,0,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0})))
      .setGeometry(new IndexedFaceSet().setUSE("slab")))
    .addChild(new Group()
      .addChild(new Transform().setTranslation(0.0,5.0,0.0)
        .addChild(new Transform().setTranslation(-12.0,0.0,0.0)
          .addChild(new Shape().setUSE("T")))
        .addChild(new Transform().setTranslation(-11.0,0.0,0.0)
          .addChild(new Shape().setUSE("O")))
        .addChild(new Transform().setTranslation(-10.0,0.0,0.0)
          .addChild(new Shape().setUSE("U")))
        .addChild(new Transform().setTranslation(-9.0,0.0,0.0)
          .addChild(new Shape().setUSE("C")))
        .addChild(new Transform().setTranslation(-8.0,0.0,0.0)
          .addChild(new Shape().setUSE("H")))
        .addChild(new Transform().setTranslation(-6.0,0.0,0.0)
          .addChild(new Shape().setUSE("T")))
        .addChild(new Transform().setTranslation(-5.0,0.0,0.0)
          .addChild(new Shape().setUSE("H")))
        .addChild(new Transform().setTranslation(-4.0,0.0,0.0)
          .addChild(new Shape().setUSE("I")))
        .addChild(new Transform().setTranslation(-3.0,0.0,0.0)
          .addChild(new Shape().setUSE("S")))
        .addChild(new Transform().setTranslation(-1.0,0.0,0.0)
          .addChild(new Shape().setUSE("T")))
        .addChild(new Transform()
          .addChild(new Shape().setUSE("E")))
        .addChild(new Transform().setTranslation(1.0,0.0,0.0)
          .addChild(new Shape().setUSE("X")))
        .addChild(new Transform().setTranslation(2.0,0.0,0.0)
          .addChild(new Shape().setUSE("T")))
        .addChild(new Transform().setTranslation(4.0,0.0,0.0)
          .addChild(new Shape().setUSE("T")))
        .addChild(new Transform().setTranslation(5.0,0.0,0.0)
          .addChild(new Shape().setUSE("O")))
        .addChild(new Transform().setTranslation(7.0,0.0,0.0)
          .addChild(new Shape().setUSE("E")))
        .addChild(new Transform().setTranslation(8.0,0.0,0.0)
          .addChild(new Shape().setUSE("N")))
        .addChild(new Transform().setTranslation(9.0,0.0,0.0)
          .addChild(new Shape().setUSE("A")))
        .addChild(new Transform().setTranslation(10.0,0.0,0.0)
          .addChild(new Shape().setUSE("B")))
        .addChild(new Transform().setTranslation(11.0,0.0,0.0)
          .addChild(new Shape().setUSE("L")))
        .addChild(new Transform().setTranslation(12.0,0.0,0.0)
          .addChild(new Shape().setUSE("E")))
        .addChild(new Transform().setTranslation(-15.0,-1.0,0.0)
          .addChild(new Shape().setUSE("K")))
        .addChild(new Transform().setTranslation(-14.0,-1.0,0.0)
          .addChild(new Shape().setUSE("E")))
        .addChild(new Transform().setTranslation(-13.0,-1.0,0.0)
          .addChild(new Shape().setUSE("Y")))
        .addChild(new Transform().setTranslation(-12.0,-1.0,0.0)
          .addChild(new Shape().setUSE("S")))
        .addChild(new Transform().setTranslation(-11.0,-1.0,0.0)
          .addChild(new Shape().setUSE("E")))
        .addChild(new Transform().setTranslation(-10.0,-1.0,0.0)
          .addChild(new Shape().setUSE("N")))
        .addChild(new Transform().setTranslation(-9.0,-1.0,0.0)
          .addChild(new Shape().setUSE("S")))
        .addChild(new Transform().setTranslation(-8.0,-1.0,0.0)
          .addChild(new Shape().setUSE("O")))
        .addChild(new Transform().setTranslation(-7.0,-1.0,0.0)
          .addChild(new Shape().setUSE("R")))
        .addChild(new Transform().setTranslation(-5.0,-1.0,0.0)
          .addChild(new Shape().setUSE("A")))
        .addChild(new Transform().setTranslation(-4.0,-1.0,0.0)
          .addChild(new Shape().setUSE("C")))
        .addChild(new Transform().setTranslation(-3.0,-1.0,0.0)
          .addChild(new Shape().setUSE("T")))
        .addChild(new Transform().setTranslation(-2.0,-1.0,0.0)
          .addChild(new Shape().setUSE("I")))
        .addChild(new Transform().setTranslation(-1.0,-1.0,0.0)
          .addChild(new Shape().setUSE("V")))
        .addChild(new Transform().setTranslation(0.0,-1.0,0.0)
          .addChild(new Shape().setUSE("A")))
        .addChild(new Transform().setTranslation(1.0,-1.0,0.0)
          .addChild(new Shape().setUSE("T")))
        .addChild(new Transform().setTranslation(2.0,-1.0,0.0)
          .addChild(new Shape().setUSE("I")))
        .addChild(new Transform().setTranslation(3.0,-1.0,0.0)
          .addChild(new Shape().setUSE("O")))
        .addChild(new Transform().setTranslation(4.0,-1.0,0.0)
          .addChild(new Shape().setUSE("N")))
        .addChild(new Transform().setTranslation(6.0,-1.0,0.0)
          .addChild(new Shape().setUSE("K")))
        .addChild(new Transform().setTranslation(7.0,-1.0,0.0)
          .addChild(new Shape().setUSE("E")))
        .addChild(new Transform().setTranslation(8.0,-1.0,0.0)
          .addChild(new Shape().setUSE("Y")))
        .addChild(new Transform().setTranslation(9.0,-1.0,0.0)
          .addChild(new Shape().setUSE("S")))
        .addChild(new Transform().setTranslation(10.0,-1.0,0.0)
          .addChild(new Shape().setUSE("Comma")))
        .addChild(new Transform().setTranslation(12.0,-1.0,0.0)
          .addChild(new Shape().setUSE("T")))
        .addChild(new Transform().setTranslation(13.0,-1.0,0.0)
          .addChild(new Shape().setUSE("H")))
        .addChild(new Transform().setTranslation(14.0,-1.0,0.0)
          .addChild(new Shape().setUSE("E")))
        .addChild(new Transform().setTranslation(15.0,-1.0,0.0)
          .addChild(new Shape().setUSE("N")))
        .addChild(new Transform().setTranslation(-15.0,-2.0,0.0)
          .addChild(new Shape().setUSE("P")))
        .addChild(new Transform().setTranslation(-14.0,-2.0,0.0)
          .addChild(new Shape().setUSE("R")))
        .addChild(new Transform().setTranslation(-13.0,-2.0,0.0)
          .addChild(new Shape().setUSE("E")))
        .addChild(new Transform().setTranslation(-12.0,-2.0,0.0)
          .addChild(new Shape().setUSE("S")))
        .addChild(new Transform().setTranslation(-11.0,-2.0,0.0)
          .addChild(new Shape().setUSE("S")))
        .addChild(new Transform().setTranslation(-9.0,-2.0,0.0)
          .addChild(new Shape().setUSE("A")))
        .addChild(new Transform().setTranslation(-8.0,-2.0,0.0)
          .addChild(new Shape().setUSE("C")))
        .addChild(new Transform().setTranslation(-7.0,-2.0,0.0)
          .addChild(new Shape().setUSE("T")))
        .addChild(new Transform().setTranslation(-6.0,-2.0,0.0)
          .addChild(new Shape().setUSE("I")))
        .addChild(new Transform().setTranslation(-5.0,-2.0,0.0)
          .addChild(new Shape().setUSE("V")))
        .addChild(new Transform().setTranslation(-4.0,-2.0,0.0)
          .addChild(new Shape().setUSE("A")))
        .addChild(new Transform().setTranslation(-3.0,-2.0,0.0)
          .addChild(new Shape().setUSE("T")))
        .addChild(new Transform().setTranslation(-2.0,-2.0,0.0)
          .addChild(new Shape().setUSE("I")))
        .addChild(new Transform().setTranslation(-1.0,-2.0,0.0)
          .addChild(new Shape().setUSE("O")))
        .addChild(new Transform().setTranslation(0.0,-2.0,0.0)
          .addChild(new Shape().setUSE("N")))
        .addChild(new Transform().setTranslation(2.0,-2.0,0.0)
          .addChild(new Shape().setUSE("K")))
        .addChild(new Transform().setTranslation(3.0,-2.0,0.0)
          .addChild(new Shape().setUSE("E")))
        .addChild(new Transform().setTranslation(4.0,-2.0,0.0)
          .addChild(new Shape().setUSE("Y")))
        .addChild(new Transform().setTranslation(5.0,-2.0,0.0)
          .addChild(new Shape().setUSE("S")))
        .addChild(new Transform().setTranslation(7.0,-2.0,0.0)
          .addChild(new Shape().setUSE("T")))
        .addChild(new Transform().setTranslation(8.0,-2.0,0.0)
          .addChild(new Shape().setUSE("O")))
        .addChild(new Transform().setTranslation(10.0,-2.0,0.0)
          .addChild(new Shape().setUSE("T")))
        .addChild(new Transform().setTranslation(11.0,-2.0,0.0)
          .addChild(new Shape().setUSE("E")))
        .addChild(new Transform().setTranslation(12.0,-2.0,0.0)
          .addChild(new Shape().setUSE("S")))
        .addChild(new Transform().setTranslation(13.0,-2.0,0.0)
          .addChild(new Shape().setUSE("T")))
        .addChild(new Transform().setTranslation(14.0,-2.0,0.0)
          .addChild(new Shape().setUSE("Dot"))))
      .addChild(new Switch("ActivationKeyMessageSwitch").setWhichChoice(0)
        .addChild(new Transform("Nokeypress").setTranslation(-2.0,0.0,0.0)
          .addChild(new Transform().setTranslation(-13.0,-4.0,0.0)
            .addChild(new Shape().setUSE("N")))
          .addChild(new Transform().setTranslation(-12.0,-4.0,0.0)
            .addChild(new Shape().setUSE("O")))
          .addChild(new Transform().setTranslation(-10.0,-4.0,0.0)
            .addChild(new Shape().setUSE("A")))
          .addChild(new Transform().setTranslation(-9.0,-4.0,0.0)
            .addChild(new Shape().setUSE("C")))
          .addChild(new Transform().setTranslation(-8.0,-4.0,0.0)
            .addChild(new Shape().setUSE("T")))
          .addChild(new Transform().setTranslation(-7.0,-4.0,0.0)
            .addChild(new Shape().setUSE("I")))
          .addChild(new Transform().setTranslation(-6.0,-4.0,0.0)
            .addChild(new Shape().setUSE("V")))
          .addChild(new Transform().setTranslation(-5.0,-4.0,0.0)
            .addChild(new Shape().setUSE("A")))
          .addChild(new Transform().setTranslation(-4.0,-4.0,0.0)
            .addChild(new Shape().setUSE("T")))
          .addChild(new Transform().setTranslation(-3.0,-4.0,0.0)
            .addChild(new Shape().setUSE("I")))
          .addChild(new Transform().setTranslation(-2.0,-4.0,0.0)
            .addChild(new Shape().setUSE("O")))
          .addChild(new Transform().setTranslation(-1.0,-4.0,0.0)
            .addChild(new Shape().setUSE("N")))
          .addChild(new Transform().setTranslation(1.0,-4.0,0.0)
            .addChild(new Shape().setUSE("K")))
          .addChild(new Transform().setTranslation(2.0,-4.0,0.0)
            .addChild(new Shape().setUSE("E")))
          .addChild(new Transform().setTranslation(3.0,-4.0,0.0)
            .addChild(new Shape().setUSE("Y")))
          .addChild(new Transform().setTranslation(4.0,-4.0,0.0)
            .addChild(new Shape().setUSE("P")))
          .addChild(new Transform().setTranslation(5.0,-4.0,0.0)
            .addChild(new Shape().setUSE("R")))
          .addChild(new Transform().setTranslation(6.0,-4.0,0.0)
            .addChild(new Shape().setUSE("E")))
          .addChild(new Transform().setTranslation(7.0,-4.0,0.0)
            .addChild(new Shape().setUSE("S")))
          .addChild(new Transform().setTranslation(8.0,-4.0,0.0)
            .addChild(new Shape().setUSE("S")))
          .addChild(new Transform().setTranslation(10.0,-4.0,0.0)
            .addChild(new Shape().setUSE("S")))
          .addChild(new Transform().setTranslation(11.0,-4.0,0.0)
            .addChild(new Shape().setUSE("E")))
          .addChild(new Transform().setTranslation(12.0,-4.0,0.0)
            .addChild(new Shape().setUSE("N")))
          .addChild(new Transform().setTranslation(13.0,-4.0,0.0)
            .addChild(new Shape().setUSE("S")))
          .addChild(new Transform().setTranslation(14.0,-4.0,0.0)
            .addChild(new Shape().setUSE("E")))
          .addChild(new Transform().setTranslation(15.0,-4.0,0.0)
            .addChild(new Shape().setUSE("D")))
          .addChild(new Transform().setTranslation(16.0,-4.0,0.0)
            .addChild(new Shape().setUSE("Dot")))
          .addChild(new Transform().setTranslation(17.0,-4.0,0.0)
            .addChild(new Shape().setUSE("Dot"))))
        .addChild(new Transform("Functions").setTranslation(0.0,-6.0,0.0)
          .addChild(new Transform("F1")
            .addChild(new Transform().setTranslation(-1.0,0.0,0.0)
              .addChild(new Shape().setUSE("F")))
            .addChild(new Transform()
              .addChild(new Shape().setUSE("One"))))
          .addChild(new Transform("F2").setTranslation(0.0,-1.0,0.0)
            .addChild(new Transform().setTranslation(-1.0,0.0,0.0)
              .addChild(new Shape().setUSE("F")))
            .addChild(new Transform()
              .addChild(new Shape().setUSE("Two"))))
          .addChild(new Transform("F3").setTranslation(0.0,-2.0,0.0)
            .addChild(new Transform().setTranslation(-1.0,0.0,0.0)
              .addChild(new Shape().setUSE("F")))
            .addChild(new Transform()
              .addChild(new Shape().setUSE("Three"))))
          .addChild(new Transform("F4").setTranslation(0.0,-3.0,0.0)
            .addChild(new Transform().setTranslation(-1.0,0.0,0.0)
              .addChild(new Shape().setUSE("F")))
            .addChild(new Transform()
              .addChild(new Shape().setUSE("Four"))))
          .addChild(new Transform("F5").setTranslation(0.0,-4.0,0.0)
            .addChild(new Transform().setTranslation(-1.0,0.0,0.0)
              .addChild(new Shape().setUSE("F")))
            .addChild(new Transform()
              .addChild(new Shape().setUSE("Five"))))
          .addChild(new Transform("F6").setTranslation(0.0,-5.0,0.0)
            .addChild(new Transform().setTranslation(-1.0,0.0,0.0)
              .addChild(new Shape().setUSE("F")))
            .addChild(new Transform()
              .addChild(new Shape().setUSE("Six"))))
          .addChild(new Transform("F7").setTranslation(0.0,-6.0,0.0)
            .addChild(new Transform().setTranslation(-1.0,0.0,0.0)
              .addChild(new Shape().setUSE("F")))
            .addChild(new Transform()
              .addChild(new Shape().setUSE("Seven"))))
          .addChild(new Transform("F8").setTranslation(0.0,-7.0,0.0)
            .addChild(new Transform().setTranslation(-1.0,0.0,0.0)
              .addChild(new Shape().setUSE("F")))
            .addChild(new Transform()
              .addChild(new Shape().setUSE("Eight"))))
          .addChild(new Transform("F9").setTranslation(0.0,-8.0,0.0)
            .addChild(new Transform().setTranslation(-1.0,0.0,0.0)
              .addChild(new Shape().setUSE("F")))
            .addChild(new Transform()
              .addChild(new Shape().setUSE("Nine"))))
          .addChild(new Transform("F10").setTranslation(0.0,-9.0,0.0)
            .addChild(new Transform().setTranslation(-1.0,0.0,0.0)
              .addChild(new Shape().setUSE("F")))
            .addChild(new Transform()
              .addChild(new Shape().setUSE("One")))
            .addChild(new Transform().setTranslation(1.0,0.0,0.0)
              .addChild(new Shape().setUSE("Zero"))))
          .addChild(new Transform("F11").setTranslation(0.0,-10.0,0.0)
            .addChild(new Transform().setTranslation(-1.0,0.0,0.0)
              .addChild(new Shape().setUSE("F")))
            .addChild(new Transform()
              .addChild(new Shape().setUSE("One")))
            .addChild(new Transform().setTranslation(1.0,0.0,0.0)
              .addChild(new Shape().setUSE("One"))))
          .addChild(new Transform("F12").setTranslation(0.0,-11.0,0.0)
            .addChild(new Transform().setTranslation(-1.0,0.0,0.0)
              .addChild(new Shape().setUSE("F")))
            .addChild(new Transform()
              .addChild(new Shape().setUSE("One")))
            .addChild(new Transform().setTranslation(1.0,0.0,0.0)
              .addChild(new Shape().setUSE("Two"))))
          .addChild(new Transform("Home").setTranslation(0.0,-12.0,0.0)
            .addChild(new Transform().setTranslation(-3.0,0.0,0.0)
              .addChild(new Shape().setUSE("One")))
            .addChild(new Transform().setTranslation(-2.0,0.0,0.0)
              .addChild(new Shape().setUSE("Three")))
            .addChild(new Transform().setTranslation(-1.0,0.0,0.0)
              .addChild(new Shape().setUSE("Colon")))
            .addChild(new Transform()
              .addChild(new Shape().setUSE("H")))
            .addChild(new Transform().setTranslation(1.0,0.0,0.0)
              .addChild(new Shape().setUSE("O")))
            .addChild(new Transform().setTranslation(2.0,0.0,0.0)
              .addChild(new Shape().setUSE("M")))
            .addChild(new Transform().setTranslation(3.0,0.0,0.0)
              .addChild(new Shape().setUSE("E"))))
          .addChild(new Transform("End").setTranslation(0.0,-13.0,0.0)
            .addChild(new Transform().setTranslation(-3.0,0.0,0.0)
              .addChild(new Shape().setUSE("One")))
            .addChild(new Transform().setTranslation(-2.0,0.0,0.0)
              .addChild(new Shape().setUSE("Four")))
            .addChild(new Transform().setTranslation(-1.0,0.0,0.0)
              .addChild(new Shape().setUSE("Colon")))
            .addChild(new Transform()
              .addChild(new Shape().setUSE("E")))
            .addChild(new Transform().setTranslation(1.0,0.0,0.0)
              .addChild(new Shape().setUSE("N")))
            .addChild(new Transform().setTranslation(2.0,0.0,0.0)
              .addChild(new Shape().setUSE("D"))))
          .addChild(new Transform("Left").setTranslation(0.0,-14.0,0.0)
            .addChild(new Transform().setTranslation(-3.0,0.0,0.0)
              .addChild(new Shape().setUSE("One")))
            .addChild(new Transform().setTranslation(-2.0,0.0,0.0)
              .addChild(new Shape().setUSE("Five")))
            .addChild(new Transform().setTranslation(-1.0,0.0,0.0)
              .addChild(new Shape().setUSE("Colon")))
            .addChild(new Transform()
              .addChild(new Shape().setUSE("L")))
            .addChild(new Transform().setTranslation(1.0,0.0,0.0)
              .addChild(new Shape().setUSE("E")))
            .addChild(new Transform().setTranslation(2.0,0.0,0.0)
              .addChild(new Shape().setUSE("F")))
            .addChild(new Transform().setTranslation(2.0,0.0,0.0)
              .addChild(new Shape().setUSE("T"))))
          .addChild(new Transform("Right").setTranslation(0.0,-15.0,0.0)
            .addChild(new Transform().setTranslation(-3.0,0.0,0.0)
              .addChild(new Shape().setUSE("One")))
            .addChild(new Transform().setTranslation(-2.0,0.0,0.0)
              .addChild(new Shape().setUSE("Six")))
            .addChild(new Transform().setTranslation(-1.0,0.0,0.0)
              .addChild(new Shape().setUSE("Colon")))
            .addChild(new Transform()
              .addChild(new Shape().setUSE("R")))
            .addChild(new Transform().setTranslation(1.0,0.0,0.0)
              .addChild(new Shape().setUSE("I")))
            .addChild(new Transform().setTranslation(2.0,0.0,0.0)
              .addChild(new Shape().setUSE("G")))
            .addChild(new Transform().setTranslation(2.0,0.0,0.0)
              .addChild(new Shape().setUSE("H")))
            .addChild(new Transform().setTranslation(2.0,0.0,0.0)
              .addChild(new Shape().setUSE("T"))))
          .addChild(new Transform("Up").setTranslation(0.0,-16.0,0.0)
            .addChild(new Transform().setTranslation(-3.0,0.0,0.0)
              .addChild(new Shape().setUSE("One")))
            .addChild(new Transform().setTranslation(-2.0,0.0,0.0)
              .addChild(new Shape().setUSE("Seven")))
            .addChild(new Transform().setTranslation(-1.0,0.0,0.0)
              .addChild(new Shape().setUSE("Colon")))
            .addChild(new Transform()
              .addChild(new Shape().setUSE("U")))
            .addChild(new Transform().setTranslation(1.0,0.0,0.0)
              .addChild(new Shape().setUSE("P"))))
          .addChild(new Transform("Down").setTranslation(0.0,-17.0,0.0)
            .addChild(new Transform().setTranslation(-3.0,0.0,0.0)
              .addChild(new Shape().setUSE("One")))
            .addChild(new Transform().setTranslation(-2.0,0.0,0.0)
              .addChild(new Shape().setUSE("Eight")))
            .addChild(new Transform().setTranslation(-1.0,0.0,0.0)
              .addChild(new Shape().setUSE("Colon")))
            .addChild(new Transform()
              .addChild(new Shape().setUSE("D")))
            .addChild(new Transform().setTranslation(1.0,0.0,0.0)
              .addChild(new Shape().setUSE("O")))
            .addChild(new Transform().setTranslation(2.0,0.0,0.0)
              .addChild(new Shape().setUSE("W")))
            .addChild(new Transform().setTranslation(2.0,0.0,0.0)
              .addChild(new Shape().setUSE("N"))))
          .addChild(new Transform("PGUP").setTranslation(0.0,-18.0,0.0)
            .addChild(new Transform().setTranslation(-3.0,0.0,0.0)
              .addChild(new Shape().setUSE("One")))
            .addChild(new Transform().setTranslation(-2.0,0.0,0.0)
              .addChild(new Shape().setUSE("Nine")))
            .addChild(new Transform().setTranslation(-1.0,0.0,0.0)
              .addChild(new Shape().setUSE("Colon")))
            .addChild(new Transform()
              .addChild(new Shape().setUSE("P")))
            .addChild(new Transform().setTranslation(1.0,0.0,0.0)
              .addChild(new Shape().setUSE("G")))
            .addChild(new Transform().setTranslation(2.0,0.0,0.0)
              .addChild(new Shape().setUSE("U")))
            .addChild(new Transform().setTranslation(2.0,0.0,0.0)
              .addChild(new Shape().setUSE("P"))))
          .addChild(new Transform("PGDN").setTranslation(0.0,-19.0,0.0)
            .addChild(new Transform().setTranslation(-3.0,0.0,0.0)
              .addChild(new Shape().setUSE("Two")))
            .addChild(new Transform().setTranslation(-2.0,0.0,0.0)
              .addChild(new Shape().setUSE("Zero")))
            .addChild(new Transform().setTranslation(-1.0,0.0,0.0)
              .addChild(new Shape().setUSE("Colon")))
            .addChild(new Transform()
              .addChild(new Shape().setUSE("P")))
            .addChild(new Transform().setTranslation(1.0,0.0,0.0)
              .addChild(new Shape().setUSE("G")))
            .addChild(new Transform().setTranslation(2.0,0.0,0.0)
              .addChild(new Shape().setUSE("D")))
            .addChild(new Transform().setTranslation(2.0,0.0,0.0)
              .addChild(new Shape().setUSE("N")))))))
    .addChild(new ROUTE().setFromNode("SingleKeySensor").setFromField("actionKeyPress").setToNode("ActivationKeyMessageSwitch").setToField("whichChoice")));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return KeySensorActivationKeySwitchTestInterchange model
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
        X3D thisExampleX3dModel = new KeySensorActivationKeySwitchTestInterchange().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.KeySensorActivationKeySwitchTestInterchange\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.KeySensorActivationKeySwitchTestInterchange\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

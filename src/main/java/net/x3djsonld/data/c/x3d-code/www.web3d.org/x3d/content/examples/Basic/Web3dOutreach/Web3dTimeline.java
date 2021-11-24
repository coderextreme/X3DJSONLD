package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.EnvironmentalSensor.*;
import org.web3d.x3d.jsail.EventUtilities.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Lighting.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Texturing.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Time line of X3D history with a viewpoint for each milestone. Use PgDown and PgUp to look through each viewpoint. Clicking (selecting) text for any milestone binds that viewpoint, then returns to prior milestone when unclicked (deselected). </p>
 <p> Related links: <a href="../../../Web3dOutreach/Web3dTimeline.java">Web3dTimeline.java</a> source, <a href="../../../Web3dOutreach/Web3dTimelineIndex.html" target="_top">Web3dTimeline catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../Web3dOutreach/Web3dTimeline.x3d">Web3dTimeline.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> info </i> </td>
			<td> Presenters can edit events under TimelineEventsGroup. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Time line of X3D history with a viewpoint for each milestone. Use PgDown and PgUp to look through each viewpoint. Clicking (selecting) text for any milestone binds that viewpoint, then returns to prior milestone when unclicked (deselected). </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman, Anita Havele, Johannes Behr, Byounghyun Yoo </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> TODO </i> </td>
			<td> BS Contact BitManagement Bug Report, problem with .x3dv encoding <a href="http://www.bitmanagement.de/en/contact" target="_blank">http://www.bitmanagement.de/en/contact</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 28 July 2008 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../Web3dOutreach/Web3dTimelineEntryView.png">Web3dTimelineEntryView.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../Web3dOutreach/Web3dTimelinePanorama.png">Web3dTimelinePanorama.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> info </i> </td>
			<td> Point paper by Anita Havele and Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../Web3dOutreach/Declarative3dTimelineSceneUseCaseHaveleBrutzman.pdf">Declarative3dTimelineSceneUseCaseHaveleBrutzman.pdf</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> Declarative3dTimelineSceneUseCaseHaveleBrutzman.doc </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://events.declarative3d.org/Dec3D2012" target="_blank">http://events.declarative3d.org/Dec3D2012</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> info </i> </td>
			<td> Corresponding X3DOM translation by Nils Michaelis of Fraunhofer </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://examples.x3dom.org/x3dTimeLine" target="_blank">http://examples.x3dom.org/x3dTimeLine</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://examples.x3dom.org/x3dTimeLine/timeline.js" target="_blank">http://examples.x3dom.org/x3dTimeLine/timeline.js</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://examples.x3dom.org/x3dTimeLine/timeline.css" target="_blank">http://examples.x3dom.org/x3dTimeLine/timeline.css</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://examples.x3dom.org/x3dTimeLine/timestamps.txt" target="_blank">http://examples.x3dom.org/x3dTimeLine/timestamps.txt</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> TODO </i> </td>
			<td> side by side scene and information page, as adjacent frames in HTML parent </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> TODO </i> </td>
			<td> better images </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> TODO </i> </td>
			<td> hidden attribute </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> TODO </i> </td>
			<td> confirm dates and events </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/Web3dTimeline.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/Web3dTimeline.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../Web3dOutreach/../license.html">../license.html</a> </td>
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

	* @author Don Brutzman, Anita Havele, Johannes Behr, Byounghyun Yoo
 */

public class Web3dTimeline
{
	/** Default constructor to create this object. */
	public Web3dTimeline ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_2)
  .setHead(new head()
    .addComponent(new component().setName("Navigation").setLevel(3))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("Web3dTimeline.x3d"))
    .addMeta(new meta().setName(meta.NAME_INFO       ).setContent("Presenters can edit events under TimelineEventsGroup."))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Time line of X3D history with a viewpoint for each milestone. Use PgDown and PgUp to look through each viewpoint. Clicking (selecting) text for any milestone binds that viewpoint, then returns to prior milestone when unclicked (deselected)."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Don Brutzman, Anita Havele, Johannes Behr, Byounghyun Yoo"))
    .addMeta(new meta().setName(meta.NAME_TODO       ).setContent("BS Contact BitManagement Bug Report, problem with .x3dv encoding http://www.bitmanagement.de/en/contact"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("28 July 2008"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("Web3dTimelineEntryView.png"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("Web3dTimelinePanorama.png"))
    .addMeta(new meta().setName(meta.NAME_INFO       ).setContent("Point paper by Anita Havele and Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("Declarative3dTimelineSceneUseCaseHaveleBrutzman.pdf"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("Declarative3dTimelineSceneUseCaseHaveleBrutzman.doc"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://events.declarative3d.org/Dec3D2012"))
    .addMeta(new meta().setName(meta.NAME_INFO       ).setContent("Corresponding X3DOM translation by Nils Michaelis of Fraunhofer"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://examples.x3dom.org/x3dTimeLine"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://examples.x3dom.org/x3dTimeLine/timeline.js"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://examples.x3dom.org/x3dTimeLine/timeline.css"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://examples.x3dom.org/x3dTimeLine/timestamps.txt"))
    .addMeta(new meta().setName(meta.NAME_TODO       ).setContent("side by side scene and information page, as adjacent frames in HTML parent"))
    .addMeta(new meta().setName(meta.NAME_TODO       ).setContent("better images"))
    .addMeta(new meta().setName(meta.NAME_TODO       ).setContent("hidden attribute"))
    .addMeta(new meta().setName(meta.NAME_TODO       ).setContent("confirm dates and events"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/Web3dTimeline.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("Web3D Timeline"))
    .addChild(new Background().setGroundColor(new MFColor(new double[] {1.0,1.0,1.0})).setSkyColor(new MFColor(new double[] {1.0,1.0,1.0})))
    .addChild(new DirectionalLight().setDirection(0.0,-0.5,-1.0))
    .addChild(new Viewpoint("OverviewViewpoint").setDescription("Web3D Timeline").setOrientation(-0.33,0.94,0.0,0.4).setPosition(18.0,8.0,21.0))
    .addComments(" <Fog visibilityRange='2000'/> <Viewpoint DEF='vp2' description='Starting view' position='3 10 20'/> ")
    .addChild(new Group("InitialSetupAndPrototype")
      .addComments(" floor ")
      .addChild(new Transform().setTranslation(0.0,0.0,-50.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0).setEmissiveColor(1.0,1.0,1.0))
            .setTexture(new ImageTexture().setUrl(new String[] {"images/lines.png","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/images/lines.png"}))
            .setTextureTransform(new TextureTransform().setRotation(1.57)))
          .setGeometry(new Box().setSize(125.0,0.01,125.0))))
      .addChild(new ProtoDeclare("TimelineElement").setName("TimelineElement")
        .setProtoInterface(new ProtoInterface()
          .addField(new field().setName("name").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Name for this timeline element"))
          .addField(new field().setName("title").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Displayed title"))
          .addField(new field().setName("description").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Viewpoint, Anchor description"))
          .addField(new field().setName("hidden").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(false).setAppinfo("Whether to hide this entry. TODO: is Viewpoint hidden also?"))
          .addField(new field().setName("imageUrl").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("\"Link to display image\""))
          .addField(new field().setName("soundUrl").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("\"Link to narrative\""))
          .addField(new field().setName("referenceUrl").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("\"Link to reference, launched in separate frame\""))
          .addField(new field().setName("imagePixelHeight").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0).setAppinfo("author must initialize"))
          .addField(new field().setName("imagePixelWidth").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0).setAppinfo("author must initialize"))
          .addField(new field().setName("translation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,0.0)).setAppinfo("default value 0 0 0")))
        .setProtoBody(new ProtoBody()
          .addChild(new Transform("RootTransform")
            .setIS(new IS()
              .addConnect(new connect().setNodeField("translation").setProtoField("translation")))
            .addComments(" TODO try to omit this viewpoint from scene's active list of viewpoints if hidden='true' ")
            .addChild(new Switch("HideSwitch").setWhichChoice(0)
              .addChild(new ViewpointGroup("TimelineElementViewpointGroup")
                .addComments(" test ability to hide in BSContact ")))
            .addChild(new Viewpoint("TimelineElementViewpoint").setPosition(2.0,3.0,14.0)
              .setIS(new IS()
                .addConnect(new connect().setNodeField("description").setProtoField("description"))))
            .addChild(new ProximitySensor("proximity").setCenter(0.0,0.0,12.0).setSize(40.0,40.0,13.0))
            .addChild(new Transform().setTranslation(-0.2,-0.3,0.0)
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material("NameMaterial").setDiffuseColor(0.619608,0.258824,0.0)))
                .setGeometry(new Text()
                  .setIS(new IS()
                    .addConnect(new connect().setNodeField("string").setProtoField("name")))
                  .setFontStyle(new FontStyle().setFamily(new String[] {"SANS"}).setJustify(FontStyle.JUSTIFY_END_FIRST).setSize(1.5).setSpacing(0.8)))))
            .addChild(new Transform().setTranslation(0.2,0.0,0.0)
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material("TitleMaterial").setDiffuseColor(0.0,0.184314,0.658824)))
                .setGeometry(new Text()
                  .setIS(new IS()
                    .addConnect(new connect().setNodeField("string").setProtoField("title")))
                  .setFontStyle(new FontStyle().setFamily(new String[] {"SANS"}).setJustify(FontStyle.JUSTIFY_BEGIN_FIRST).setSize(0.9)))))
            .addChild(new Group()
              .addChild(new TouchSensor("TouchToView").setDescription("touch to view"))
              .addChild(new BooleanFilter("TouchViewpointSelectBooleanFilter"))
              .addChild(new ROUTE().setFromNode("TouchToView").setFromField("isActive").setToNode("TouchViewpointSelectBooleanFilter").setToField("set_boolean"))
              .addChild(new ROUTE().setFromNode("TouchViewpointSelectBooleanFilter").setFromField("inputTrue").setToNode("TimelineElementViewpoint").setToField("set_bind"))
              .addChild(new Shape("TransparentTouchForNameTitleShape")
                .setGeometry(new Box().setSize(8.0,3.0,0.1))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setTransparency(1)))))
            .addChild(new Switch("TimelineElementSwitch").setWhichChoice(1)
              .addChild(new Group()
                .addChild(new Transform("HideBackgroundTextTransform").setScale(12.0,8.0,0.01).setTranslation(0.0,3.5,-0.5)
                  .addComments(" Hide other TimeLineElement entries that are behind this one ")
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0)))
                    .addComments(" hide next entry, but try not to chop of dates from perspective view ")
                    .setGeometry(new Box().setSize(0.9,1.0,0.01))))
                .addChild(new Transform("ImageTransform").setScale(8.0,8.0,0.01).setTranslation(-4.0,1.0,0.0)
                  .addChild(new Anchor().setParameter(new String[] {"target=Web3dTimelineReferenceFrame"})
                    .setIS(new IS()
                      .addConnect(new connect().setNodeField("url").setProtoField("referenceUrl"))
                      .addConnect(new connect().setNodeField("description").setProtoField("description")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0).setEmissiveColor(1.0,1.0,1.0))
                        .setTexture(new ImageTexture()
                          .setIS(new IS()
                            .addConnect(new connect().setNodeField("url").setProtoField("imageUrl")))))
                      .setGeometry(new IndexedFaceSet("ImageIFS").setDEF("ImageIFS").setSolid(false).setCoordIndex(new int[] {0,1,2,3,-1})
                        .setCoord(new Coordinate("ImageCoordinate"))
                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f(new double[] {0.0,0.0,0.0,1.0,1.0,1.0,1.0,0.0}))))))))
              .addChild(new Group("EmptyNode")))
            .addChild(new BooleanTrigger("bt"))
            .addChild(new IntegerTrigger("it0").setIntegerKey(0))
            .addChild(new IntegerTrigger("it1").setIntegerKey(1))
            .addChild(new ROUTE().setFromNode("proximity").setFromField("isActive").setToNode("it0").setToField("set_boolean"))
            .addChild(new ROUTE().setFromNode("it0").setFromField("triggerValue").setToNode("TimelineElementSwitch").setToField("whichChoice"))
            .addChild(new ROUTE().setFromNode("proximity").setFromField("exitTime").setToNode("bt").setToField("set_triggerTime"))
            .addChild(new ROUTE().setFromNode("bt").setFromField("triggerTrue").setToNode("it1").setToField("set_boolean"))
            .addChild(new ROUTE().setFromNode("it1").setFromField("triggerValue").setToNode("TimelineElementSwitch").setToField("whichChoice")))
          .addComments(" This embedded Script computes and updates IFS/Coordinate geometry dimensions to match image size ")
          .addChild(new Script("TimelineElementScript").setSourceCode("\n" + 
"            " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function initialize ()" + "\n" + 
"{" + "\n" + 
"    computePointArray ();" + "\n" + 
"    " + "\n" + 
"    hide ();" + "\n" + 
"\n" + 
"    tracePrint ('initialization() successful');" + "\n" + 
"}" + "\n" + 
"function computePointArray ()" + "\n" + 
"{" + "\n" + 
"    if ((imagePixelHeight <= 0) || (imagePixelWidth <= 0))" + "\n" + 
"    {" + "\n" + 
"        tracePrint ('cannot compute new scale, imagePixelHeight=' + imagePixelHeight.toString() + ', imagePixelWidth=' + imagePixelWidth.toString());" + "\n" + 
"        return;" + "\n" + 
"    }" + "\n" + 
"    else if (imagePixelHeight < imagePixelWidth)" + "\n" + 
"    {" + "\n" + 
"        height = imagePixelHeight/imagePixelWidth;" + "\n" + 
"        width  = 1.0;" + "\n" + 
"    }" + "\n" + 
"    else if (imagePixelHeight > imagePixelWidth)" + "\n" + 
"    {" + "\n" + 
"        height = 1.0;" + "\n" + 
"        width  = imagePixelWidth/imagePixelHeight;" + "\n" + 
"    }" + "\n" + 
"    else // same" + "\n" + 
"    {" + "\n" + 
"        height = 1.0;" + "\n" + 
"        width  = 1.0;" + "\n" + 
"    }" + "\n" + 
"    p0 = new SFVec3f (0.0,   0.0,    0.0);" + "\n" + 
"    p1 = new SFVec3f (0.0,   height, 0.0);" + "\n" + 
"    p2 = new SFVec3f (width, height, 0.0);" + "\n" + 
"    p3 = new SFVec3f (width, 0.0,    0.0);" + "\n" + 
"    pointArray = new MFVec3f (p0, p1, p2, p3);" + "\n" + 
"    tracePrint ('computed new ImageCoordinate.point=' + pointArray.toString());" + "\n" + 
"    " + "\n" + 
"    if (hidden)" + "\n" + 
"    {" + "\n" + 
"        hideSwitchChoice = -1;" + "\n" + 
"    }" + "\n" + 
"}" + "\n" + 
"function set_imagePixelHeight (eventValue)" + "\n" + 
"{" + "\n" + 
"    computePointArray ();" + "\n" + 
"}" + "\n" + 
"function set_imagePixelWidth (eventValue)" + "\n" + 
"{" + "\n" + 
"    computePointArray ();" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_name (eventValue)" + "\n" + 
"{" + "\n" + 
"   // input eventValue received for inputOutput field" + "\n" + 
"    name = eventValue;" + "\n" + 
"}" + "\n" + 
"function hide ()" + "\n" + 
"{" + "\n" + 
"    // input eventValue received for inputOutput field" + "\n" + 
"    tracePrint (\"set_hidden: hidden=\" + hidden);" + "\n" + 
"    if (hidden)" + "\n" + 
"    {" + "\n" + 
"         hideSwitchChoice      = -1;" + "\n" + 
"         displayViewpointGroup = false;" + "\n" + 
"    }" + "\n" + 
"    else" + "\n" + 
"    {" + "\n" + 
"        hideSwitchChoice      = 0;" + "\n" + 
"        displayViewpointGroup = true;" + "\n" + 
"    }" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_hidden (eventValue)" + "\n" + 
"{" + "\n" + 
"    hidden = eventValue;" + "\n" + 
"    hide ();" + "\n" + 
"}" + "\n" + 
"// ================== Trace output functions ==================" + "\n" + 
"\n" + 
"function tracePrint (outputString)" + "\n" + 
"{" + "\n" + 
"   // if traceEnabled is true, print outputString on X3D browser console" + "\n" + 
"   if (traceEnabled)" + "\n" + 
"      Browser.println ('[TimelineElementScript ' + name.toString() + ': ' + outputString.toString() + ']');" + "\n" + 
"}" + "\n" + 
"function alwaysPrint (outputString)" + "\n" + 
"{" + "\n" + 
"      // always print outputString on X3D browser console" + "\n" + 
"      Browser.println ('[TimelineElementScript ' + name.toString() + ': ' + outputString.toString() + ']');" + "\n" + 
"}" + "\n" + 
"function set_traceEnabled (eventValue)" + "\n" + 
"{" + "\n" + 
"      // input eventValue received for inputOutput field" + "\n" + 
"      traceEnabled = eventValue;" + "\n" + 
"}" + "\n" + 
"// ===========================================================" + "\n")
            .addField(new field().setName("name").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
            .addField(new field().setName("imagePixelHeight").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("default value 0"))
            .addField(new field().setName("imagePixelWidth").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("default value 0"))
            .addField(new field().setName("hidden").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether to hide this entry. TODO: is Viewpoint hidden also?"))
            .addField(new field().setName("traceEnabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(false).setAppinfo("debug trace to Browser output console"))
            .addField(new field().setName("pointArray").setType(field.TYPE_MFVEC3F).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("compute scale based on image pixel height, width"))
            .addField(new field().setName("hideSwitchChoice").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("hide node if hidden"))
            .addField(new field().setName("displayViewpointGroup").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("display Viewpoint if not hidden"))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("name").setProtoField("name"))
              .addConnect(new connect().setNodeField("imagePixelHeight").setProtoField("imagePixelHeight"))
              .addConnect(new connect().setNodeField("imagePixelWidth").setProtoField("imagePixelWidth"))
              .addConnect(new connect().setNodeField("hidden").setProtoField("hidden"))))
          .addChild(new ROUTE().setFromNode("TimelineElementScript").setFromField("pointArray").setToNode("ImageCoordinate").setToField("point"))
          .addChild(new ROUTE().setFromNode("TimelineElementScript").setFromField("hideSwitchChoice").setToNode("TimelineElementSwitch").setToField("whichChoice"))
          .addChild(new ROUTE().setFromNode("TimelineElementScript").setFromField("displayViewpointGroup").setToNode("TimelineElementViewpointGroup").setToField("displayed")))))
    .addChild(new Transform("TimelineEventsGroup").setTranslation(0.0,5.0,0.0)
      .addComments(" Depends on the audience, but Len suggests removal of the following for most audiences: 1) 1997 Community 2) 1999 MPEG 3) 2005 April (membership & IPR) Add x3dom - year? X3D V3.3 (Volume, Units) - 2012 ")
      .addComments(" 1994 ")
      .addChild(new ProtoInstance("TimelineElement", "Slide1_VRML1.0").setContainerField("children")
        .addFieldValue(new fieldValue().setName("name").setValue(new String[] {"1994"}))
        .addFieldValue(new fieldValue().setName("title").setValue(new String[] {"SIGGRAPH meeting ","VRML 1.0 Specification"}))
        .addFieldValue(new fieldValue().setName("description").setValue("Community effort adapted SGI OpenInventor"))
        .addFieldValue(new fieldValue().setName("imageUrl").setValue(new String[] {"images/vrml.banner.gif","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/images/vrml.banner.gif"}))
        .addFieldValue(new fieldValue().setName("imagePixelHeight").setValue(130))
        .addFieldValue(new fieldValue().setName("imagePixelWidth").setValue(560))
        .addFieldValue(new fieldValue().setName("referenceUrl").setValue(new String[] {"https://www.web3d.org/x3d/specifications/vrml/VRML1.0"}))
        .addComments(" ensure MFString referenceUrl value is surrounded by \"quotation marks\" "))
      .addComments(" 1997 ")
      .addChild(new ProtoInstance("TimelineElement", "Slide2_VRML2.0").setContainerField("children")
        .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.0,0.0,-15.0)))
        .addFieldValue(new fieldValue().setName("name").setValue(new String[] {"1997"}))
        .addFieldValue(new fieldValue().setName("title").setValue(new String[] {"VRML 2.0","Community standard"}))
        .addFieldValue(new fieldValue().setName("description").setValue("VRML 2.0 revised the VRML 1 architecture for better performance"))
        .addFieldValue(new fieldValue().setName("imageUrl").setValue(new String[] {"images/vrml97.gif","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/images/vrml97.gif"}))
        .addFieldValue(new fieldValue().setName("imagePixelHeight").setValue(85))
        .addFieldValue(new fieldValue().setName("imagePixelWidth").setValue(470))
        .addFieldValue(new fieldValue().setName("referenceUrl").setValue(new String[] {"http://new.web3d.org/files/specifications/14772/V2.0"})))
      .addComments(" 1997 ")
      .addChild(new ProtoInstance("TimelineElement", "Slide3_VRML97").setContainerField("children")
        .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.0,0.0,-30.0)))
        .addFieldValue(new fieldValue().setName("name").setValue(new String[] {"1997"}))
        .addFieldValue(new fieldValue().setName("title").setValue(new String[] {"VRML 97","International Standard"}))
        .addFieldValue(new fieldValue().setName("description").setValue("VRML 2.0 became the VRML 97 ISO International Standard"))
        .addFieldValue(new fieldValue().setName("imageUrl").setValue(new String[] {"images/vrml97-0.gif","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/images/vrml97-0.gif"}))
        .addFieldValue(new fieldValue().setName("imagePixelHeight").setValue(85))
        .addFieldValue(new fieldValue().setName("imagePixelWidth").setValue(470))
        .addFieldValue(new fieldValue().setName("referenceUrl").setValue(new String[] {"http://new.web3d.org/files/specifications/14772/V2.0"})))
      .addComments(" 1999 ")
      .addChild(new ProtoInstance("TimelineElement", "Slide4_MPEG-4").setContainerField("children")
        .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.0,0.0,-45.0)))
        .addFieldValue(new fieldValue().setName("name").setValue(new String[] {"1999"}))
        .addFieldValue(new fieldValue().setName("title").setValue(new String[] {"MPEG-4","Interactive Profile"}))
        .addFieldValue(new fieldValue().setName("description").setValue("MPEG-4 adopted an X3D subset for encoding 3D graphics"))
        .addFieldValue(new fieldValue().setName("hidden").setValue(true))
        .addFieldValue(new fieldValue().setName("imageUrl").setValue(new String[] {"images/mpeg_logo_bw.gif","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/images/mpeg_logo_bw.gif"}))
        .addFieldValue(new fieldValue().setName("referenceUrl").setValue(new String[] {"https://www.web3d.org/files/specifications/19775-1/V3.2/Part01/MPEG4interactive.html","http://www.ece.cmu.edu/~ee899/project/jie_sem/index.html"}))
        .addFieldValue(new fieldValue().setName("imagePixelHeight").setValue(74))
        .addFieldValue(new fieldValue().setName("imagePixelWidth").setValue(256))
        .addComments(" only first available choice in url array will be launched "))
      .addComments(" 2001 ")
      .addChild(new ProtoInstance("TimelineElement", "Slide5_X3dDesign").setContainerField("children")
        .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.0,0.0,-60.0)))
        .addFieldValue(new fieldValue().setName("name").setValue(new String[] {"2001"}))
        .addFieldValue(new fieldValue().setName("title").setValue(new String[] {"X3D architecture design","Extensible 3D Graphics"}))
        .addFieldValue(new fieldValue().setName("description").setValue("X3D architecture extensions to VRML defined"))
        .addFieldValue(new fieldValue().setName("imageUrl").setValue(new String[] {"images/x3d2-s.gif","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/images/x3d2-s.gif"}))
        .addFieldValue(new fieldValue().setName("imagePixelHeight").setValue(97))
        .addFieldValue(new fieldValue().setName("imagePixelWidth").setValue(154))
        .addFieldValue(new fieldValue().setName("referenceUrl").setValue(new String[] {"https://www.web3d.org/about/faq"})))
      .addComments(" December 2004 ")
      .addChild(new ProtoInstance("TimelineElement", "Slide6_X3dEncoding").setContainerField("children")
        .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.0,0.0,-75.0)))
        .addFieldValue(new fieldValue().setName("name").setValue(new String[] {"2004","December"}))
        .addFieldValue(new fieldValue().setName("title").setValue(new String[] {".x3d Encoding","XML Validation"}))
        .addFieldValue(new fieldValue().setName("description").setValue("XML-X3D"))
        .addFieldValue(new fieldValue().setName("imageUrl").setValue(new String[] {"images/X3dSpecificationLogo.png","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/images/X3dSpecificationLogo.png"}))
        .addFieldValue(new fieldValue().setName("imagePixelHeight").setValue(88))
        .addFieldValue(new fieldValue().setName("imagePixelWidth").setValue(176))
        .addFieldValue(new fieldValue().setName("referenceUrl").setValue(new String[] {"http://www.w3.org/XML/1999/XML-in-10-points.html","https://www.web3d.org/files/specifications/19776-1/V3.2/Part01/X3D_XML.html"}))
        .addComments(" only first available choice in url array will be launched "))
      .addComments(" 2005 ")
      .addChild(new ProtoInstance("TimelineElement", "Slide7_Web3DConsortium").setContainerField("children")
        .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.0,0.0,-90.0)))
        .addFieldValue(new fieldValue().setName("name").setValue(new String[] {"2005","April"}))
        .addFieldValue(new fieldValue().setName("title").setValue(new String[] {"Web3D Consortium","Non-profit Membership","Royalty-Free IPR Policy"}))
        .addFieldValue(new fieldValue().setName("description").setValue("Web3D Intellectual Property Rights Policy keeps X3D royalty free for any use"))
        .addFieldValue(new fieldValue().setName("imageUrl").setValue(new String[] {"images/web3d-Consortium-3dlogo.jpg","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/images/web3d-Consortium-3dlogo.jpg"}))
        .addFieldValue(new fieldValue().setName("imagePixelHeight").setValue(108))
        .addFieldValue(new fieldValue().setName("imagePixelWidth").setValue(214))
        .addFieldValue(new fieldValue().setName("referenceUrl").setValue(new String[] {"https://www.web3d.org/realtime-3d/about/legal"}))
        .addComments(" 1072 x 540 "))
      .addComments(" November 2005 ")
      .addChild(new ProtoInstance("TimelineElement", "Slide8_X3dStandard").setContainerField("children")
        .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.0,0.0,-105.0)))
        .addFieldValue(new fieldValue().setName("name").setValue(new String[] {"2005","November"}))
        .addFieldValue(new fieldValue().setName("title").setValue(new String[] {"X3D Graphics Standard","version 3.0","ISO approved"}))
        .addFieldValue(new fieldValue().setName("description").setValue("X3D version 3.0"))
        .addFieldValue(new fieldValue().setName("imageUrl").setValue(new String[] {"images/X3dSpecificationLogo.png","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/images/X3dSpecificationLogo.png"}))
        .addFieldValue(new fieldValue().setName("imagePixelHeight").setValue(88))
        .addFieldValue(new fieldValue().setName("imagePixelWidth").setValue(176))
        .addFieldValue(new fieldValue().setName("referenceUrl").setValue(new String[] {"https://www.web3d.org/realtime-3d/specification/current"})))
      .addComments(" 2006 ")
      .addChild(new ProtoInstance("TimelineElement", "Slide9_SceneAcessInterface").setContainerField("children")
        .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.0,0.0,-120.0)))
        .addFieldValue(new fieldValue().setName("name").setValue(new String[] {"2006","April"}))
        .addFieldValue(new fieldValue().setName("title").setValue(new String[] {"Scene Acess Interface:","SAI for JavaScript Java"}))
        .addFieldValue(new fieldValue().setName("description").setValue("SAI APIs provide consistent X3D code access using JavaScript or Java"))
        .addFieldValue(new fieldValue().setName("imageUrl").setValue(new String[] {"images/X3dAnywhere_150_138.gif","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/images/X3dAnywhere_150_138.gif"}))
        .addFieldValue(new fieldValue().setName("imagePixelHeight").setValue(138))
        .addFieldValue(new fieldValue().setName("imagePixelWidth").setValue(150))
        .addFieldValue(new fieldValue().setName("referenceUrl").setValue(new String[] {"https://www.web3d.org/files/specifications/19777-1/V3.0/Part1/X3D_ECMAScript.html"})))
      .addComments(" December 2006 ")
      .addChild(new ProtoInstance("TimelineElement", "Slide10_X3dVersion3.1").setContainerField("children")
        .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.0,0.0,-135.0)))
        .addFieldValue(new fieldValue().setName("name").setValue(new String[] {"2006","December"}))
        .addFieldValue(new fieldValue().setName("title").setValue(new String[] {"X3D","version 3.1"}))
        .addFieldValue(new fieldValue().setName("description").setValue("Computer Aided Design (CAD) 3D Textures and Shaders support"))
        .addFieldValue(new fieldValue().setName("imageUrl").setValue(new String[] {"images/logo_iso.gif","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/images/logo_iso.gif"}))
        .addFieldValue(new fieldValue().setName("imagePixelHeight").setValue(58))
        .addFieldValue(new fieldValue().setName("imagePixelWidth").setValue(202))
        .addFieldValue(new fieldValue().setName("referenceUrl").setValue(new String[] {"https://www.web3d.org/files/specifications/19775-1/V3.1/index.html"}))
        .addComments(" Web3dBanner.jpg 864 x 432, reduced 216 x 106 "))
      .addComments(" 2007 ")
      .addChild(new ProtoInstance("TimelineElement", "Slide11_X3dForWebAuthors").setContainerField("children")
        .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.0,0.0,-150.0)))
        .addFieldValue(new fieldValue().setName("name").setValue(new String[] {"2007","March"}))
        .addFieldValue(new fieldValue().setName("title").setValue(new String[] {"X3D for Web Authors","Book slides examples","Don Brutzman Leonard Daly"}))
        .addFieldValue(new fieldValue().setName("description").setValue("X3D for Web Authors book slidesets example scenes and video Don Brutzman and Leonard Daly"))
        .addFieldValue(new fieldValue().setName("imageUrl").setValue(new String[] {"images/X3dForWebAuthorsBookCoverScan.400x498.jpg","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/images/X3dForWebAuthorsBookCoverScan.400x498.jpg"}))
        .addFieldValue(new fieldValue().setName("imagePixelHeight").setValue(125))
        .addFieldValue(new fieldValue().setName("imagePixelWidth").setValue(100))
        .addFieldValue(new fieldValue().setName("referenceUrl").setValue(new String[] {"https://x3dgraphics.com"})))
      .addComments(" December 2007 ")
      .addChild(new ProtoInstance("TimelineElement", "Slide12_X3dCompressedBinaryEncoding").setContainerField("children")
        .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.0,0.0,-165.0)))
        .addFieldValue(new fieldValue().setName("name").setValue(new String[] {"2007","December"}))
        .addFieldValue(new fieldValue().setName("title").setValue(new String[] {"X3D Compressed","Binary Encoding (CBE)","for geometry and data"}))
        .addFieldValue(new fieldValue().setName("description").setValue("X3D Compressed Binary Encoding provides geometric and XML compression"))
        .addFieldValue(new fieldValue().setName("imageUrl").setValue(new String[] {"images/CadTeapot.png","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/images/CadTeapot.png"}))
        .addFieldValue(new fieldValue().setName("imagePixelHeight").setValue(243))
        .addFieldValue(new fieldValue().setName("imagePixelWidth").setValue(427))
        .addFieldValue(new fieldValue().setName("referenceUrl").setValue(new String[] {"http://web3d.org/x3d/wiki/index.php/X3D_Binary_Compression_Capabilities_and_Plans"})))
      .addComments(" 2008 ")
      .addChild(new ProtoInstance("TimelineElement", "Slide13_X3dEarth").setContainerField("children")
        .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.0,0.0,-180.0)))
        .addFieldValue(new fieldValue().setName("name").setValue(new String[] {"2008","March"}))
        .addFieldValue(new fieldValue().setName("title").setValue(new String[] {"X3D Earth","Geospatial Component"}))
        .addFieldValue(new fieldValue().setName("description").setValue("X3D Earth working group has built a Geospatial component for X3D"))
        .addFieldValue(new fieldValue().setName("imageUrl").setValue(new String[] {"images/x3d-earth.jpg","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/images/x3d-earth.jpg"}))
        .addFieldValue(new fieldValue().setName("imagePixelHeight").setValue(368))
        .addFieldValue(new fieldValue().setName("imagePixelWidth").setValue(368))
        .addFieldValue(new fieldValue().setName("referenceUrl").setValue(new String[] {"https://www.web3d.org/realtime-3d/working-groups/x3d-earth"})))
      .addComments(" June 2008 ")
      .addChild(new ProtoInstance("TimelineElement", "Slide14_X3dVersion3.2").setContainerField("children")
        .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.0,0.0,-195.0)))
        .addFieldValue(new fieldValue().setName("name").setValue(new String[] {"2008","June"}))
        .addFieldValue(new fieldValue().setName("title").setValue(new String[] {"X3D","version 3.2"}))
        .addFieldValue(new fieldValue().setName("description").setValue("X3D v3.2 is the current version of X3D in common use"))
        .addFieldValue(new fieldValue().setName("imageUrl").setValue(new String[] {"images/logo_iso.gif","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/images/logo_iso.gif"}))
        .addFieldValue(new fieldValue().setName("imagePixelHeight").setValue(58))
        .addFieldValue(new fieldValue().setName("imagePixelWidth").setValue(202))
        .addFieldValue(new fieldValue().setName("referenceUrl").setValue(new String[] {"https://www.web3d.org/files/specifications/19775-1/V3.2/Part01/Architecture.html"})))
      .addComments(" February 2009 ")
      .addChild(new ProtoInstance("TimelineElement", "Slide15_DICOM").setContainerField("children")
        .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.0,0.0,-210.0)))
        .addFieldValue(new fieldValue().setName("name").setValue(new String[] {"2009","February"}))
        .addFieldValue(new fieldValue().setName("title").setValue(new String[] {"X3D and DICOM","Medical standards"}))
        .addFieldValue(new fieldValue().setName("description").setValue("X3D volume visualization for DICOM"))
        .addFieldValue(new fieldValue().setName("imageUrl").setValue(new String[] {"images/DicomLogo.png","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/images/DicomLogo.png"}))
        .addFieldValue(new fieldValue().setName("imagePixelHeight").setValue(105))
        .addFieldValue(new fieldValue().setName("imagePixelWidth").setValue(377))
        .addFieldValue(new fieldValue().setName("referenceUrl").setValue(new String[] {"http://medical.nema.org"})))
      .addComments(" March 2010 ")
      .addChild(new ProtoInstance("TimelineElement", "Slide16_X3DOM").setContainerField("children")
        .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.0,0.0,-225.0)))
        .addFieldValue(new fieldValue().setName("name").setValue(new String[] {"2010","March"}))
        .addFieldValue(new fieldValue().setName("title").setValue(new String[] {"X3DOM","development begins"}))
        .addFieldValue(new fieldValue().setName("description").setValue("X3DOM maps X3D to HTML5"))
        .addFieldValue(new fieldValue().setName("imageUrl").setValue(new String[] {"images/X3domTeaser.png","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/images/X3domTeaser.png","http://www.x3dom.org/wp-content/uploads/2009/10/teaser.png"}))
        .addFieldValue(new fieldValue().setName("imagePixelHeight").setValue(370))
        .addFieldValue(new fieldValue().setName("imagePixelWidth").setValue(270))
        .addFieldValue(new fieldValue().setName("referenceUrl").setValue(new String[] {"http://www.x3dom.org"})))
      .addComments(" June 2011 ")
      .addChild(new ProtoInstance("TimelineElement", "Slide17_X3dAugmentedReality").setContainerField("children")
        .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.0,0.0,-240.0)))
        .addFieldValue(new fieldValue().setName("name").setValue(new String[] {"2011","June"}))
        .addFieldValue(new fieldValue().setName("title").setValue(new String[] {"X3D AR","Augmented Reality"}))
        .addFieldValue(new fieldValue().setName("description").setValue("Augmented Reality working group efforts"))
        .addFieldValue(new fieldValue().setName("imageUrl").setValue(new String[] {"images/X3dArImage4.jpg","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/images/X3dArImage4.jpg"}))
        .addFieldValue(new fieldValue().setName("imagePixelHeight").setValue(120))
        .addFieldValue(new fieldValue().setName("imagePixelWidth").setValue(168))
        .addFieldValue(new fieldValue().setName("referenceUrl").setValue(new String[] {"https://www.web3d.org/realtime-3d/working-groups/augmented-reality-ar"})))
      .addComments(" November 2011 ")
      .addChild(new ProtoInstance("TimelineElement", "Slide18_Declarative3D").setContainerField("children")
        .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.0,0.0,-255.0)))
        .addFieldValue(new fieldValue().setName("name").setValue(new String[] {"2011","November"}))
        .addFieldValue(new fieldValue().setName("title").setValue(new String[] {"Declarative 3D","W3C Community Group"}))
        .addFieldValue(new fieldValue().setName("description").setValue("W3C Community Group efforts for Declarative 3D begin"))
        .addFieldValue(new fieldValue().setName("imageUrl").setValue(new String[] {"images/W3cCommunityGroupLogo.png","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/images/W3cCommunityGroupLogo.png"}))
        .addFieldValue(new fieldValue().setName("imagePixelHeight").setValue(91))
        .addFieldValue(new fieldValue().setName("imagePixelWidth").setValue(209))
        .addFieldValue(new fieldValue().setName("referenceUrl").setValue(new String[] {"http://www.w3.org/community/declarative3d"})))
      .addComments(" April 2012 ")
      .addChild(new ProtoInstance("TimelineElement", "Slide19_WWW2012").setContainerField("children")
        .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.0,0.0,-270.0)))
        .addFieldValue(new fieldValue().setName("name").setValue(new String[] {"2012","April"}))
        .addFieldValue(new fieldValue().setName("title").setValue(new String[] {"WWW 2012 Workshop","on Declarative 3D"}))
        .addFieldValue(new fieldValue().setName("description").setValue("X3D v3.2 is draft international standard"))
        .addFieldValue(new fieldValue().setName("imageUrl").setValue(new String[] {"images/Www2012Logo.png","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/images/Www2012Logo.png"}))
        .addFieldValue(new fieldValue().setName("imagePixelHeight").setValue(170))
        .addFieldValue(new fieldValue().setName("imagePixelWidth").setValue(348))
        .addFieldValue(new fieldValue().setName("referenceUrl").setValue(new String[] {"http://events.declarative3d.org/Dec3D2012"}))))
    .addComments(" Web3D 3D logo ")
    .addChild(new Transform("trans_web3dlogo").setRotation(0.0,1.0,0.0,3.14).setScale(0.7,0.7,0.7).setTranslation(14.0,9.4,12.0)
      .addChild(new Group()
        .addComments(" TODO Animation to spin logo, user-controllable or in different place ")
        .addChild(new Billboard().setAxisOfRotation(0.0,0.0,0.0)
          .addChild(new Transform("Web3dLogoTransform").setScale(0.6,0.6,0.6)
            .addComments(" TODO White box behind ")
            .addChild(new Anchor().setParameter(new String[] {"target=Web3dTimelineReferenceFrame"}).setUrl(new String[] {"https://www.web3d.org"})
              .addChild(new Inline().setUrl(new String[] {"Web3dLogo.x3d","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/Web3dLogo.x3d","Web3dLogo.wrl","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/Web3dLogo.wrl"})))
            .addChild(new OrientationInterpolator("Web3dLogoSpinner").setKey(new double[] {0.0,0.3333,0.6667,1.0}).setKeyValue(new MFRotation(new double[] {0.0,1.0,0.0,0.0,0.0,1.0,0.0,2.094395,0.0,1.0,0.0,4.18879,0.0,1.0,0.0,0.0})))
            .addChild(new TimeSensor("Web3dLogoClock").setCycleInterval(30).setLoop(true))
            .addChild(new ROUTE().setFromNode("Web3dLogoSpinner").setFromField("value_changed").setToNode("Web3dLogoTransform").setToField("set_rotation"))
            .addChild(new ROUTE().setFromNode("Web3dLogoClock").setFromField("fraction_changed").setToNode("Web3dLogoSpinner").setToField("set_fraction")))))
      .addChild(new Transform().setTranslation(0.0,-6.2,0.0)
        .addChild(new Billboard().setAxisOfRotation(0.0,0.0,0.0)
          .addChild(new TouchSensor().setDescription("Select PageUp/PageDown to see each milestone, click on images for detail links"))
          .addChild(new Shape()
            .setGeometry(new Text().setString(new String[] {"Web3D Progress Timeline"})
              .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setCssStyle("BOLD")))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setAmbientIntensity(0).setDiffuseColor(0.337,0.392,0.556).setShininess(0))))
          .addChild(new Shape()
            .setGeometry(new Box().setSize(10.0,3.0,0.1))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setTransparency(1.0)))))))
    .addComments(" start and end at same Viewpoint to enable a consistent Viewpoint tour by browser ")
    .addChild(new Viewpoint().setUSE("OverviewViewpoint")));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return Web3dTimeline model
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
        X3D thisExampleX3dModel = new Web3dTimeline().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.Web3dTimeline\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.Web3dTimeline\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

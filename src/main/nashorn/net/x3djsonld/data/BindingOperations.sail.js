load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> Illustrate Viewpoint binding operations (in gory detail!) as described in Chapter 4 concepts. Scene design: a TimeSensor clock drives and IntegerSequencer for each t0/t1/etc. event, and a customized Script node sends bind/unbind events to the correct Viewpoint. Display the browser console to see occurrence of each event. </p>
 <p> Related links: <a href="../../../Chapter04ViewingNavigation/BindingOperations_sail.java">BindingOperations_sail.java</a> source, <a href="../../../Chapter04ViewingNavigation/BindingOperationsIndex.html" target="_top">BindingOperations catalog page</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="http://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../Chapter04ViewingNavigation/BindingOperations.x3d">BindingOperations.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Illustrate Viewpoint binding operations (in gory detail!) as described in Chapter 4 concepts. Scene design: a TimeSensor clock drives and IntegerSequencer for each t0/t1/etc. event, and a customized Script node sends bind/unbind events to the correct Viewpoint. Display the browser console to see occurrence of each event. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 5 January 2008 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 22 July 2013 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> BindingOperations.console.txt </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> BindingStackOperations.png </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> X3D for Web Authors, Section 2.5.1, Figure 4.1 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://X3dGraphics.com" target="_blank">http://X3dGraphics.com</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">http://www.web3d.org/x3d/content/examples/X3dResources.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> rights </i> </td>
			<td> Copyright Don Brutzman and Leonard Daly 2007 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> X3D book, X3D graphics, X3D-Edit, <a href="http://www.x3dGraphics.com" target="_blank">http://www.x3dGraphics.com</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter04ViewingNavigation/BindingOperations.x3d" target="_blank">http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter04ViewingNavigation/BindingOperations.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../Chapter04ViewingNavigation/../license.html">../license.html</a> </td>
		</tr>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center;" colspan="2">  &nbsp; </td>
		</tr>
	</table>

	<p>
		This program uses the
		<a href="http://www.web3d.org/specifications/java/X3DJSAIL.html" target="_blank">X3D Java Scene Access Interface Library (X3DJSAIL)</a>.
		It has been produced using the 
		<a href="http://www.web3d.org/x3d/stylesheets/X3dToES5.xslt" target="_blank">X3dToES5.xslt</a>
		stylesheet to create ES5 source code from an <code>.x3d</code> scene.
	</p>

	* @author Don Brutzman
 */

function BindingOperations_sail
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
BindingOperations_sail.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = new X3DObject().setProfile("Immersive").setVersion("3.3")
  .setHead(new headObject()
    .addMeta(new metaObject().setName("title").setContent("BindingOperations.x3d"))
    .addMeta(new metaObject().setName("description").setContent("Illustrate Viewpoint binding operations (in gory detail!) as described in Chapter 4 concepts. Scene design: a TimeSensor clock drives and IntegerSequencer for each t0/t1/etc. event, and a customized Script node sends bind/unbind events to the correct Viewpoint. Display the browser console to see occurrence of each event."))
    .addMeta(new metaObject().setName("creator").setContent("Don Brutzman"))
    .addMeta(new metaObject().setName("created").setContent("5 January 2008"))
    .addMeta(new metaObject().setName("modified").setContent("22 July 2013"))
    .addMeta(new metaObject().setName("reference").setContent("BindingOperations.console.txt"))
    .addMeta(new metaObject().setName("reference").setContent("BindingStackOperations.png"))
    .addMeta(new metaObject().setName("reference").setContent("X3D for Web Authors, Section 2.5.1, Figure 4.1"))
    .addMeta(new metaObject().setName("reference").setContent("http://X3dGraphics.com"))
    .addMeta(new metaObject().setName("reference").setContent("http://www.web3d.org/x3d/content/examples/X3dResources.html"))
    .addMeta(new metaObject().setName("rights").setContent("Copyright Don Brutzman and Leonard Daly 2007"))
    .addMeta(new metaObject().setName("subject").setContent("X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com"))
    .addMeta(new metaObject().setName("identifier").setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter04ViewingNavigation/BindingOperations.x3d"))
    .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new metaObject().setName("license").setContent("../license.html")))
  .setScene(new SceneObject()
    .addChild(new ViewpointObject("View1").setDescription("Viewpoint 1").setCenterOfRotation(-6.0,0.0,0.0).setPosition(-6.0,0.0,5.0))
    .addChild(new ViewpointObject("View2").setDescription("Viewpoint 2").setCenterOfRotation(-2.0,0.0,0.0).setPosition(-2.0,0.0,5.0))
    .addChild(new ViewpointObject("View3").setDescription("Viewpoint 3").setCenterOfRotation(2.0,0.0,0.0).setPosition(2.0,0.0,5.0))
    .addChild(new ViewpointObject("View4").setDescription("Viewpoint 4").setCenterOfRotation(6.0,0.0,0.0).setPosition(6.0,0.0,5.0))
    .addComments(" Script initialization ought to first bind view5 below. ")
    .addChild(new GroupObject()
      .addChild(new TransformObject("Text1").setTranslation(-6.0,0.0,0.0)
        .addChild(new ShapeObject()
          .setGeometry(new TextObject().setString(new MFStringObject("\"View\" \"# 1\""))
            .setFontStyle(new FontStyleObject("CenterJustify").setJustify(new MFStringObject("\"MIDDLE\" \"MIDDLE\""))))
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject().setDiffuseColor(1.0,0.0,0.0)))))
      .addChild(new TransformObject("Text2").setTranslation(-2.0,0.0,0.0)
        .addChild(new ShapeObject()
          .setGeometry(new TextObject().setString(new MFStringObject("\"View\" \"# 2\""))
            .setFontStyle(new FontStyleObject().setUSE("CenterJustify")))
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject().setDiffuseColor(0.0,1.0,0.0)))))
      .addChild(new TransformObject("Text3").setTranslation(2.0,0.0,0.0)
        .addChild(new ShapeObject()
          .setGeometry(new TextObject().setString(new MFStringObject("\"View\" \"# 3\""))
            .setFontStyle(new FontStyleObject().setUSE("CenterJustify")))
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject().setDiffuseColor(0.0,0.0,1.0)))))
      .addChild(new TransformObject("Text4").setTranslation(6.0,0.0,0.0)
        .addChild(new ShapeObject()
          .setGeometry(new TextObject().setString(new MFStringObject("\"View\" \"# 4\""))
            .setFontStyle(new FontStyleObject().setUSE("CenterJustify")))
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject())))))
    .addComments(" The following advanced animation sequence uses nodes covered in Chapters 7, 8 and 9. ")
    .addComments(" It does not need to be studied in this chapter. ")
    .addChild(new TransformObject().setTranslation(0.0,-3.0,8.0)
      .addComments(" notice this next Viewpoint has been transformed with the text, so its position is relative. it is called view5 in the Script. ")
      .addChild(new ViewpointObject("ClickToAnimateView").setDescription("Select animation sequence").setPosition(0.0,0.0,7.0))
      .addChild(new ShapeObject()
        .setGeometry(new TextObject().setString(new MFStringObject("\"Click here to animate\""))
          .setFontStyle(new FontStyleObject().setJustify(new MFStringObject("\"MIDDLE\" \"BEGIN\""))))
        .setAppearance(new AppearanceObject()
          .setMaterial(new MaterialObject().setDiffuseColor(0.8,0.4,0.0))))
      .addChild(new ShapeObject()
        .setGeometry(new BoxObject().setSize(7.0,1.0,0.02))
        .setAppearance(new AppearanceObject()
          .setMaterial(new MaterialObject().setTransparency(1))))
      .addChild(new TouchSensorObject("TextTouchSensor").setDescription("Click to begin animating viewpoint selections"))
      .addChild(new TimeSensorObject("Clock").setCycleInterval(10))
      .addChild(new ROUTEObject().setFromNode("TextTouchSensor").setFromField("touchTime").setToNode("Clock").setToField("set_startTime"))
      .addChild(new IntegerSequencerObject("TimingSequencer").setKey(Java.to([0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,1.0], Java.type("float[]"))).setKeyValue(Java.to([0,1,2,3,4,5,6,7,8,10], Java.type("int[]"))))
      .addChild(new ROUTEObject().setFromNode("Clock").setFromField("fraction_changed").setToNode("TimingSequencer").setToField("set_fraction"))
      .addChild(new ScriptObject("BindingSequencerEngine").setSourceCode(
"<![CDATA[" + "\n" +
"\n" + 
"        " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function initialize ()" + "\n" + 
"{" + "\n" + 
"    bindView5 = true;" + "\n" + 
"    Browser.print ('Timing script initialized and ready for activation');" + "\n" + 
"}" + "\n" + 
"function set_timeEvent (inputValue)" + "\n" + 
"{" + "\n" + 
"    if (inputValue == priorInputvalue)" + "\n" + 
"    {" + "\n" + 
"        return; // ignore repeated inputs" + "\n" + 
"    }" + "\n" + 
"    // new value provided" + "\n" + 
"    priorInputvalue = inputValue;" + "\n" + 
"    // Browser.print ('\\ntimeEvent inputValue=' + inputValue);" + "\n" + 
"        " + "\n" + 
"    // mimics user execution of Figure 4.1 steps t_0 through t_8" + "\n" + 
"    if (inputValue == 0)" + "\n" + 
"    {" + "\n" + 
"        Browser.print ('\\n===========\\n time t0');" + "\n" + 
"        bindView1 = true;" + "\n" + 
"    }" + "\n" + 
"    else if (inputValue == 1)" + "\n" + 
"    {" + "\n" + 
"        Browser.print ('\\n===========\\n time t1');" + "\n" + 
"        bindView2 = true;" + "\n" + 
"    }" + "\n" + 
"    else if (inputValue == 2)" + "\n" + 
"    {" + "\n" + 
"        Browser.print ('\\n===========\\n time t2');" + "\n" + 
"        bindView3 = true;" + "\n" + 
"    }" + "\n" + 
"    else if (inputValue == 3)" + "\n" + 
"    {" + "\n" + 
"        Browser.print ('\\n===========\\n time t3');" + "\n" + 
"        bindView3 = false;" + "\n" + 
"    }" + "\n" + 
"    else if (inputValue == 4)" + "\n" + 
"    {" + "\n" + 
"        Browser.print ('\\n===========\\n time t4');" + "\n" + 
"        bindView1 = true;" + "\n" + 
"    }" + "\n" + 
"    else if (inputValue == 5)" + "\n" + 
"    {" + "\n" + 
"        Browser.print ('\\n===========\\n time t5');" + "\n" + 
"        bindView2 = false;" + "\n" + 
"    }" + "\n" + 
"    else if (inputValue == 6)" + "\n" + 
"    {" + "\n" + 
"        Browser.print ('\\n===========\\n time t6');" + "\n" + 
"        bindView1 = false;" + "\n" + 
"    }" + "\n" + 
"    else if (inputValue == 7)" + "\n" + 
"    {" + "\n" + 
"        Browser.print ('\\n===========\\n time t7');" + "\n" + 
"        bindView4 = true;" + "\n" + 
"\n" + 
"    }" + "\n" + 
"    else if (inputValue == 8)" + "\n" + 
"    {" + "\n" + 
"        Browser.print ('\\n===========\\n time t8');" + "\n" + 
"        Browser.print (', no action, all done');" + "\n" + 
"        Browser.print ('\\n\\n');" + "\n" + 
"    }" + "\n" + 
"}" + "\n" + 
"\n" + 
"function view1Bound (inputValue)" + "\n" + 
"{" + "\n" + 
"    Browser.print (', view1Bound ' + (inputValue));" + "\n" + 
"    if (priorInputvalue == -1) Browser.print ('\\n');" + "\n" + 
"}" + "\n" + 
"function view2Bound (inputValue)" + "\n" + 
"{" + "\n" + 
"    Browser.print (', view2Bound ' + (inputValue));" + "\n" + 
"}" + "\n" + 
"function view3Bound (inputValue)" + "\n" + 
"{" + "\n" + 
"    Browser.print (', view3Bound ' + (inputValue));" + "\n" + 
"}" + "\n" + 
"function view4Bound (inputValue)" + "\n" + 
"{" + "\n" + 
"    Browser.print (', view4Bound ' + (inputValue));" + "\n" + 
"}" + "\n" + 
"function view5Bound (inputValue)" + "\n" + 
"{" + "\n" + 
"    Browser.print (', view5Bound ' + (inputValue));" + "\n" + 
"}" + "\n" + "]]>"
)
        .addField(new fieldObject().setAccessType("inputOnly").setName("set_timeEvent").setType("SFInt32"))
        .addField(new fieldObject().setAccessType("outputOnly").setName("bindView1").setType("SFBool"))
        .addField(new fieldObject().setAccessType("outputOnly").setName("bindView2").setType("SFBool"))
        .addField(new fieldObject().setAccessType("outputOnly").setName("bindView3").setType("SFBool"))
        .addField(new fieldObject().setAccessType("outputOnly").setName("bindView4").setType("SFBool"))
        .addField(new fieldObject().setAccessType("outputOnly").setName("bindView5").setType("SFBool"))
        .addField(new fieldObject().setAccessType("inputOnly").setName("view1Bound").setType("SFBool"))
        .addField(new fieldObject().setAccessType("inputOnly").setName("view2Bound").setType("SFBool"))
        .addField(new fieldObject().setAccessType("inputOnly").setName("view3Bound").setType("SFBool"))
        .addField(new fieldObject().setAccessType("inputOnly").setName("view4Bound").setType("SFBool"))
        .addField(new fieldObject().setAccessType("initializeOnly").setName("priorInputvalue").setType("SFInt32").setValue("-1")))
      .addComments(" drive Script with TimeSensor clock ")
      .addChild(new ROUTEObject().setFromNode("TimingSequencer").setFromField("value_changed").setToNode("BindingSequencerEngine").setToField("set_timeEvent"))
      .addComments(" Script will bind and unbind Viewpoint nodes ")
      .addChild(new ROUTEObject().setFromNode("BindingSequencerEngine").setFromField("bindView1").setToNode("View1").setToField("set_bind"))
      .addChild(new ROUTEObject().setFromNode("BindingSequencerEngine").setFromField("bindView2").setToNode("View2").setToField("set_bind"))
      .addChild(new ROUTEObject().setFromNode("BindingSequencerEngine").setFromField("bindView3").setToNode("View3").setToField("set_bind"))
      .addChild(new ROUTEObject().setFromNode("BindingSequencerEngine").setFromField("bindView4").setToNode("View4").setToField("set_bind"))
      .addChild(new ROUTEObject().setFromNode("BindingSequencerEngine").setFromField("bindView5").setToNode("ClickToAnimateView").setToField("set_bind"))
      .addComments(" Viewpoint nodes report bind and unbind events ")
      .addChild(new ROUTEObject().setFromNode("View1").setFromField("isBound").setToNode("BindingSequencerEngine").setToField("view1Bound"))
      .addChild(new ROUTEObject().setFromNode("View2").setFromField("isBound").setToNode("BindingSequencerEngine").setToField("view2Bound"))
      .addChild(new ROUTEObject().setFromNode("View3").setFromField("isBound").setToNode("BindingSequencerEngine").setToField("view3Bound"))
      .addChild(new ROUTEObject().setFromNode("View4").setFromField("isBound").setToNode("BindingSequencerEngine").setToField("view4Bound"))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return BindingOperations_sail model
   */
  getX3dModel : function()
  {	  
	  return this.x3dModel;
  },
  
  /** Indicate X3DJSAIL validation results for this X3D model.
   * @return validation results plus exception information, if any
   */
  validateSelf : function()
  {
	var       metaResult = "";
	var validationResult = "";
	var  exceptionResult = "";
	try
	{
		this.initialize();
		
		if ((this.getX3dModel() == null) || (this.getX3dModel().getHead() == null))
		{
			validationResult = "empty scene, nothing to validate. " + this.x3dModel.validate();
			return validationResult;
		}
		// first list informational meta elements of interest
		var metaList = this.getX3dModel().getHead().getMetaList();
		for (var m in metaList) {
			meta = metaList[m];
			if (meta.getName().equals(metaObject.NAME_ERROR) ||
				meta.getName().equals(metaObject.NAME_WARNING) ||
				meta.getName().equals(metaObject.NAME_HINT) ||
				meta.getName().equals(metaObject.NAME_INFO) ||
				meta.getName().equals(metaObject.NAME_TODO))
			{
				metaResult += meta.toStringX3D();
			}
		}
		validationResult += this.x3dModel.validate(); // walk entire tree to validate correctness
	}
	catch (e)
	{
		exceptionResult = e; // report exception failures, if any
	}
	if  (metaResult === "" && exceptionResult === "" && validationResult === "")
	     return "success";
	else
	{
		var returnMessage = metaResult;
		if  (exceptionResult !== "" && validationResult !== "")
			returnMessage += "\n*** ";
		returnMessage += exceptionResult;
		if  (exceptionResult === "" && validationResult !== "")
			returnMessage = "\n" + returnMessage; // skip line before meta tags, etc.
		returnMessage += validationResult;
		return returnMessage;
	}
  },
    /** Default main() method provided for test purposes.
     * @param argv input parameters
     */
    main : function (argv)
    {
		var testObject = new BindingOperations_sail();
		print ("BindingOperations_sail execution self-validation test results: " + testObject.validateSelf());
	}
}
new BindingOperations_sail().main();
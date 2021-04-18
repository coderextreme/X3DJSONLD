load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("3.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("ViewPositionOrientationPrototype.x3d"))
        .addMeta(new meta().setName("creator").setContent("Leonard Daly and Don Brutzman"))
        .addMeta(new meta().setName("translator").setContent("Don Brutzman"))
        .addMeta(new meta().setName("created").setContent("1 November 2000"))
        .addMeta(new meta().setName("modified").setContent("27 May 2017"))
        .addMeta(new meta().setName("description").setContent("ViewPositionOrientation prototype provides local position and orientation as user navigates, with optional console output"))
        .addMeta(new meta().setName("info").setContent("Note fix: metadata is no longer an allowed ProtoDeclare field name, since ProtoInstance already includes a metadata field"))
        .addMeta(new meta().setName("reference").setContent("ViewPositionOrientationExample.x3d"))
        .addMeta(new meta().setName("reference").setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/WhereAmIExample.x3d"))
        .addMeta(new meta().setName("reference").setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/WhereAmIPrototype.x3d"))
        .addMeta(new meta().setName("reference").setContent("http://www.realism.com/Web3D/Examples#WhereAmI"))
        .addMeta(new meta().setName("reference").setContent("http://www.realism.com/vrml/Example/WhereAmI/WhereAmI_Proto.wrl"))
        .addMeta(new meta().setName("identifier").setContent("https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../../license.html")))
      .setScene(new Scene()
        .addComments(new CommentsBlock("Thanks to Leonard Daly for the original design of this prototype"))
        .addChild(new ProtoDeclare().setName("ViewPositionOrientation").setAppinfo("ViewPositionOrientation provides provides console output of local position and orientation as user navigates")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFBOOL).setName("enabled").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether or not ViewPositionOrientation sends output to console").setValue("true"))
            .addField(new field().setType(field.TYPE_SFBOOL).setName("traceEnabled").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Output internal trace messages for debugging this node, intended for developer use only").setValue("true"))
            .addField(new field().setType(field.TYPE_SFBOOL).setName("set_traceEnabled").setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("Ability to turn output tracing on/off at runtime"))
            .addField(new field().setType(field.TYPE_SFVEC3F).setName("position_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Output local position"))
            .addField(new field().setType(field.TYPE_SFROTATION).setName("orientation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Output local orientation"))
            .addField(new field().setType(field.TYPE_MFSTRING).setName("outputViewpointString").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("MFString value of new Viewpoint, suitable for use in string field of a Text node")))
          .setProtoBody(new ProtoBody()
            .addChild(new ProximitySensor().setDEF("WhereSensor").setSize(Java.to([1000000000,1000000000,1000000000], Java.type("float[]")))
              .setIS(new IS()
                .addConnect(new connect().setNodeField("enabled").setProtoField("enabled"))))
            .addComments(new CommentsBlock("it's a big old world out there! large box likely handles most use cases."))
            .addChild(new Script().setDEF("OutputPositionOrientation")
              .addField(new field().setType(field.TYPE_SFBOOL).setName("traceEnabled").setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
              .addField(new field().setType(field.TYPE_SFBOOL).setName("set_traceEnabled").setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setType(field.TYPE_SFVEC3F).setName("set_position").setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setType(field.TYPE_SFROTATION).setName("set_orientation").setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setType(field.TYPE_SFVEC3F).setName("position").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("0 0 0"))
              .addField(new field().setType(field.TYPE_SFROTATION).setName("orientation").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("0 1 0 0"))
              .addField(new field().setType(field.TYPE_SFVEC3F).setName("position_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .addField(new field().setType(field.TYPE_SFROTATION).setName("orientation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .addField(new field().setType(field.TYPE_MFSTRING).setName("outputViewpointString").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .setIS(new IS()
                .addConnect(new connect().setNodeField("traceEnabled").setProtoField("traceEnabled"))
                .addConnect(new connect().setNodeField("set_traceEnabled").setProtoField("set_traceEnabled"))
                .addConnect(new connect().setNodeField("position_changed").setProtoField("position_changed"))
                .addConnect(new connect().setNodeField("orientation_changed").setProtoField("orientation_changed"))
                .addConnect(new connect().setNodeField("outputViewpointString").setProtoField("outputViewpointString")))
              .setSourceCode("ecmascript:\n"+
"\n"+
"function roundoff (value, digits) // for local use only\n"+
"{\n"+
"	var resolution = 1;\n"+
"	for (i = 1; i <= digits; i++ )\n"+
"	{\n"+
"		resolution *= 10;\n"+
"	}\n"+
"	return Math.round (value*resolution) / resolution; // round to resolution\n"+
"}\n"+
"function outputViewpoint ()\n"+
"{\n"+
"  var holdString = \n"+
"        '<Viewpoint position=\"' +\n"+
"		roundoff (position.x, 1) + ' ' +\n"+
"		roundoff (position.y, 1) + ' ' +\n"+
"		roundoff (position.z, 1) +\n"+
"        '\" orientation=\"' +\n"+
"		roundoff (orientation.x, 3) + ' ' +\n"+
"		roundoff (orientation.y, 3) + ' ' +\n"+
"		roundoff (orientation.z, 3) + ' ' +\n"+
"		roundoff (orientation.angle, 4) + '\"/>' ;\n"+
"   tracePrint (holdString);\n"+
"   outputViewpointString = new MFString (holdString);\n"+
"}\n"+
"function set_position (value)\n"+
"{\n"+
"	position = value; // save persistent value\n"+
"	position_changed = position; // output event\n"+
"	outputViewpoint ();\n"+
"}\n"+
"function set_orientation (value)\n"+
"{\n"+
"	orientation = value; // save persistent value\n"+
"	orientation_changed = orientation; // output event\n"+
"	outputViewpoint ();\n"+
"}\n"+
"function set_traceEnabled (value)\n"+
"{\n"+
"	traceEnabled = value;\n"+
"	alwaysPrint ('traceEnabled=' + traceEnabled);\n"+
"}\n"+
"function alwaysPrint (text)\n"+
"{\n"+
"	Browser.print ('[ViewPositionOrientation] ' + text + '\\n');\n"+
"}\n"+
"function tracePrint (text)\n"+
"{\n"+
"	if (traceEnabled) alwaysPrint (text);\n"+
"}"))
            .addChild(new ROUTE().setFromField("position_changed").setFromNode("WhereSensor").setToField("set_position").setToNode("OutputPositionOrientation"))
            .addChild(new ROUTE().setFromField("orientation_changed").setFromNode("WhereSensor").setToField("set_orientation").setToNode("OutputPositionOrientation"))))
        .addComments(new CommentsBlock("===================="))
        .addChild(new Viewpoint().setDescription("ViewPositionOrientation prototype").setPosition(Java.to([0,0,14], Java.type("float[]"))))
        .addChild(new Anchor().setDescription("ViewPositionOrientation Example").setParameter(Java.to(["target=_blank"], Java.type("java.lang.String[]"))).setUrl(Java.to(["ViewPositionOrientationExample.x3d","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationExample.x3d","ViewPositionOrientationExample.wrl","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationExample.wrl"], Java.type("java.lang.String[]")))
          .addChild(new Shape()
            .setGeometry(new Text().setString(Java.to(["ViewPositionOrientationPrototype","is a prototype definition file","","Click this text to see","ViewPositionOrientationExample"], Java.type("java.lang.String[]")))
              .setFontStyle(new FontStyle().setJustify(Java.to(["MIDDLE","MIDDLE"], Java.type("java.lang.String[]"))).setSize(1.2)))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(Java.to([0.6,0.8,0.4], Java.type("float[]"))))))
          .addComments(new CommentsBlock("Selectable Text design pattern has transparent Box and TouchSensor description as a tooltip"))
          .addChild(new Shape()
            .addComments(new CommentsBlock("Author TODO: to adjust transparent Box as text-selection assist, set width and height to match size, then set transparency='1' to make invisible."))
            .setGeometry(new Box().setSize(Java.to([16,7,0.001], Java.type("float[]"))))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setTransparency(1))))))      ;
    X3D0.toFileX3D("../data/ViewPositionOrientationPrototype.new.x3d");

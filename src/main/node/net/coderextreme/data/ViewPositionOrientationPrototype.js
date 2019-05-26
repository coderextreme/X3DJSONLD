var java = require('java');
var autoclass = require('../../../X3Dautoclass.js');
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroesSync(true);
      var X3D0 =  new autoclass.X3D().setProfileSync("Immersive").setVersionSync("3.0")
      .setHeadSync(new autoclass.head()
        .addMetaSync(new autoclass.meta().setNameSync("title").setContentSync("ViewPositionOrientationPrototype.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("creator").setContentSync("Leonard Daly and Don Brutzman"))
        .addMetaSync(new autoclass.meta().setNameSync("translator").setContentSync("Don Brutzman"))
        .addMetaSync(new autoclass.meta().setNameSync("created").setContentSync("1 November 2000"))
        .addMetaSync(new autoclass.meta().setNameSync("modified").setContentSync("27 May 2017"))
        .addMetaSync(new autoclass.meta().setNameSync("description").setContentSync("ViewPositionOrientation prototype provides local position and orientation as user navigates, with optional console output"))
        .addMetaSync(new autoclass.meta().setNameSync("info").setContentSync("Note fix: metadata is no longer an allowed ProtoDeclare field name, since ProtoInstance already includes a metadata field"))
        .addMetaSync(new autoclass.meta().setNameSync("reference").setContentSync("ViewPositionOrientationExample.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("reference").setContentSync("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/WhereAmIExample.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("reference").setContentSync("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/WhereAmIPrototype.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("reference").setContentSync("http://www.realism.com/Web3D/Examples#WhereAmI"))
        .addMetaSync(new autoclass.meta().setNameSync("reference").setContentSync("http://www.realism.com/vrml/Example/WhereAmI/WhereAmI_Proto.wrl"))
        .addMetaSync(new autoclass.meta().setNameSync("identifier").setContentSync("https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("generator").setContentSync("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMetaSync(new autoclass.meta().setNameSync("license").setContentSync("../../license.html")))
      .setSceneSync(new autoclass.Scene()
        .addCommentsSync(new autoclass.CommentsBlock("Thanks to Leonard Daly for the original design of this prototype"))
        .addChildSync(new autoclass.ProtoDeclare().setNameSync("ViewPositionOrientation").setAppinfoSync("ViewPositionOrientation provides provides console output of local position and orientation as user navigates")
          .setProtoInterfaceSync(new autoclass.ProtoInterface()
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("enabled").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfoSync("Whether or not ViewPositionOrientation sends output to console").setValueSync("true"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("traceEnabled").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfoSync("Output internal trace messages for debugging this node, intended for developer use only").setValueSync("true"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("set_traceEnabled").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTONLY).setAppinfoSync("Ability to turn output tracing on/off at runtime"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("position_changed").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfoSync("Output local position"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFROTATION).setNameSync("orientation_changed").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfoSync("Output local orientation"))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFSTRING).setNameSync("outputViewpointString").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY).setAppinfoSync("MFString value of new Viewpoint, suitable for use in string field of a Text node")))
          .setProtoBodySync(new autoclass.ProtoBody()
            .addChildSync(new autoclass.ProximitySensor().setDEFSync("WhereSensor").setSizeSync(java.newArray("float", [java.newFloat(1000000000), java.newFloat(1000000000), java.newFloat(1000000000)]))
              .setISSync(new autoclass.IS()
                .addConnectSync(new autoclass.connect().setNodeFieldSync("enabled").setProtoFieldSync("enabled"))))
            .addCommentsSync(new autoclass.CommentsBlock("it's a big old world out there! large box likely handles most use cases."))
            .addChildSync(new autoclass.Script().setDEFSync("OutputPositionOrientation")
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("traceEnabled").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFBOOL).setNameSync("set_traceEnabled").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTONLY))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("set_position").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTONLY))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFROTATION).setNameSync("set_orientation").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTONLY))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("position").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setValueSync("0 0 0"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFROTATION).setNameSync("orientation").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setValueSync("0 1 0 0"))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("position_changed").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFROTATION).setNameSync("orientation_changed").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFSTRING).setNameSync("outputViewpointString").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY))
              .setISSync(new autoclass.IS()
                .addConnectSync(new autoclass.connect().setNodeFieldSync("traceEnabled").setProtoFieldSync("traceEnabled"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("set_traceEnabled").setProtoFieldSync("set_traceEnabled"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("position_changed").setProtoFieldSync("position_changed"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("orientation_changed").setProtoFieldSync("orientation_changed"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("outputViewpointString").setProtoFieldSync("outputViewpointString")))
              .setSourceCodeSync("ecmascript:\n"+
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
            .addChildSync(new autoclass.ROUTE().setFromFieldSync("position_changed").setFromNodeSync("WhereSensor").setToFieldSync("set_position").setToNodeSync("OutputPositionOrientation"))
            .addChildSync(new autoclass.ROUTE().setFromFieldSync("orientation_changed").setFromNodeSync("WhereSensor").setToFieldSync("set_orientation").setToNodeSync("OutputPositionOrientation"))))
        .addCommentsSync(new autoclass.CommentsBlock("===================="))
        .addChildSync(new autoclass.Viewpoint().setDescriptionSync("ViewPositionOrientation prototype").setPositionSync(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(14)])))
        .addChildSync(new autoclass.Anchor().setDescriptionSync("ViewPositionOrientation Example").setParameterSync(java.newArray("java.lang.String", ["target=_blank"])).setUrlSync(java.newArray("java.lang.String", ["ViewPositionOrientationExample.x3d","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationExample.x3d","ViewPositionOrientationExample.wrl","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationExample.wrl"]))
          .addChildSync(new autoclass.Shape()
            .setGeometrySync(new autoclass.Text().setStringSync(java.newArray("java.lang.String", ["ViewPositionOrientationPrototype","is a prototype definition file","","Click this text to see","ViewPositionOrientationExample"]))
              .setFontStyleSync(new autoclass.FontStyle().setJustifySync(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"])).setSizeSync(java.newFloat(1.2))))
            .setAppearanceSync(new autoclass.Appearance()
              .setMaterialSync(new autoclass.Material().setDiffuseColorSync(java.newArray("float", [java.newFloat(0.6), java.newFloat(0.8), java.newFloat(0.4)])))))
          .addCommentsSync(new autoclass.CommentsBlock("Selectable Text design pattern has transparent Box and TouchSensor description as a tooltip"))
          .addChildSync(new autoclass.Shape()
            .addCommentsSync(new autoclass.CommentsBlock("Author TODO: to adjust transparent Box as text-selection assist, set width and height to match size, then set transparency='1' to make invisible."))
            .setGeometrySync(new autoclass.Box().setSizeSync(java.newArray("float", [java.newFloat(16), java.newFloat(7), java.newFloat(0.001)])))
            .setAppearanceSync(new autoclass.Appearance()
              .setMaterialSync(new autoclass.Material().setTransparencySync(java.newFloat(1)))))))      ;
    X3D0.toFileX3D("../data/ViewPositionOrientationPrototype.new.x3d");

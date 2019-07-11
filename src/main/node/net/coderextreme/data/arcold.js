var java = require('java');
var autoclass = require('../../../X3Dautoclass.js');
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroesSync(true);
var ProtoInstance0 = null;
var ProtoInstance1 = null;
var ProtoInstance2 = null;
var ProtoInstance3 = null;
var ProtoInstance4 = null;
var ProtoInstance5 = null;
var ProtoInstance6 = null;
var ProtoInstance7 = null;
var ProtoInstance8 = null;
var ProtoInstance9 = null;
var ProtoInstance10 = null;
var ProtoInstance11 = null;
var ProtoInstance12 = null;
      var X3D0 =  new autoclass.X3D().setProfileSync("Immersive").setVersionSync("3.3")
      .setHeadSync(new autoclass.head()
        .addMetaSync(new autoclass.meta().setNameSync("title").setContentSync("arcold.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("creator").setContentSync("John Carlson"))
        .addMetaSync(new autoclass.meta().setNameSync("generator").setContentSync("manual"))
        .addMetaSync(new autoclass.meta().setNameSync("identifier").setContentSync("https://coderextreme.net/X3DJSONLD/arc.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("description").setContentSync("an attempt to implement an arc in a graph")))
      .setSceneSync(new autoclass.Scene()
        .addChildSync(new autoclass.Viewpoint().setPositionSync(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(5)])).setDescriptionSync("a moving graph"))
        .addChildSync(new autoclass.Background().setSkyColorSync(java.newArray("float", [java.newFloat(0.4), java.newFloat(0.4), java.newFloat(0.4)])))
        .addChildSync(new autoclass.Transform().setDEFSync("trans1")
          .addChildSync(new autoclass.Transform().setDEFSync("rotscale1")
            .addChildSync(new autoclass.Shape()
              .setAppearanceSync(new autoclass.Appearance()
                .setMaterialSync(new autoclass.Material().setDiffuseColorSync(java.newArray("float", [java.newFloat(0.2), java.newFloat(0.7), java.newFloat(0.7)]))))
              .setGeometrySync(new autoclass.Cylinder().setRadiusSync(java.newFloat(0.1))))))
        .addChildSync(new autoclass.Transform().setDEFSync("trans2")
          .addChildSync(new autoclass.Transform().setDEFSync("rotscale2")
            .addChildSync(new autoclass.Shape()
              .setAppearanceSync(new autoclass.Appearance()
                .setMaterialSync(new autoclass.Material().setDiffuseColorSync(java.newArray("float", [java.newFloat(0.2), java.newFloat(0.7), java.newFloat(0.7)]))))
              .setGeometrySync(new autoclass.Cylinder().setRadiusSync(java.newFloat(0.1))))))
        .addChildSync(new autoclass.Transform().setDEFSync("trans3")
          .addChildSync(new autoclass.Transform().setDEFSync("rotscale3")
            .addChildSync(new autoclass.Shape()
              .setAppearanceSync(new autoclass.Appearance()
                .setMaterialSync(new autoclass.Material().setDiffuseColorSync(java.newArray("float", [java.newFloat(0.2), java.newFloat(0.7), java.newFloat(0.7)]))))
              .setGeometrySync(new autoclass.Cylinder().setRadiusSync(java.newFloat(0.1))))))
        .addChildSync(new autoclass.ProtoDeclare().setNameSync("point")
          .setProtoInterfaceSync(new autoclass.ProtoInterface()
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("translation").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("0 0 0")))
          .setProtoBodySync(new autoclass.ProtoBody()
            .addChildSync(new autoclass.Transform().setDEFSync("node")
              .setISSync(new autoclass.IS()
                .addConnectSync(new autoclass.connect().setNodeFieldSync("translation").setProtoFieldSync("translation")))
              .addChildSync(new autoclass.Shape()
                .setGeometrySync(new autoclass.Sphere().setRadiusSync(java.newFloat(0.1)))
                .setAppearanceSync(new autoclass.Appearance()
                  .setMaterialSync(new autoclass.Material().setDiffuseColorSync(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0)])))))
              .addChildSync(new autoclass.PositionInterpolator().setDEFSync("PI1").setKeySync(java.newArray("float", [java.newFloat(0), java.newFloat(1)])).setKeyValueSync(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(5), java.newFloat(0)])))
              .addChildSync(new autoclass.Script().setDEFSync("MB1")
                .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("translation").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("50 50 0"))
                .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("old").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValueSync("0 0 0"))
                .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFTIME).setNameSync("set_location").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTONLY))
                .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_MFVEC3F).setNameSync("keyValue").setAccessTypeSync(autoclass.field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCodeSync("ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(translation);\n"+
"		}"))
              .addChildSync(new autoclass.TimeSensor().setDEFSync("CL1").setCycleIntervalSync(3).setLoopSync(true))
              .addChildSync(new autoclass.ROUTE().setFromNodeSync("CL1").setFromFieldSync("cycleTime").setToNodeSync("MB1").setToFieldSync("set_location"))
              .addChildSync(new autoclass.ROUTE().setFromNodeSync("CL1").setFromFieldSync("fraction_changed").setToNodeSync("PI1").setToFieldSync("set_fraction"))
              .addChildSync(new autoclass.ROUTE().setFromNodeSync("MB1").setFromFieldSync("keyValue").setToNodeSync("PI1").setToFieldSync("keyValue"))
              .addChildSync(new autoclass.ROUTE().setFromNodeSync("PI1").setFromFieldSync("value_changed").setToNodeSync("node").setToFieldSync("set_translation")))))
        .addCommentsSync(new autoclass.CommentsBlock("from doug sanden"))
        .addChildSync(new autoclass.ProtoDeclare().setNameSync("x3dconnector")
          .setProtoInterfaceSync(new autoclass.ProtoInterface()
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFNODE).setNameSync("startnode").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFNODE).setNameSync("endnode").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFNODE).setNameSync("transnode").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFNODE).setNameSync("rotscalenode").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("set_startpoint").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTONLY))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("set_endpoint").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTONLY)))
          .setProtoBodySync(new autoclass.ProtoBody()
            .addChildSync(new autoclass.Script().setDEFSync("S1")
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFNODE).setNameSync("startnode").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFNODE).setNameSync("endnode").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFNODE).setNameSync("transnode").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFNODE).setNameSync("rotscalenode").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTOUTPUT))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("set_startpoint").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTONLY))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("set_endpoint").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTONLY))
              .setISSync(new autoclass.IS()
                .addConnectSync(new autoclass.connect().setNodeFieldSync("startnode").setProtoFieldSync("startnode"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("endnode").setProtoFieldSync("endnode"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("transnode").setProtoFieldSync("transnode"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("rotscalenode").setProtoFieldSync("rotscalenode"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("set_startpoint").setProtoFieldSync("set_startpoint"))
                .addConnectSync(new autoclass.connect().setNodeFieldSync("set_endpoint").setProtoFieldSync("set_endpoint")))
              .setSourceCodeSync("ecmascript:\n"+
"        function recompute(startpoint,endpoint){\n"+
"	    if (typeof endpoint === 'undefined') {\n"+
"		return;\n"+
"	    }\n"+
"            var dif = endpoint.subtract(startpoint);\n"+
"            var dist = dif.length()*0.5;\n"+
"            var dif2 = dif.multiply(0.5);\n"+
"            var norm = dif.normalize();\n"+
"            var transl = startpoint.add(dif2);\n"+
"	    if (typeof Quaternion !== 'undefined') {\n"+
"		    return {\n"+
"			    scale : new SFVec3f(1.0,dist,1.0),\n"+
"			    translation : transl,\n"+
"			    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), norm)\n"+
"		    };\n"+
"	    } else {\n"+
"		    return {\n"+
"			    scale : new SFVec3f(1.0,dist,1.0),\n"+
"			    translation : transl,\n"+
"			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)\n"+
"		    };\n"+
"	    }\n"+
"	}\n"+
"	function recompute_and_route(startpoint, endpoint) {\n"+
"		var trafo = recompute(startpoint, endpoint);\n"+
"		if (typeof trafo !== 'undefined') {\n"+
"			transnode.translation = trafo.translation;\n"+
"			rotscalenode.rotation = trafo.rotation;\n"+
"			rotscalenode.scale = trafo.scale;\n"+
"		} else {\n"+
"			Browser.print(\"recompute returned undefined\");\n"+
"		}\n"+
"	}\n"+
"        function initialize(){\n"+
"            recompute_and_route(startnode.translation,endnode.translation);\n"+
"        }\n"+
"        function set_startpoint(val,t){\n"+
"            recompute_and_route(val || startnode.translation,endnode.translation);\n"+
"        }\n"+
"        function set_endpoint(val,t){\n"+
"            recompute_and_route(startnode.translation,val || endnode.translation);\n"+
"        }"))))
        .addChildSync(ProtoInstance0 = new autoclass.ProtoInstance().setNameSync("point").setDEFSync("G1"))
        .addChildSync(ProtoInstance1 = new autoclass.ProtoInstance().setNameSync("point").setDEFSync("G2"))
        .addChildSync(ProtoInstance2 = new autoclass.ProtoInstance().setNameSync("point").setDEFSync("G3"))
        .addChildSync(ProtoInstance3 = new autoclass.ProtoInstance().setNameSync("point").setDEFSync("G4"))
        .addChildSync(ProtoInstance4 = new autoclass.ProtoInstance().setNameSync("x3dconnector").setDEFSync("connector1"))
        .addChildSync(ProtoInstance7 = new autoclass.ProtoInstance().setNameSync("x3dconnector").setDEFSync("connector2"))
        .addChildSync(ProtoInstance10 = new autoclass.ProtoInstance().setNameSync("x3dconnector").setDEFSync("connector3"))
        .addChildSync(new autoclass.ROUTE().setFromNodeSync("G1").setFromFieldSync("translation_changed").setToNodeSync("connector1").setToFieldSync("set_startpoint"))
        .addChildSync(new autoclass.ROUTE().setFromNodeSync("G2").setFromFieldSync("translation_changed").setToNodeSync("connector1").setToFieldSync("set_endpoint"))
        .addChildSync(new autoclass.ROUTE().setFromNodeSync("G1").setFromFieldSync("translation_changed").setToNodeSync("connector2").setToFieldSync("set_startpoint"))
        .addChildSync(new autoclass.ROUTE().setFromNodeSync("G3").setFromFieldSync("translation_changed").setToNodeSync("connector2").setToFieldSync("set_endpoint"))
        .addChildSync(new autoclass.ROUTE().setFromNodeSync("G1").setFromFieldSync("translation_changed").setToNodeSync("connector3").setToFieldSync("set_startpoint"))
        .addChildSync(new autoclass.ROUTE().setFromNodeSync("G4").setFromFieldSync("translation_changed").setToNodeSync("connector3").setToFieldSync("set_endpoint")))      ;
ProtoInstance4
          .addFieldValueSync(new autoclass.fieldValue().setNameSync("startnode")
            .addChildSync(ProtoInstance5 = new autoclass.ProtoInstance().setUSESync("G1")));
ProtoInstance4
          .addFieldValueSync(new autoclass.fieldValue().setNameSync("endnode")
            .addChildSync(ProtoInstance6 = new autoclass.ProtoInstance().setUSESync("G2")));
ProtoInstance4
          .addFieldValueSync(new autoclass.fieldValue().setNameSync("transnode")
            .addChildSync(new autoclass.Transform().setUSESync("trans1")));
ProtoInstance4
          .addFieldValueSync(new autoclass.fieldValue().setNameSync("rotscalenode")
            .addChildSync(new autoclass.Transform().setUSESync("rotscale1")));
ProtoInstance7
          .addFieldValueSync(new autoclass.fieldValue().setNameSync("startnode")
            .addChildSync(ProtoInstance8 = new autoclass.ProtoInstance().setUSESync("G1")));
ProtoInstance7
          .addFieldValueSync(new autoclass.fieldValue().setNameSync("endnode")
            .addChildSync(ProtoInstance9 = new autoclass.ProtoInstance().setUSESync("G3")));
ProtoInstance7
          .addFieldValueSync(new autoclass.fieldValue().setNameSync("transnode")
            .addChildSync(new autoclass.Transform().setUSESync("trans2")));
ProtoInstance7
          .addFieldValueSync(new autoclass.fieldValue().setNameSync("rotscalenode")
            .addChildSync(new autoclass.Transform().setUSESync("rotscale2")));
ProtoInstance10
          .addFieldValueSync(new autoclass.fieldValue().setNameSync("startnode")
            .addChildSync(ProtoInstance11 = new autoclass.ProtoInstance().setUSESync("G1")));
ProtoInstance10
          .addFieldValueSync(new autoclass.fieldValue().setNameSync("endnode")
            .addChildSync(ProtoInstance12 = new autoclass.ProtoInstance().setUSESync("G4")));
ProtoInstance10
          .addFieldValueSync(new autoclass.fieldValue().setNameSync("transnode")
            .addChildSync(new autoclass.Transform().setUSESync("trans3")));
ProtoInstance10
          .addFieldValueSync(new autoclass.fieldValue().setNameSync("rotscalenode")
            .addChildSync(new autoclass.Transform().setUSESync("rotscale3")));
    X3D0.toFileX3D("../data/arcold.new.x3d");

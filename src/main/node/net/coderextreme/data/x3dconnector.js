var java = require('java');
var autoclass = require('../../../X3Dautoclass.js');
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroesSync(true);
var ProtoInstance0 = null;
      var X3D0 =  new autoclass.X3D().setProfileSync("Immersive").setVersionSync("3.3")
      .setHeadSync(new autoclass.head()
        .addMetaSync(new autoclass.meta().setNameSync("title").setContentSync("x3dconnector"))
        .addMetaSync(new autoclass.meta().setNameSync("creator").setContentSync("Lost, Doug Sanden I think"))
        .addMetaSync(new autoclass.meta().setNameSync("generator").setContentSync("manual"))
        .addMetaSync(new autoclass.meta().setNameSync("identifier").setContentSync("https://coderextreme.net/X3DJSONLD/x3dconnectorProto.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("description").setContentSync("a generic proto to connect two objects")))
      .setSceneSync(new autoclass.Scene()
        .addChildSync(new autoclass.Viewpoint().setPositionSync(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(5)])).setDescriptionSync("Only Viewpoint"))
        .addChildSync(new autoclass.Background().setSkyColorSync(java.newArray("float", [java.newFloat(0.4), java.newFloat(0.4), java.newFloat(0.4)])))
        .addChildSync(new autoclass.Transform().setDEFSync("G1")
          .addChildSync(new autoclass.Shape()
            .setAppearanceSync(new autoclass.Appearance()
              .setMaterialSync(new autoclass.Material().setDiffuseColorSync(java.newArray("float", [java.newFloat(0.7), java.newFloat(0.2), java.newFloat(0.2)]))))
            .setGeometrySync(new autoclass.Sphere().setRadiusSync(java.newFloat(0.1))))
          .addChildSync(new autoclass.PlaneSensor().setDescriptionSync("Grab to move").setDEFSync("PS1"))
          .addChildSync(new autoclass.ROUTE().setFromNodeSync("PS1").setFromFieldSync("translation_changed").setToNodeSync("G1").setToFieldSync("set_translation")))
        .addChildSync(new autoclass.Transform().setDEFSync("G2").setTranslationSync(java.newArray("float", [java.newFloat(1), java.newFloat(-1), java.newFloat(0.01)]))
          .addChildSync(new autoclass.Shape()
            .setAppearanceSync(new autoclass.Appearance()
              .setMaterialSync(new autoclass.Material().setDiffuseColorSync(java.newArray("float", [java.newFloat(0.2), java.newFloat(0.7), java.newFloat(0.2)]))))
            .setGeometrySync(new autoclass.Sphere().setRadiusSync(java.newFloat(0.1))))
          .addChildSync(new autoclass.PlaneSensor().setDescriptionSync("Grab to move").setOffsetSync(java.newArray("float", [java.newFloat(1), java.newFloat(-1), java.newFloat(0.01)])).setDEFSync("PS2"))
          .addChildSync(new autoclass.ROUTE().setFromNodeSync("PS2").setFromFieldSync("translation_changed").setToNodeSync("G2").setToFieldSync("set_translation")))
        .addChildSync(new autoclass.Transform().setDEFSync("transC1")
          .addChildSync(new autoclass.Transform().setDEFSync("rotscaleC1")
            .addChildSync(new autoclass.Shape()
              .setAppearanceSync(new autoclass.Appearance()
                .setMaterialSync(new autoclass.Material().setDiffuseColorSync(java.newArray("float", [java.newFloat(0.2), java.newFloat(0.7), java.newFloat(0.7)])).setTransparencySync(java.newFloat(0.5))))
              .setGeometrySync(new autoclass.Cylinder().setRadiusSync(java.newFloat(0.05))))))
        .addChildSync(new autoclass.ProtoDeclare().setNameSync("x3dconnector")
          .setProtoInterfaceSync(new autoclass.ProtoInterface()
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFNODE).setNameSync("startnode").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFNODE).setNameSync("endnode").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFNODE).setNameSync("transnode").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFNODE).setNameSync("rotscalenode").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("set_startpoint").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTONLY))
            .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFVEC3F).setNameSync("set_endpoint").setAccessTypeSync(autoclass.field.ACCESSTYPE_INPUTONLY)))
          .setProtoBodySync(new autoclass.ProtoBody()
            .addChildSync(new autoclass.Script().setDEFSync("S1")
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFNODE).setNameSync("startnode").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFNODE).setNameSync("endnode").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFNODE).setNameSync("transnode").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY))
              .addFieldSync(new autoclass.field().setTypeSync(autoclass.field.TYPE_SFNODE).setNameSync("rotscalenode").setAccessTypeSync(autoclass.field.ACCESSTYPE_INITIALIZEONLY))
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
"	      var trafo = recompute(startpoint, endpoint);\n"+
"	      transnode.translation = trafo.translation;\n"+
"	      rotscalenode.rotation = trafo.rotation;\n"+
"	      rotscalenode.scale = trafo.scale;\n"+
"	}\n"+
"        function initialize(){\n"+
"            recompute_and_route(startnode.translation,endnode.translation);\n"+
"        }\n"+
"        function set_startpoint(val,t){\n"+
"            recompute_and_route(val,endnode.translation);\n"+
"        }\n"+
"        function set_endpoint(val,t){\n"+
"            recompute_and_route(startnode.translation,val);\n"+
"        }"))))
        .addChildSync(ProtoInstance0 = new autoclass.ProtoInstance().setNameSync("x3dconnector").setDEFSync("connector1"))
        .addChildSync(new autoclass.ROUTE().setFromNodeSync("G1").setFromFieldSync("translation_changed").setToNodeSync("connector1").setToFieldSync("set_startpoint"))
        .addChildSync(new autoclass.ROUTE().setFromNodeSync("G2").setFromFieldSync("translation_changed").setToNodeSync("connector1").setToFieldSync("set_endpoint")))      ;
ProtoInstance0
          .addFieldValueSync(new autoclass.fieldValue().setNameSync("startnode")
            .addChildSync(new autoclass.Transform().setUSESync("G1")));
ProtoInstance0
          .addFieldValueSync(new autoclass.fieldValue().setNameSync("endnode")
            .addChildSync(new autoclass.Transform().setUSESync("G2")));
ProtoInstance0
          .addFieldValueSync(new autoclass.fieldValue().setNameSync("transnode")
            .addChildSync(new autoclass.Transform().setUSESync("transC1")));
ProtoInstance0
          .addFieldValueSync(new autoclass.fieldValue().setNameSync("rotscalenode")
            .addChildSync(new autoclass.Transform().setUSESync("rotscaleC1")));
ProtoInstance0
          .addFieldValueSync(new autoclass.fieldValue().setNameSync("set_startpoint"));
ProtoInstance0
          .addFieldValueSync(new autoclass.fieldValue().setNameSync("set_endpoint"));
    X3D0.toFileX3D("../data/x3dconnector.new.x3d");

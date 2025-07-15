import x3dpsail as x3d

x3d.ConfigurationProperties.setXsltEngine(x3d.ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
x3d.ConfigurationProperties.setDeleteIntermediateFiles(False);
x3d.ConfigurationProperties.setStripTrailingZeroes(True);
x3d.ConfigurationProperties.setStripDefaultAttributes(True);
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("arc4.x3d")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("creator")
meta3.setContent("Lost, Doug Sanden I think")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("generator")
meta4.setContent("manual")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("identifier")
meta5.setContent("https://coderextreme.net/X3DJSONLD/src/main/data/x3dconnectorProto.x3d")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("description")
meta6.setContent("a generic proto to connect two objects")

head1.addMeta(meta6)

X3D0.setHead(head1)
Scene7 = x3d.Scene()
Viewpoint8 = x3d.Viewpoint()
Viewpoint8.setPosition(x3d.doubleToFloat([0,0,5]))
Viewpoint8.setDescription("Only Viewpoint")

Scene7.addChild(Viewpoint8)
Background9 = x3d.Background()
Background9.setSkyColor(x3d.doubleToFloat([0.4,0.4,0.4]))

Scene7.addChild(Background9)
Transform10 = x3d.Transform()
Transform10.setDEF("DECLpoint_G1_node")
Shape11 = x3d.Shape()
Sphere12 = x3d.Sphere()
Sphere12.setRadius(0.1)

Shape11.setGeometry(Sphere12)
Appearance13 = x3d.Appearance()
Material14 = x3d.Material()
Material14.setDiffuseColor(x3d.doubleToFloat([1,0,0]))

Appearance13.setMaterial(Material14)

Shape11.setAppearance(Appearance13)

Transform10.addChild(Shape11)
PositionInterpolator15 = x3d.PositionInterpolator()
PositionInterpolator15.setDEF("DECLpoint_G1_PI1")
PositionInterpolator15.setKey(x3d.doubleToFloat([0,1]))
PositionInterpolator15.setKeyValue(x3d.doubleToFloat([0,0,0,0,5,0]))

Transform10.addChild(PositionInterpolator15)
Script16 = x3d.Script()
Script16.setDEF("DECLpoint_G1_MB1")
field17 = x3d.field()
field17.setName("translation")
field17.setAccessType("inputOutput")
field17.setType("SFVec3f")
field17.setValue("0 0 0")

Script16.addField(field17)
field18 = x3d.field()
field18.setName("old")
field18.setAccessType("inputOutput")
field18.setType("SFVec3f")
field18.setValue("0 0 0")

Script16.addField(field18)
field19 = x3d.field()
field19.setName("set_location")
field19.setAccessType("inputOnly")
field19.setType("SFTime")

Script16.addField(field19)
field20 = x3d.field()
field20.setName("keyValue")
field20.setAccessType("inputOutput")
field20.setType("MFVec3f")
field20.setValue("0 0 0 0 5 0")

Script16.addField(field20)

Script16.setSourceCode('''ecmascript:
		function set_location(value) {
                    old = translation;
		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);
                    keyValue = new MFVec3f([old, translation]);
		    // Browser.println(keyValue);
		}''')

Transform10.addChild(Script16)
TimeSensor21 = x3d.TimeSensor()
TimeSensor21.setDEF("DECLpoint_G1_CL1")
TimeSensor21.setCycleInterval(3)
TimeSensor21.setLoop(True)

Transform10.addChild(TimeSensor21)
ROUTE22 = x3d.ROUTE()
ROUTE22.setFromNode("DECLpoint_G1_CL1")
ROUTE22.setFromField("cycleTime")
ROUTE22.setToNode("DECLpoint_G1_MB1")
ROUTE22.setToField("set_location")

Transform10.addChild(ROUTE22)
ROUTE23 = x3d.ROUTE()
ROUTE23.setFromNode("DECLpoint_G1_CL1")
ROUTE23.setFromField("fraction_changed")
ROUTE23.setToNode("DECLpoint_G1_PI1")
ROUTE23.setToField("set_fraction")

Transform10.addChild(ROUTE23)
ROUTE24 = x3d.ROUTE()
ROUTE24.setFromNode("DECLpoint_G1_MB1")
ROUTE24.setFromField("keyValue")
ROUTE24.setToNode("DECLpoint_G1_PI1")
ROUTE24.setToField("keyValue")

Transform10.addChild(ROUTE24)
ROUTE25 = x3d.ROUTE()
ROUTE25.setFromNode("DECLpoint_G1_PI1")
ROUTE25.setFromField("value_changed")
ROUTE25.setToNode("DECLpoint_G1_node")
ROUTE25.setToField("set_translation")

Transform10.addChild(ROUTE25)

Scene7.addChild(Transform10)
Transform26 = x3d.Transform()
Transform26.setDEF("DECLpoint_G2_node")
Shape27 = x3d.Shape()
Sphere28 = x3d.Sphere()
Sphere28.setRadius(0.1)

Shape27.setGeometry(Sphere28)
Appearance29 = x3d.Appearance()
Material30 = x3d.Material()
Material30.setDiffuseColor(x3d.doubleToFloat([1,0,0]))

Appearance29.setMaterial(Material30)

Shape27.setAppearance(Appearance29)

Transform26.addChild(Shape27)
PositionInterpolator31 = x3d.PositionInterpolator()
PositionInterpolator31.setDEF("DECLpoint_G2_PI1")
PositionInterpolator31.setKey(x3d.doubleToFloat([0,1]))
PositionInterpolator31.setKeyValue(x3d.doubleToFloat([0,0,0,0,5,0]))

Transform26.addChild(PositionInterpolator31)
Script32 = x3d.Script()
Script32.setDEF("DECLpoint_G2_MB1")
field33 = x3d.field()
field33.setName("translation")
field33.setAccessType("inputOutput")
field33.setType("SFVec3f")
field33.setValue("0 0 0")

Script32.addField(field33)
field34 = x3d.field()
field34.setName("old")
field34.setAccessType("inputOutput")
field34.setType("SFVec3f")
field34.setValue("0 0 0")

Script32.addField(field34)
field35 = x3d.field()
field35.setName("set_location")
field35.setAccessType("inputOnly")
field35.setType("SFTime")

Script32.addField(field35)
field36 = x3d.field()
field36.setName("keyValue")
field36.setAccessType("inputOutput")
field36.setType("MFVec3f")
field36.setValue("0 0 0 0 5 0")

Script32.addField(field36)

Script32.setSourceCode('''ecmascript:
		function set_location(value) {
                    old = translation;
		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);
                    keyValue = new MFVec3f([old, translation]);
		    // Browser.println(keyValue);
		}''')

Transform26.addChild(Script32)
TimeSensor37 = x3d.TimeSensor()
TimeSensor37.setDEF("DECLpoint_G2_CL1")
TimeSensor37.setCycleInterval(3)
TimeSensor37.setLoop(True)

Transform26.addChild(TimeSensor37)
ROUTE38 = x3d.ROUTE()
ROUTE38.setFromNode("DECLpoint_G2_CL1")
ROUTE38.setFromField("cycleTime")
ROUTE38.setToNode("DECLpoint_G2_MB1")
ROUTE38.setToField("set_location")

Transform26.addChild(ROUTE38)
ROUTE39 = x3d.ROUTE()
ROUTE39.setFromNode("DECLpoint_G2_CL1")
ROUTE39.setFromField("fraction_changed")
ROUTE39.setToNode("DECLpoint_G2_PI1")
ROUTE39.setToField("set_fraction")

Transform26.addChild(ROUTE39)
ROUTE40 = x3d.ROUTE()
ROUTE40.setFromNode("DECLpoint_G2_MB1")
ROUTE40.setFromField("keyValue")
ROUTE40.setToNode("DECLpoint_G2_PI1")
ROUTE40.setToField("keyValue")

Transform26.addChild(ROUTE40)
ROUTE41 = x3d.ROUTE()
ROUTE41.setFromNode("DECLpoint_G2_PI1")
ROUTE41.setFromField("value_changed")
ROUTE41.setToNode("DECLpoint_G2_node")
ROUTE41.setToField("set_translation")

Transform26.addChild(ROUTE41)

Scene7.addChild(Transform26)
Group42 = x3d.Group()
Transform43 = x3d.Transform()
Transform43.setDEF("DECLx3dconnector_connector1_trans")
Transform44 = x3d.Transform()
Transform44.setDEF("DECLx3dconnector_connector1_rotscale")
Shape45 = x3d.Shape()
Appearance46 = x3d.Appearance()
Material47 = x3d.Material()
Material47.setDiffuseColor(x3d.doubleToFloat([0.2,0.7,0.7]))
Material47.setTransparency(0.5)

Appearance46.setMaterial(Material47)

Shape45.setAppearance(Appearance46)
Cylinder48 = x3d.Cylinder()
Cylinder48.setRadius(0.05)

Shape45.setGeometry(Cylinder48)

Transform44.addChild(Shape45)

Transform43.addChild(Transform44)

Group42.addChild(Transform43)
Script49 = x3d.Script()
Script49.setDEF("DECLx3dconnector_connector1_S1")
field50 = x3d.field()
field50.setName("startnode")
field50.setAccessType("initializeOnly")
field50.setType("SFNode")

Script49.addField(field50)
field51 = x3d.field()
field51.setName("endnode")
field51.setAccessType("initializeOnly")
field51.setType("SFNode")

Script49.addField(field51)
field52 = x3d.field()
field52.setName("position")
field52.setAccessType("inputOutput")
field52.setType("SFNode")
Transform53 = x3d.Transform()
Transform53.setUSE("DECLx3dconnector_connector1_trans")

field52.addChild(Transform53)

Script49.addField(field52)
field54 = x3d.field()
field54.setName("rotscale")
field54.setAccessType("inputOutput")
field54.setType("SFNode")
Transform55 = x3d.Transform()
Transform55.setUSE("DECLx3dconnector_connector1_rotscale")

field54.addChild(Transform55)

Script49.addField(field54)
field56 = x3d.field()
field56.setName("set_startpoint")
field56.setAccessType("inputOnly")
field56.setType("SFVec3f")

Script49.addField(field56)
field57 = x3d.field()
field57.setName("set_endpoint")
field57.setAccessType("inputOnly")
field57.setType("SFVec3f")

Script49.addField(field57)

Script49.setSourceCode('''ecmascript:
        function recompute(startpoint,endpoint){
	    if (typeof endpoint === 'undefined') {
		    if (typeof Quaternion !== 'undefined') {
			    return {
				    scale : new SFVec3f(1.0,1.0,1.0),
				    translation : new SFVec3f(1.0,1.0,1.0),
			    	    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), 1.0)
			    };
	    	    } else if (typeof SFRotation !== 'undefined') {
			    return {
				    scale : new SFVec3f(1.0,1.0,1.0),
				    translation : new SFVec3f(1.0,1.0,1.0),
			    	    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),1.0)
			    };
	    	    } else {
			    return {
				    scale : new SFVec3f(1.0,1.0,1.0),
				    translation : new SFVec3f(1.0,1.0,1.0)
			    };
		    }
	    }
            var dif = endpoint.subtract(startpoint);
            var dist = dif.length()*0.5;
            var dif2 = dif.multiply(0.5);
            var norm = dif.normalize();
            var transl = startpoint.add(dif2);
	    if (typeof Quaternion !== 'undefined') {
		    return {
			    scale : new SFVec3f(1.0,dist,1.0),
			    translation : transl,
			    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), norm)
		    };
	    } else if (typeof SFRotation !== 'undefined') {
		    return {
			    scale : new SFVec3f(1.0,dist,1.0),
			    translation : transl,
			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)
		    };
	    } else {
		    return {
			    scale : new SFVec3f(1.0,dist,1.0),
			    translation : transl
		    };
	    }
	}
	function recompute_and_route(startpoint, endpoint) {
	      var trafo = recompute(startpoint, endpoint);
	      position.translation = trafo.translation;
	      rotscale.rotation = trafo.rotation;
	      rotscale.scale = trafo.scale;
	}
        function initialize(){
            recompute_and_route(startnode.translation,endnode.translation);
        }
        function set_startpoint(val,t){
            recompute_and_route(val,endnode.translation);
        }
        function set_endpoint(val,t){
            recompute_and_route(startnode.translation,val);
        }''')

Group42.addChild(Script49)

Scene7.addChild(Group42)
ROUTE58 = x3d.ROUTE()
ROUTE58.setFromNode("DECLpoint_G1_node")
ROUTE58.setFromField("translation_changed")
ROUTE58.setToNode("DECLx3dconnector_connector1_S1")
ROUTE58.setToField("set_startpoint")

Scene7.addChild(ROUTE58)
ROUTE59 = x3d.ROUTE()
ROUTE59.setFromNode("DECLpoint_G2_node")
ROUTE59.setFromField("translation_changed")
ROUTE59.setToNode("DECLx3dconnector_connector1_S1")
ROUTE59.setToField("set_endpoint")

Scene7.addChild(ROUTE59)

X3D0.setScene(Scene7)
X3D0.toFileX3D("../data/arc4.new.graalpy.x3d")
X3D0.toFileJSON("../data/arc4.new.graalpy.json")

'use strict';
import fs from 'fs';
import { * } from './x3d.js';
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
var X3D0 =  new X3D({
profile : new SFString("Immersive"),
version : new SFString("3.3"),

      head : (new head({

        meta : (new meta({
name : new SFString("title"),
content : new SFString("arc"),
}))
        meta : (new meta({
name : new SFString("creator"),
content : new SFString("Lost, Doug Sanden I think"),
}))
        meta : (new meta({
name : new SFString("generator"),
content : new SFString("manual"),
}))
        meta : (new meta({
name : new SFString("identifier"),
content : new SFString("https://coderextreme.net/X3DJSONLD/x3dconnectorProto.x3d"),
}))
        meta : (new meta({
name : new SFString("description"),
content : new SFString("a generic proto to connect two objects"),
}))}))
      scene : (new Scene({

        children : (new Viewpoint({
position : new SFVec3f([0,0,5]),
description : new SFString("Only Viewpoint"),
}))
        children : (new Background({
skyColor : new MFColor([0.4,0.4,0.4]),
transparency : new SFFloat(0),
}))
        children : (new ProtoDeclare({
name : new SFString("point"),

          protoInterface : (new ProtoInterface({

            field : (new field({
type : new SFVec3f(field.TYPE_SFVEC3F),
name : new SFString("translation"),
accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
value : new SFString("0 0 0"),
}))}))
          protoBody : (new ProtoBody({

            children : (new Transform({
dEF : new SFString("node"),
bboxCenter : new SFVec3f([0,0,0]),
bboxSize : new SFVec3f([-1,-1,-1]),

              iS : (new IS({

                connect : (new connect({
nodeField : new SFString("translation"),
protoField : new SFString("translation"),
}))}))
              children : (new Shape({
bboxCenter : new SFVec3f([0,0,0]),
bboxSize : new SFVec3f([-1,-1,-1]),

                geometry : (new Sphere({
radius : new SFFloat(0.1),
}))
                appearance : (new Appearance({

                  material : (new Material({
diffuseColor : new SFColor([1,0,0]),
}))}))}))
              children : (new PositionInterpolator({
dEF : new SFString("PI1"),
key : new MFFloat([0,1]),
keyValue : new MFVec3f([0,0,0,0,5,0]),
}))
              children : (new Script({
dEF : new SFString("MB1"),

                field : (new field({
type : new SFVec3f(field.TYPE_SFVEC3F),
name : new SFString("translation"),
accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
value : new SFString("50 50 0"),
}))
                field : (new field({
type : new SFVec3f(field.TYPE_SFVEC3F),
name : new SFString("old"),
accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
value : new SFString("0 0 0"),
}))
                field : (new field({
type : new SFTime(field.TYPE_SFTIME),
name : new SFString("set_location"),
accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
}))
                field : (new field({
type : new MFVec3f(field.TYPE_MFVEC3F),
name : new SFString("keyValue"),
accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
value : new SFString("0 0 0 0 5 0"),
}))
                .setSourceCode("ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(keyValue);\n"+
"		}")}))
              children : (new TimeSensor({
dEF : new SFString("CL1"),
cycleInterval : new SFTime(3),
loop : new SFBool(true),
}))
              children : (new ROUTE({
fromNode : new SFString("CL1"),
fromField : new SFString("cycleTime"),
toNode : new SFString("MB1"),
toField : new SFString("set_location"),
}))
              children : (new ROUTE({
fromNode : new SFString("CL1"),
fromField : new SFString("fraction_changed"),
toNode : new SFString("PI1"),
toField : new SFString("set_fraction"),
}))
              children : (new ROUTE({
fromNode : new SFString("MB1"),
fromField : new SFString("keyValue"),
toNode : new SFString("PI1"),
toField : new SFString("keyValue"),
}))
              children : (new ROUTE({
fromNode : new SFString("PI1"),
fromField : new SFString("value_changed"),
toNode : new SFString("node"),
toField : new SFString("set_translation"),
}))}))}))}))
        children : (new ProtoDeclare({
name : new SFString("x3dconnector"),

          protoInterface : (new ProtoInterface({

            field : (new field({
type : new SFNode(field.TYPE_SFNODE),
name : new SFString("startnode"),
accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
}))
            field : (new field({
type : new SFNode(field.TYPE_SFNODE),
name : new SFString("endnode"),
accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
}))
            field : (new field({
type : new SFVec3f(field.TYPE_SFVEC3F),
name : new SFString("set_startpoint"),
accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
}))
            field : (new field({
type : new SFVec3f(field.TYPE_SFVEC3F),
name : new SFString("set_endpoint"),
accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
}))}))
          protoBody : (new ProtoBody({

            children : (new Group({
bboxCenter : new SFVec3f([0,0,0]),
bboxSize : new SFVec3f([-1,-1,-1]),

              children : (new Transform({
dEF : new SFString("trans"),
bboxCenter : new SFVec3f([0,0,0]),
bboxSize : new SFVec3f([-1,-1,-1]),

                children : (new Transform({
dEF : new SFString("rotscale"),
bboxCenter : new SFVec3f([0,0,0]),
bboxSize : new SFVec3f([-1,-1,-1]),

                  children : (new Shape({
bboxCenter : new SFVec3f([0,0,0]),
bboxSize : new SFVec3f([-1,-1,-1]),

                    appearance : (new Appearance({

                      material : (new Material({
diffuseColor : new SFColor([0.2,0.7,0.7]),
transparency : new SFFloat(0.5),
}))}))
                    geometry : (new Cylinder({
radius : new SFFloat(0.05),
}))}))}))}))
              children : (new Script({
dEF : new SFString("S1"),

                field : (new field({
type : new SFNode(field.TYPE_SFNODE),
name : new SFString("startnode"),
accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
}))
                field : (new field({
type : new SFNode(field.TYPE_SFNODE),
name : new SFString("endnode"),
accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
}))
                field : (new field({
type : new SFNode(field.TYPE_SFNODE),
name : new SFString("position"),
accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),

                  children : (new Transform({
uSE : new SFString("trans"),
}))}))
                field : (new field({
type : new SFNode(field.TYPE_SFNODE),
name : new SFString("rotscale"),
accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),

                  children : (new Transform({
uSE : new SFString("rotscale"),
}))}))
                field : (new field({
type : new SFVec3f(field.TYPE_SFVEC3F),
name : new SFString("set_startpoint"),
accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
}))
                field : (new field({
type : new SFVec3f(field.TYPE_SFVEC3F),
name : new SFString("set_endpoint"),
accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
}))
                iS : (new IS({

                  connect : (new connect({
nodeField : new SFString("startnode"),
protoField : new SFString("startnode"),
}))
                  connect : (new connect({
nodeField : new SFString("endnode"),
protoField : new SFString("endnode"),
}))
                  connect : (new connect({
nodeField : new SFString("set_startpoint"),
protoField : new SFString("set_startpoint"),
}))
                  connect : (new connect({
nodeField : new SFString("set_endpoint"),
protoField : new SFString("set_endpoint"),
}))}))
                .setSourceCode("ecmascript:\n"+
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
"	    } else if (typeof SFRotation !== 'undefined') {\n"+
"		    return {\n"+
"			    scale : new SFVec3f(1.0,dist,1.0),\n"+
"			    translation : transl,\n"+
"			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)\n"+
"		    };\n"+
"	    } else {\n"+
"		    return {\n"+
"			    scale : new SFVec3f(1.0,dist,1.0),\n"+
"			    translation : transl\n"+
"		    };\n"+
"	    }\n"+
"	}\n"+
"	function recompute_and_route(startpoint, endpoint) {\n"+
"	      var trafo = recompute(startpoint, endpoint);\n"+
"	      if (trafo) {\n"+
"		      position.translation = trafo.translation;\n"+
"		      rotscale.rotation = trafo.rotation;\n"+
"		      rotscale.scale = trafo.scale;\n"+
"	      }\n"+
"	}\n"+
"        function initialize(){\n"+
"            recompute_and_route(startnode.translation,endnode.translation);\n"+
"        }\n"+
"        function set_startpoint(val,t){\n"+
"            recompute_and_route(val,endnode.translation);\n"+
"        }\n"+
"        function set_endpoint(val,t){\n"+
"            recompute_and_route(startnode.translation,val);\n"+
"        }")}))}))}))}))
        children : (ProtoInstance0 = new ProtoInstance({
name : new SFString("point"),
dEF : new SFString("G1"),
}))
        children : (ProtoInstance1 = new ProtoInstance({
name : new SFString("point"),
dEF : new SFString("G2"),
}))
        children : (ProtoInstance2 = new ProtoInstance({
name : new SFString("point"),
dEF : new SFString("G3"),
}))
        children : (ProtoInstance3 = new ProtoInstance({
name : new SFString("point"),
dEF : new SFString("G4"),
}))
        children : (ProtoInstance4 = new ProtoInstance({
name : new SFString("x3dconnector"),
dEF : new SFString("connector1"),
}))
        children : (ProtoInstance7 = new ProtoInstance({
name : new SFString("x3dconnector"),
dEF : new SFString("connector2"),
}))
        children : (ProtoInstance10 = new ProtoInstance({
name : new SFString("x3dconnector"),
dEF : new SFString("connector3"),
}))
        children : (new ROUTE({
fromNode : new SFString("G1"),
fromField : new SFString("translation"),
toNode : new SFString("connector1"),
toField : new SFString("set_startpoint"),
}))
        children : (new ROUTE({
fromNode : new SFString("G2"),
fromField : new SFString("translation"),
toNode : new SFString("connector1"),
toField : new SFString("set_endpoint"),
}))
        children : (new ROUTE({
fromNode : new SFString("G1"),
fromField : new SFString("translation"),
toNode : new SFString("connector2"),
toField : new SFString("set_startpoint"),
}))
        children : (new ROUTE({
fromNode : new SFString("G3"),
fromField : new SFString("translation"),
toNode : new SFString("connector2"),
toField : new SFString("set_endpoint"),
}))
        children : (new ROUTE({
fromNode : new SFString("G1"),
fromField : new SFString("translation"),
toNode : new SFString("connector3"),
toField : new SFString("set_startpoint"),
}))
        children : (new ROUTE({
fromNode : new SFString("G4"),
fromField : new SFString("translation"),
toNode : new SFString("connector3"),
toField : new SFString("set_endpoint"),
}))}))});
ProtoInstance4
          fieldValue : (new fieldValue({
name : new SFString("startnode"),

            children : (ProtoInstance5 = new ProtoInstance({
uSE : new SFString("G1"),
}))}));
ProtoInstance4
          fieldValue : (new fieldValue({
name : new SFString("endnode"),

            children : (ProtoInstance6 = new ProtoInstance({
uSE : new SFString("G2"),
}))}));
ProtoInstance4
          fieldValue : (new fieldValue({
name : new SFString("set_startpoint"),
}));
ProtoInstance4
          fieldValue : (new fieldValue({
name : new SFString("set_endpoint"),
}));
ProtoInstance7
          fieldValue : (new fieldValue({
name : new SFString("startnode"),

            children : (ProtoInstance8 = new ProtoInstance({
uSE : new SFString("G1"),
}))}));
ProtoInstance7
          fieldValue : (new fieldValue({
name : new SFString("endnode"),

            children : (ProtoInstance9 = new ProtoInstance({
uSE : new SFString("G3"),
}))}));
ProtoInstance7
          fieldValue : (new fieldValue({
name : new SFString("set_startpoint"),
}));
ProtoInstance7
          fieldValue : (new fieldValue({
name : new SFString("set_endpoint"),
}));
ProtoInstance10
          fieldValue : (new fieldValue({
name : new SFString("startnode"),

            children : (ProtoInstance11 = new ProtoInstance({
uSE : new SFString("G1"),
}))}));
ProtoInstance10
          fieldValue : (new fieldValue({
name : new SFString("endnode"),

            children : (ProtoInstance12 = new ProtoInstance({
uSE : new SFString("G4"),
}))}));
ProtoInstance10
          fieldValue : (new fieldValue({
name : new SFString("set_startpoint"),
}));
ProtoInstance10
          fieldValue : (new fieldValue({
name : new SFString("set_endpoint"),
}));
console.log(X3D0.toXMLNode());
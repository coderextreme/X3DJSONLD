unit arc4;

interface

uses X3DNodes;

function Createarc4: TX3DRootNode;

implementation

uses CastleVectors;

function Createarc4: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group7: TGroupNode;
Viewpoint8: TViewpointNode;
Background9: TBackgroundNode;
Transform10: TTransformNode;
Shape11: TShapeNode;
Sphere12: TSphereNode;
Appearance13: TAppearanceNode;
Material14: TMaterialNode;
PositionInterpolator15: TPositionInterpolatorNode;
Script16: TScriptNode;
X3DField17: TX3DField;
X3DField18: TX3DField;
X3DField19: TX3DField;
X3DField20: TX3DField;
TimeSensor21: TTimeSensorNode;
Transform26: TTransformNode;
Shape27: TShapeNode;
Sphere28: TSphereNode;
Appearance29: TAppearanceNode;
Material30: TMaterialNode;
PositionInterpolator31: TPositionInterpolatorNode;
Script32: TScriptNode;
X3DField33: TX3DField;
X3DField34: TX3DField;
X3DField35: TX3DField;
X3DField36: TX3DField;
TimeSensor37: TTimeSensorNode;
Group42: TGroupNode;
Transform43: TTransformNode;
Transform44: TTransformNode;
Shape45: TShapeNode;
Appearance46: TAppearanceNode;
Material47: TMaterialNode;
Cylinder48: TCylinderNode;
Script49: TScriptNode;
X3DField50: TX3DField;
X3DField51: TX3DField;
X3DField52: TX3DField;
Transform53: TTransformNode;
X3DField54: TX3DField;
Transform55: TTransformNode;
X3DField56: TX3DField;
X3DField57: TX3DField;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'arc4.x3d';
X3D0.Meta['creator'] := 'Lost, Doug Sanden I think';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/x3dconnectorProto.x3d';
X3D0.Meta['description'] := 'a generic proto to connect two objects';
Group7 := TGroupNode.Create;
Viewpoint8 := TViewpointNode.Create;
Viewpoint8.Position := Vector3(0,0,5);
Viewpoint8.Description := 'Only Viewpoint';
{ .AddChildren }
Group7.AddChildren([Viewpoint8]);
Background9 := TBackgroundNode.Create;
Background9.SetSkyColor([Vector3(0.4,0.4,0.4)]);
{ .AddChildren }
Group7.AddChildren([Background9]);
Transform10 := TTransformNode.Create;
Shape11 := TShapeNode.Create;
Sphere12 := TSphereNode.Create;
Sphere12.Radius := 0.1;
{ .SetGeometry }
Shape11.Geometry := Sphere12;
Appearance13 := TAppearanceNode.Create;
Material14 := TMaterialNode.Create;
Material14.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance13.Material := Material14;
{ .SetAppearance }
Shape11.Appearance := Appearance13;
{ .AddChild }
Transform10.AddChildren([Shape11]);
PositionInterpolator15 := TPositionInterpolatorNode.Create;
PositionInterpolator15.SetKey([0,1]);
PositionInterpolator15.SetKeyValue([Vector3(0,0,0),Vector3(0,5,0)]);
{ .AddChildren }
Transform10.AddChildren([PositionInterpolator15]);
Script16 := TScriptNode.Create;
X3DField17 := TX3DField.Create;
X3DField17.NameField := 'translation';
X3DField17.AccessType := 'inputOutput';
X3DField17.Type := 'SFVec3f';
X3DField17.Value := '0 0 0';
{ .SetX3DField }
Script16.X3DField := X3DField17;
X3DField18 := TX3DField.Create;
X3DField18.NameField := 'old';
X3DField18.AccessType := 'inputOutput';
X3DField18.Type := 'SFVec3f';
X3DField18.Value := '0 0 0';
{ .AddX3DField }
Script16.X3DField := X3DField18;
X3DField19 := TX3DField.Create;
X3DField19.NameField := 'set_location';
X3DField19.AccessType := 'inputOnly';
X3DField19.Type := 'SFTime';
{ .AddX3DField }
Script16.X3DField := X3DField19;
X3DField20 := TX3DField.Create;
X3DField20.NameField := 'keyValue';
X3DField20.AccessType := 'inputOutput';
X3DField20.Type := 'MFVec3f';
X3DField20.Value := '0 0 0 0 5 0';
{ .AddX3DField }
Script16.X3DField := X3DField20;

Script16.SetSourceCode('''ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(keyValue);\n"+
"		}''');
{ .AddChildren }
Transform10.AddChildren([Script16]);
TimeSensor21 := TTimeSensorNode.Create;
TimeSensor21.CycleInterval := 3;
TimeSensor21.Loop := True;
{ .AddChildren }
Transform10.AddChildren([TimeSensor21]);
Transform10.AddRoute(TimeSensor21.FdCycletime, Script16.EventSet_location);
{ .AddX3DRoute }
Transform10.AddRoute(TimeSensor21.EventFraction_changed, PositionInterpolator15.EventSet_fraction);
{ .AddX3DRoute }
Transform10.AddRoute(Script16.FdKeyvalue, PositionInterpolator15.FdKeyvalue);
{ .AddX3DRoute }
Transform10.AddRoute(PositionInterpolator15.EventValue_changed, Transform10.FdTranslation);
{ .AddX3DRoute }
{ .AddChildren }
Group7.AddChildren([Transform10]);
Transform26 := TTransformNode.Create;
Shape27 := TShapeNode.Create;
Sphere28 := TSphereNode.Create;
Sphere28.Radius := 0.1;
{ .SetGeometry }
Shape27.Geometry := Sphere28;
Appearance29 := TAppearanceNode.Create;
Material30 := TMaterialNode.Create;
Material30.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance29.Material := Material30;
{ .SetAppearance }
Shape27.Appearance := Appearance29;
{ .AddChild }
Transform26.AddChildren([Shape27]);
PositionInterpolator31 := TPositionInterpolatorNode.Create;
PositionInterpolator31.SetKey([0,1]);
PositionInterpolator31.SetKeyValue([Vector3(0,0,0),Vector3(0,5,0)]);
{ .AddChildren }
Transform26.AddChildren([PositionInterpolator31]);
Script32 := TScriptNode.Create;
X3DField33 := TX3DField.Create;
X3DField33.NameField := 'translation';
X3DField33.AccessType := 'inputOutput';
X3DField33.Type := 'SFVec3f';
X3DField33.Value := '0 0 0';
{ .SetX3DField }
Script32.X3DField := X3DField33;
X3DField34 := TX3DField.Create;
X3DField34.NameField := 'old';
X3DField34.AccessType := 'inputOutput';
X3DField34.Type := 'SFVec3f';
X3DField34.Value := '0 0 0';
{ .AddX3DField }
Script32.X3DField := X3DField34;
X3DField35 := TX3DField.Create;
X3DField35.NameField := 'set_location';
X3DField35.AccessType := 'inputOnly';
X3DField35.Type := 'SFTime';
{ .AddX3DField }
Script32.X3DField := X3DField35;
X3DField36 := TX3DField.Create;
X3DField36.NameField := 'keyValue';
X3DField36.AccessType := 'inputOutput';
X3DField36.Type := 'MFVec3f';
X3DField36.Value := '0 0 0 0 5 0';
{ .AddX3DField }
Script32.X3DField := X3DField36;

Script32.SetSourceCode('''ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(keyValue);\n"+
"		}''');
{ .AddChildren }
Transform26.AddChildren([Script32]);
TimeSensor37 := TTimeSensorNode.Create;
TimeSensor37.CycleInterval := 3;
TimeSensor37.Loop := True;
{ .AddChildren }
Transform26.AddChildren([TimeSensor37]);
Transform26.AddRoute(TimeSensor37.FdCycletime, Script32.EventSet_location);
{ .AddX3DRoute }
Transform26.AddRoute(TimeSensor37.EventFraction_changed, PositionInterpolator31.EventSet_fraction);
{ .AddX3DRoute }
Transform26.AddRoute(Script32.FdKeyvalue, PositionInterpolator31.FdKeyvalue);
{ .AddX3DRoute }
Transform26.AddRoute(PositionInterpolator31.EventValue_changed, Transform26.FdTranslation);
{ .AddX3DRoute }
{ .AddChildren }
Group7.AddChildren([Transform26]);
Group42 := TGroupNode.Create;
Transform43 := TTransformNode.Create;
Transform44 := TTransformNode.Create;
Shape45 := TShapeNode.Create;
Appearance46 := TAppearanceNode.Create;
Material47 := TMaterialNode.Create;
Material47.DiffuseColor := Vector3(0.2,0.7,0.7);
Material47.Transparency := 0.5;
{ .SetMaterial }
Appearance46.Material := Material47;
{ .SetAppearance }
Shape45.Appearance := Appearance46;
Cylinder48 := TCylinderNode.Create;
Cylinder48.Radius := 0.05;
{ .SetGeometry }
Shape45.Geometry := Cylinder48;
{ .AddChild }
Transform44.AddChildren([Shape45]);
{ .AddChildren }
Transform43.AddChildren([Transform44]);
{ .AddChildren }
Group42.AddChildren([Transform43]);
Script49 := TScriptNode.Create;
X3DField50 := TX3DField.Create;
X3DField50.NameField := 'startnode';
X3DField50.AccessType := 'initializeOnly';
X3DField50.Type := 'SFNode';
{ .SetX3DField }
Script49.X3DField := X3DField50;
X3DField51 := TX3DField.Create;
X3DField51.NameField := 'endnode';
X3DField51.AccessType := 'initializeOnly';
X3DField51.Type := 'SFNode';
{ .AddX3DField }
Script49.X3DField := X3DField51;
X3DField52 := TX3DField.Create;
X3DField52.NameField := 'position';
X3DField52.AccessType := 'inputOutput';
X3DField52.Type := 'SFNode';
Transform53 := Transform43;
{ .SetTransform }
X3DField52.Transform := Transform53;
{ .AddX3DField }
Script49.X3DField := X3DField52;
X3DField54 := TX3DField.Create;
X3DField54.NameField := 'rotscale';
X3DField54.AccessType := 'inputOutput';
X3DField54.Type := 'SFNode';
Transform55 := Transform44;
{ .SetTransform }
X3DField54.Transform := Transform55;
{ .AddX3DField }
Script49.X3DField := X3DField54;
X3DField56 := TX3DField.Create;
X3DField56.NameField := 'set_startpoint';
X3DField56.AccessType := 'inputOnly';
X3DField56.Type := 'SFVec3f';
{ .AddX3DField }
Script49.X3DField := X3DField56;
X3DField57 := TX3DField.Create;
X3DField57.NameField := 'set_endpoint';
X3DField57.AccessType := 'inputOnly';
X3DField57.Type := 'SFVec3f';
{ .AddX3DField }
Script49.X3DField := X3DField57;

Script49.SetSourceCode('''ecmascript:\n"+
"        function recompute(startpoint,endpoint){\n"+
"	    if (typeof endpoint === 'undefined') {\\n		    if (typeof Quaternion !== 'undefined') {\\n			    return {\\n				    scale : new SFVec3f(1.0,1.0,1.0),\\n				    translation : new SFVec3f(1.0,1.0,1.0),\\n			    	    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), 1.0)\\n			    };\\n	    	    } else if (typeof SFRotation !== 'undefined') {\\n			    return {\\n				    scale : new SFVec3f(1.0,1.0,1.0),\\n				    translation : new SFVec3f(1.0,1.0,1.0),\\n			    	    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),1.0)\\n			    };\\n	    	    } else {\\n			    return {\\n				    scale : new SFVec3f(1.0,1.0,1.0),\\n				    translation : new SFVec3f(1.0,1.0,1.0)\\n			    };\\n		    }\\n	    }\\n            var dif = endpoint.subtract(startpoint);\\n            var dist = dif.length()*0.5;\\n            var dif2 = dif.multiply(0.5);\\n            var norm = dif.normalize();\\n            var transl = startpoint.add(dif2);\\n	    if (typeof Quaternion !== 'undefined') {\\n		    return {\\n			    scale : new SFVec3f(1.0,dist,1.0),\\n			    translation : transl,\\n			    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), norm)\\n		    };\\n	    } else if (typeof SFRotation !== 'undefined') {\n"+
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
"	      position.translation = trafo.translation;\n"+
"	      rotscale.rotation = trafo.rotation;\n"+
"	      rotscale.scale = trafo.scale;\n"+
"	}\n"+
"        function initialize(){\n"+
"            recompute_and_route(startnode.translation,endnode.translation);\n"+
"        }\n"+
"        function set_startpoint(val,t){\n"+
"            recompute_and_route(val,endnode.translation);\n"+
"        }\n"+
"        function set_endpoint(val,t){\n"+
"            recompute_and_route(startnode.translation,val);\n"+
"        }''');
{ .AddChildren }
Group42.AddChildren([Script49]);
{ .AddChildren }
Group7.AddChildren([Group42]);
Group7.AddRoute(Transform10.EventTranslation_changed, Script49.EventSet_startpoint);
{ .AddX3DRoute }
Group7.AddRoute(Transform26.EventTranslation_changed, Script49.EventSet_endpoint);
{ .AddX3DRoute }
{ .AddGroup }
X3D0.AddChildren([Group7]);
Result := X3D0;
end;

begin
end.

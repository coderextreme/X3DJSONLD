unit arc2;

interface

uses X3DNodes;

function Createarc2: TX3DRootNode;

implementation

uses CastleVectors;

function Createarc2: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group7: TGroupNode;
Viewpoint8: TViewpointNode;
Background9: TBackgroundNode;
Transform10: TTransformNode;
Transform11: TTransformNode;
Shape12: TShapeNode;
Sphere13: TSphereNode;
Appearance14: TAppearanceNode;
Material15: TMaterialNode;
PositionInterpolator16: TPositionInterpolatorNode;
Script17: TScriptNode;
X3DField18: TX3DField;
X3DField19: TX3DField;
X3DField20: TX3DField;
X3DField21: TX3DField;
TimeSensor22: TTimeSensorNode;
Transform28: TTransformNode;
Transform29: TTransformNode;
Shape30: TShapeNode;
Sphere31: TSphereNode;
Appearance32: TAppearanceNode;
Material33: TMaterialNode;
PositionInterpolator34: TPositionInterpolatorNode;
Script35: TScriptNode;
X3DField36: TX3DField;
X3DField37: TX3DField;
X3DField38: TX3DField;
X3DField39: TX3DField;
TimeSensor40: TTimeSensorNode;
Transform46: TTransformNode;
Transform47: TTransformNode;
Shape48: TShapeNode;
Appearance49: TAppearanceNode;
Material50: TMaterialNode;
Cylinder51: TCylinderNode;
Script52: TScriptNode;
X3DField53: TX3DField;
Transform54: TTransformNode;
X3DField55: TX3DField;
Transform56: TTransformNode;
X3DField57: TX3DField;
Transform58: TTransformNode;
X3DField59: TX3DField;
Transform60: TTransformNode;
X3DField61: TX3DField;
X3DField62: TX3DField;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'arc2.x3d';
X3D0.Meta['creator'] := 'Lost, Doug Sanden I think';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/arc1.x3d';
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
Transform11 := TTransformNode.Create;
Shape12 := TShapeNode.Create;
Sphere13 := TSphereNode.Create;
Sphere13.Radius := 0.1;
{ .SetGeometry }
Shape12.Geometry := Sphere13;
Appearance14 := TAppearanceNode.Create;
Material15 := TMaterialNode.Create;
Material15.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance14.Material := Material15;
{ .SetAppearance }
Shape12.Appearance := Appearance14;
{ .AddChild }
Transform11.AddChildren([Shape12]);
PositionInterpolator16 := TPositionInterpolatorNode.Create;
PositionInterpolator16.SetKey([0,1]);
PositionInterpolator16.SetKeyValue([Vector3(0,0,0),Vector3(0,5,0)]);
{ .AddChildren }
Transform11.AddChildren([PositionInterpolator16]);
Script17 := TScriptNode.Create;
X3DField18 := TX3DField.Create;
X3DField18.NameField := 'translation';
X3DField18.AccessType := 'inputOutput';
X3DField18.Type := 'SFVec3f';
X3DField18.Value := '0 0 0';
{ .SetX3DField }
Script17.X3DField := X3DField18;
X3DField19 := TX3DField.Create;
X3DField19.NameField := 'old';
X3DField19.AccessType := 'inputOutput';
X3DField19.Type := 'SFVec3f';
X3DField19.Value := '0 0 0';
{ .AddX3DField }
Script17.X3DField := X3DField19;
X3DField20 := TX3DField.Create;
X3DField20.NameField := 'set_location';
X3DField20.AccessType := 'inputOnly';
X3DField20.Type := 'SFTime';
{ .AddX3DField }
Script17.X3DField := X3DField20;
X3DField21 := TX3DField.Create;
X3DField21.NameField := 'keyValue';
X3DField21.AccessType := 'inputOutput';
X3DField21.Type := 'MFVec3f';
X3DField21.Value := '0 0 0 0 5 0';
{ .AddX3DField }
Script17.X3DField := X3DField21;

Script17.SetSourceCode('''ecmascript:\n"+
"               function set_location(value) {\n"+
"                    old = translation;\n"+
"                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"               }''');
{ .AddChildren }
Transform11.AddChildren([Script17]);
TimeSensor22 := TTimeSensorNode.Create;
TimeSensor22.CycleInterval := 3;
TimeSensor22.Loop := True;
{ .AddChildren }
Transform11.AddChildren([TimeSensor22]);
Transform11.AddRoute(TimeSensor22.FdCycletime, Script17.EventSet_location);
{ .AddX3DRoute }
Transform11.AddRoute(TimeSensor22.EventFraction_changed, PositionInterpolator16.EventSet_fraction);
{ .AddX3DRoute }
Transform11.AddRoute(Script17.FdKeyvalue, PositionInterpolator16.FdKeyvalue);
{ .AddX3DRoute }
Transform11.AddRoute(PositionInterpolator16.EventValue_changed, Transform11.FdTranslation);
{ .AddX3DRoute }
Transform11.AddRoute(Script17.EventTranslation_changed, Transform11.FdTranslation);
{ .AddX3DRoute }
{ .AddChildren }
Transform10.AddChildren([Transform11]);
{ .AddChildren }
Group7.AddChildren([Transform10]);
Transform28 := TTransformNode.Create;
Transform29 := TTransformNode.Create;
Shape30 := TShapeNode.Create;
Sphere31 := TSphereNode.Create;
Sphere31.Radius := 0.1;
{ .SetGeometry }
Shape30.Geometry := Sphere31;
Appearance32 := TAppearanceNode.Create;
Material33 := TMaterialNode.Create;
Material33.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance32.Material := Material33;
{ .SetAppearance }
Shape30.Appearance := Appearance32;
{ .AddChild }
Transform29.AddChildren([Shape30]);
PositionInterpolator34 := TPositionInterpolatorNode.Create;
PositionInterpolator34.SetKey([0,1]);
PositionInterpolator34.SetKeyValue([Vector3(0,0,0),Vector3(0,5,0)]);
{ .AddChildren }
Transform29.AddChildren([PositionInterpolator34]);
Script35 := TScriptNode.Create;
X3DField36 := TX3DField.Create;
X3DField36.NameField := 'translation';
X3DField36.AccessType := 'inputOutput';
X3DField36.Type := 'SFVec3f';
X3DField36.Value := '0 0 0';
{ .SetX3DField }
Script35.X3DField := X3DField36;
X3DField37 := TX3DField.Create;
X3DField37.NameField := 'old';
X3DField37.AccessType := 'inputOutput';
X3DField37.Type := 'SFVec3f';
X3DField37.Value := '0 0 0';
{ .AddX3DField }
Script35.X3DField := X3DField37;
X3DField38 := TX3DField.Create;
X3DField38.NameField := 'set_location';
X3DField38.AccessType := 'inputOnly';
X3DField38.Type := 'SFTime';
{ .AddX3DField }
Script35.X3DField := X3DField38;
X3DField39 := TX3DField.Create;
X3DField39.NameField := 'keyValue';
X3DField39.AccessType := 'inputOutput';
X3DField39.Type := 'MFVec3f';
X3DField39.Value := '0 0 0 0 5 0';
{ .AddX3DField }
Script35.X3DField := X3DField39;

Script35.SetSourceCode('''ecmascript:\n"+
"               function set_location(value) {\n"+
"                    old = translation;\n"+
"                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"               }''');
{ .AddChildren }
Transform29.AddChildren([Script35]);
TimeSensor40 := TTimeSensorNode.Create;
TimeSensor40.CycleInterval := 3;
TimeSensor40.Loop := True;
{ .AddChildren }
Transform29.AddChildren([TimeSensor40]);
Transform29.AddRoute(TimeSensor40.FdCycletime, Script35.EventSet_location);
{ .AddX3DRoute }
Transform29.AddRoute(TimeSensor40.EventFraction_changed, PositionInterpolator34.EventSet_fraction);
{ .AddX3DRoute }
Transform29.AddRoute(Script35.FdKeyvalue, PositionInterpolator34.FdKeyvalue);
{ .AddX3DRoute }
Transform29.AddRoute(PositionInterpolator34.EventValue_changed, Transform29.FdTranslation);
{ .AddX3DRoute }
Transform29.AddRoute(Script35.EventTranslation_changed, Transform29.FdTranslation);
{ .AddX3DRoute }
{ .AddChildren }
Transform28.AddChildren([Transform29]);
{ .AddChildren }
Group7.AddChildren([Transform28]);
Transform46 := TTransformNode.Create;
Transform47 := TTransformNode.Create;
Shape48 := TShapeNode.Create;
Appearance49 := TAppearanceNode.Create;
Material50 := TMaterialNode.Create;
Material50.DiffuseColor := Vector3(0.2,0.7,0.7);
Material50.Transparency := 0.5;
{ .SetMaterial }
Appearance49.Material := Material50;
{ .SetAppearance }
Shape48.Appearance := Appearance49;
Cylinder51 := TCylinderNode.Create;
Cylinder51.Radius := 0.05;
{ .SetGeometry }
Shape48.Geometry := Cylinder51;
{ .AddChild }
Transform47.AddChildren([Shape48]);
{ .AddChildren }
Transform46.AddChildren([Transform47]);
{ .AddChildren }
Group7.AddChildren([Transform46]);
Script52 := TScriptNode.Create;
X3DField53 := TX3DField.Create;
X3DField53.NameField := 'startnode';
X3DField53.AccessType := 'initializeOnly';
X3DField53.Type := 'SFNode';
Transform54 := Transform10;
{ .SetTransform }
X3DField53.Transform := Transform54;
{ .SetX3DField }
Script52.X3DField := X3DField53;
X3DField55 := TX3DField.Create;
X3DField55.NameField := 'endnode';
X3DField55.AccessType := 'initializeOnly';
X3DField55.Type := 'SFNode';
Transform56 := Transform28;
{ .SetTransform }
X3DField55.Transform := Transform56;
{ .AddX3DField }
Script52.X3DField := X3DField55;
X3DField57 := TX3DField.Create;
X3DField57.NameField := 'transC1';
X3DField57.AccessType := 'initializeOnly';
X3DField57.Type := 'SFNode';
Transform58 := Transform46;
{ .SetTransform }
X3DField57.Transform := Transform58;
{ .AddX3DField }
Script52.X3DField := X3DField57;
X3DField59 := TX3DField.Create;
X3DField59.NameField := 'rotscaleC1';
X3DField59.AccessType := 'initializeOnly';
X3DField59.Type := 'SFNode';
Transform60 := Transform47;
{ .SetTransform }
X3DField59.Transform := Transform60;
{ .AddX3DField }
Script52.X3DField := X3DField59;
X3DField61 := TX3DField.Create;
X3DField61.NameField := 'set_startpoint';
X3DField61.AccessType := 'inputOnly';
X3DField61.Type := 'SFVec3f';
{ .AddX3DField }
Script52.X3DField := X3DField61;
X3DField62 := TX3DField.Create;
X3DField62.NameField := 'set_endpoint';
X3DField62.AccessType := 'inputOnly';
X3DField62.Type := 'SFVec3f';
{ .AddX3DField }
Script52.X3DField := X3DField62;

Script52.SetSourceCode('''ecmascript:\n"+
"        function recompute(startpoint,endpoint){\n"+
"	    if (typeof endpoint === 'undefined') {\\n		return;\\n	    }\\n            var dif = endpoint.subtract(startpoint);\\n            var dist = dif.length()*0.5;\\n            var dif2 = dif.multiply(0.5);\\n            var norm = dif.normalize();\\n            var transl = startpoint.add(dif2);\\n	    if (typeof Quaternion !== 'undefined') {\n"+
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
"	      transC1.translation = trafo.translation;\n"+
"	      rotscaleC1.rotation = trafo.rotation;\n"+
"	      rotscaleC1.scale = trafo.scale;\n"+
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
Group7.AddChildren([Script52]);
Group7.AddRoute(Transform10.EventTranslation_changed, Script52.EventSet_startpoint);
{ .AddX3DRoute }
Group7.AddRoute(Transform28.EventTranslation_changed, Script52.EventSet_endpoint);
{ .AddX3DRoute }
{ .AddGroup }
X3D0.AddChildren([Group7]);
Result := X3D0;
end;

begin
end.

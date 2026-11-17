unit arcold;

interface

uses X3DNodes;

function Createarcold: TX3DRootNode;

implementation

uses CastleVectors;

function Createarcold: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group7: TGroupNode;
Viewpoint8: TViewpointNode;
Background9: TBackgroundNode;
Transform10: TTransformNode;
Transform11: TTransformNode;
Shape12: TShapeNode;
Appearance13: TAppearanceNode;
Material14: TMaterialNode;
Cylinder15: TCylinderNode;
Transform16: TTransformNode;
Transform17: TTransformNode;
Shape18: TShapeNode;
Appearance19: TAppearanceNode;
Material20: TMaterialNode;
Cylinder21: TCylinderNode;
Transform22: TTransformNode;
Transform23: TTransformNode;
Shape24: TShapeNode;
Appearance25: TAppearanceNode;
Material26: TMaterialNode;
Cylinder27: TCylinderNode;
X3DPrototype28: TX3DPrototype;
X3DInterfaceDeclaration29: TX3DInterfaceDeclaration;
X3DField30: TX3DField;
X3DPrototype31: TX3DPrototype;
Transform32: TTransformNode;
IS33: TIS;
connect34: Tconnect;
Shape35: TShapeNode;
Sphere36: TSphereNode;
Appearance37: TAppearanceNode;
Material38: TMaterialNode;
PositionInterpolator39: TPositionInterpolatorNode;
Script40: TScriptNode;
X3DField41: TX3DField;
X3DField42: TX3DField;
X3DField43: TX3DField;
X3DField44: TX3DField;
TimeSensor45: TTimeSensorNode;
X3DPrototype50: TX3DPrototype;
X3DInterfaceDeclaration51: TX3DInterfaceDeclaration;
X3DField52: TX3DField;
X3DField53: TX3DField;
X3DField54: TX3DField;
X3DField55: TX3DField;
X3DField56: TX3DField;
X3DField57: TX3DField;
X3DPrototype58: TX3DPrototype;
Script59: TScriptNode;
X3DField60: TX3DField;
X3DField61: TX3DField;
X3DField62: TX3DField;
X3DField63: TX3DField;
X3DField64: TX3DField;
X3DField65: TX3DField;
IS66: TIS;
connect67: Tconnect;
connect68: Tconnect;
connect69: Tconnect;
connect70: Tconnect;
connect71: Tconnect;
connect72: Tconnect;
X3DPrototype73: TX3DPrototypeNode;
X3DPrototype74: TX3DPrototypeNode;
X3DPrototype75: TX3DPrototypeNode;
X3DPrototype76: TX3DPrototypeNode;
X3DPrototype77: TX3DPrototypeNode;
SFNode78: TSFNode;
X3DPrototype79: TX3DPrototypeNode;
SFNode80: TSFNode;
X3DPrototype81: TX3DPrototypeNode;
SFNode82: TSFNode;
Transform83: TTransformNode;
SFNode84: TSFNode;
Transform85: TTransformNode;
X3DPrototype86: TX3DPrototypeNode;
SFNode87: TSFNode;
X3DPrototype88: TX3DPrototypeNode;
SFNode89: TSFNode;
X3DPrototype90: TX3DPrototypeNode;
SFNode91: TSFNode;
Transform92: TTransformNode;
SFNode93: TSFNode;
Transform94: TTransformNode;
X3DPrototype95: TX3DPrototypeNode;
SFNode96: TSFNode;
X3DPrototype97: TX3DPrototypeNode;
SFNode98: TSFNode;
X3DPrototype99: TX3DPrototypeNode;
SFNode100: TSFNode;
Transform101: TTransformNode;
SFNode102: TSFNode;
Transform103: TTransformNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'arcold.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/arc.x3d';
X3D0.Meta['description'] := 'an attempt to implement an arc in a graph';
Group7 := TGroupNode.Create;
Viewpoint8 := TViewpointNode.Create;
Viewpoint8.Position := Vector3(0,0,5);
Viewpoint8.Description := 'a moving graph';
{ .AddChildren }
Group7.AddChildren([Viewpoint8]);
Background9 := TBackgroundNode.Create;
Background9.SetSkyColor([Vector3(0.4,0.4,0.4)]);
{ .AddChildren }
Group7.AddChildren([Background9]);
Transform10 := TTransformNode.Create;
Transform11 := TTransformNode.Create;
Shape12 := TShapeNode.Create;
Appearance13 := TAppearanceNode.Create;
Material14 := TMaterialNode.Create;
Material14.DiffuseColor := Vector3(0.2,0.7,0.7);
{ .SetMaterial }
Appearance13.Material := Material14;
{ .SetAppearance }
Shape12.Appearance := Appearance13;
Cylinder15 := TCylinderNode.Create;
Cylinder15.Radius := 0.1;
{ .SetGeometry }
Shape12.Geometry := Cylinder15;
{ .AddChild }
Transform11.AddChildren([Shape12]);
{ .AddChildren }
Transform10.AddChildren([Transform11]);
{ .AddChildren }
Group7.AddChildren([Transform10]);
Transform16 := TTransformNode.Create;
Transform17 := TTransformNode.Create;
Shape18 := TShapeNode.Create;
Appearance19 := TAppearanceNode.Create;
Material20 := TMaterialNode.Create;
Material20.DiffuseColor := Vector3(0.2,0.7,0.7);
{ .SetMaterial }
Appearance19.Material := Material20;
{ .SetAppearance }
Shape18.Appearance := Appearance19;
Cylinder21 := TCylinderNode.Create;
Cylinder21.Radius := 0.1;
{ .SetGeometry }
Shape18.Geometry := Cylinder21;
{ .AddChild }
Transform17.AddChildren([Shape18]);
{ .AddChildren }
Transform16.AddChildren([Transform17]);
{ .AddChildren }
Group7.AddChildren([Transform16]);
Transform22 := TTransformNode.Create;
Transform23 := TTransformNode.Create;
Shape24 := TShapeNode.Create;
Appearance25 := TAppearanceNode.Create;
Material26 := TMaterialNode.Create;
Material26.DiffuseColor := Vector3(0.2,0.7,0.7);
{ .SetMaterial }
Appearance25.Material := Material26;
{ .SetAppearance }
Shape24.Appearance := Appearance25;
Cylinder27 := TCylinderNode.Create;
Cylinder27.Radius := 0.1;
{ .SetGeometry }
Shape24.Geometry := Cylinder27;
{ .AddChild }
Transform23.AddChildren([Shape24]);
{ .AddChildren }
Transform22.AddChildren([Transform23]);
{ .AddChildren }
Group7.AddChildren([Transform22]);
X3DPrototype28 := TX3DPrototype.Create;
X3DPrototype28.NameField := 'point';
X3DInterfaceDeclaration29 := TX3DInterfaceDeclaration.Create(nil);
X3DField30 := TX3DField.Create;
X3DField30.NameField := 'translation';
X3DField30.AccessType := 'inputOutput';
X3DField30.Type := 'SFVec3f';
X3DField30.Value := '0 0 0';
{ .SetX3DField }
X3DInterfaceDeclaration29.X3DField := X3DField30;
{ .SetX3DInterfaceDeclaration }
X3DPrototype28.X3DInterfaceDeclaration := X3DInterfaceDeclaration29;
X3DPrototype31 := TX3DPrototype.Create;
Transform32 := TTransformNode.Create;
IS33 := TIS.Create;
connect34 := Tconnect.Create;
connect34.NodeField := 'translation';
connect34.ProtoField := 'translation';
{ .AddConnect }
IS33.Connect := connect34;
{ .SetIS }
Transform32.IS := IS33;
Shape35 := TShapeNode.Create;
Sphere36 := TSphereNode.Create;
Sphere36.Radius := 0.1;
{ .SetGeometry }
Shape35.Geometry := Sphere36;
Appearance37 := TAppearanceNode.Create;
Material38 := TMaterialNode.Create;
Material38.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance37.Material := Material38;
{ .SetAppearance }
Shape35.Appearance := Appearance37;
{ .AddChild }
Transform32.AddChildren([Shape35]);
PositionInterpolator39 := TPositionInterpolatorNode.Create;
PositionInterpolator39.SetKey([0,1]);
PositionInterpolator39.SetKeyValue([Vector3(0,0,0),Vector3(0,5,0)]);
{ .AddChildren }
Transform32.AddChildren([PositionInterpolator39]);
Script40 := TScriptNode.Create;
X3DField41 := TX3DField.Create;
X3DField41.NameField := 'translation';
X3DField41.AccessType := 'inputOutput';
X3DField41.Type := 'SFVec3f';
X3DField41.Value := '50 50 0';
{ .SetX3DField }
Script40.X3DField := X3DField41;
X3DField42 := TX3DField.Create;
X3DField42.NameField := 'old';
X3DField42.AccessType := 'inputOutput';
X3DField42.Type := 'SFVec3f';
X3DField42.Value := '0 0 0';
{ .AddX3DField }
Script40.X3DField := X3DField42;
X3DField43 := TX3DField.Create;
X3DField43.NameField := 'set_location';
X3DField43.AccessType := 'inputOnly';
X3DField43.Type := 'SFTime';
{ .AddX3DField }
Script40.X3DField := X3DField43;
X3DField44 := TX3DField.Create;
X3DField44.NameField := 'keyValue';
X3DField44.AccessType := 'outputOnly';
X3DField44.Type := 'MFVec3f';
{ .AddX3DField }
Script40.X3DField := X3DField44;

Script40.SetSourceCode('''ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(translation);\n"+
"		}''');
{ .AddChildren }
Transform32.AddChildren([Script40]);
TimeSensor45 := TTimeSensorNode.Create;
TimeSensor45.CycleInterval := 3;
TimeSensor45.Loop := True;
{ .AddChildren }
Transform32.AddChildren([TimeSensor45]);
Transform32.AddRoute(TimeSensor45.FdCycletime, Script40.EventSet_location);
{ .AddX3DRoute }
Transform32.AddRoute(TimeSensor45.EventFraction_changed, PositionInterpolator39.EventSet_fraction);
{ .AddX3DRoute }
Transform32.AddRoute(Script40.FdKeyvalue, PositionInterpolator39.FdKeyvalue);
{ .AddX3DRoute }
Transform32.AddRoute(PositionInterpolator39.EventValue_changed, Transform32.FdTranslation);
{ .AddX3DRoute }
{ .SetTransform }
X3DPrototype31.Transform := Transform32;
{ .AddX3DPrototype }
X3DPrototype28.X3DPrototype := X3DPrototype31;
{ .AddX3DPrototype }
Group7.X3DPrototype := X3DPrototype28;
{ from doug sanden }
X3DPrototype50 := TX3DPrototype.Create;
X3DPrototype50.NameField := 'x3dconnector';
X3DInterfaceDeclaration51 := TX3DInterfaceDeclaration.Create(nil);
X3DField52 := TX3DField.Create;
X3DField52.NameField := 'startnode';
X3DField52.AccessType := 'inputOutput';
X3DField52.Type := 'SFNode';
{ .SetX3DField }
X3DInterfaceDeclaration51.X3DField := X3DField52;
X3DField53 := TX3DField.Create;
X3DField53.NameField := 'endnode';
X3DField53.AccessType := 'inputOutput';
X3DField53.Type := 'SFNode';
{ .AddX3DField }
X3DInterfaceDeclaration51.X3DField := X3DField53;
X3DField54 := TX3DField.Create;
X3DField54.NameField := 'transnode';
X3DField54.AccessType := 'inputOutput';
X3DField54.Type := 'SFNode';
{ .AddX3DField }
X3DInterfaceDeclaration51.X3DField := X3DField54;
X3DField55 := TX3DField.Create;
X3DField55.NameField := 'rotscalenode';
X3DField55.AccessType := 'inputOutput';
X3DField55.Type := 'SFNode';
{ .AddX3DField }
X3DInterfaceDeclaration51.X3DField := X3DField55;
X3DField56 := TX3DField.Create;
X3DField56.NameField := 'set_startpoint';
X3DField56.AccessType := 'inputOnly';
X3DField56.Type := 'SFVec3f';
{ .AddX3DField }
X3DInterfaceDeclaration51.X3DField := X3DField56;
X3DField57 := TX3DField.Create;
X3DField57.NameField := 'set_endpoint';
X3DField57.AccessType := 'inputOnly';
X3DField57.Type := 'SFVec3f';
{ .AddX3DField }
X3DInterfaceDeclaration51.X3DField := X3DField57;
{ .SetX3DInterfaceDeclaration }
X3DPrototype50.X3DInterfaceDeclaration := X3DInterfaceDeclaration51;
X3DPrototype58 := TX3DPrototype.Create;
Script59 := TScriptNode.Create;
X3DField60 := TX3DField.Create;
X3DField60.NameField := 'startnode';
X3DField60.AccessType := 'inputOutput';
X3DField60.Type := 'SFNode';
{ .SetX3DField }
Script59.X3DField := X3DField60;
X3DField61 := TX3DField.Create;
X3DField61.NameField := 'endnode';
X3DField61.AccessType := 'inputOutput';
X3DField61.Type := 'SFNode';
{ .AddX3DField }
Script59.X3DField := X3DField61;
X3DField62 := TX3DField.Create;
X3DField62.NameField := 'transnode';
X3DField62.AccessType := 'inputOutput';
X3DField62.Type := 'SFNode';
{ .AddX3DField }
Script59.X3DField := X3DField62;
X3DField63 := TX3DField.Create;
X3DField63.NameField := 'rotscalenode';
X3DField63.AccessType := 'inputOutput';
X3DField63.Type := 'SFNode';
{ .AddX3DField }
Script59.X3DField := X3DField63;
X3DField64 := TX3DField.Create;
X3DField64.NameField := 'set_startpoint';
X3DField64.AccessType := 'inputOnly';
X3DField64.Type := 'SFVec3f';
{ .AddX3DField }
Script59.X3DField := X3DField64;
X3DField65 := TX3DField.Create;
X3DField65.NameField := 'set_endpoint';
X3DField65.AccessType := 'inputOnly';
X3DField65.Type := 'SFVec3f';
{ .AddX3DField }
Script59.X3DField := X3DField65;
IS66 := TIS.Create;
connect67 := Tconnect.Create;
connect67.NodeField := 'startnode';
connect67.ProtoField := 'startnode';
{ .AddConnect }
IS66.Connect := connect67;
connect68 := Tconnect.Create;
connect68.NodeField := 'endnode';
connect68.ProtoField := 'endnode';
{ .AddConnect }
IS66.Connect := connect68;
connect69 := Tconnect.Create;
connect69.NodeField := 'transnode';
connect69.ProtoField := 'transnode';
{ .AddConnect }
IS66.Connect := connect69;
connect70 := Tconnect.Create;
connect70.NodeField := 'rotscalenode';
connect70.ProtoField := 'rotscalenode';
{ .AddConnect }
IS66.Connect := connect70;
connect71 := Tconnect.Create;
connect71.NodeField := 'set_startpoint';
connect71.ProtoField := 'set_startpoint';
{ .AddConnect }
IS66.Connect := connect71;
connect72 := Tconnect.Create;
connect72.NodeField := 'set_endpoint';
connect72.ProtoField := 'set_endpoint';
{ .AddConnect }
IS66.Connect := connect72;
{ .SetIS }
Script59.IS := IS66;

Script59.SetSourceCode('''ecmascript:\n"+
"        function recompute(startpoint,endpoint){\n"+
"	    if (typeof endpoint === 'undefined') {\\n		return;\\n	    }\\n            var dif = endpoint.subtract(startpoint);\\n            var dist = dif.length()*0.5;\\n            var dif2 = dif.multiply(0.5);\\n            var norm = dif.normalize();\\n            var transl = startpoint.add(dif2);\\n	    if (typeof Quaternion !== 'undefined') {\\n		    return {\\n			    scale : new SFVec3f(1.0,dist,1.0),\\n			    translation : transl,\\n			    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), norm)\\n		    };\\n	    } else {\\n		    return {\\n			    scale : new SFVec3f(1.0,dist,1.0),\\n			    translation : transl,\\n			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)\\n		    };\\n	    }\\n	}\\n	function recompute_and_route(startpoint, endpoint) {\\n		var trafo = recompute(startpoint, endpoint);\\n		if (typeof trafo !== 'undefined') {\n"+
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
"        }''');
{ .SetScript }
X3DPrototype58.Script := Script59;
{ .AddX3DPrototype }
X3DPrototype50.X3DPrototype := X3DPrototype58;
{ .AddX3DPrototype }
Group7.X3DPrototype := X3DPrototype50;
X3DPrototype73 := TX3DPrototypeNode.Create;
X3DPrototype73.NameField := 'point';
{ .AddX3DPrototype }
Group7.X3DPrototype := X3DPrototype73;
X3DPrototype74 := TX3DPrototypeNode.Create;
X3DPrototype74.NameField := 'point';
{ .AddX3DPrototype }
Group7.X3DPrototype := X3DPrototype74;
X3DPrototype75 := TX3DPrototypeNode.Create;
X3DPrototype75.NameField := 'point';
{ .AddX3DPrototype }
Group7.X3DPrototype := X3DPrototype75;
X3DPrototype76 := TX3DPrototypeNode.Create;
X3DPrototype76.NameField := 'point';
{ .AddX3DPrototype }
Group7.X3DPrototype := X3DPrototype76;
X3DPrototype77 := TX3DPrototypeNode.Create;
X3DPrototype77.NameField := 'x3dconnector';
SFNode78 := TSFNode.Create;
SFNode78.NameField := 'startnode';
X3DPrototype79.NameField := 'point';
X3DPrototype79 := X3DPrototype73;
{ .SetX3DPrototype }
SFNode78.X3DPrototype := X3DPrototype79;
{ .SetSFNode }
X3DPrototype77.SFNode := SFNode78;
SFNode80 := TSFNode.Create;
SFNode80.NameField := 'endnode';
X3DPrototype81.NameField := 'point';
X3DPrototype81 := X3DPrototype74;
{ .SetX3DPrototype }
SFNode80.X3DPrototype := X3DPrototype81;
{ .AddSFNode }
X3DPrototype77.SFNode := SFNode80;
SFNode82 := TSFNode.Create;
SFNode82.NameField := 'transnode';
Transform83 := Transform10;
{ .SetTransform }
SFNode82.Transform := Transform83;
{ .AddSFNode }
X3DPrototype77.SFNode := SFNode82;
SFNode84 := TSFNode.Create;
SFNode84.NameField := 'rotscalenode';
Transform85 := Transform11;
{ .SetTransform }
SFNode84.Transform := Transform85;
{ .AddSFNode }
X3DPrototype77.SFNode := SFNode84;
{ .AddX3DPrototype }
Group7.X3DPrototype := X3DPrototype77;
X3DPrototype86 := TX3DPrototypeNode.Create;
X3DPrototype86.NameField := 'x3dconnector';
SFNode87 := TSFNode.Create;
SFNode87.NameField := 'startnode';
X3DPrototype88.NameField := 'point';
X3DPrototype88 := X3DPrototype73;
{ .SetX3DPrototype }
SFNode87.X3DPrototype := X3DPrototype88;
{ .SetSFNode }
X3DPrototype86.SFNode := SFNode87;
SFNode89 := TSFNode.Create;
SFNode89.NameField := 'endnode';
X3DPrototype90.NameField := 'point';
X3DPrototype90 := X3DPrototype75;
{ .SetX3DPrototype }
SFNode89.X3DPrototype := X3DPrototype90;
{ .AddSFNode }
X3DPrototype86.SFNode := SFNode89;
SFNode91 := TSFNode.Create;
SFNode91.NameField := 'transnode';
Transform92 := Transform16;
{ .SetTransform }
SFNode91.Transform := Transform92;
{ .AddSFNode }
X3DPrototype86.SFNode := SFNode91;
SFNode93 := TSFNode.Create;
SFNode93.NameField := 'rotscalenode';
Transform94 := Transform17;
{ .SetTransform }
SFNode93.Transform := Transform94;
{ .AddSFNode }
X3DPrototype86.SFNode := SFNode93;
{ .AddX3DPrototype }
Group7.X3DPrototype := X3DPrototype86;
X3DPrototype95 := TX3DPrototypeNode.Create;
X3DPrototype95.NameField := 'x3dconnector';
SFNode96 := TSFNode.Create;
SFNode96.NameField := 'startnode';
X3DPrototype97.NameField := 'point';
X3DPrototype97 := X3DPrototype73;
{ .SetX3DPrototype }
SFNode96.X3DPrototype := X3DPrototype97;
{ .SetSFNode }
X3DPrototype95.SFNode := SFNode96;
SFNode98 := TSFNode.Create;
SFNode98.NameField := 'endnode';
X3DPrototype99.NameField := 'point';
X3DPrototype99 := X3DPrototype76;
{ .SetX3DPrototype }
SFNode98.X3DPrototype := X3DPrototype99;
{ .AddSFNode }
X3DPrototype95.SFNode := SFNode98;
SFNode100 := TSFNode.Create;
SFNode100.NameField := 'transnode';
Transform101 := Transform22;
{ .SetTransform }
SFNode100.Transform := Transform101;
{ .AddSFNode }
X3DPrototype95.SFNode := SFNode100;
SFNode102 := TSFNode.Create;
SFNode102.NameField := 'rotscalenode';
Transform103 := Transform23;
{ .SetTransform }
SFNode102.Transform := Transform103;
{ .AddSFNode }
X3DPrototype95.SFNode := SFNode102;
{ .AddX3DPrototype }
Group7.X3DPrototype := X3DPrototype95;
Group7.AddRoute(X3DPrototype73.EventTranslation_changed, X3DPrototype77.EventSet_startpoint);
{ .AddX3DRoute }
Group7.AddRoute(X3DPrototype74.EventTranslation_changed, X3DPrototype77.EventSet_endpoint);
{ .AddX3DRoute }
Group7.AddRoute(X3DPrototype73.EventTranslation_changed, X3DPrototype86.EventSet_startpoint);
{ .AddX3DRoute }
Group7.AddRoute(X3DPrototype75.EventTranslation_changed, X3DPrototype86.EventSet_endpoint);
{ .AddX3DRoute }
Group7.AddRoute(X3DPrototype73.EventTranslation_changed, X3DPrototype95.EventSet_startpoint);
{ .AddX3DRoute }
Group7.AddRoute(X3DPrototype76.EventTranslation_changed, X3DPrototype95.EventSet_endpoint);
{ .AddX3DRoute }
{ .AddGroup }
X3D0.AddChildren([Group7]);
Result := X3D0;
end;

begin
end.

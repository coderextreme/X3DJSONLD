unit x3dconnectorProto;

interface

uses X3DNodes;

function Createx3dconnectorProto: TX3DRootNode;

implementation

uses CastleVectors;

function Createx3dconnectorProto: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group10: TGroupNode;
WorldInfo11: TWorldInfoNode;
Viewpoint12: TViewpointNode;
Background13: TBackgroundNode;
Transform14: TTransformNode;
Shape15: TShapeNode;
Appearance16: TAppearanceNode;
Material17: TMaterialNode;
Sphere18: TSphereNode;
PlaneSensor19: TPlaneSensorNode;
Transform21: TTransformNode;
Shape22: TShapeNode;
Appearance23: TAppearanceNode;
Material24: TMaterialNode;
Sphere25: TSphereNode;
PlaneSensor26: TPlaneSensorNode;
Transform28: TTransformNode;
Shape29: TShapeNode;
Appearance30: TAppearanceNode;
Material31: TMaterialNode;
Sphere32: TSphereNode;
PlaneSensor33: TPlaneSensorNode;
Transform35: TTransformNode;
Shape36: TShapeNode;
Appearance37: TAppearanceNode;
Material38: TMaterialNode;
Sphere39: TSphereNode;
PlaneSensor40: TPlaneSensorNode;
Transform42: TTransformNode;
Transform43: TTransformNode;
Shape44: TShapeNode;
Appearance45: TAppearanceNode;
Material46: TMaterialNode;
Cylinder47: TCylinderNode;
Transform48: TTransformNode;
Transform49: TTransformNode;
Shape50: TShapeNode;
Appearance51: TAppearanceNode;
Material52: TMaterialNode;
Cylinder53: TCylinderNode;
Transform54: TTransformNode;
Transform55: TTransformNode;
Shape56: TShapeNode;
Appearance57: TAppearanceNode;
Material58: TMaterialNode;
Cylinder59: TCylinderNode;
X3DPrototype60: TX3DPrototype;
X3DInterfaceDeclaration61: TX3DInterfaceDeclaration;
X3DField62: TX3DField;
X3DField63: TX3DField;
X3DField64: TX3DField;
X3DField65: TX3DField;
X3DField66: TX3DField;
X3DField67: TX3DField;
X3DPrototype68: TX3DPrototype;
Script69: TScriptNode;
X3DField70: TX3DField;
X3DField71: TX3DField;
X3DField72: TX3DField;
X3DField73: TX3DField;
X3DField74: TX3DField;
X3DField75: TX3DField;
IS76: TIS;
connect77: Tconnect;
connect78: Tconnect;
connect79: Tconnect;
connect80: Tconnect;
connect81: Tconnect;
connect82: Tconnect;
X3DPrototype83: TX3DPrototypeNode;
SFNode84: TSFNode;
Transform85: TTransformNode;
SFNode86: TSFNode;
Transform87: TTransformNode;
SFNode88: TSFNode;
Transform89: TTransformNode;
SFNode90: TSFNode;
Transform91: TTransformNode;
X3DPrototype92: TX3DPrototypeNode;
SFNode93: TSFNode;
Transform94: TTransformNode;
SFNode95: TSFNode;
Transform96: TTransformNode;
SFNode97: TSFNode;
Transform98: TTransformNode;
SFNode99: TSFNode;
Transform100: TTransformNode;
X3DPrototype101: TX3DPrototypeNode;
SFNode102: TSFNode;
Transform103: TTransformNode;
SFNode104: TSFNode;
Transform105: TTransformNode;
SFNode106: TSFNode;
Transform107: TTransformNode;
SFNode108: TSFNode;
Transform109: TTransformNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'x3dconnectorProto.x3d';
X3D0.Meta['creator'] := 'Lost, Doug Sanden I think';
X3D0.Meta['created'] := 'Unknown';
X3D0.Meta['modified'] := 'July 30 2023';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/x3dconnectorProto.x3d';
X3D0.Meta['description'] := 'a generic proto to connect two objects';
X3D0.Meta['license'] := 'https://www.web3d.org/x3d/content/examples/license.html';
Group10 := TGroupNode.Create;
WorldInfo11 := TWorldInfoNode.Create;
WorldInfo11.Title := 'Connector Proto';
{ .AddChildren }
Group10.AddChildren([WorldInfo11]);
Viewpoint12 := TViewpointNode.Create;
Viewpoint12.Position := Vector3(0,0,5);
Viewpoint12.Description := 'Only Viewpoint';
{ .AddChildren }
Group10.AddChildren([Viewpoint12]);
Background13 := TBackgroundNode.Create;
Background13.SetSkyColor([Vector3(0.4,0.4,0.4)]);
{ .AddChildren }
Group10.AddChildren([Background13]);
Transform14 := TTransformNode.Create;
Shape15 := TShapeNode.Create;
Appearance16 := TAppearanceNode.Create;
Material17 := TMaterialNode.Create;
Material17.DiffuseColor := Vector3(0.7,0.2,0.2);
{ .SetMaterial }
Appearance16.Material := Material17;
{ .SetAppearance }
Shape15.Appearance := Appearance16;
Sphere18 := TSphereNode.Create;
Sphere18.Radius := 0.1;
{ .SetGeometry }
Shape15.Geometry := Sphere18;
{ .AddChild }
Transform14.AddChildren([Shape15]);
PlaneSensor19 := TPlaneSensorNode.Create;
PlaneSensor19.Description := 'Grab to move';
{ .AddChildren }
Transform14.AddChildren([PlaneSensor19]);
Transform14.AddRoute(PlaneSensor19.EventTranslation_changed, Transform14.FdTranslation);
{ .AddX3DRoute }
{ .AddChildren }
Group10.AddChildren([Transform14]);
Transform21 := TTransformNode.Create;
Transform21.Translation := Vector3(1,-1,0.01);
Shape22 := TShapeNode.Create;
Appearance23 := TAppearanceNode.Create;
Material24 := TMaterialNode.Create;
Material24.DiffuseColor := Vector3(0.2,0.7,0.2);
{ .SetMaterial }
Appearance23.Material := Material24;
{ .SetAppearance }
Shape22.Appearance := Appearance23;
Sphere25 := TSphereNode.Create;
Sphere25.Radius := 0.1;
{ .SetGeometry }
Shape22.Geometry := Sphere25;
{ .AddChild }
Transform21.AddChildren([Shape22]);
PlaneSensor26 := TPlaneSensorNode.Create;
PlaneSensor26.Description := 'Grab to move';
PlaneSensor26.Offset := Vector3(1,-1,0.01);
{ .AddChildren }
Transform21.AddChildren([PlaneSensor26]);
Transform21.AddRoute(PlaneSensor26.EventTranslation_changed, Transform21.FdTranslation);
{ .AddX3DRoute }
{ .AddChildren }
Group10.AddChildren([Transform21]);
Transform28 := TTransformNode.Create;
Transform28.Translation := Vector3(1,1,0.01);
Shape29 := TShapeNode.Create;
Appearance30 := TAppearanceNode.Create;
Material31 := TMaterialNode.Create;
Material31.DiffuseColor := Vector3(0.2,0.7,0.2);
{ .SetMaterial }
Appearance30.Material := Material31;
{ .SetAppearance }
Shape29.Appearance := Appearance30;
Sphere32 := TSphereNode.Create;
Sphere32.Radius := 0.1;
{ .SetGeometry }
Shape29.Geometry := Sphere32;
{ .AddChild }
Transform28.AddChildren([Shape29]);
PlaneSensor33 := TPlaneSensorNode.Create;
PlaneSensor33.Description := 'Grab to move';
PlaneSensor33.Offset := Vector3(1,1,0.01);
{ .AddChildren }
Transform28.AddChildren([PlaneSensor33]);
Transform28.AddRoute(PlaneSensor33.EventTranslation_changed, Transform28.FdTranslation);
{ .AddX3DRoute }
{ .AddChildren }
Group10.AddChildren([Transform28]);
Transform35 := TTransformNode.Create;
Transform35.Translation := Vector3(-1,1,0.01);
Shape36 := TShapeNode.Create;
Appearance37 := TAppearanceNode.Create;
Material38 := TMaterialNode.Create;
Material38.DiffuseColor := Vector3(0.2,0.7,0.2);
{ .SetMaterial }
Appearance37.Material := Material38;
{ .SetAppearance }
Shape36.Appearance := Appearance37;
Sphere39 := TSphereNode.Create;
Sphere39.Radius := 0.1;
{ .SetGeometry }
Shape36.Geometry := Sphere39;
{ .AddChild }
Transform35.AddChildren([Shape36]);
PlaneSensor40 := TPlaneSensorNode.Create;
PlaneSensor40.Description := 'Grab to move';
PlaneSensor40.Offset := Vector3(-1,1,0.01);
{ .AddChildren }
Transform35.AddChildren([PlaneSensor40]);
Transform35.AddRoute(PlaneSensor40.EventTranslation_changed, Transform35.FdTranslation);
{ .AddX3DRoute }
{ .AddChildren }
Group10.AddChildren([Transform35]);
Transform42 := TTransformNode.Create;
Transform43 := TTransformNode.Create;
Shape44 := TShapeNode.Create;
Appearance45 := TAppearanceNode.Create;
Material46 := TMaterialNode.Create;
Material46.DiffuseColor := Vector3(0.2,0.7,0.7);
Material46.Transparency := 0.5;
{ .SetMaterial }
Appearance45.Material := Material46;
{ .SetAppearance }
Shape44.Appearance := Appearance45;
Cylinder47 := TCylinderNode.Create;
Cylinder47.Radius := 0.05;
{ .SetGeometry }
Shape44.Geometry := Cylinder47;
{ .AddChild }
Transform43.AddChildren([Shape44]);
{ .AddChildren }
Transform42.AddChildren([Transform43]);
{ .AddChildren }
Group10.AddChildren([Transform42]);
Transform48 := TTransformNode.Create;
Transform49 := TTransformNode.Create;
Shape50 := TShapeNode.Create;
Appearance51 := TAppearanceNode.Create;
Material52 := TMaterialNode.Create;
Material52.DiffuseColor := Vector3(0.2,0.7,0.7);
Material52.Transparency := 0.5;
{ .SetMaterial }
Appearance51.Material := Material52;
{ .SetAppearance }
Shape50.Appearance := Appearance51;
Cylinder53 := TCylinderNode.Create;
Cylinder53.Radius := 0.05;
{ .SetGeometry }
Shape50.Geometry := Cylinder53;
{ .AddChild }
Transform49.AddChildren([Shape50]);
{ .AddChildren }
Transform48.AddChildren([Transform49]);
{ .AddChildren }
Group10.AddChildren([Transform48]);
Transform54 := TTransformNode.Create;
Transform55 := TTransformNode.Create;
Shape56 := TShapeNode.Create;
Appearance57 := TAppearanceNode.Create;
Material58 := TMaterialNode.Create;
Material58.DiffuseColor := Vector3(0.2,0.7,0.7);
Material58.Transparency := 0.5;
{ .SetMaterial }
Appearance57.Material := Material58;
{ .SetAppearance }
Shape56.Appearance := Appearance57;
Cylinder59 := TCylinderNode.Create;
Cylinder59.Radius := 0.05;
{ .SetGeometry }
Shape56.Geometry := Cylinder59;
{ .AddChild }
Transform55.AddChildren([Shape56]);
{ .AddChildren }
Transform54.AddChildren([Transform55]);
{ .AddChildren }
Group10.AddChildren([Transform54]);
X3DPrototype60 := TX3DPrototype.Create;
X3DPrototype60.NameField := 'x3dconnector';
X3DInterfaceDeclaration61 := TX3DInterfaceDeclaration.Create(nil);
X3DField62 := TX3DField.Create;
X3DField62.NameField := 'startnode';
X3DField62.AccessType := 'initializeOnly';
X3DField62.Type := 'SFNode';
{ .SetX3DField }
X3DInterfaceDeclaration61.X3DField := X3DField62;
X3DField63 := TX3DField.Create;
X3DField63.NameField := 'endnode';
X3DField63.AccessType := 'initializeOnly';
X3DField63.Type := 'SFNode';
{ .AddX3DField }
X3DInterfaceDeclaration61.X3DField := X3DField63;
X3DField64 := TX3DField.Create;
X3DField64.NameField := 'transnode';
X3DField64.AccessType := 'initializeOnly';
X3DField64.Type := 'SFNode';
{ .AddX3DField }
X3DInterfaceDeclaration61.X3DField := X3DField64;
X3DField65 := TX3DField.Create;
X3DField65.NameField := 'rotscalenode';
X3DField65.AccessType := 'initializeOnly';
X3DField65.Type := 'SFNode';
{ .AddX3DField }
X3DInterfaceDeclaration61.X3DField := X3DField65;
X3DField66 := TX3DField.Create;
X3DField66.NameField := 'set_startpoint';
X3DField66.AccessType := 'inputOnly';
X3DField66.Type := 'SFVec3f';
{ .AddX3DField }
X3DInterfaceDeclaration61.X3DField := X3DField66;
X3DField67 := TX3DField.Create;
X3DField67.NameField := 'set_endpoint';
X3DField67.AccessType := 'inputOnly';
X3DField67.Type := 'SFVec3f';
{ .AddX3DField }
X3DInterfaceDeclaration61.X3DField := X3DField67;
{ .SetX3DInterfaceDeclaration }
X3DPrototype60.X3DInterfaceDeclaration := X3DInterfaceDeclaration61;
X3DPrototype68 := TX3DPrototype.Create;
Script69 := TScriptNode.Create;
Script69.DirectOutput := True;
X3DField70 := TX3DField.Create;
X3DField70.NameField := 'startnode';
X3DField70.AccessType := 'initializeOnly';
X3DField70.Type := 'SFNode';
{ .SetX3DField }
Script69.X3DField := X3DField70;
X3DField71 := TX3DField.Create;
X3DField71.NameField := 'endnode';
X3DField71.AccessType := 'initializeOnly';
X3DField71.Type := 'SFNode';
{ .AddX3DField }
Script69.X3DField := X3DField71;
X3DField72 := TX3DField.Create;
X3DField72.NameField := 'transnode';
X3DField72.AccessType := 'initializeOnly';
X3DField72.Type := 'SFNode';
{ .AddX3DField }
Script69.X3DField := X3DField72;
X3DField73 := TX3DField.Create;
X3DField73.NameField := 'rotscalenode';
X3DField73.AccessType := 'initializeOnly';
X3DField73.Type := 'SFNode';
{ .AddX3DField }
Script69.X3DField := X3DField73;
X3DField74 := TX3DField.Create;
X3DField74.NameField := 'set_startpoint';
X3DField74.AccessType := 'inputOnly';
X3DField74.Type := 'SFVec3f';
{ .AddX3DField }
Script69.X3DField := X3DField74;
X3DField75 := TX3DField.Create;
X3DField75.NameField := 'set_endpoint';
X3DField75.AccessType := 'inputOnly';
X3DField75.Type := 'SFVec3f';
{ .AddX3DField }
Script69.X3DField := X3DField75;
IS76 := TIS.Create;
connect77 := Tconnect.Create;
connect77.NodeField := 'startnode';
connect77.ProtoField := 'startnode';
{ .AddConnect }
IS76.Connect := connect77;
connect78 := Tconnect.Create;
connect78.NodeField := 'endnode';
connect78.ProtoField := 'endnode';
{ .AddConnect }
IS76.Connect := connect78;
connect79 := Tconnect.Create;
connect79.NodeField := 'transnode';
connect79.ProtoField := 'transnode';
{ .AddConnect }
IS76.Connect := connect79;
connect80 := Tconnect.Create;
connect80.NodeField := 'rotscalenode';
connect80.ProtoField := 'rotscalenode';
{ .AddConnect }
IS76.Connect := connect80;
connect81 := Tconnect.Create;
connect81.NodeField := 'set_startpoint';
connect81.ProtoField := 'set_startpoint';
{ .AddConnect }
IS76.Connect := connect81;
connect82 := Tconnect.Create;
connect82.NodeField := 'set_endpoint';
connect82.ProtoField := 'set_endpoint';
{ .AddConnect }
IS76.Connect := connect82;
{ .SetIS }
Script69.IS := IS76;

Script69.SetSourceCode('''ecmascript:\n"+
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
"	      if (trafo) {\n"+
"		      transnode.translation = trafo.translation;\n"+
"		      rotscalenode.rotation = trafo.rotation;\n"+
"		      rotscalenode.scale = trafo.scale;\n"+
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
"        }''');
{ .SetScript }
X3DPrototype68.Script := Script69;
{ .AddX3DPrototype }
X3DPrototype60.X3DPrototype := X3DPrototype68;
{ .AddX3DPrototype }
Group10.X3DPrototype := X3DPrototype60;
X3DPrototype83 := TX3DPrototypeNode.Create;
X3DPrototype83.NameField := 'x3dconnector';
SFNode84 := TSFNode.Create;
SFNode84.NameField := 'startnode';
Transform85 := Transform14;
{ .SetTransform }
SFNode84.Transform := Transform85;
{ .SetSFNode }
X3DPrototype83.SFNode := SFNode84;
SFNode86 := TSFNode.Create;
SFNode86.NameField := 'endnode';
Transform87 := Transform21;
{ .SetTransform }
SFNode86.Transform := Transform87;
{ .AddSFNode }
X3DPrototype83.SFNode := SFNode86;
SFNode88 := TSFNode.Create;
SFNode88.NameField := 'transnode';
Transform89 := Transform42;
{ .SetTransform }
SFNode88.Transform := Transform89;
{ .AddSFNode }
X3DPrototype83.SFNode := SFNode88;
SFNode90 := TSFNode.Create;
SFNode90.NameField := 'rotscalenode';
Transform91 := Transform43;
{ .SetTransform }
SFNode90.Transform := Transform91;
{ .AddSFNode }
X3DPrototype83.SFNode := SFNode90;
{ .AddX3DPrototype }
Group10.X3DPrototype := X3DPrototype83;
X3DPrototype92 := TX3DPrototypeNode.Create;
X3DPrototype92.NameField := 'x3dconnector';
SFNode93 := TSFNode.Create;
SFNode93.NameField := 'startnode';
Transform94 := Transform14;
{ .SetTransform }
SFNode93.Transform := Transform94;
{ .SetSFNode }
X3DPrototype92.SFNode := SFNode93;
SFNode95 := TSFNode.Create;
SFNode95.NameField := 'endnode';
Transform96 := Transform28;
{ .SetTransform }
SFNode95.Transform := Transform96;
{ .AddSFNode }
X3DPrototype92.SFNode := SFNode95;
SFNode97 := TSFNode.Create;
SFNode97.NameField := 'transnode';
Transform98 := Transform48;
{ .SetTransform }
SFNode97.Transform := Transform98;
{ .AddSFNode }
X3DPrototype92.SFNode := SFNode97;
SFNode99 := TSFNode.Create;
SFNode99.NameField := 'rotscalenode';
Transform100 := Transform49;
{ .SetTransform }
SFNode99.Transform := Transform100;
{ .AddSFNode }
X3DPrototype92.SFNode := SFNode99;
{ .AddX3DPrototype }
Group10.X3DPrototype := X3DPrototype92;
X3DPrototype101 := TX3DPrototypeNode.Create;
X3DPrototype101.NameField := 'x3dconnector';
SFNode102 := TSFNode.Create;
SFNode102.NameField := 'startnode';
Transform103 := Transform14;
{ .SetTransform }
SFNode102.Transform := Transform103;
{ .SetSFNode }
X3DPrototype101.SFNode := SFNode102;
SFNode104 := TSFNode.Create;
SFNode104.NameField := 'endnode';
Transform105 := Transform35;
{ .SetTransform }
SFNode104.Transform := Transform105;
{ .AddSFNode }
X3DPrototype101.SFNode := SFNode104;
SFNode106 := TSFNode.Create;
SFNode106.NameField := 'transnode';
Transform107 := Transform54;
{ .SetTransform }
SFNode106.Transform := Transform107;
{ .AddSFNode }
X3DPrototype101.SFNode := SFNode106;
SFNode108 := TSFNode.Create;
SFNode108.NameField := 'rotscalenode';
Transform109 := Transform55;
{ .SetTransform }
SFNode108.Transform := Transform109;
{ .AddSFNode }
X3DPrototype101.SFNode := SFNode108;
{ .AddX3DPrototype }
Group10.X3DPrototype := X3DPrototype101;
Group10.AddRoute(Transform14.EventTranslation_changed, X3DPrototype83.EventSet_startpoint);
{ .AddX3DRoute }
Group10.AddRoute(Transform21.EventTranslation_changed, X3DPrototype83.EventSet_endpoint);
{ .AddX3DRoute }
Group10.AddRoute(Transform14.EventTranslation_changed, X3DPrototype92.EventSet_startpoint);
{ .AddX3DRoute }
Group10.AddRoute(Transform28.EventTranslation_changed, X3DPrototype92.EventSet_endpoint);
{ .AddX3DRoute }
Group10.AddRoute(Transform14.EventTranslation_changed, X3DPrototype101.EventSet_startpoint);
{ .AddX3DRoute }
Group10.AddRoute(Transform35.EventTranslation_changed, X3DPrototype101.EventSet_endpoint);
{ .AddX3DRoute }
{ .AddGroup }
X3D0.AddChildren([Group10]);
Result := X3D0;
end;

begin
end.

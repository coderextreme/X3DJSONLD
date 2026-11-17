unit x3dconnector;

interface

uses X3DNodes;

function Createx3dconnector: TX3DRootNode;

implementation

uses CastleVectors;

function Createx3dconnector: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group7: TGroupNode;
Viewpoint8: TViewpointNode;
Background9: TBackgroundNode;
Transform10: TTransformNode;
Shape11: TShapeNode;
Appearance12: TAppearanceNode;
Material13: TMaterialNode;
Sphere14: TSphereNode;
PlaneSensor15: TPlaneSensorNode;
Transform17: TTransformNode;
Shape18: TShapeNode;
Appearance19: TAppearanceNode;
Material20: TMaterialNode;
Sphere21: TSphereNode;
PlaneSensor22: TPlaneSensorNode;
Transform24: TTransformNode;
Transform25: TTransformNode;
Shape26: TShapeNode;
Appearance27: TAppearanceNode;
Material28: TMaterialNode;
Cylinder29: TCylinderNode;
X3DPrototype30: TX3DPrototype;
X3DInterfaceDeclaration31: TX3DInterfaceDeclaration;
X3DField32: TX3DField;
X3DField33: TX3DField;
X3DField34: TX3DField;
X3DField35: TX3DField;
X3DField36: TX3DField;
X3DField37: TX3DField;
X3DPrototype38: TX3DPrototype;
Script39: TScriptNode;
X3DField40: TX3DField;
X3DField41: TX3DField;
X3DField42: TX3DField;
X3DField43: TX3DField;
X3DField44: TX3DField;
X3DField45: TX3DField;
IS46: TIS;
connect47: Tconnect;
connect48: Tconnect;
connect49: Tconnect;
connect50: Tconnect;
connect51: Tconnect;
connect52: Tconnect;
X3DPrototype53: TX3DPrototypeNode;
SFNode54: TSFNode;
Transform55: TTransformNode;
SFNode56: TSFNode;
Transform57: TTransformNode;
SFNode58: TSFNode;
Transform59: TTransformNode;
SFNode60: TSFNode;
Transform61: TTransformNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'x3dconnector.x3d';
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
Appearance12 := TAppearanceNode.Create;
Material13 := TMaterialNode.Create;
Material13.DiffuseColor := Vector3(0.7,0.2,0.2);
{ .SetMaterial }
Appearance12.Material := Material13;
{ .SetAppearance }
Shape11.Appearance := Appearance12;
Sphere14 := TSphereNode.Create;
Sphere14.Radius := 0.1;
{ .SetGeometry }
Shape11.Geometry := Sphere14;
{ .AddChild }
Transform10.AddChildren([Shape11]);
PlaneSensor15 := TPlaneSensorNode.Create;
PlaneSensor15.Description := 'Grab to move';
{ .AddChildren }
Transform10.AddChildren([PlaneSensor15]);
Transform10.AddRoute(PlaneSensor15.EventTranslation_changed, Transform10.FdTranslation);
{ .AddX3DRoute }
{ .AddChildren }
Group7.AddChildren([Transform10]);
Transform17 := TTransformNode.Create;
Transform17.Translation := Vector3(1,-1,0.01);
Shape18 := TShapeNode.Create;
Appearance19 := TAppearanceNode.Create;
Material20 := TMaterialNode.Create;
Material20.DiffuseColor := Vector3(0.2,0.7,0.2);
{ .SetMaterial }
Appearance19.Material := Material20;
{ .SetAppearance }
Shape18.Appearance := Appearance19;
Sphere21 := TSphereNode.Create;
Sphere21.Radius := 0.1;
{ .SetGeometry }
Shape18.Geometry := Sphere21;
{ .AddChild }
Transform17.AddChildren([Shape18]);
PlaneSensor22 := TPlaneSensorNode.Create;
PlaneSensor22.Description := 'Grab to move';
PlaneSensor22.Offset := Vector3(1,-1,0.01);
{ .AddChildren }
Transform17.AddChildren([PlaneSensor22]);
Transform17.AddRoute(PlaneSensor22.EventTranslation_changed, Transform17.FdTranslation);
{ .AddX3DRoute }
{ .AddChildren }
Group7.AddChildren([Transform17]);
Transform24 := TTransformNode.Create;
Transform25 := TTransformNode.Create;
Shape26 := TShapeNode.Create;
Appearance27 := TAppearanceNode.Create;
Material28 := TMaterialNode.Create;
Material28.DiffuseColor := Vector3(0.2,0.7,0.7);
Material28.Transparency := 0.5;
{ .SetMaterial }
Appearance27.Material := Material28;
{ .SetAppearance }
Shape26.Appearance := Appearance27;
Cylinder29 := TCylinderNode.Create;
Cylinder29.Radius := 0.05;
{ .SetGeometry }
Shape26.Geometry := Cylinder29;
{ .AddChild }
Transform25.AddChildren([Shape26]);
{ .AddChildren }
Transform24.AddChildren([Transform25]);
{ .AddChildren }
Group7.AddChildren([Transform24]);
X3DPrototype30 := TX3DPrototype.Create;
X3DPrototype30.NameField := 'x3dconnector';
X3DInterfaceDeclaration31 := TX3DInterfaceDeclaration.Create(nil);
X3DField32 := TX3DField.Create;
X3DField32.NameField := 'startnode';
X3DField32.AccessType := 'initializeOnly';
X3DField32.Type := 'SFNode';
{ .SetX3DField }
X3DInterfaceDeclaration31.X3DField := X3DField32;
X3DField33 := TX3DField.Create;
X3DField33.NameField := 'endnode';
X3DField33.AccessType := 'initializeOnly';
X3DField33.Type := 'SFNode';
{ .AddX3DField }
X3DInterfaceDeclaration31.X3DField := X3DField33;
X3DField34 := TX3DField.Create;
X3DField34.NameField := 'transnode';
X3DField34.AccessType := 'initializeOnly';
X3DField34.Type := 'SFNode';
{ .AddX3DField }
X3DInterfaceDeclaration31.X3DField := X3DField34;
X3DField35 := TX3DField.Create;
X3DField35.NameField := 'rotscalenode';
X3DField35.AccessType := 'initializeOnly';
X3DField35.Type := 'SFNode';
{ .AddX3DField }
X3DInterfaceDeclaration31.X3DField := X3DField35;
X3DField36 := TX3DField.Create;
X3DField36.NameField := 'set_startpoint';
X3DField36.AccessType := 'inputOnly';
X3DField36.Type := 'SFVec3f';
{ .AddX3DField }
X3DInterfaceDeclaration31.X3DField := X3DField36;
X3DField37 := TX3DField.Create;
X3DField37.NameField := 'set_endpoint';
X3DField37.AccessType := 'inputOnly';
X3DField37.Type := 'SFVec3f';
{ .AddX3DField }
X3DInterfaceDeclaration31.X3DField := X3DField37;
{ .SetX3DInterfaceDeclaration }
X3DPrototype30.X3DInterfaceDeclaration := X3DInterfaceDeclaration31;
X3DPrototype38 := TX3DPrototype.Create;
Script39 := TScriptNode.Create;
X3DField40 := TX3DField.Create;
X3DField40.NameField := 'startnode';
X3DField40.AccessType := 'initializeOnly';
X3DField40.Type := 'SFNode';
{ .SetX3DField }
Script39.X3DField := X3DField40;
X3DField41 := TX3DField.Create;
X3DField41.NameField := 'endnode';
X3DField41.AccessType := 'initializeOnly';
X3DField41.Type := 'SFNode';
{ .AddX3DField }
Script39.X3DField := X3DField41;
X3DField42 := TX3DField.Create;
X3DField42.NameField := 'transnode';
X3DField42.AccessType := 'initializeOnly';
X3DField42.Type := 'SFNode';
{ .AddX3DField }
Script39.X3DField := X3DField42;
X3DField43 := TX3DField.Create;
X3DField43.NameField := 'rotscalenode';
X3DField43.AccessType := 'initializeOnly';
X3DField43.Type := 'SFNode';
{ .AddX3DField }
Script39.X3DField := X3DField43;
X3DField44 := TX3DField.Create;
X3DField44.NameField := 'set_startpoint';
X3DField44.AccessType := 'inputOnly';
X3DField44.Type := 'SFVec3f';
{ .AddX3DField }
Script39.X3DField := X3DField44;
X3DField45 := TX3DField.Create;
X3DField45.NameField := 'set_endpoint';
X3DField45.AccessType := 'inputOnly';
X3DField45.Type := 'SFVec3f';
{ .AddX3DField }
Script39.X3DField := X3DField45;
IS46 := TIS.Create;
connect47 := Tconnect.Create;
connect47.NodeField := 'startnode';
connect47.ProtoField := 'startnode';
{ .AddConnect }
IS46.Connect := connect47;
connect48 := Tconnect.Create;
connect48.NodeField := 'endnode';
connect48.ProtoField := 'endnode';
{ .AddConnect }
IS46.Connect := connect48;
connect49 := Tconnect.Create;
connect49.NodeField := 'transnode';
connect49.ProtoField := 'transnode';
{ .AddConnect }
IS46.Connect := connect49;
connect50 := Tconnect.Create;
connect50.NodeField := 'rotscalenode';
connect50.ProtoField := 'rotscalenode';
{ .AddConnect }
IS46.Connect := connect50;
connect51 := Tconnect.Create;
connect51.NodeField := 'set_startpoint';
connect51.ProtoField := 'set_startpoint';
{ .AddConnect }
IS46.Connect := connect51;
connect52 := Tconnect.Create;
connect52.NodeField := 'set_endpoint';
connect52.ProtoField := 'set_endpoint';
{ .AddConnect }
IS46.Connect := connect52;
{ .SetIS }
Script39.IS := IS46;

Script39.SetSourceCode('''ecmascript:\n"+
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
X3DPrototype38.Script := Script39;
{ .AddX3DPrototype }
X3DPrototype30.X3DPrototype := X3DPrototype38;
{ .AddX3DPrototype }
Group7.X3DPrototype := X3DPrototype30;
X3DPrototype53 := TX3DPrototypeNode.Create;
X3DPrototype53.NameField := 'x3dconnector';
SFNode54 := TSFNode.Create;
SFNode54.NameField := 'startnode';
Transform55 := Transform10;
{ .SetTransform }
SFNode54.Transform := Transform55;
{ .SetSFNode }
X3DPrototype53.SFNode := SFNode54;
SFNode56 := TSFNode.Create;
SFNode56.NameField := 'endnode';
Transform57 := Transform17;
{ .SetTransform }
SFNode56.Transform := Transform57;
{ .AddSFNode }
X3DPrototype53.SFNode := SFNode56;
SFNode58 := TSFNode.Create;
SFNode58.NameField := 'transnode';
Transform59 := Transform24;
{ .SetTransform }
SFNode58.Transform := Transform59;
{ .AddSFNode }
X3DPrototype53.SFNode := SFNode58;
SFNode60 := TSFNode.Create;
SFNode60.NameField := 'rotscalenode';
Transform61 := Transform25;
{ .SetTransform }
SFNode60.Transform := Transform61;
{ .AddSFNode }
X3DPrototype53.SFNode := SFNode60;
{ <fieldValue name='set_startpoint'> }
{ </fieldValue> }
{ <fieldValue name='set_endpoint'> }
{ </fieldValue> }
{ .AddX3DPrototype }
Group7.X3DPrototype := X3DPrototype53;
Group7.AddRoute(Transform10.EventTranslation_changed, X3DPrototype53.EventSet_startpoint);
{ .AddX3DRoute }
Group7.AddRoute(Transform17.EventTranslation_changed, X3DPrototype53.EventSet_endpoint);
{ .AddX3DRoute }
{ .AddGroup }
X3D0.AddChildren([Group7]);
Result := X3D0;
end;

begin
end.

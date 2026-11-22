unit x3dconnector;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function Createx3dconnector: TX3DRootNode;

implementation

uses CastleVectors;

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
SFNode32: TSFNode;
SFNode33: TSFNode;
SFNode34: TSFNode;
SFNode35: TSFNode;
SFVec3f36: TSFVec3f;
SFVec3f37: TSFVec3f;
X3DPrototype38: TX3DPrototype;
Script39: TScriptNode;
SFNode40: TSFNode;
SFNode41: TSFNode;
SFNode42: TSFNode;
SFNode43: TSFNode;
SFVec3f44: TSFVec3f;
SFVec3f45: TSFVec3f;
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

procedure Initx3dconnectorPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'x3dconnector.x3d';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'Lost, Doug Sanden I think';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'manual';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/x3dconnectorProto.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'a generic proto to connect two objects';
{ METHOD .Meta }
{ METHOD .Head }
Group7 := TGroupNode.Create;
Viewpoint8 := TViewpointNode.Create;
Viewpoint8.Position := Vector3(0,0,5);
Viewpoint8.Description := 'Only Viewpoint';
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Viewpoint8);
Background9 := TBackgroundNode.Create;
Background9.SetSkyColor([Vector3(0.4,0.4,0.4)]);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Background9);
Transform10 := TTransformNode.Create;
Shape11 := TShapeNode.Create;
Appearance12 := TAppearanceNode.Create;
Material13 := TMaterialNode.Create;
Material13.DiffuseColor := Vector3(0.7,0.2,0.2);
{ METHOD .SetMaterial }
Appearance12.Material := Material13;
{ METHOD .Appearance }
Shape11.Appearance := Appearance12;
Sphere14 := TSphereNode.Create;
Sphere14.Radius := 0.1;
{ METHOD .Geometry }
Shape11.Geometry := Sphere14;
{ METHOD .FdChildren.Add }
Transform10.FdChildren.Add(Shape11);
PlaneSensor15 := TPlaneSensorNode.Create;
PlaneSensor15.Description := 'Grab to move';
{ METHOD .FdChildren.Add }
Transform10.FdChildren.Add(PlaneSensor15);
{ Original "PS1.EventTranslation_changed TO G1.EventSet_translation }
{ Sample PS1.EventTranslation_changed TO G1.EventSet_translation}
Transform10.AddRoute(PlaneSensor15.EventTranslation_changed, Transform10.set_EventSet_translation);
{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Transform10);
Transform17 := TTransformNode.Create;
Transform17.Translation := Vector3(1,-1,0.01);
Shape18 := TShapeNode.Create;
Appearance19 := TAppearanceNode.Create;
Material20 := TMaterialNode.Create;
Material20.DiffuseColor := Vector3(0.2,0.7,0.2);
{ METHOD .SetMaterial }
Appearance19.Material := Material20;
end;

procedure Initx3dconnectorPart1;
begin

{ METHOD .Appearance }
Shape18.Appearance := Appearance19;
Sphere21 := TSphereNode.Create;
Sphere21.Radius := 0.1;
{ METHOD .Geometry }
Shape18.Geometry := Sphere21;
{ METHOD .FdChildren.Add }
Transform17.FdChildren.Add(Shape18);
PlaneSensor22 := TPlaneSensorNode.Create;
PlaneSensor22.Description := 'Grab to move';
PlaneSensor22.Offset := Vector3(1,-1,0.01);
{ METHOD .FdChildren.Add }
Transform17.FdChildren.Add(PlaneSensor22);
{ Original "PS2.EventTranslation_changed TO G2.EventSet_translation }
{ Sample PS2.EventTranslation_changed TO G2.EventSet_translation}
Transform17.AddRoute(PlaneSensor22.EventTranslation_changed, Transform17.set_EventSet_translation);
{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Transform17);
Transform24 := TTransformNode.Create;
Transform25 := TTransformNode.Create;
Shape26 := TShapeNode.Create;
Appearance27 := TAppearanceNode.Create;
Material28 := TMaterialNode.Create;
Material28.DiffuseColor := Vector3(0.2,0.7,0.7);
Material28.Transparency := 0.5;
{ METHOD .SetMaterial }
Appearance27.Material := Material28;
{ METHOD .Appearance }
Shape26.Appearance := Appearance27;
Cylinder29 := TCylinderNode.Create;
Cylinder29.Radius := 0.05;
{ METHOD .Geometry }
Shape26.Geometry := Cylinder29;
{ METHOD .FdChildren.Add }
Transform25.FdChildren.Add(Shape26);
{ METHOD .FdChildren.Add }
Transform24.FdChildren.Add(Transform25);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Transform24);
X3DPrototype30 := TX3DPrototype.Create;
X3DInterfaceDeclaration31 := TX3DInterfaceDeclaration.Create(nil);
SFNode32 := TSFNode.CreateUndefined(X3DInterfaceDeclaration31, false, 'startnode');
{ METHOD .AddSFNode }
X3DInterfaceDeclaration31.AddSFNode([SFNode32]);
SFNode33 := TSFNode.CreateUndefined(X3DInterfaceDeclaration31, false, 'endnode');
{ METHOD .AddSFNode }
X3DInterfaceDeclaration31.AddSFNode([SFNode33]);
SFNode34 := TSFNode.CreateUndefined(X3DInterfaceDeclaration31, false, 'transnode');
{ METHOD .AddSFNode }
X3DInterfaceDeclaration31.AddSFNode([SFNode34]);
SFNode35 := TSFNode.CreateUndefined(X3DInterfaceDeclaration31, false, 'rotscalenode');
{ METHOD .AddSFNode }
X3DInterfaceDeclaration31.AddSFNode([SFNode35]);
SFVec3f36 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration31, false, 'set_startpoint');
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration31.AddSFVec3f([SFVec3f36]);
SFVec3f37 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration31, false, 'set_endpoint');
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration31.AddSFVec3f([SFVec3f37]);
end;

procedure Initx3dconnectorPart2;
begin

{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype30.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration31]);
X3DPrototype38 := TX3DPrototype.Create;
Script39 := TScriptNode.Create;
SFNode40 := TSFNode.CreateUndefined(Script39, false, 'startnode');
{ METHOD .Fd.AddCustomField }
Script39.AddCustomField(SFNode40);
SFNode41 := TSFNode.CreateUndefined(Script39, false, 'endnode');
{ METHOD .Fd.AddCustomField }
Script39.AddCustomField(SFNode41);
SFNode42 := TSFNode.CreateUndefined(Script39, false, 'transnode');
{ METHOD .Fd.AddCustomField }
Script39.AddCustomField(SFNode42);
SFNode43 := TSFNode.CreateUndefined(Script39, false, 'rotscalenode');
{ METHOD .Fd.AddCustomField }
Script39.AddCustomField(SFNode43);
SFVec3f44 := TSFVec3f.CreateUndefined(Script39, false, 'set_startpoint');
{ METHOD .Fd.AddCustomField }
Script39.AddCustomField(SFVec3f44);
SFVec3f45 := TSFVec3f.CreateUndefined(Script39, false, 'set_endpoint');
{ METHOD .Fd.AddCustomField }
Script39.AddCustomField(SFVec3f45);
IS46 := TIS.Create;
connect47 := Tconnect.Create;
connect47.NodeField := 'startnode';
connect47.ProtoField := 'startnode';
{ METHOD .Connect }
IS46.Connect := connect47;
connect48 := Tconnect.Create;
connect48.NodeField := 'endnode';
connect48.ProtoField := 'endnode';
{ METHOD .Connect }
IS46.Connect := connect48;
connect49 := Tconnect.Create;
connect49.NodeField := 'transnode';
connect49.ProtoField := 'transnode';
{ METHOD .Connect }
IS46.Connect := connect49;
connect50 := Tconnect.Create;
connect50.NodeField := 'rotscalenode';
connect50.ProtoField := 'rotscalenode';
{ METHOD .Connect }
IS46.Connect := connect50;
connect51 := Tconnect.Create;
connect51.NodeField := 'set_startpoint';
connect51.ProtoField := 'set_startpoint';
{ METHOD .Connect }
IS46.Connect := connect51;
connect52 := Tconnect.Create;
connect52.NodeField := 'set_endpoint';
connect52.ProtoField := 'set_endpoint';
{ METHOD .Connect }
IS46.Connect := connect52;
end;

procedure Initx3dconnectorPart3;
begin

{ METHOD .Fd.AddCustomField }
Script39.AddCustomField(IS46);

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
{ METHOD .AddScript }
X3DPrototype38.AddScript([Script39]);
{ METHOD .AddX3DPrototype }
X3DPrototype30.AddX3DPrototype([X3DPrototype38]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype30]);
X3DPrototype53 := TX3DPrototypeNode.Create;
SFNode54 := TSFNode.CreateUndefined(X3DPrototype53, false, 'startnode');
{ METHOD .Fd.Value }
SFNode54.Value := Transform10;
{ METHOD .AddSFNode }
X3DPrototype53.AddSFNode([SFNode54]);
SFNode56 := TSFNode.CreateUndefined(X3DPrototype53, false, 'endnode');
{ METHOD .Fd.Value }
SFNode56.Value := Transform17;
{ METHOD .AddSFNode }
X3DPrototype53.AddSFNode([SFNode56]);
SFNode58 := TSFNode.CreateUndefined(X3DPrototype53, false, 'transnode');
{ METHOD .Fd.Value }
SFNode58.Value := Transform24;
{ METHOD .AddSFNode }
X3DPrototype53.AddSFNode([SFNode58]);
SFNode60 := TSFNode.CreateUndefined(X3DPrototype53, false, 'rotscalenode');
{ METHOD .Fd.Value }
SFNode60.Value := Transform25;
{ METHOD .AddSFNode }
X3DPrototype53.AddSFNode([SFNode60]);
{ <fieldValue name='set_startpoint'> }
{ </fieldValue> }
{ <fieldValue name='set_endpoint'> }
{ </fieldValue> }
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype53]);
{ Original "G1.EventTranslation_changed TO connector1.EventSet_startpoint }
{ Sample G1.EventTranslation_changed TO connector1.EventSet_startpoint}
Group7.AddRoute(Transform10.EventTranslation_changed, X3DPrototype53.set_EventSet_startpoint);
{ METHOD .AddX3DROUTE }
{ Original "G2.EventTranslation_changed TO connector1.EventSet_endpoint }
{ Sample G2.EventTranslation_changed TO connector1.EventSet_endpoint}
Group7.AddRoute(Transform17.EventTranslation_changed, X3DPrototype53.set_EventSet_endpoint);
{ METHOD .AddX3DROUTE }
{ METHOD .AddGroup }
X3D0.AddChildren([Group7]);
end;

function Createx3dconnector: TX3DRootNode;
begin
Initx3dconnectorPart0;
Initx3dconnectorPart1;
Initx3dconnectorPart2;
Initx3dconnectorPart3;
Result := X3D0;
end;

begin
end.

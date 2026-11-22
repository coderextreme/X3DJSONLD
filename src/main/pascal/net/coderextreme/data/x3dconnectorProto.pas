unit x3dconnectorProto;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function Createx3dconnectorProto: TX3DRootNode;

implementation

uses CastleVectors;

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
SFNode62: TSFNode;
SFNode63: TSFNode;
SFNode64: TSFNode;
SFNode65: TSFNode;
SFVec3f66: TSFVec3f;
SFVec3f67: TSFVec3f;
X3DPrototype68: TX3DPrototype;
Script69: TScriptNode;
SFNode70: TSFNode;
SFNode71: TSFNode;
SFNode72: TSFNode;
SFNode73: TSFNode;
SFVec3f74: TSFVec3f;
SFVec3f75: TSFVec3f;
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

procedure Initx3dconnectorProtoPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'x3dconnectorProto.x3d';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'Lost, Doug Sanden I think';
{ METHOD .Meta }
X3D0.Meta['created'] := 'Unknown';
{ METHOD .Meta }
X3D0.Meta['modified'] := 'July 30 2023';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'manual';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/x3dconnectorProto.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'a generic proto to connect two objects';
{ METHOD .Meta }
X3D0.Meta['license'] := 'https://www.web3d.org/x3d/content/examples/license.html';
{ METHOD .Meta }
{ METHOD .Head }
Group10 := TGroupNode.Create;
WorldInfo11 := TWorldInfoNode.Create;
WorldInfo11.Title := 'Connector Proto';
{ METHOD .FdChildren.Add }
Group10.FdChildren.Add(WorldInfo11);
Viewpoint12 := TViewpointNode.Create;
Viewpoint12.Position := Vector3(0,0,5);
Viewpoint12.Description := 'Only Viewpoint';
{ METHOD .FdChildren.Add }
Group10.FdChildren.Add(Viewpoint12);
Background13 := TBackgroundNode.Create;
Background13.SetSkyColor([Vector3(0.4,0.4,0.4)]);
{ METHOD .FdChildren.Add }
Group10.FdChildren.Add(Background13);
Transform14 := TTransformNode.Create;
Shape15 := TShapeNode.Create;
Appearance16 := TAppearanceNode.Create;
Material17 := TMaterialNode.Create;
Material17.DiffuseColor := Vector3(0.7,0.2,0.2);
{ METHOD .SetMaterial }
Appearance16.Material := Material17;
{ METHOD .Appearance }
Shape15.Appearance := Appearance16;
Sphere18 := TSphereNode.Create;
Sphere18.Radius := 0.1;
{ METHOD .Geometry }
Shape15.Geometry := Sphere18;
{ METHOD .FdChildren.Add }
Transform14.FdChildren.Add(Shape15);
PlaneSensor19 := TPlaneSensorNode.Create;
PlaneSensor19.Description := 'Grab to move';
{ METHOD .FdChildren.Add }
Transform14.FdChildren.Add(PlaneSensor19);
{ Original "PS1.EventTranslation_changed TO G1.EventSet_translation }
{ Sample PS1.EventTranslation_changed TO G1.EventSet_translation}
Transform14.AddRoute(PlaneSensor19.EventTranslation_changed, Transform14.set_EventSet_translation);
{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Group10.FdChildren.Add(Transform14);
Transform21 := TTransformNode.Create;
end;

procedure Initx3dconnectorProtoPart1;
begin

Transform21.Translation := Vector3(1,-1,0.01);
Shape22 := TShapeNode.Create;
Appearance23 := TAppearanceNode.Create;
Material24 := TMaterialNode.Create;
Material24.DiffuseColor := Vector3(0.2,0.7,0.2);
{ METHOD .SetMaterial }
Appearance23.Material := Material24;
{ METHOD .Appearance }
Shape22.Appearance := Appearance23;
Sphere25 := TSphereNode.Create;
Sphere25.Radius := 0.1;
{ METHOD .Geometry }
Shape22.Geometry := Sphere25;
{ METHOD .FdChildren.Add }
Transform21.FdChildren.Add(Shape22);
PlaneSensor26 := TPlaneSensorNode.Create;
PlaneSensor26.Description := 'Grab to move';
PlaneSensor26.Offset := Vector3(1,-1,0.01);
{ METHOD .FdChildren.Add }
Transform21.FdChildren.Add(PlaneSensor26);
{ Original "PS2.EventTranslation_changed TO G2.EventSet_translation }
{ Sample PS2.EventTranslation_changed TO G2.EventSet_translation}
Transform21.AddRoute(PlaneSensor26.EventTranslation_changed, Transform21.set_EventSet_translation);
{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Group10.FdChildren.Add(Transform21);
Transform28 := TTransformNode.Create;
Transform28.Translation := Vector3(1,1,0.01);
Shape29 := TShapeNode.Create;
Appearance30 := TAppearanceNode.Create;
Material31 := TMaterialNode.Create;
Material31.DiffuseColor := Vector3(0.2,0.7,0.2);
{ METHOD .SetMaterial }
Appearance30.Material := Material31;
{ METHOD .Appearance }
Shape29.Appearance := Appearance30;
Sphere32 := TSphereNode.Create;
Sphere32.Radius := 0.1;
{ METHOD .Geometry }
Shape29.Geometry := Sphere32;
{ METHOD .FdChildren.Add }
Transform28.FdChildren.Add(Shape29);
PlaneSensor33 := TPlaneSensorNode.Create;
PlaneSensor33.Description := 'Grab to move';
PlaneSensor33.Offset := Vector3(1,1,0.01);
{ METHOD .FdChildren.Add }
Transform28.FdChildren.Add(PlaneSensor33);
{ Original "PS3.EventTranslation_changed TO G3.EventSet_translation }
{ Sample PS3.EventTranslation_changed TO G3.EventSet_translation}
Transform28.AddRoute(PlaneSensor33.EventTranslation_changed, Transform28.set_EventSet_translation);
{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Group10.FdChildren.Add(Transform28);
Transform35 := TTransformNode.Create;
Transform35.Translation := Vector3(-1,1,0.01);
Shape36 := TShapeNode.Create;
Appearance37 := TAppearanceNode.Create;
Material38 := TMaterialNode.Create;
end;

procedure Initx3dconnectorProtoPart2;
begin

Material38.DiffuseColor := Vector3(0.2,0.7,0.2);
{ METHOD .SetMaterial }
Appearance37.Material := Material38;
{ METHOD .Appearance }
Shape36.Appearance := Appearance37;
Sphere39 := TSphereNode.Create;
Sphere39.Radius := 0.1;
{ METHOD .Geometry }
Shape36.Geometry := Sphere39;
{ METHOD .FdChildren.Add }
Transform35.FdChildren.Add(Shape36);
PlaneSensor40 := TPlaneSensorNode.Create;
PlaneSensor40.Description := 'Grab to move';
PlaneSensor40.Offset := Vector3(-1,1,0.01);
{ METHOD .FdChildren.Add }
Transform35.FdChildren.Add(PlaneSensor40);
{ Original "PS4.EventTranslation_changed TO G4.EventSet_translation }
{ Sample PS4.EventTranslation_changed TO G4.EventSet_translation}
Transform35.AddRoute(PlaneSensor40.EventTranslation_changed, Transform35.set_EventSet_translation);
{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Group10.FdChildren.Add(Transform35);
Transform42 := TTransformNode.Create;
Transform43 := TTransformNode.Create;
Shape44 := TShapeNode.Create;
Appearance45 := TAppearanceNode.Create;
Material46 := TMaterialNode.Create;
Material46.DiffuseColor := Vector3(0.2,0.7,0.7);
Material46.Transparency := 0.5;
{ METHOD .SetMaterial }
Appearance45.Material := Material46;
{ METHOD .Appearance }
Shape44.Appearance := Appearance45;
Cylinder47 := TCylinderNode.Create;
Cylinder47.Radius := 0.05;
{ METHOD .Geometry }
Shape44.Geometry := Cylinder47;
{ METHOD .FdChildren.Add }
Transform43.FdChildren.Add(Shape44);
{ METHOD .FdChildren.Add }
Transform42.FdChildren.Add(Transform43);
{ METHOD .FdChildren.Add }
Group10.FdChildren.Add(Transform42);
Transform48 := TTransformNode.Create;
Transform49 := TTransformNode.Create;
Shape50 := TShapeNode.Create;
Appearance51 := TAppearanceNode.Create;
Material52 := TMaterialNode.Create;
Material52.DiffuseColor := Vector3(0.2,0.7,0.7);
Material52.Transparency := 0.5;
{ METHOD .SetMaterial }
Appearance51.Material := Material52;
{ METHOD .Appearance }
Shape50.Appearance := Appearance51;
Cylinder53 := TCylinderNode.Create;
Cylinder53.Radius := 0.05;
{ METHOD .Geometry }
Shape50.Geometry := Cylinder53;
end;

procedure Initx3dconnectorProtoPart3;
begin

{ METHOD .FdChildren.Add }
Transform49.FdChildren.Add(Shape50);
{ METHOD .FdChildren.Add }
Transform48.FdChildren.Add(Transform49);
{ METHOD .FdChildren.Add }
Group10.FdChildren.Add(Transform48);
Transform54 := TTransformNode.Create;
Transform55 := TTransformNode.Create;
Shape56 := TShapeNode.Create;
Appearance57 := TAppearanceNode.Create;
Material58 := TMaterialNode.Create;
Material58.DiffuseColor := Vector3(0.2,0.7,0.7);
Material58.Transparency := 0.5;
{ METHOD .SetMaterial }
Appearance57.Material := Material58;
{ METHOD .Appearance }
Shape56.Appearance := Appearance57;
Cylinder59 := TCylinderNode.Create;
Cylinder59.Radius := 0.05;
{ METHOD .Geometry }
Shape56.Geometry := Cylinder59;
{ METHOD .FdChildren.Add }
Transform55.FdChildren.Add(Shape56);
{ METHOD .FdChildren.Add }
Transform54.FdChildren.Add(Transform55);
{ METHOD .FdChildren.Add }
Group10.FdChildren.Add(Transform54);
X3DPrototype60 := TX3DPrototype.Create;
X3DInterfaceDeclaration61 := TX3DInterfaceDeclaration.Create(nil);
SFNode62 := TSFNode.CreateUndefined(X3DInterfaceDeclaration61, false, 'startnode');
{ METHOD .AddSFNode }
X3DInterfaceDeclaration61.AddSFNode([SFNode62]);
SFNode63 := TSFNode.CreateUndefined(X3DInterfaceDeclaration61, false, 'endnode');
{ METHOD .AddSFNode }
X3DInterfaceDeclaration61.AddSFNode([SFNode63]);
SFNode64 := TSFNode.CreateUndefined(X3DInterfaceDeclaration61, false, 'transnode');
{ METHOD .AddSFNode }
X3DInterfaceDeclaration61.AddSFNode([SFNode64]);
SFNode65 := TSFNode.CreateUndefined(X3DInterfaceDeclaration61, false, 'rotscalenode');
{ METHOD .AddSFNode }
X3DInterfaceDeclaration61.AddSFNode([SFNode65]);
SFVec3f66 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration61, false, 'set_startpoint');
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration61.AddSFVec3f([SFVec3f66]);
SFVec3f67 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration61, false, 'set_endpoint');
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration61.AddSFVec3f([SFVec3f67]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype60.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration61]);
X3DPrototype68 := TX3DPrototype.Create;
Script69 := TScriptNode.Create;
Script69.DirectOutput := True;
SFNode70 := TSFNode.CreateUndefined(Script69, false, 'startnode');
{ METHOD .Fd.AddCustomField }
Script69.AddCustomField(SFNode70);
SFNode71 := TSFNode.CreateUndefined(Script69, false, 'endnode');
{ METHOD .Fd.AddCustomField }
Script69.AddCustomField(SFNode71);
end;

procedure Initx3dconnectorProtoPart4;
begin

SFNode72 := TSFNode.CreateUndefined(Script69, false, 'transnode');
{ METHOD .Fd.AddCustomField }
Script69.AddCustomField(SFNode72);
SFNode73 := TSFNode.CreateUndefined(Script69, false, 'rotscalenode');
{ METHOD .Fd.AddCustomField }
Script69.AddCustomField(SFNode73);
SFVec3f74 := TSFVec3f.CreateUndefined(Script69, false, 'set_startpoint');
{ METHOD .Fd.AddCustomField }
Script69.AddCustomField(SFVec3f74);
SFVec3f75 := TSFVec3f.CreateUndefined(Script69, false, 'set_endpoint');
{ METHOD .Fd.AddCustomField }
Script69.AddCustomField(SFVec3f75);
IS76 := TIS.Create;
connect77 := Tconnect.Create;
connect77.NodeField := 'startnode';
connect77.ProtoField := 'startnode';
{ METHOD .Connect }
IS76.Connect := connect77;
connect78 := Tconnect.Create;
connect78.NodeField := 'endnode';
connect78.ProtoField := 'endnode';
{ METHOD .Connect }
IS76.Connect := connect78;
connect79 := Tconnect.Create;
connect79.NodeField := 'transnode';
connect79.ProtoField := 'transnode';
{ METHOD .Connect }
IS76.Connect := connect79;
connect80 := Tconnect.Create;
connect80.NodeField := 'rotscalenode';
connect80.ProtoField := 'rotscalenode';
{ METHOD .Connect }
IS76.Connect := connect80;
connect81 := Tconnect.Create;
connect81.NodeField := 'set_startpoint';
connect81.ProtoField := 'set_startpoint';
{ METHOD .Connect }
IS76.Connect := connect81;
connect82 := Tconnect.Create;
connect82.NodeField := 'set_endpoint';
connect82.ProtoField := 'set_endpoint';
{ METHOD .Connect }
IS76.Connect := connect82;
{ METHOD .Fd.AddCustomField }
Script69.AddCustomField(IS76);

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
{ METHOD .AddScript }
X3DPrototype68.AddScript([Script69]);
{ METHOD .AddX3DPrototype }
X3DPrototype60.AddX3DPrototype([X3DPrototype68]);
{ METHOD .AddX3DPrototype }
Group10.AddX3DPrototype([X3DPrototype60]);
X3DPrototype83 := TX3DPrototypeNode.Create;
SFNode84 := TSFNode.CreateUndefined(X3DPrototype83, false, 'startnode');
{ METHOD .Fd.Value }
SFNode84.Value := Transform14;
{ METHOD .AddSFNode }
X3DPrototype83.AddSFNode([SFNode84]);
SFNode86 := TSFNode.CreateUndefined(X3DPrototype83, false, 'endnode');
{ METHOD .Fd.Value }
SFNode86.Value := Transform21;
{ METHOD .AddSFNode }
X3DPrototype83.AddSFNode([SFNode86]);
SFNode88 := TSFNode.CreateUndefined(X3DPrototype83, false, 'transnode');
{ METHOD .Fd.Value }
SFNode88.Value := Transform42;
{ METHOD .AddSFNode }
X3DPrototype83.AddSFNode([SFNode88]);
SFNode90 := TSFNode.CreateUndefined(X3DPrototype83, false, 'rotscalenode');
{ METHOD .Fd.Value }
SFNode90.Value := Transform43;
{ METHOD .AddSFNode }
X3DPrototype83.AddSFNode([SFNode90]);
{ METHOD .AddX3DPrototype }
Group10.AddX3DPrototype([X3DPrototype83]);
X3DPrototype92 := TX3DPrototypeNode.Create;
SFNode93 := TSFNode.CreateUndefined(X3DPrototype92, false, 'startnode');
{ METHOD .Fd.Value }
SFNode93.Value := Transform14;
{ METHOD .AddSFNode }
X3DPrototype92.AddSFNode([SFNode93]);
SFNode95 := TSFNode.CreateUndefined(X3DPrototype92, false, 'endnode');
{ METHOD .Fd.Value }
SFNode95.Value := Transform28;
{ METHOD .AddSFNode }
X3DPrototype92.AddSFNode([SFNode95]);
SFNode97 := TSFNode.CreateUndefined(X3DPrototype92, false, 'transnode');
{ METHOD .Fd.Value }
SFNode97.Value := Transform48;
{ METHOD .AddSFNode }
X3DPrototype92.AddSFNode([SFNode97]);
SFNode99 := TSFNode.CreateUndefined(X3DPrototype92, false, 'rotscalenode');
{ METHOD .Fd.Value }
SFNode99.Value := Transform49;
{ METHOD .AddSFNode }
X3DPrototype92.AddSFNode([SFNode99]);
{ METHOD .AddX3DPrototype }
Group10.AddX3DPrototype([X3DPrototype92]);
X3DPrototype101 := TX3DPrototypeNode.Create;
SFNode102 := TSFNode.CreateUndefined(X3DPrototype101, false, 'startnode');
{ METHOD .Fd.Value }
SFNode102.Value := Transform14;
{ METHOD .AddSFNode }
X3DPrototype101.AddSFNode([SFNode102]);
SFNode104 := TSFNode.CreateUndefined(X3DPrototype101, false, 'endnode');
{ METHOD .Fd.Value }
SFNode104.Value := Transform35;
{ METHOD .AddSFNode }
X3DPrototype101.AddSFNode([SFNode104]);
SFNode106 := TSFNode.CreateUndefined(X3DPrototype101, false, 'transnode');
{ METHOD .Fd.Value }
SFNode106.Value := Transform54;
{ METHOD .AddSFNode }
X3DPrototype101.AddSFNode([SFNode106]);
SFNode108 := TSFNode.CreateUndefined(X3DPrototype101, false, 'rotscalenode');
{ METHOD .Fd.Value }
SFNode108.Value := Transform55;
{ METHOD .AddSFNode }
X3DPrototype101.AddSFNode([SFNode108]);
{ METHOD .AddX3DPrototype }
Group10.AddX3DPrototype([X3DPrototype101]);
{ Original "G1.EventTranslation_changed TO connector1.EventSet_startpoint }
{ Sample G1.EventTranslation_changed TO connector1.EventSet_startpoint}
Group10.AddRoute(Transform14.EventTranslation_changed, X3DPrototype83.set_EventSet_startpoint);
{ METHOD .AddX3DROUTE }
{ Original "G2.EventTranslation_changed TO connector1.EventSet_endpoint }
{ Sample G2.EventTranslation_changed TO connector1.EventSet_endpoint}
Group10.AddRoute(Transform21.EventTranslation_changed, X3DPrototype83.set_EventSet_endpoint);
{ METHOD .AddX3DROUTE }
{ Original "G1.EventTranslation_changed TO connector2.EventSet_startpoint }
{ Sample G1.EventTranslation_changed TO connector2.EventSet_startpoint}
Group10.AddRoute(Transform14.EventTranslation_changed, X3DPrototype92.set_EventSet_startpoint);
{ METHOD .AddX3DROUTE }
{ Original "G3.EventTranslation_changed TO connector2.EventSet_endpoint }
{ Sample G3.EventTranslation_changed TO connector2.EventSet_endpoint}
Group10.AddRoute(Transform28.EventTranslation_changed, X3DPrototype92.set_EventSet_endpoint);
{ METHOD .AddX3DROUTE }
{ Original "G1.EventTranslation_changed TO connector3.EventSet_startpoint }
{ Sample G1.EventTranslation_changed TO connector3.EventSet_startpoint}
Group10.AddRoute(Transform14.EventTranslation_changed, X3DPrototype101.set_EventSet_startpoint);
{ METHOD .AddX3DROUTE }
{ Original "G4.EventTranslation_changed TO connector3.EventSet_endpoint }
{ Sample G4.EventTranslation_changed TO connector3.EventSet_endpoint}
Group10.AddRoute(Transform35.EventTranslation_changed, X3DPrototype101.set_EventSet_endpoint);
{ METHOD .AddX3DROUTE }
{ METHOD .AddGroup }
X3D0.AddChildren([Group10]);
end;

function Createx3dconnectorProto: TX3DRootNode;
begin
Initx3dconnectorProtoPart0;
Initx3dconnectorProtoPart1;
Initx3dconnectorProtoPart2;
Initx3dconnectorProtoPart3;
Initx3dconnectorProtoPart4;
Result := X3D0;
end;

begin
end.

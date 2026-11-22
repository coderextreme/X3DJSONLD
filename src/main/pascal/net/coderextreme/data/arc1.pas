unit arc1;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function Createarc1: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group7: TGroupNode;
Viewpoint8: TViewpointNode;
Background9: TBackgroundNode;
X3DPrototype10: TX3DPrototype;
X3DInterfaceDeclaration11: TX3DInterfaceDeclaration;
SFVec3f12: TSFVec3f;
X3DPrototype13: TX3DPrototype;
Transform14: TTransformNode;
IS15: TIS;
connect16: Tconnect;
Shape17: TShapeNode;
Sphere18: TSphereNode;
Appearance19: TAppearanceNode;
Material20: TMaterialNode;
PositionInterpolator21: TPositionInterpolatorNode;
Script22: TScriptNode;
SFVec3f23: TSFVec3f;
SFVec3f24: TSFVec3f;
SFTime25: TSFTime;
MFVec3f26: TMFVec3f;
TimeSensor27: TTimeSensorNode;
Transform33: TTransformNode;
X3DPrototype34: TX3DPrototypeNode;
Transform35: TTransformNode;
X3DPrototype36: TX3DPrototypeNode;
Transform37: TTransformNode;
Transform38: TTransformNode;
Shape39: TShapeNode;
Appearance40: TAppearanceNode;
Material41: TMaterialNode;
Cylinder42: TCylinderNode;
X3DPrototype43: TX3DPrototype;
X3DInterfaceDeclaration44: TX3DInterfaceDeclaration;
SFNode45: TSFNode;
SFNode46: TSFNode;
SFNode47: TSFNode;
SFNode48: TSFNode;
SFVec3f49: TSFVec3f;
SFVec3f50: TSFVec3f;
X3DPrototype51: TX3DPrototype;
Script52: TScriptNode;
SFNode53: TSFNode;
SFNode54: TSFNode;
SFNode55: TSFNode;
SFNode56: TSFNode;
SFVec3f57: TSFVec3f;
SFVec3f58: TSFVec3f;
IS59: TIS;
connect60: Tconnect;
connect61: Tconnect;
connect62: Tconnect;
connect63: Tconnect;
connect64: Tconnect;
connect65: Tconnect;
X3DPrototype66: TX3DPrototypeNode;
SFNode67: TSFNode;
Transform68: TTransformNode;
SFNode69: TSFNode;
Transform70: TTransformNode;
SFNode71: TSFNode;
Transform72: TTransformNode;
SFNode73: TSFNode;
Transform74: TTransformNode;
SFVec3f75: TSFVec3f;
SFVec3f76: TSFVec3f;

procedure Initarc1Part0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'arc1.x3d';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'Lost, Doug Sanden I think';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'manual';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/arc1.x3d';
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
X3DPrototype10 := TX3DPrototype.Create;
X3DInterfaceDeclaration11 := TX3DInterfaceDeclaration.Create(nil);
SFVec3f12 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration11, false, 'translation');
SFVec3f12.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration11.AddSFVec3f([SFVec3f12]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype10.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration11]);
X3DPrototype13 := TX3DPrototype.Create;
Transform14 := TTransformNode.Create;
IS15 := TIS.Create;
connect16 := Tconnect.Create;
connect16.NodeField := 'translation';
connect16.ProtoField := 'translation';
{ METHOD .Connect }
IS15.Connect := connect16;
{ METHOD .IS }
Transform14.IS := IS15;
Shape17 := TShapeNode.Create;
Sphere18 := TSphereNode.Create;
Sphere18.Radius := 0.1;
{ METHOD .Geometry }
Shape17.Geometry := Sphere18;
Appearance19 := TAppearanceNode.Create;
Material20 := TMaterialNode.Create;
Material20.DiffuseColor := Vector3(1,0,0);
{ METHOD .SetMaterial }
Appearance19.Material := Material20;
{ METHOD .Appearance }
Shape17.Appearance := Appearance19;
end;

procedure Initarc1Part1;
begin

{ METHOD .FdChildren.Add }
Transform14.FdChildren.Add(Shape17);
PositionInterpolator21 := TPositionInterpolatorNode.Create;
PositionInterpolator21.SetKey([0,1]);
PositionInterpolator21.SetKeyValue([Vector3(0,0,0),Vector3(0,5,0)]);
{ METHOD .FdChildren.Add }
Transform14.FdChildren.Add(PositionInterpolator21);
Script22 := TScriptNode.Create;
SFVec3f23 := TSFVec3f.CreateUndefined(Script22, false, 'translation');
SFVec3f23.Value := '50 50 0';
{ METHOD .Fd.AddCustomField }
Script22.AddCustomField(SFVec3f23);
SFVec3f24 := TSFVec3f.CreateUndefined(Script22, false, 'old');
SFVec3f24.Value := '0 0 0';
{ METHOD .Fd.AddCustomField }
Script22.AddCustomField(SFVec3f24);
SFTime25 := TSFTime.CreateUndefined(Script22, false, 'set_location');
{ METHOD .Fd.AddCustomField }
Script22.AddCustomField(SFTime25);
MFVec3f26 := TMFVec3f.CreateUndefined(Script22, false, 'keyValue');
MFVec3f26.Value := '0 0 0 0 5 0';
{ METHOD .Fd.AddCustomField }
Script22.AddCustomField(MFVec3f26);

Script22.SetSourceCode('''ecmascript:\n"+
"               function set_location(value) {\n"+
"                    old = translation;\n"+
"                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"               }''');
{ METHOD .FdChildren.Add }
Transform14.FdChildren.Add(Script22);
TimeSensor27 := TTimeSensorNode.Create;
TimeSensor27.CycleInterval := 3;
TimeSensor27.Loop := True;
{ METHOD .FdChildren.Add }
Transform14.FdChildren.Add(TimeSensor27);
{ Original "CL1.EventCycleTime TO MB1.EventSet_location }
{ Sample CL1.EventCycleTime TO MB1.EventSet_location}
Transform14.AddRoute(TimeSensor27.EventCycleTime, Script22.EventSet_location);
{ METHOD .AddX3DROUTE }
{ Original "CL1.EventFraction_changed TO PI1.EventSet_fraction }
{ Sample CL1.EventFraction_changed TO PI1.EventSet_fraction}
Transform14.AddRoute(TimeSensor27.EventFraction_changed, PositionInterpolator21.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "MB1.EventKeyValue TO PI1.keyValue }
{ Sample MB1.EventKeyValue TO PI1.keyValue}
Transform14.AddRoute(Script22.EventKeyValue, PositionInterpolator21.keyValue);
{ METHOD .AddX3DROUTE }
{ Original "PI1.EventValue_changed TO node.FdTranslation.EventIn }
{ Sample PI1.EventValue_changed TO node.FdTranslation.EventIn}
Transform14.AddRoute(PositionInterpolator21.EventValue_changed, Transform14.FdTranslation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "MB1.EventTranslation_changed TO node.FdTranslation.EventIn }
{ Sample MB1.EventTranslation_changed TO node.FdTranslation.EventIn}
Transform14.AddRoute(Script22.EventTranslation_changed, Transform14.FdTranslation.EventIn);
{ METHOD .AddX3DROUTE }
{ METHOD .AddTransform }
X3DPrototype13.AddTransform([Transform14]);
{ METHOD .AddX3DPrototype }
X3DPrototype10.AddX3DPrototype([X3DPrototype13]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype10]);
Transform33 := TTransformNode.Create;
X3DPrototype34 := TX3DPrototypeNode.Create;
{ METHOD .AddX3DPrototype }
Transform33.AddX3DPrototype([X3DPrototype34]);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Transform33);
Transform35 := TTransformNode.Create;
X3DPrototype36 := TX3DPrototypeNode.Create;
{ METHOD .AddX3DPrototype }
Transform35.AddX3DPrototype([X3DPrototype36]);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Transform35);
Transform37 := TTransformNode.Create;
Transform38 := TTransformNode.Create;
Shape39 := TShapeNode.Create;
Appearance40 := TAppearanceNode.Create;
Material41 := TMaterialNode.Create;
Material41.DiffuseColor := Vector3(0.2,0.7,0.7);
Material41.Transparency := 0.5;
{ METHOD .SetMaterial }
Appearance40.Material := Material41;
{ METHOD .Appearance }
Shape39.Appearance := Appearance40;
Cylinder42 := TCylinderNode.Create;
Cylinder42.Radius := 0.05;
{ METHOD .Geometry }
Shape39.Geometry := Cylinder42;
{ METHOD .FdChildren.Add }
Transform38.FdChildren.Add(Shape39);
{ METHOD .FdChildren.Add }
Transform37.FdChildren.Add(Transform38);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Transform37);
X3DPrototype43 := TX3DPrototype.Create;
X3DInterfaceDeclaration44 := TX3DInterfaceDeclaration.Create(nil);
SFNode45 := TSFNode.CreateUndefined(X3DInterfaceDeclaration44, false, 'startnode');
{ METHOD .AddSFNode }
X3DInterfaceDeclaration44.AddSFNode([SFNode45]);
SFNode46 := TSFNode.CreateUndefined(X3DInterfaceDeclaration44, false, 'endnode');
{ METHOD .AddSFNode }
X3DInterfaceDeclaration44.AddSFNode([SFNode46]);
SFNode47 := TSFNode.CreateUndefined(X3DInterfaceDeclaration44, false, 'transnode');
{ METHOD .AddSFNode }
X3DInterfaceDeclaration44.AddSFNode([SFNode47]);
SFNode48 := TSFNode.CreateUndefined(X3DInterfaceDeclaration44, false, 'rotscalenode');
{ METHOD .AddSFNode }
X3DInterfaceDeclaration44.AddSFNode([SFNode48]);
SFVec3f49 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration44, false, 'set_startpoint');
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration44.AddSFVec3f([SFVec3f49]);
SFVec3f50 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration44, false, 'set_endpoint');
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration44.AddSFVec3f([SFVec3f50]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype43.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration44]);
X3DPrototype51 := TX3DPrototype.Create;
Script52 := TScriptNode.Create;
SFNode53 := TSFNode.CreateUndefined(Script52, false, 'startnode');
{ METHOD .Fd.AddCustomField }
Script52.AddCustomField(SFNode53);
SFNode54 := TSFNode.CreateUndefined(Script52, false, 'endnode');
{ METHOD .Fd.AddCustomField }
Script52.AddCustomField(SFNode54);
SFNode55 := TSFNode.CreateUndefined(Script52, false, 'transnode');
{ METHOD .Fd.AddCustomField }
Script52.AddCustomField(SFNode55);
SFNode56 := TSFNode.CreateUndefined(Script52, false, 'rotscalenode');
{ METHOD .Fd.AddCustomField }
Script52.AddCustomField(SFNode56);
SFVec3f57 := TSFVec3f.CreateUndefined(Script52, false, 'set_startpoint');
{ METHOD .Fd.AddCustomField }
Script52.AddCustomField(SFVec3f57);
SFVec3f58 := TSFVec3f.CreateUndefined(Script52, false, 'set_endpoint');
{ METHOD .Fd.AddCustomField }
Script52.AddCustomField(SFVec3f58);
IS59 := TIS.Create;
connect60 := Tconnect.Create;
connect60.NodeField := 'startnode';
connect60.ProtoField := 'startnode';
{ METHOD .Connect }
IS59.Connect := connect60;
connect61 := Tconnect.Create;
connect61.NodeField := 'endnode';
connect61.ProtoField := 'endnode';
{ METHOD .Connect }
IS59.Connect := connect61;
connect62 := Tconnect.Create;
connect62.NodeField := 'transnode';
connect62.ProtoField := 'transnode';
{ METHOD .Connect }
IS59.Connect := connect62;
connect63 := Tconnect.Create;
connect63.NodeField := 'rotscalenode';
connect63.ProtoField := 'rotscalenode';
{ METHOD .Connect }
IS59.Connect := connect63;
connect64 := Tconnect.Create;
connect64.NodeField := 'set_startpoint';
connect64.ProtoField := 'set_startpoint';
{ METHOD .Connect }
IS59.Connect := connect64;
connect65 := Tconnect.Create;
connect65.NodeField := 'set_endpoint';
connect65.ProtoField := 'set_endpoint';
{ METHOD .Connect }
IS59.Connect := connect65;
{ METHOD .Fd.AddCustomField }
Script52.AddCustomField(IS59);

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
X3DPrototype51.AddScript([Script52]);
{ METHOD .AddX3DPrototype }
X3DPrototype43.AddX3DPrototype([X3DPrototype51]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype43]);
X3DPrototype66 := TX3DPrototypeNode.Create;
SFNode67 := TSFNode.CreateUndefined(X3DPrototype66, false, 'startnode');
{ METHOD .Fd.Value }
SFNode67.Value := Transform33;
{ METHOD .AddSFNode }
X3DPrototype66.AddSFNode([SFNode67]);
SFNode69 := TSFNode.CreateUndefined(X3DPrototype66, false, 'endnode');
{ METHOD .Fd.Value }
SFNode69.Value := Transform35;
{ METHOD .AddSFNode }
X3DPrototype66.AddSFNode([SFNode69]);
SFNode71 := TSFNode.CreateUndefined(X3DPrototype66, false, 'transnode');
{ METHOD .Fd.Value }
SFNode71.Value := Transform37;
{ METHOD .AddSFNode }
X3DPrototype66.AddSFNode([SFNode71]);
SFNode73 := TSFNode.CreateUndefined(X3DPrototype66, false, 'rotscalenode');
{ METHOD .Fd.Value }
SFNode73.Value := Transform38;
{ METHOD .AddSFNode }
X3DPrototype66.AddSFNode([SFNode73]);
SFVec3f75 := TSFVec3f.CreateUndefined(X3DPrototype66, false, 'set_startpoint');
{ METHOD .AddSFVec3f }
X3DPrototype66.AddSFVec3f([SFVec3f75]);
SFVec3f76 := TSFVec3f.CreateUndefined(X3DPrototype66, false, 'set_endpoint');
{ METHOD .AddSFVec3f }
X3DPrototype66.AddSFVec3f([SFVec3f76]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype66]);
{ Original "G1.EventTranslation_changed TO connector1.EventSet_startpoint }
{ Sample G1.EventTranslation_changed TO connector1.EventSet_startpoint}
Group7.AddRoute(Transform33.EventTranslation_changed, X3DPrototype66.EventSet_startpoint);
{ METHOD .AddX3DROUTE }
{ Original "G2.EventTranslation_changed TO connector1.EventSet_endpoint }
{ Sample G2.EventTranslation_changed TO connector1.EventSet_endpoint}
Group7.AddRoute(Transform35.EventTranslation_changed, X3DPrototype66.EventSet_endpoint);
{ METHOD .AddX3DROUTE }
{ METHOD .AddGroup }
X3D0.AddChildren([Group7]);
end;

function Createarc1: TX3DRootNode;
begin
Initarc1Part0;
Initarc1Part1;
Result := X3D0;
end;

begin
end.

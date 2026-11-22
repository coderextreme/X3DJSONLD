unit arcold;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function Createarcold: TX3DRootNode;

implementation

uses CastleVectors;

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
SFVec3f30: TSFVec3f;
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
SFVec3f41: TSFVec3f;
SFVec3f42: TSFVec3f;
SFTime43: TSFTime;
MFVec3f44: TMFVec3f;
TimeSensor45: TTimeSensorNode;
X3DPrototype50: TX3DPrototype;
X3DInterfaceDeclaration51: TX3DInterfaceDeclaration;
SFNode52: TSFNode;
SFNode53: TSFNode;
SFNode54: TSFNode;
SFNode55: TSFNode;
SFVec3f56: TSFVec3f;
SFVec3f57: TSFVec3f;
X3DPrototype58: TX3DPrototype;
Script59: TScriptNode;
SFNode60: TSFNode;
SFNode61: TSFNode;
SFNode62: TSFNode;
SFNode63: TSFNode;
SFVec3f64: TSFVec3f;
SFVec3f65: TSFVec3f;
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

procedure InitarcoldPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'arcold.x3d';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'John Carlson';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'manual';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/arc.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'an attempt to implement an arc in a graph';
{ METHOD .Meta }
{ METHOD .Head }
Group7 := TGroupNode.Create;
Viewpoint8 := TViewpointNode.Create;
Viewpoint8.Position := Vector3(0,0,5);
Viewpoint8.Description := 'a moving graph';
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Viewpoint8);
Background9 := TBackgroundNode.Create;
Background9.SetSkyColor([Vector3(0.4,0.4,0.4)]);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Background9);
Transform10 := TTransformNode.Create;
Transform11 := TTransformNode.Create;
Shape12 := TShapeNode.Create;
Appearance13 := TAppearanceNode.Create;
Material14 := TMaterialNode.Create;
Material14.DiffuseColor := Vector3(0.2,0.7,0.7);
{ METHOD .SetMaterial }
Appearance13.Material := Material14;
{ METHOD .Appearance }
Shape12.Appearance := Appearance13;
Cylinder15 := TCylinderNode.Create;
Cylinder15.Radius := 0.1;
{ METHOD .Geometry }
Shape12.Geometry := Cylinder15;
{ METHOD .FdChildren.Add }
Transform11.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
Transform10.FdChildren.Add(Transform11);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Transform10);
Transform16 := TTransformNode.Create;
Transform17 := TTransformNode.Create;
Shape18 := TShapeNode.Create;
Appearance19 := TAppearanceNode.Create;
Material20 := TMaterialNode.Create;
Material20.DiffuseColor := Vector3(0.2,0.7,0.7);
{ METHOD .SetMaterial }
Appearance19.Material := Material20;
{ METHOD .Appearance }
Shape18.Appearance := Appearance19;
Cylinder21 := TCylinderNode.Create;
end;

procedure InitarcoldPart1;
begin

Cylinder21.Radius := 0.1;
{ METHOD .Geometry }
Shape18.Geometry := Cylinder21;
{ METHOD .FdChildren.Add }
Transform17.FdChildren.Add(Shape18);
{ METHOD .FdChildren.Add }
Transform16.FdChildren.Add(Transform17);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Transform16);
Transform22 := TTransformNode.Create;
Transform23 := TTransformNode.Create;
Shape24 := TShapeNode.Create;
Appearance25 := TAppearanceNode.Create;
Material26 := TMaterialNode.Create;
Material26.DiffuseColor := Vector3(0.2,0.7,0.7);
{ METHOD .SetMaterial }
Appearance25.Material := Material26;
{ METHOD .Appearance }
Shape24.Appearance := Appearance25;
Cylinder27 := TCylinderNode.Create;
Cylinder27.Radius := 0.1;
{ METHOD .Geometry }
Shape24.Geometry := Cylinder27;
{ METHOD .FdChildren.Add }
Transform23.FdChildren.Add(Shape24);
{ METHOD .FdChildren.Add }
Transform22.FdChildren.Add(Transform23);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Transform22);
X3DPrototype28 := TX3DPrototype.Create;
X3DInterfaceDeclaration29 := TX3DInterfaceDeclaration.Create(nil);
SFVec3f30 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration29, false, 'translation');
SFVec3f30.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration29.AddSFVec3f([SFVec3f30]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype28.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration29]);
X3DPrototype31 := TX3DPrototype.Create;
Transform32 := TTransformNode.Create;
IS33 := TIS.Create;
connect34 := Tconnect.Create;
connect34.NodeField := 'translation';
connect34.ProtoField := 'translation';
{ METHOD .Connect }
IS33.Connect := connect34;
{ METHOD .IS }
Transform32.IS := IS33;
Shape35 := TShapeNode.Create;
Sphere36 := TSphereNode.Create;
Sphere36.Radius := 0.1;
{ METHOD .Geometry }
Shape35.Geometry := Sphere36;
Appearance37 := TAppearanceNode.Create;
Material38 := TMaterialNode.Create;
Material38.DiffuseColor := Vector3(1,0,0);
end;

procedure InitarcoldPart2;
begin

{ METHOD .SetMaterial }
Appearance37.Material := Material38;
{ METHOD .Appearance }
Shape35.Appearance := Appearance37;
{ METHOD .FdChildren.Add }
Transform32.FdChildren.Add(Shape35);
PositionInterpolator39 := TPositionInterpolatorNode.Create;
PositionInterpolator39.SetKey([0,1]);
PositionInterpolator39.SetKeyValue([Vector3(0,0,0),Vector3(0,5,0)]);
{ METHOD .FdChildren.Add }
Transform32.FdChildren.Add(PositionInterpolator39);
Script40 := TScriptNode.Create;
SFVec3f41 := TSFVec3f.CreateUndefined(Script40, false, 'translation');
SFVec3f41.Value := '50 50 0';
{ METHOD .Fd.AddCustomField }
Script40.AddCustomField(SFVec3f41);
SFVec3f42 := TSFVec3f.CreateUndefined(Script40, false, 'old');
SFVec3f42.Value := '0 0 0';
{ METHOD .Fd.AddCustomField }
Script40.AddCustomField(SFVec3f42);
SFTime43 := TSFTime.CreateUndefined(Script40, false, 'set_location');
{ METHOD .Fd.AddCustomField }
Script40.AddCustomField(SFTime43);
MFVec3f44 := TMFVec3f.CreateUndefined(Script40, false, 'keyValue');
{ METHOD .Fd.AddCustomField }
Script40.AddCustomField(MFVec3f44);

Script40.SetSourceCode('''ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(translation);\n"+
"		}''');
{ METHOD .FdChildren.Add }
Transform32.FdChildren.Add(Script40);
TimeSensor45 := TTimeSensorNode.Create;
TimeSensor45.CycleInterval := 3;
TimeSensor45.Loop := True;
{ METHOD .FdChildren.Add }
Transform32.FdChildren.Add(TimeSensor45);
{ Original "CL1.EventCycleTime TO MB1.EventSet_location }
{ Sample CL1.EventCycleTime TO MB1.EventSet_location}
Transform32.AddRoute(TimeSensor45.EventCycleTime, Script40.EventSet_location);
{ METHOD .AddX3DROUTE }
{ Original "CL1.EventFraction_changed TO PI1.EventSet_fraction }
{ Sample CL1.EventFraction_changed TO PI1.EventSet_fraction}
Transform32.AddRoute(TimeSensor45.EventFraction_changed, PositionInterpolator39.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "MB1.EventKeyValue TO PI1.keyValue }
{ Sample MB1.EventKeyValue TO PI1.keyValue}
Transform32.AddRoute(Script40.EventKeyValue, PositionInterpolator39.keyValue);
{ METHOD .AddX3DROUTE }
{ Original "PI1.EventValue_changed TO node.FdTranslation.EventIn }
{ Sample PI1.EventValue_changed TO node.FdTranslation.EventIn}
Transform32.AddRoute(PositionInterpolator39.EventValue_changed, Transform32.FdTranslation.EventIn);
{ METHOD .AddX3DROUTE }
{ METHOD .AddTransform }
X3DPrototype31.AddTransform([Transform32]);
{ METHOD .AddX3DPrototype }
X3DPrototype28.AddX3DPrototype([X3DPrototype31]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype28]);
{ from doug sanden }
X3DPrototype50 := TX3DPrototype.Create;
X3DInterfaceDeclaration51 := TX3DInterfaceDeclaration.Create(nil);
SFNode52 := TSFNode.CreateUndefined(X3DInterfaceDeclaration51, false, 'startnode');
{ METHOD .AddSFNode }
X3DInterfaceDeclaration51.AddSFNode([SFNode52]);
SFNode53 := TSFNode.CreateUndefined(X3DInterfaceDeclaration51, false, 'endnode');
{ METHOD .AddSFNode }
X3DInterfaceDeclaration51.AddSFNode([SFNode53]);
SFNode54 := TSFNode.CreateUndefined(X3DInterfaceDeclaration51, false, 'transnode');
{ METHOD .AddSFNode }
X3DInterfaceDeclaration51.AddSFNode([SFNode54]);
SFNode55 := TSFNode.CreateUndefined(X3DInterfaceDeclaration51, false, 'rotscalenode');
{ METHOD .AddSFNode }
X3DInterfaceDeclaration51.AddSFNode([SFNode55]);
SFVec3f56 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration51, false, 'set_startpoint');
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration51.AddSFVec3f([SFVec3f56]);
SFVec3f57 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration51, false, 'set_endpoint');
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration51.AddSFVec3f([SFVec3f57]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype50.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration51]);
X3DPrototype58 := TX3DPrototype.Create;
Script59 := TScriptNode.Create;
SFNode60 := TSFNode.CreateUndefined(Script59, false, 'startnode');
{ METHOD .Fd.AddCustomField }
Script59.AddCustomField(SFNode60);
SFNode61 := TSFNode.CreateUndefined(Script59, false, 'endnode');
{ METHOD .Fd.AddCustomField }
Script59.AddCustomField(SFNode61);
SFNode62 := TSFNode.CreateUndefined(Script59, false, 'transnode');
{ METHOD .Fd.AddCustomField }
Script59.AddCustomField(SFNode62);
SFNode63 := TSFNode.CreateUndefined(Script59, false, 'rotscalenode');
{ METHOD .Fd.AddCustomField }
Script59.AddCustomField(SFNode63);
SFVec3f64 := TSFVec3f.CreateUndefined(Script59, false, 'set_startpoint');
{ METHOD .Fd.AddCustomField }
Script59.AddCustomField(SFVec3f64);
SFVec3f65 := TSFVec3f.CreateUndefined(Script59, false, 'set_endpoint');
{ METHOD .Fd.AddCustomField }
Script59.AddCustomField(SFVec3f65);
IS66 := TIS.Create;
connect67 := Tconnect.Create;
connect67.NodeField := 'startnode';
connect67.ProtoField := 'startnode';
{ METHOD .Connect }
IS66.Connect := connect67;
connect68 := Tconnect.Create;
connect68.NodeField := 'endnode';
connect68.ProtoField := 'endnode';
{ METHOD .Connect }
IS66.Connect := connect68;
connect69 := Tconnect.Create;
connect69.NodeField := 'transnode';
connect69.ProtoField := 'transnode';
{ METHOD .Connect }
IS66.Connect := connect69;
connect70 := Tconnect.Create;
connect70.NodeField := 'rotscalenode';
connect70.ProtoField := 'rotscalenode';
{ METHOD .Connect }
IS66.Connect := connect70;
connect71 := Tconnect.Create;
connect71.NodeField := 'set_startpoint';
connect71.ProtoField := 'set_startpoint';
{ METHOD .Connect }
IS66.Connect := connect71;
connect72 := Tconnect.Create;
connect72.NodeField := 'set_endpoint';
connect72.ProtoField := 'set_endpoint';
{ METHOD .Connect }
IS66.Connect := connect72;
{ METHOD .Fd.AddCustomField }
Script59.AddCustomField(IS66);

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
{ METHOD .AddScript }
X3DPrototype58.AddScript([Script59]);
{ METHOD .AddX3DPrototype }
X3DPrototype50.AddX3DPrototype([X3DPrototype58]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype50]);
X3DPrototype73 := TX3DPrototypeNode.Create;
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype73]);
X3DPrototype74 := TX3DPrototypeNode.Create;
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype74]);
X3DPrototype75 := TX3DPrototypeNode.Create;
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype75]);
X3DPrototype76 := TX3DPrototypeNode.Create;
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype76]);
X3DPrototype77 := TX3DPrototypeNode.Create;
SFNode78 := TSFNode.CreateUndefined(X3DPrototype77, false, 'startnode');
{ METHOD .AddX3DPrototype }
SFNode78.AddX3DPrototype([X3DPrototype73]);
{ METHOD .AddSFNode }
X3DPrototype77.AddSFNode([SFNode78]);
SFNode80 := TSFNode.CreateUndefined(X3DPrototype77, false, 'endnode');
{ METHOD .AddX3DPrototype }
SFNode80.AddX3DPrototype([X3DPrototype74]);
{ METHOD .AddSFNode }
X3DPrototype77.AddSFNode([SFNode80]);
SFNode82 := TSFNode.CreateUndefined(X3DPrototype77, false, 'transnode');
{ METHOD .Fd.Value }
SFNode82.Value := Transform10;
{ METHOD .AddSFNode }
X3DPrototype77.AddSFNode([SFNode82]);
SFNode84 := TSFNode.CreateUndefined(X3DPrototype77, false, 'rotscalenode');
{ METHOD .Fd.Value }
SFNode84.Value := Transform11;
{ METHOD .AddSFNode }
X3DPrototype77.AddSFNode([SFNode84]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype77]);
X3DPrototype86 := TX3DPrototypeNode.Create;
SFNode87 := TSFNode.CreateUndefined(X3DPrototype86, false, 'startnode');
{ METHOD .AddX3DPrototype }
SFNode87.AddX3DPrototype([X3DPrototype73]);
{ METHOD .AddSFNode }
X3DPrototype86.AddSFNode([SFNode87]);
SFNode89 := TSFNode.CreateUndefined(X3DPrototype86, false, 'endnode');
{ METHOD .AddX3DPrototype }
SFNode89.AddX3DPrototype([X3DPrototype75]);
{ METHOD .AddSFNode }
X3DPrototype86.AddSFNode([SFNode89]);
SFNode91 := TSFNode.CreateUndefined(X3DPrototype86, false, 'transnode');
{ METHOD .Fd.Value }
SFNode91.Value := Transform16;
{ METHOD .AddSFNode }
X3DPrototype86.AddSFNode([SFNode91]);
SFNode93 := TSFNode.CreateUndefined(X3DPrototype86, false, 'rotscalenode');
{ METHOD .Fd.Value }
SFNode93.Value := Transform17;
{ METHOD .AddSFNode }
X3DPrototype86.AddSFNode([SFNode93]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype86]);
X3DPrototype95 := TX3DPrototypeNode.Create;
SFNode96 := TSFNode.CreateUndefined(X3DPrototype95, false, 'startnode');
{ METHOD .AddX3DPrototype }
SFNode96.AddX3DPrototype([X3DPrototype73]);
{ METHOD .AddSFNode }
X3DPrototype95.AddSFNode([SFNode96]);
SFNode98 := TSFNode.CreateUndefined(X3DPrototype95, false, 'endnode');
{ METHOD .AddX3DPrototype }
SFNode98.AddX3DPrototype([X3DPrototype76]);
{ METHOD .AddSFNode }
X3DPrototype95.AddSFNode([SFNode98]);
SFNode100 := TSFNode.CreateUndefined(X3DPrototype95, false, 'transnode');
{ METHOD .Fd.Value }
SFNode100.Value := Transform22;
{ METHOD .AddSFNode }
X3DPrototype95.AddSFNode([SFNode100]);
SFNode102 := TSFNode.CreateUndefined(X3DPrototype95, false, 'rotscalenode');
{ METHOD .Fd.Value }
SFNode102.Value := Transform23;
{ METHOD .AddSFNode }
X3DPrototype95.AddSFNode([SFNode102]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype95]);
{ Original "G1.EventTranslation_changed TO connector1.EventSet_startpoint }
{ Sample G1.EventTranslation_changed TO connector1.EventSet_startpoint}
Group7.AddRoute(X3DPrototype73.EventTranslation_changed, X3DPrototype77.EventSet_startpoint);
{ METHOD .AddX3DROUTE }
{ Original "G2.EventTranslation_changed TO connector1.EventSet_endpoint }
{ Sample G2.EventTranslation_changed TO connector1.EventSet_endpoint}
Group7.AddRoute(X3DPrototype74.EventTranslation_changed, X3DPrototype77.EventSet_endpoint);
{ METHOD .AddX3DROUTE }
{ Original "G1.EventTranslation_changed TO connector2.EventSet_startpoint }
{ Sample G1.EventTranslation_changed TO connector2.EventSet_startpoint}
Group7.AddRoute(X3DPrototype73.EventTranslation_changed, X3DPrototype86.EventSet_startpoint);
{ METHOD .AddX3DROUTE }
{ Original "G3.EventTranslation_changed TO connector2.EventSet_endpoint }
{ Sample G3.EventTranslation_changed TO connector2.EventSet_endpoint}
Group7.AddRoute(X3DPrototype75.EventTranslation_changed, X3DPrototype86.EventSet_endpoint);
{ METHOD .AddX3DROUTE }
{ Original "G1.EventTranslation_changed TO connector3.EventSet_startpoint }
{ Sample G1.EventTranslation_changed TO connector3.EventSet_startpoint}
Group7.AddRoute(X3DPrototype73.EventTranslation_changed, X3DPrototype95.EventSet_startpoint);
{ METHOD .AddX3DROUTE }
{ Original "G4.EventTranslation_changed TO connector3.EventSet_endpoint }
{ Sample G4.EventTranslation_changed TO connector3.EventSet_endpoint}
Group7.AddRoute(X3DPrototype76.EventTranslation_changed, X3DPrototype95.EventSet_endpoint);
{ METHOD .AddX3DROUTE }
{ METHOD .AddGroup }
X3D0.AddChildren([Group7]);
end;

function Createarcold: TX3DRootNode;
begin
InitarcoldPart0;
InitarcoldPart1;
InitarcoldPart2;
Result := X3D0;
end;

begin
end.

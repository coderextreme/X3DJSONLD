unit arcold;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

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
Shape34: TShapeNode;
Sphere35: TSphereNode;
Appearance36: TAppearanceNode;
Material37: TMaterialNode;
PositionInterpolator38: TPositionInterpolatorNode;
Script39: TScriptNode;
SFVec3f40: TSFVec3f;
SFVec3f41: TSFVec3f;
SFTime42: TSFTime;
MFVec3f43: TMFVec3f;
TimeSensor44: TTimeSensorNode;
X3DPrototype49: TX3DPrototype;
X3DInterfaceDeclaration50: TX3DInterfaceDeclaration;
SFNode51: TSFNode;
SFNode52: TSFNode;
SFNode53: TSFNode;
SFNode54: TSFNode;
SFVec3f55: TSFVec3f;
SFVec3f56: TSFVec3f;
X3DPrototype57: TX3DPrototype;
Script58: TScriptNode;
SFNode59: TSFNode;
SFNode60: TSFNode;
SFNode61: TSFNode;
SFNode62: TSFNode;
SFVec3f63: TSFVec3f;
SFVec3f64: TSFVec3f;
X3DPrototype66: TX3DPrototypeNode;
X3DPrototype67: TX3DPrototypeNode;
X3DPrototype68: TX3DPrototypeNode;
X3DPrototype69: TX3DPrototypeNode;
X3DPrototype70: TX3DPrototypeNode;
SFNode71: TSFNode;
X3DPrototype72: TX3DPrototypeNode;
SFNode73: TSFNode;
X3DPrototype74: TX3DPrototypeNode;
SFNode75: TSFNode;
Transform76: TTransformNode;
SFNode77: TSFNode;
Transform78: TTransformNode;
X3DPrototype79: TX3DPrototypeNode;
SFNode80: TSFNode;
X3DPrototype81: TX3DPrototypeNode;
SFNode82: TSFNode;
X3DPrototype83: TX3DPrototypeNode;
SFNode84: TSFNode;
Transform85: TTransformNode;
SFNode86: TSFNode;
Transform87: TTransformNode;
X3DPrototype88: TX3DPrototypeNode;
SFNode89: TSFNode;
X3DPrototype90: TX3DPrototypeNode;
SFNode91: TSFNode;
X3DPrototype92: TX3DPrototypeNode;
SFNode93: TSFNode;
Transform94: TTransformNode;
SFNode95: TSFNode;
Transform96: TTransformNode;

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
Group7 := TGroupNode.Create;;
Viewpoint8 := TViewpointNode.Create;;
Viewpoint8.Position := Vector3(0,0,5);
Viewpoint8.Description := 'a moving graph';
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Viewpoint8);
Background9 := TBackgroundNode.Create;;
Background9.SetSkyColor([Vector3(0.4,0.4,0.4)]);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Background9);
Transform10 := TTransformNode.Create;;
Transform11 := TTransformNode.Create;;
Shape12 := TShapeNode.Create;;
Appearance13 := TAppearanceNode.Create;;
Material14 := TMaterialNode.Create;;
Material14.DiffuseColor := Vector3(0.2,0.7,0.7);
{ METHOD .SetMaterial }
Appearance13.Material := Material14;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape12.Appearance := Appearance13;
Cylinder15 := TCylinderNode.Create;;
Cylinder15.Radius := 0.1;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape12.Geometry := Cylinder15;
{ METHOD .FdChildren.Add }
Transform11.FdChildren.Add(Shape12);
{ METHOD .FdChildren.Add }
Transform10.FdChildren.Add(Transform11);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Transform10);
end;

procedure InitarcoldPart1;
begin

Transform16 := TTransformNode.Create;;
Transform17 := TTransformNode.Create;;
Shape18 := TShapeNode.Create;;
Appearance19 := TAppearanceNode.Create;;
Material20 := TMaterialNode.Create;;
Material20.DiffuseColor := Vector3(0.2,0.7,0.7);
{ METHOD .SetMaterial }
Appearance19.Material := Material20;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape18.Appearance := Appearance19;
Cylinder21 := TCylinderNode.Create;;
Cylinder21.Radius := 0.1;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape18.Geometry := Cylinder21;
{ METHOD .FdChildren.Add }
Transform17.FdChildren.Add(Shape18);
{ METHOD .FdChildren.Add }
Transform16.FdChildren.Add(Transform17);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Transform16);
Transform22 := TTransformNode.Create;;
Transform23 := TTransformNode.Create;;
Shape24 := TShapeNode.Create;;
Appearance25 := TAppearanceNode.Create;;
Material26 := TMaterialNode.Create;;
Material26.DiffuseColor := Vector3(0.2,0.7,0.7);
{ METHOD .SetMaterial }
Appearance25.Material := Material26;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape24.Appearance := Appearance25;
Cylinder27 := TCylinderNode.Create;;
Cylinder27.Radius := 0.1;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape24.Geometry := Cylinder27;
{ METHOD .FdChildren.Add }
Transform23.FdChildren.Add(Shape24);
{ METHOD .FdChildren.Add }
Transform22.FdChildren.Add(Transform23);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Transform22);
end;

procedure InitarcoldPart2;
begin

X3DPrototype28 := TX3DPrototype.Create;;
X3DInterfaceDeclaration29 := TX3DInterfaceDeclaration.Create(nil);;
SFVec3f30 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration29, false, 'translation');
SFVec3f30.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration29.AddSFVec3f([SFVec3f30]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype28.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration29]);
X3DPrototype31 := TX3DPrototype.Create;;
Transform32 := TTransformNode.Create;;
Shape34 := TShapeNode.Create;;
Sphere35 := TSphereNode.Create;;
Sphere35.Radius := 0.1;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape34.Geometry := Sphere35;
Appearance36 := TAppearanceNode.Create;;
Material37 := TMaterialNode.Create;;
Material37.DiffuseColor := Vector3(1,0,0);
{ METHOD .SetMaterial }
Appearance36.Material := Material37;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape34.Appearance := Appearance36;
{ METHOD .FdChildren.Add }
Transform32.FdChildren.Add(Shape34);
PositionInterpolator38 := TPositionInterpolatorNode.Create;;
PositionInterpolator38.SetKey([0,1]);
PositionInterpolator38.SetKeyValue([Vector3(0,0,0),Vector3(0,5,0)]);
{ METHOD .FdChildren.Add }
Transform32.FdChildren.Add(PositionInterpolator38);
Script39 := TScriptNode.Create;;
SFVec3f40 := TSFVec3f.CreateUndefined(Script39, false, 'translation');
SFVec3f40.Value := '50 50 0';
{ METHOD .Fd.AddCustomField }
Script39.AddCustomField(SFVec3f40);
SFVec3f41 := TSFVec3f.CreateUndefined(Script39, false, 'old');
SFVec3f41.Value := '0 0 0';
{ METHOD .Fd.AddCustomField }
Script39.AddCustomField(SFVec3f41);
SFTime42 := TSFTime.CreateUndefined(Script39, false, 'set_location');
end;

procedure InitarcoldPart3;
begin

{ METHOD .Fd.AddCustomField }
Script39.AddCustomField(SFTime42);
MFVec3f43 := TMFVec3f.CreateUndefined(Script39, false, 'keyValue');
{ METHOD .Fd.AddCustomField }
Script39.AddCustomField(MFVec3f43);

Script39.SetSourceCode('''ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(translation);\n"+
"		}''');
{ METHOD .FdChildren.Add }
Transform32.FdChildren.Add(Script39);
TimeSensor44 := TTimeSensorNode.Create;;
TimeSensor44.CycleInterval := 3;
TimeSensor44.Loop := True;
{ METHOD .FdChildren.Add }
Transform32.FdChildren.Add(TimeSensor44);
{ Original "CL1.EventCycleTime TO MB1.EventSet_location }
{ Sample CL1.EventCycleTime TO MB1.EventSet_location}
Transform32.AddRoute(TimeSensor44.EventCycleTime, Script39.EventSet_location);
{ METHOD .AddX3DROUTE }
{ Original "CL1.EventFraction_changed TO PI1.EventSet_fraction }
{ Sample CL1.EventFraction_changed TO PI1.EventSet_fraction}
Transform32.AddRoute(TimeSensor44.EventFraction_changed, PositionInterpolator38.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "MB1.EventKeyValue TO PI1.keyValue }
{ Sample MB1.EventKeyValue TO PI1.keyValue}
Transform32.AddRoute(Script39.EventKeyValue, PositionInterpolator38.keyValue);
{ METHOD .AddX3DROUTE }
{ Original "PI1.EventValue_changed TO node.FdTranslation.EventIn }
{ Sample PI1.EventValue_changed TO node.FdTranslation.EventIn}
Transform32.AddRoute(PositionInterpolator38.EventValue_changed, Transform32.FdTranslation.EventIn);
{ METHOD .AddX3DROUTE }
{ METHOD .AddTransform }
X3DPrototype31.AddTransform([Transform32]);
{ METHOD .AddX3DPrototype }
X3DPrototype28.AddX3DPrototype([X3DPrototype31]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype28]);
{ from doug sanden }
X3DPrototype49 := TX3DPrototype.Create;;
X3DInterfaceDeclaration50 := TX3DInterfaceDeclaration.Create(nil);;
SFNode51 := TSFNode.CreateUndefined(X3DInterfaceDeclaration50, false, 'startnode');
{ METHOD .AddSFNode }
X3DInterfaceDeclaration50.AddSFNode([SFNode51]);
SFNode52 := TSFNode.CreateUndefined(X3DInterfaceDeclaration50, false, 'endnode');
{ METHOD .AddSFNode }
X3DInterfaceDeclaration50.AddSFNode([SFNode52]);
SFNode53 := TSFNode.CreateUndefined(X3DInterfaceDeclaration50, false, 'transnode');
{ METHOD .AddSFNode }
X3DInterfaceDeclaration50.AddSFNode([SFNode53]);
SFNode54 := TSFNode.CreateUndefined(X3DInterfaceDeclaration50, false, 'rotscalenode');
{ METHOD .AddSFNode }
X3DInterfaceDeclaration50.AddSFNode([SFNode54]);
SFVec3f55 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration50, false, 'set_startpoint');
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration50.AddSFVec3f([SFVec3f55]);
SFVec3f56 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration50, false, 'set_endpoint');
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration50.AddSFVec3f([SFVec3f56]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype49.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration50]);
X3DPrototype57 := TX3DPrototype.Create;;
Script58 := TScriptNode.Create;;
SFNode59 := TSFNode.CreateUndefined(Script58, false, 'startnode');
{ METHOD .Fd.AddCustomField }
Script58.AddCustomField(SFNode59);
SFNode60 := TSFNode.CreateUndefined(Script58, false, 'endnode');
{ METHOD .Fd.AddCustomField }
Script58.AddCustomField(SFNode60);
SFNode61 := TSFNode.CreateUndefined(Script58, false, 'transnode');
{ METHOD .Fd.AddCustomField }
Script58.AddCustomField(SFNode61);
SFNode62 := TSFNode.CreateUndefined(Script58, false, 'rotscalenode');
{ METHOD .Fd.AddCustomField }
Script58.AddCustomField(SFNode62);
SFVec3f63 := TSFVec3f.CreateUndefined(Script58, false, 'set_startpoint');
{ METHOD .Fd.AddCustomField }
Script58.AddCustomField(SFVec3f63);
SFVec3f64 := TSFVec3f.CreateUndefined(Script58, false, 'set_endpoint');
{ METHOD .Fd.AddCustomField }
Script58.AddCustomField(SFVec3f64);

Script58.SetSourceCode('''ecmascript:\n"+
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
X3DPrototype57.AddScript([Script58]);
{ METHOD .AddX3DPrototype }
X3DPrototype49.AddX3DPrototype([X3DPrototype57]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype49]);
X3DPrototype66 := TX3DPrototypeNode;
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype66]);
X3DPrototype67 := TX3DPrototypeNode;
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype67]);
X3DPrototype68 := TX3DPrototypeNode;
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype68]);
X3DPrototype69 := TX3DPrototypeNode;
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype69]);
X3DPrototype70 := TX3DPrototypeNode;
SFNode71 := TSFNode.CreateUndefined(X3DPrototype70, false, 'startnode');
{ METHOD .AddX3DPrototype }
SFNode71.AddX3DPrototype([X3DPrototype66]);
{ METHOD .AddSFNode }
X3DPrototype70.AddSFNode([SFNode71]);
SFNode73 := TSFNode.CreateUndefined(X3DPrototype70, false, 'endnode');
{ METHOD .AddX3DPrototype }
SFNode73.AddX3DPrototype([X3DPrototype67]);
{ METHOD .AddSFNode }
X3DPrototype70.AddSFNode([SFNode73]);
SFNode75 := TSFNode.CreateUndefined(X3DPrototype70, false, 'transnode');
{ METHOD .Fd.Value }
SFNode75.Value := Transform10;
{ METHOD .AddSFNode }
X3DPrototype70.AddSFNode([SFNode75]);
SFNode77 := TSFNode.CreateUndefined(X3DPrototype70, false, 'rotscalenode');
{ METHOD .Fd.Value }
SFNode77.Value := Transform11;
{ METHOD .AddSFNode }
X3DPrototype70.AddSFNode([SFNode77]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype70]);
X3DPrototype79 := TX3DPrototypeNode;
SFNode80 := TSFNode.CreateUndefined(X3DPrototype79, false, 'startnode');
{ METHOD .AddX3DPrototype }
SFNode80.AddX3DPrototype([X3DPrototype66]);
{ METHOD .AddSFNode }
X3DPrototype79.AddSFNode([SFNode80]);
SFNode82 := TSFNode.CreateUndefined(X3DPrototype79, false, 'endnode');
{ METHOD .AddX3DPrototype }
SFNode82.AddX3DPrototype([X3DPrototype68]);
{ METHOD .AddSFNode }
X3DPrototype79.AddSFNode([SFNode82]);
SFNode84 := TSFNode.CreateUndefined(X3DPrototype79, false, 'transnode');
{ METHOD .Fd.Value }
SFNode84.Value := Transform16;
{ METHOD .AddSFNode }
X3DPrototype79.AddSFNode([SFNode84]);
SFNode86 := TSFNode.CreateUndefined(X3DPrototype79, false, 'rotscalenode');
{ METHOD .Fd.Value }
SFNode86.Value := Transform17;
{ METHOD .AddSFNode }
X3DPrototype79.AddSFNode([SFNode86]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype79]);
X3DPrototype88 := TX3DPrototypeNode;
SFNode89 := TSFNode.CreateUndefined(X3DPrototype88, false, 'startnode');
{ METHOD .AddX3DPrototype }
SFNode89.AddX3DPrototype([X3DPrototype66]);
{ METHOD .AddSFNode }
X3DPrototype88.AddSFNode([SFNode89]);
SFNode91 := TSFNode.CreateUndefined(X3DPrototype88, false, 'endnode');
{ METHOD .AddX3DPrototype }
SFNode91.AddX3DPrototype([X3DPrototype69]);
{ METHOD .AddSFNode }
X3DPrototype88.AddSFNode([SFNode91]);
SFNode93 := TSFNode.CreateUndefined(X3DPrototype88, false, 'transnode');
{ METHOD .Fd.Value }
SFNode93.Value := Transform22;
{ METHOD .AddSFNode }
X3DPrototype88.AddSFNode([SFNode93]);
SFNode95 := TSFNode.CreateUndefined(X3DPrototype88, false, 'rotscalenode');
{ METHOD .Fd.Value }
SFNode95.Value := Transform23;
{ METHOD .AddSFNode }
X3DPrototype88.AddSFNode([SFNode95]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype88]);
{ Original "G1.EventTranslation_changed TO connector1.EventSet_startpoint }
{ Sample G1.EventTranslation_changed TO connector1.EventSet_startpoint}
Group7.AddRoute(X3DPrototype66.EventTranslation_changed, X3DPrototype70.EventSet_startpoint);
{ METHOD .AddX3DROUTE }
{ Original "G2.EventTranslation_changed TO connector1.EventSet_endpoint }
{ Sample G2.EventTranslation_changed TO connector1.EventSet_endpoint}
Group7.AddRoute(X3DPrototype67.EventTranslation_changed, X3DPrototype70.EventSet_endpoint);
{ METHOD .AddX3DROUTE }
{ Original "G1.EventTranslation_changed TO connector2.EventSet_startpoint }
{ Sample G1.EventTranslation_changed TO connector2.EventSet_startpoint}
Group7.AddRoute(X3DPrototype66.EventTranslation_changed, X3DPrototype79.EventSet_startpoint);
{ METHOD .AddX3DROUTE }
{ Original "G3.EventTranslation_changed TO connector2.EventSet_endpoint }
{ Sample G3.EventTranslation_changed TO connector2.EventSet_endpoint}
Group7.AddRoute(X3DPrototype68.EventTranslation_changed, X3DPrototype79.EventSet_endpoint);
{ METHOD .AddX3DROUTE }
{ Original "G1.EventTranslation_changed TO connector3.EventSet_startpoint }
{ Sample G1.EventTranslation_changed TO connector3.EventSet_startpoint}
Group7.AddRoute(X3DPrototype66.EventTranslation_changed, X3DPrototype88.EventSet_startpoint);
{ METHOD .AddX3DROUTE }
{ Original "G4.EventTranslation_changed TO connector3.EventSet_endpoint }
{ Sample G4.EventTranslation_changed TO connector3.EventSet_endpoint}
Group7.AddRoute(X3DPrototype69.EventTranslation_changed, X3DPrototype88.EventSet_endpoint);
{ METHOD .AddX3DROUTE }
{ METHOD .AddGroup }
X3D0.AddChildren([Group7]);
end;

function Createarcold: TX3DRootNode;
begin
InitarcoldPart0;
InitarcoldPart1;
InitarcoldPart2;
InitarcoldPart3;
Result := X3D0;
end;

begin
end.

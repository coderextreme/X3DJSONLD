unit arc1;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

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
Shape16: TShapeNode;
Sphere17: TSphereNode;
Appearance18: TAppearanceNode;
Material19: TMaterialNode;
PositionInterpolator20: TPositionInterpolatorNode;
Script21: TScriptNode;
SFVec3f22: TSFVec3f;
SFVec3f23: TSFVec3f;
SFTime24: TSFTime;
MFVec3f25: TMFVec3f;
TimeSensor26: TTimeSensorNode;
Transform32: TTransformNode;
X3DPrototype33: TX3DPrototypeNode;
Transform34: TTransformNode;
X3DPrototype35: TX3DPrototypeNode;
Transform36: TTransformNode;
Transform37: TTransformNode;
Shape38: TShapeNode;
Appearance39: TAppearanceNode;
Material40: TMaterialNode;
Cylinder41: TCylinderNode;
X3DPrototype42: TX3DPrototype;
X3DInterfaceDeclaration43: TX3DInterfaceDeclaration;
SFNode44: TSFNode;
SFNode45: TSFNode;
SFNode46: TSFNode;
SFNode47: TSFNode;
SFVec3f48: TSFVec3f;
SFVec3f49: TSFVec3f;
X3DPrototype50: TX3DPrototype;
Script51: TScriptNode;
SFNode52: TSFNode;
SFNode53: TSFNode;
SFNode54: TSFNode;
SFNode55: TSFNode;
SFVec3f56: TSFVec3f;
SFVec3f57: TSFVec3f;
X3DPrototype59: TX3DPrototypeNode;
SFNode60: TSFNode;
Transform61: TTransformNode;
SFNode62: TSFNode;
Transform63: TTransformNode;
SFNode64: TSFNode;
Transform65: TTransformNode;
SFNode66: TSFNode;
Transform67: TTransformNode;
SFVec3f68: TSFVec3f;
SFVec3f69: TSFVec3f;

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
Group7 := TGroupNode.Create;;
Viewpoint8 := TViewpointNode.Create;;
Viewpoint8.Position := Vector3(0,0,5);
Viewpoint8.Description := 'Only Viewpoint';
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Viewpoint8);
Background9 := TBackgroundNode.Create;;
Background9.SetSkyColor([Vector3(0.4,0.4,0.4)]);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Background9);
X3DPrototype10 := TX3DPrototype.Create;;
X3DInterfaceDeclaration11 := TX3DInterfaceDeclaration.Create(nil);;
SFVec3f12 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration11, false, 'translation');
SFVec3f12.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration11.AddSFVec3f([SFVec3f12]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype10.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration11]);
X3DPrototype13 := TX3DPrototype.Create;;
Transform14 := TTransformNode.Create;;
Shape16 := TShapeNode.Create;;
Sphere17 := TSphereNode.Create;;
Sphere17.Radius := 0.1;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape16.Geometry := Sphere17;
Appearance18 := TAppearanceNode.Create;;
end;

procedure Initarc1Part1;
begin

Material19 := TMaterialNode.Create;;
Material19.DiffuseColor := Vector3(1,0,0);
{ METHOD .SetMaterial }
Appearance18.Material := Material19;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape16.Appearance := Appearance18;
{ METHOD .FdChildren.Add }
Transform14.FdChildren.Add(Shape16);
PositionInterpolator20 := TPositionInterpolatorNode.Create;;
PositionInterpolator20.SetKey([0,1]);
PositionInterpolator20.SetKeyValue([Vector3(0,0,0),Vector3(0,5,0)]);
{ METHOD .FdChildren.Add }
Transform14.FdChildren.Add(PositionInterpolator20);
Script21 := TScriptNode.Create;;
SFVec3f22 := TSFVec3f.CreateUndefined(Script21, false, 'translation');
SFVec3f22.Value := '50 50 0';
{ METHOD .Fd.AddCustomField }
Script21.AddCustomField(SFVec3f22);
SFVec3f23 := TSFVec3f.CreateUndefined(Script21, false, 'old');
SFVec3f23.Value := '0 0 0';
{ METHOD .Fd.AddCustomField }
Script21.AddCustomField(SFVec3f23);
SFTime24 := TSFTime.CreateUndefined(Script21, false, 'set_location');
{ METHOD .Fd.AddCustomField }
Script21.AddCustomField(SFTime24);
MFVec3f25 := TMFVec3f.CreateUndefined(Script21, false, 'keyValue');
MFVec3f25.Value := '0 0 0 0 5 0';
{ METHOD .Fd.AddCustomField }
Script21.AddCustomField(MFVec3f25);

Script21.SetSourceCode('''ecmascript:\n"+
"               function set_location(value) {\n"+
"                    old = translation;\n"+
"                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"               }''');
{ METHOD .FdChildren.Add }
Transform14.FdChildren.Add(Script21);
TimeSensor26 := TTimeSensorNode.Create;;
TimeSensor26.CycleInterval := 3;
TimeSensor26.Loop := True;
{ METHOD .FdChildren.Add }
Transform14.FdChildren.Add(TimeSensor26);
{ Original "CL1.EventCycleTime TO MB1.EventSet_location }
{ Sample CL1.EventCycleTime TO MB1.EventSet_location}
Transform14.AddRoute(TimeSensor26.EventCycleTime, Script21.EventSet_location);
{ METHOD .AddX3DROUTE }
{ Original "CL1.EventFraction_changed TO PI1.EventSet_fraction }
{ Sample CL1.EventFraction_changed TO PI1.EventSet_fraction}
Transform14.AddRoute(TimeSensor26.EventFraction_changed, PositionInterpolator20.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "MB1.EventKeyValue TO PI1.keyValue }
{ Sample MB1.EventKeyValue TO PI1.keyValue}
Transform14.AddRoute(Script21.EventKeyValue, PositionInterpolator20.keyValue);
{ METHOD .AddX3DROUTE }
{ Original "PI1.EventValue_changed TO node.FdTranslation.EventIn }
{ Sample PI1.EventValue_changed TO node.FdTranslation.EventIn}
Transform14.AddRoute(PositionInterpolator20.EventValue_changed, Transform14.FdTranslation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "MB1.EventTranslation_changed TO node.FdTranslation.EventIn }
{ Sample MB1.EventTranslation_changed TO node.FdTranslation.EventIn}
Transform14.AddRoute(Script21.EventTranslation_changed, Transform14.FdTranslation.EventIn);
{ METHOD .AddX3DROUTE }
{ METHOD .AddTransform }
X3DPrototype13.AddTransform([Transform14]);
{ METHOD .AddX3DPrototype }
X3DPrototype10.AddX3DPrototype([X3DPrototype13]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype10]);
Transform32 := TTransformNode.Create;;
X3DPrototype33 := TX3DPrototypeNode;
{ METHOD .AddX3DPrototype }
Transform32.AddX3DPrototype([X3DPrototype33]);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Transform32);
Transform34 := TTransformNode.Create;;
X3DPrototype35 := TX3DPrototypeNode;
{ METHOD .AddX3DPrototype }
Transform34.AddX3DPrototype([X3DPrototype35]);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Transform34);
Transform36 := TTransformNode.Create;;
Transform37 := TTransformNode.Create;;
Shape38 := TShapeNode.Create;;
Appearance39 := TAppearanceNode.Create;;
Material40 := TMaterialNode.Create;;
Material40.DiffuseColor := Vector3(0.2,0.7,0.7);
Material40.Transparency := 0.5;
{ METHOD .SetMaterial }
Appearance39.Material := Material40;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape38.Appearance := Appearance39;
Cylinder41 := TCylinderNode.Create;;
Cylinder41.Radius := 0.05;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape38.Geometry := Cylinder41;
{ METHOD .FdChildren.Add }
Transform37.FdChildren.Add(Shape38);
{ METHOD .FdChildren.Add }
Transform36.FdChildren.Add(Transform37);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Transform36);
X3DPrototype42 := TX3DPrototype.Create;;
X3DInterfaceDeclaration43 := TX3DInterfaceDeclaration.Create(nil);;
SFNode44 := TSFNode.CreateUndefined(X3DInterfaceDeclaration43, false, 'startnode');
{ METHOD .AddSFNode }
X3DInterfaceDeclaration43.AddSFNode([SFNode44]);
SFNode45 := TSFNode.CreateUndefined(X3DInterfaceDeclaration43, false, 'endnode');
{ METHOD .AddSFNode }
X3DInterfaceDeclaration43.AddSFNode([SFNode45]);
SFNode46 := TSFNode.CreateUndefined(X3DInterfaceDeclaration43, false, 'transnode');
{ METHOD .AddSFNode }
X3DInterfaceDeclaration43.AddSFNode([SFNode46]);
SFNode47 := TSFNode.CreateUndefined(X3DInterfaceDeclaration43, false, 'rotscalenode');
{ METHOD .AddSFNode }
X3DInterfaceDeclaration43.AddSFNode([SFNode47]);
SFVec3f48 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration43, false, 'set_startpoint');
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration43.AddSFVec3f([SFVec3f48]);
SFVec3f49 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration43, false, 'set_endpoint');
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration43.AddSFVec3f([SFVec3f49]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype42.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration43]);
X3DPrototype50 := TX3DPrototype.Create;;
Script51 := TScriptNode.Create;;
SFNode52 := TSFNode.CreateUndefined(Script51, false, 'startnode');
{ METHOD .Fd.AddCustomField }
Script51.AddCustomField(SFNode52);
SFNode53 := TSFNode.CreateUndefined(Script51, false, 'endnode');
{ METHOD .Fd.AddCustomField }
Script51.AddCustomField(SFNode53);
SFNode54 := TSFNode.CreateUndefined(Script51, false, 'transnode');
{ METHOD .Fd.AddCustomField }
Script51.AddCustomField(SFNode54);
SFNode55 := TSFNode.CreateUndefined(Script51, false, 'rotscalenode');
{ METHOD .Fd.AddCustomField }
Script51.AddCustomField(SFNode55);
SFVec3f56 := TSFVec3f.CreateUndefined(Script51, false, 'set_startpoint');
{ METHOD .Fd.AddCustomField }
Script51.AddCustomField(SFVec3f56);
SFVec3f57 := TSFVec3f.CreateUndefined(Script51, false, 'set_endpoint');
{ METHOD .Fd.AddCustomField }
Script51.AddCustomField(SFVec3f57);

Script51.SetSourceCode('''ecmascript:\n"+
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
X3DPrototype50.AddScript([Script51]);
{ METHOD .AddX3DPrototype }
X3DPrototype42.AddX3DPrototype([X3DPrototype50]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype42]);
X3DPrototype59 := TX3DPrototypeNode;
SFNode60 := TSFNode.CreateUndefined(X3DPrototype59, false, 'startnode');
{ METHOD .Fd.Value }
SFNode60.Value := Transform32;
{ METHOD .AddSFNode }
X3DPrototype59.AddSFNode([SFNode60]);
SFNode62 := TSFNode.CreateUndefined(X3DPrototype59, false, 'endnode');
{ METHOD .Fd.Value }
SFNode62.Value := Transform34;
{ METHOD .AddSFNode }
X3DPrototype59.AddSFNode([SFNode62]);
SFNode64 := TSFNode.CreateUndefined(X3DPrototype59, false, 'transnode');
{ METHOD .Fd.Value }
SFNode64.Value := Transform36;
{ METHOD .AddSFNode }
X3DPrototype59.AddSFNode([SFNode64]);
SFNode66 := TSFNode.CreateUndefined(X3DPrototype59, false, 'rotscalenode');
{ METHOD .Fd.Value }
SFNode66.Value := Transform37;
{ METHOD .AddSFNode }
X3DPrototype59.AddSFNode([SFNode66]);
SFVec3f68 := TSFVec3f.CreateUndefined(X3DPrototype59, false, 'set_startpoint');
{ METHOD .AddSFVec3f }
X3DPrototype59.AddSFVec3f([SFVec3f68]);
SFVec3f69 := TSFVec3f.CreateUndefined(X3DPrototype59, false, 'set_endpoint');
{ METHOD .AddSFVec3f }
X3DPrototype59.AddSFVec3f([SFVec3f69]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype59]);
{ Original "G1.EventTranslation_changed TO connector1.EventSet_startpoint }
{ Sample G1.EventTranslation_changed TO connector1.EventSet_startpoint}
Group7.AddRoute(Transform32.EventTranslation_changed, X3DPrototype59.EventSet_startpoint);
{ METHOD .AddX3DROUTE }
{ Original "G2.EventTranslation_changed TO connector1.EventSet_endpoint }
{ Sample G2.EventTranslation_changed TO connector1.EventSet_endpoint}
Group7.AddRoute(Transform34.EventTranslation_changed, X3DPrototype59.EventSet_endpoint);
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

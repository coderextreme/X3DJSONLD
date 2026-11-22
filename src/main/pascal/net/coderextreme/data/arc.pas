unit arc;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function Createarc: TX3DRootNode;

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
X3DPrototype32: TX3DPrototype;
X3DInterfaceDeclaration33: TX3DInterfaceDeclaration;
SFNode34: TSFNode;
SFNode35: TSFNode;
SFVec3f36: TSFVec3f;
SFVec3f37: TSFVec3f;
X3DPrototype38: TX3DPrototype;
Group39: TGroupNode;
Transform40: TTransformNode;
Transform41: TTransformNode;
Shape42: TShapeNode;
Appearance43: TAppearanceNode;
Material44: TMaterialNode;
Cylinder45: TCylinderNode;
Script46: TScriptNode;
SFNode47: TSFNode;
SFNode48: TSFNode;
SFNode49: TSFNode;
Transform50: TTransformNode;
SFNode51: TSFNode;
Transform52: TTransformNode;
SFVec3f53: TSFVec3f;
SFVec3f54: TSFVec3f;
IS55: TIS;
connect56: Tconnect;
connect57: Tconnect;
connect58: Tconnect;
connect59: Tconnect;
X3DPrototype60: TX3DPrototypeNode;
X3DPrototype61: TX3DPrototypeNode;
X3DPrototype62: TX3DPrototypeNode;
X3DPrototype63: TX3DPrototypeNode;
X3DPrototype64: TX3DPrototypeNode;
SFNode65: TSFNode;
X3DPrototype66: TX3DPrototypeNode;
SFNode67: TSFNode;
X3DPrototype68: TX3DPrototypeNode;
SFVec3f69: TSFVec3f;
SFVec3f70: TSFVec3f;
X3DPrototype71: TX3DPrototypeNode;
SFNode72: TSFNode;
X3DPrototype73: TX3DPrototypeNode;
SFNode74: TSFNode;
X3DPrototype75: TX3DPrototypeNode;
SFVec3f76: TSFVec3f;
SFVec3f77: TSFVec3f;
X3DPrototype78: TX3DPrototypeNode;
SFNode79: TSFNode;
X3DPrototype80: TX3DPrototypeNode;
SFNode81: TSFNode;
X3DPrototype82: TX3DPrototypeNode;
SFVec3f83: TSFVec3f;
SFVec3f84: TSFVec3f;

procedure InitarcPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'arc.x3d';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'Lost, Doug Sanden I think';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'manual';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/arc.x3d';
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

procedure InitarcPart1;
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
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(keyValue);\n"+
"		}''');
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
{ METHOD .AddTransform }
X3DPrototype13.AddTransform([Transform14]);
{ METHOD .AddX3DPrototype }
X3DPrototype10.AddX3DPrototype([X3DPrototype13]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype10]);
X3DPrototype32 := TX3DPrototype.Create;
X3DInterfaceDeclaration33 := TX3DInterfaceDeclaration.Create(nil);
SFNode34 := TSFNode.CreateUndefined(X3DInterfaceDeclaration33, false, 'startnode');
{ METHOD .AddSFNode }
X3DInterfaceDeclaration33.AddSFNode([SFNode34]);
SFNode35 := TSFNode.CreateUndefined(X3DInterfaceDeclaration33, false, 'endnode');
{ METHOD .AddSFNode }
X3DInterfaceDeclaration33.AddSFNode([SFNode35]);
SFVec3f36 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration33, false, 'set_startpoint');
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration33.AddSFVec3f([SFVec3f36]);
SFVec3f37 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration33, false, 'set_endpoint');
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration33.AddSFVec3f([SFVec3f37]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype32.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration33]);
X3DPrototype38 := TX3DPrototype.Create;
Group39 := TGroupNode.Create;
Transform40 := TTransformNode.Create;
Transform41 := TTransformNode.Create;
Shape42 := TShapeNode.Create;
Appearance43 := TAppearanceNode.Create;
Material44 := TMaterialNode.Create;
Material44.DiffuseColor := Vector3(0.2,0.7,0.7);
Material44.Transparency := 0.5;
{ METHOD .SetMaterial }
Appearance43.Material := Material44;
{ METHOD .Appearance }
Shape42.Appearance := Appearance43;
Cylinder45 := TCylinderNode.Create;
Cylinder45.Radius := 0.05;
{ METHOD .Geometry }
Shape42.Geometry := Cylinder45;
{ METHOD .FdChildren.Add }
Transform41.FdChildren.Add(Shape42);
{ METHOD .FdChildren.Add }
Transform40.FdChildren.Add(Transform41);
{ METHOD .FdChildren.Add }
Group39.FdChildren.Add(Transform40);
Script46 := TScriptNode.Create;
SFNode47 := TSFNode.CreateUndefined(Script46, false, 'startnode');
{ METHOD .Fd.AddCustomField }
Script46.AddCustomField(SFNode47);
SFNode48 := TSFNode.CreateUndefined(Script46, false, 'endnode');
{ METHOD .Fd.AddCustomField }
Script46.AddCustomField(SFNode48);
SFNode49 := TSFNode.CreateUndefined(Script46, false, 'position');
{ METHOD .Fd.Value }
SFNode49.Value := Transform40;
{ METHOD .Fd.AddCustomField }
Script46.AddCustomField(SFNode49);
SFNode51 := TSFNode.CreateUndefined(Script46, false, 'rotscale');
{ METHOD .Fd.Value }
SFNode51.Value := Transform41;
{ METHOD .Fd.AddCustomField }
Script46.AddCustomField(SFNode51);
SFVec3f53 := TSFVec3f.CreateUndefined(Script46, false, 'set_startpoint');
{ METHOD .Fd.AddCustomField }
Script46.AddCustomField(SFVec3f53);
SFVec3f54 := TSFVec3f.CreateUndefined(Script46, false, 'set_endpoint');
{ METHOD .Fd.AddCustomField }
Script46.AddCustomField(SFVec3f54);
IS55 := TIS.Create;
connect56 := Tconnect.Create;
connect56.NodeField := 'startnode';
connect56.ProtoField := 'startnode';
{ METHOD .Connect }
IS55.Connect := connect56;
connect57 := Tconnect.Create;
connect57.NodeField := 'endnode';
connect57.ProtoField := 'endnode';
{ METHOD .Connect }
IS55.Connect := connect57;
connect58 := Tconnect.Create;
connect58.NodeField := 'set_startpoint';
connect58.ProtoField := 'set_startpoint';
{ METHOD .Connect }
IS55.Connect := connect58;
connect59 := Tconnect.Create;
connect59.NodeField := 'set_endpoint';
connect59.ProtoField := 'set_endpoint';
{ METHOD .Connect }
IS55.Connect := connect59;
{ METHOD .Fd.AddCustomField }
Script46.AddCustomField(IS55);

Script46.SetSourceCode('''ecmascript:\n"+
"        function recompute(startpoint,endpoint){\n"+
"	    if (typeof endpoint === 'undefined') {\\n		return;\\n	    }\\n            var dif = endpoint.subtract(startpoint);\\n            var dist = dif.length()*0.5;\\n            var dif2 = dif.multiply(0.5);\\n            var norm = dif.normalize();\\n            var transl = startpoint.add(dif2);\\n	    if (typeof Quaternion !== 'undefined') {\\n		    return {\\n			    scale : new SFVec3f(1.0,dist,1.0),\\n			    translation : transl,\\n			    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), norm)\\n		    };\\n	    } else if (typeof SFRotation !== 'undefined') {\n"+
"		    return {\n"+
"			    scale : new SFVec3f(1.0,dist,1.0),\n"+
"			    translation : transl,\n"+
"			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)\n"+
"		    };\n"+
"	    } else {\n"+
"		    return {\n"+
"			    scale : new SFVec3f(1.0,dist,1.0),\n"+
"			    translation : transl\n"+
"		    };\n"+
"	    }\n"+
"	}\n"+
"	function recompute_and_route(startpoint, endpoint) {\n"+
"	      var trafo = recompute(startpoint, endpoint);\n"+
"	      if (trafo) {\n"+
"		      position.translation = trafo.translation;\n"+
"		      rotscale.rotation = trafo.rotation;\n"+
"		      rotscale.scale = trafo.scale;\n"+
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
{ METHOD .FdChildren.Add }
Group39.FdChildren.Add(Script46);
{ METHOD .AddGroup }
X3DPrototype38.AddChildren([Group39]);
{ METHOD .AddX3DPrototype }
X3DPrototype32.AddX3DPrototype([X3DPrototype38]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype32]);
X3DPrototype60 := TX3DPrototypeNode.Create;
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype60]);
X3DPrototype61 := TX3DPrototypeNode.Create;
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype61]);
X3DPrototype62 := TX3DPrototypeNode.Create;
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype62]);
X3DPrototype63 := TX3DPrototypeNode.Create;
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype63]);
X3DPrototype64 := TX3DPrototypeNode.Create;
SFNode65 := TSFNode.CreateUndefined(X3DPrototype64, false, 'startnode');
{ METHOD .AddX3DPrototype }
SFNode65.AddX3DPrototype([X3DPrototype60]);
{ METHOD .AddSFNode }
X3DPrototype64.AddSFNode([SFNode65]);
SFNode67 := TSFNode.CreateUndefined(X3DPrototype64, false, 'endnode');
{ METHOD .AddX3DPrototype }
SFNode67.AddX3DPrototype([X3DPrototype61]);
{ METHOD .AddSFNode }
X3DPrototype64.AddSFNode([SFNode67]);
SFVec3f69 := TSFVec3f.CreateUndefined(X3DPrototype64, false, 'set_startpoint');
{ METHOD .AddSFVec3f }
X3DPrototype64.AddSFVec3f([SFVec3f69]);
SFVec3f70 := TSFVec3f.CreateUndefined(X3DPrototype64, false, 'set_endpoint');
{ METHOD .AddSFVec3f }
X3DPrototype64.AddSFVec3f([SFVec3f70]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype64]);
X3DPrototype71 := TX3DPrototypeNode.Create;
SFNode72 := TSFNode.CreateUndefined(X3DPrototype71, false, 'startnode');
{ METHOD .AddX3DPrototype }
SFNode72.AddX3DPrototype([X3DPrototype60]);
{ METHOD .AddSFNode }
X3DPrototype71.AddSFNode([SFNode72]);
SFNode74 := TSFNode.CreateUndefined(X3DPrototype71, false, 'endnode');
{ METHOD .AddX3DPrototype }
SFNode74.AddX3DPrototype([X3DPrototype62]);
{ METHOD .AddSFNode }
X3DPrototype71.AddSFNode([SFNode74]);
SFVec3f76 := TSFVec3f.CreateUndefined(X3DPrototype71, false, 'set_startpoint');
{ METHOD .AddSFVec3f }
X3DPrototype71.AddSFVec3f([SFVec3f76]);
SFVec3f77 := TSFVec3f.CreateUndefined(X3DPrototype71, false, 'set_endpoint');
{ METHOD .AddSFVec3f }
X3DPrototype71.AddSFVec3f([SFVec3f77]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype71]);
X3DPrototype78 := TX3DPrototypeNode.Create;
SFNode79 := TSFNode.CreateUndefined(X3DPrototype78, false, 'startnode');
{ METHOD .AddX3DPrototype }
SFNode79.AddX3DPrototype([X3DPrototype60]);
{ METHOD .AddSFNode }
X3DPrototype78.AddSFNode([SFNode79]);
SFNode81 := TSFNode.CreateUndefined(X3DPrototype78, false, 'endnode');
{ METHOD .AddX3DPrototype }
SFNode81.AddX3DPrototype([X3DPrototype63]);
{ METHOD .AddSFNode }
X3DPrototype78.AddSFNode([SFNode81]);
SFVec3f83 := TSFVec3f.CreateUndefined(X3DPrototype78, false, 'set_startpoint');
{ METHOD .AddSFVec3f }
X3DPrototype78.AddSFVec3f([SFVec3f83]);
SFVec3f84 := TSFVec3f.CreateUndefined(X3DPrototype78, false, 'set_endpoint');
{ METHOD .AddSFVec3f }
X3DPrototype78.AddSFVec3f([SFVec3f84]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype78]);
{ Original "G1.EventTranslation TO connector1.EventSet_startpoint }
{ Sample G1.EventTranslation TO connector1.EventSet_startpoint}
Group7.AddRoute(X3DPrototype60.EventTranslation, X3DPrototype64.EventSet_startpoint);
{ METHOD .AddX3DROUTE }
{ Original "G2.EventTranslation TO connector1.EventSet_endpoint }
{ Sample G2.EventTranslation TO connector1.EventSet_endpoint}
Group7.AddRoute(X3DPrototype61.EventTranslation, X3DPrototype64.EventSet_endpoint);
{ METHOD .AddX3DROUTE }
{ Original "G1.EventTranslation TO connector2.EventSet_startpoint }
{ Sample G1.EventTranslation TO connector2.EventSet_startpoint}
Group7.AddRoute(X3DPrototype60.EventTranslation, X3DPrototype71.EventSet_startpoint);
{ METHOD .AddX3DROUTE }
{ Original "G3.EventTranslation TO connector2.EventSet_endpoint }
{ Sample G3.EventTranslation TO connector2.EventSet_endpoint}
Group7.AddRoute(X3DPrototype62.EventTranslation, X3DPrototype71.EventSet_endpoint);
{ METHOD .AddX3DROUTE }
{ Original "G1.EventTranslation TO connector3.EventSet_startpoint }
{ Sample G1.EventTranslation TO connector3.EventSet_startpoint}
Group7.AddRoute(X3DPrototype60.EventTranslation, X3DPrototype78.EventSet_startpoint);
{ METHOD .AddX3DROUTE }
{ Original "G4.EventTranslation TO connector3.EventSet_endpoint }
{ Sample G4.EventTranslation TO connector3.EventSet_endpoint}
Group7.AddRoute(X3DPrototype63.EventTranslation, X3DPrototype78.EventSet_endpoint);
{ METHOD .AddX3DROUTE }
{ METHOD .AddGroup }
X3D0.AddChildren([Group7]);
end;

function Createarc: TX3DRootNode;
begin
InitarcPart0;
InitarcPart1;
Result := X3D0;
end;

begin
end.

unit arc;

interface

uses X3DNodes;

function Createarc: TX3DRootNode;

implementation

uses CastleVectors;

function Createarc: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group7: TGroupNode;
Viewpoint8: TViewpointNode;
Background9: TBackgroundNode;
X3DPrototype10: TX3DPrototype;
X3DInterfaceDeclaration11: TX3DInterfaceDeclaration;
X3DField12: TX3DField;
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
X3DField23: TX3DField;
X3DField24: TX3DField;
X3DField25: TX3DField;
X3DField26: TX3DField;
TimeSensor27: TTimeSensorNode;
X3DPrototype32: TX3DPrototype;
X3DInterfaceDeclaration33: TX3DInterfaceDeclaration;
X3DField34: TX3DField;
X3DField35: TX3DField;
X3DField36: TX3DField;
X3DField37: TX3DField;
X3DPrototype38: TX3DPrototype;
Group39: TGroupNode;
Transform40: TTransformNode;
Transform41: TTransformNode;
Shape42: TShapeNode;
Appearance43: TAppearanceNode;
Material44: TMaterialNode;
Cylinder45: TCylinderNode;
Script46: TScriptNode;
X3DField47: TX3DField;
X3DField48: TX3DField;
X3DField49: TX3DField;
Transform50: TTransformNode;
X3DField51: TX3DField;
Transform52: TTransformNode;
X3DField53: TX3DField;
X3DField54: TX3DField;
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
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'arc.x3d';
X3D0.Meta['creator'] := 'Lost, Doug Sanden I think';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/arc.x3d';
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
X3DPrototype10 := TX3DPrototype.Create;
X3DPrototype10.NameField := 'point';
X3DInterfaceDeclaration11 := TX3DInterfaceDeclaration.Create(nil);
X3DField12 := TX3DField.Create;
X3DField12.NameField := 'translation';
X3DField12.AccessType := 'inputOutput';
X3DField12.Type := 'SFVec3f';
X3DField12.Value := '0 0 0';
{ .SetX3DField }
X3DInterfaceDeclaration11.X3DField := X3DField12;
{ .SetX3DInterfaceDeclaration }
X3DPrototype10.X3DInterfaceDeclaration := X3DInterfaceDeclaration11;
X3DPrototype13 := TX3DPrototype.Create;
Transform14 := TTransformNode.Create;
IS15 := TIS.Create;
connect16 := Tconnect.Create;
connect16.NodeField := 'translation';
connect16.ProtoField := 'translation';
{ .AddConnect }
IS15.Connect := connect16;
{ .SetIS }
Transform14.IS := IS15;
Shape17 := TShapeNode.Create;
Sphere18 := TSphereNode.Create;
Sphere18.Radius := 0.1;
{ .SetGeometry }
Shape17.Geometry := Sphere18;
Appearance19 := TAppearanceNode.Create;
Material20 := TMaterialNode.Create;
Material20.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance19.Material := Material20;
{ .SetAppearance }
Shape17.Appearance := Appearance19;
{ .AddChild }
Transform14.AddChildren([Shape17]);
PositionInterpolator21 := TPositionInterpolatorNode.Create;
PositionInterpolator21.SetKey([0,1]);
PositionInterpolator21.SetKeyValue([Vector3(0,0,0),Vector3(0,5,0)]);
{ .AddChildren }
Transform14.AddChildren([PositionInterpolator21]);
Script22 := TScriptNode.Create;
X3DField23 := TX3DField.Create;
X3DField23.NameField := 'translation';
X3DField23.AccessType := 'inputOutput';
X3DField23.Type := 'SFVec3f';
X3DField23.Value := '50 50 0';
{ .SetX3DField }
Script22.X3DField := X3DField23;
X3DField24 := TX3DField.Create;
X3DField24.NameField := 'old';
X3DField24.AccessType := 'inputOutput';
X3DField24.Type := 'SFVec3f';
X3DField24.Value := '0 0 0';
{ .AddX3DField }
Script22.X3DField := X3DField24;
X3DField25 := TX3DField.Create;
X3DField25.NameField := 'set_location';
X3DField25.AccessType := 'inputOnly';
X3DField25.Type := 'SFTime';
{ .AddX3DField }
Script22.X3DField := X3DField25;
X3DField26 := TX3DField.Create;
X3DField26.NameField := 'keyValue';
X3DField26.AccessType := 'inputOutput';
X3DField26.Type := 'MFVec3f';
X3DField26.Value := '0 0 0 0 5 0';
{ .AddX3DField }
Script22.X3DField := X3DField26;

Script22.SetSourceCode('''ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(keyValue);\n"+
"		}''');
{ .AddChildren }
Transform14.AddChildren([Script22]);
TimeSensor27 := TTimeSensorNode.Create;
TimeSensor27.CycleInterval := 3;
TimeSensor27.Loop := True;
{ .AddChildren }
Transform14.AddChildren([TimeSensor27]);
Transform14.AddRoute(TimeSensor27.FdCycletime, Script22.EventSet_location);
{ .AddX3DRoute }
Transform14.AddRoute(TimeSensor27.EventFraction_changed, PositionInterpolator21.EventSet_fraction);
{ .AddX3DRoute }
Transform14.AddRoute(Script22.FdKeyvalue, PositionInterpolator21.FdKeyvalue);
{ .AddX3DRoute }
Transform14.AddRoute(PositionInterpolator21.EventValue_changed, Transform14.FdTranslation);
{ .AddX3DRoute }
{ .SetTransform }
X3DPrototype13.Transform := Transform14;
{ .AddX3DPrototype }
X3DPrototype10.X3DPrototype := X3DPrototype13;
{ .AddX3DPrototype }
Group7.X3DPrototype := X3DPrototype10;
X3DPrototype32 := TX3DPrototype.Create;
X3DPrototype32.NameField := 'x3dconnector';
X3DInterfaceDeclaration33 := TX3DInterfaceDeclaration.Create(nil);
X3DField34 := TX3DField.Create;
X3DField34.NameField := 'startnode';
X3DField34.AccessType := 'initializeOnly';
X3DField34.Type := 'SFNode';
{ .SetX3DField }
X3DInterfaceDeclaration33.X3DField := X3DField34;
X3DField35 := TX3DField.Create;
X3DField35.NameField := 'endnode';
X3DField35.AccessType := 'initializeOnly';
X3DField35.Type := 'SFNode';
{ .AddX3DField }
X3DInterfaceDeclaration33.X3DField := X3DField35;
X3DField36 := TX3DField.Create;
X3DField36.NameField := 'set_startpoint';
X3DField36.AccessType := 'inputOnly';
X3DField36.Type := 'SFVec3f';
{ .AddX3DField }
X3DInterfaceDeclaration33.X3DField := X3DField36;
X3DField37 := TX3DField.Create;
X3DField37.NameField := 'set_endpoint';
X3DField37.AccessType := 'inputOnly';
X3DField37.Type := 'SFVec3f';
{ .AddX3DField }
X3DInterfaceDeclaration33.X3DField := X3DField37;
{ .SetX3DInterfaceDeclaration }
X3DPrototype32.X3DInterfaceDeclaration := X3DInterfaceDeclaration33;
X3DPrototype38 := TX3DPrototype.Create;
Group39 := TGroupNode.Create;
Transform40 := TTransformNode.Create;
Transform41 := TTransformNode.Create;
Shape42 := TShapeNode.Create;
Appearance43 := TAppearanceNode.Create;
Material44 := TMaterialNode.Create;
Material44.DiffuseColor := Vector3(0.2,0.7,0.7);
Material44.Transparency := 0.5;
{ .SetMaterial }
Appearance43.Material := Material44;
{ .SetAppearance }
Shape42.Appearance := Appearance43;
Cylinder45 := TCylinderNode.Create;
Cylinder45.Radius := 0.05;
{ .SetGeometry }
Shape42.Geometry := Cylinder45;
{ .AddChild }
Transform41.AddChildren([Shape42]);
{ .AddChildren }
Transform40.AddChildren([Transform41]);
{ .AddChildren }
Group39.AddChildren([Transform40]);
Script46 := TScriptNode.Create;
X3DField47 := TX3DField.Create;
X3DField47.NameField := 'startnode';
X3DField47.AccessType := 'initializeOnly';
X3DField47.Type := 'SFNode';
{ .SetX3DField }
Script46.X3DField := X3DField47;
X3DField48 := TX3DField.Create;
X3DField48.NameField := 'endnode';
X3DField48.AccessType := 'initializeOnly';
X3DField48.Type := 'SFNode';
{ .AddX3DField }
Script46.X3DField := X3DField48;
X3DField49 := TX3DField.Create;
X3DField49.NameField := 'position';
X3DField49.AccessType := 'inputOutput';
X3DField49.Type := 'SFNode';
Transform50 := Transform40;
{ .SetTransform }
X3DField49.Transform := Transform50;
{ .AddX3DField }
Script46.X3DField := X3DField49;
X3DField51 := TX3DField.Create;
X3DField51.NameField := 'rotscale';
X3DField51.AccessType := 'inputOutput';
X3DField51.Type := 'SFNode';
Transform52 := Transform41;
{ .SetTransform }
X3DField51.Transform := Transform52;
{ .AddX3DField }
Script46.X3DField := X3DField51;
X3DField53 := TX3DField.Create;
X3DField53.NameField := 'set_startpoint';
X3DField53.AccessType := 'inputOnly';
X3DField53.Type := 'SFVec3f';
{ .AddX3DField }
Script46.X3DField := X3DField53;
X3DField54 := TX3DField.Create;
X3DField54.NameField := 'set_endpoint';
X3DField54.AccessType := 'inputOnly';
X3DField54.Type := 'SFVec3f';
{ .AddX3DField }
Script46.X3DField := X3DField54;
IS55 := TIS.Create;
connect56 := Tconnect.Create;
connect56.NodeField := 'startnode';
connect56.ProtoField := 'startnode';
{ .AddConnect }
IS55.Connect := connect56;
connect57 := Tconnect.Create;
connect57.NodeField := 'endnode';
connect57.ProtoField := 'endnode';
{ .AddConnect }
IS55.Connect := connect57;
connect58 := Tconnect.Create;
connect58.NodeField := 'set_startpoint';
connect58.ProtoField := 'set_startpoint';
{ .AddConnect }
IS55.Connect := connect58;
connect59 := Tconnect.Create;
connect59.NodeField := 'set_endpoint';
connect59.ProtoField := 'set_endpoint';
{ .AddConnect }
IS55.Connect := connect59;
{ .SetIS }
Script46.IS := IS55;

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
{ .AddChildren }
Group39.AddChildren([Script46]);
{ .SetGroup }
X3DPrototype38.Group := Group39;
{ .AddX3DPrototype }
X3DPrototype32.X3DPrototype := X3DPrototype38;
{ .AddX3DPrototype }
Group7.X3DPrototype := X3DPrototype32;
X3DPrototype60 := TX3DPrototypeNode.Create;
X3DPrototype60.NameField := 'point';
{ .AddX3DPrototype }
Group7.X3DPrototype := X3DPrototype60;
X3DPrototype61 := TX3DPrototypeNode.Create;
X3DPrototype61.NameField := 'point';
{ .AddX3DPrototype }
Group7.X3DPrototype := X3DPrototype61;
X3DPrototype62 := TX3DPrototypeNode.Create;
X3DPrototype62.NameField := 'point';
{ .AddX3DPrototype }
Group7.X3DPrototype := X3DPrototype62;
X3DPrototype63 := TX3DPrototypeNode.Create;
X3DPrototype63.NameField := 'point';
{ .AddX3DPrototype }
Group7.X3DPrototype := X3DPrototype63;
X3DPrototype64 := TX3DPrototypeNode.Create;
X3DPrototype64.NameField := 'x3dconnector';
SFNode65 := TSFNode.Create;
SFNode65.NameField := 'startnode';
X3DPrototype66.NameField := 'point';
X3DPrototype66 := X3DPrototype60;
{ .SetX3DPrototype }
SFNode65.X3DPrototype := X3DPrototype66;
{ .SetSFNode }
X3DPrototype64.SFNode := SFNode65;
SFNode67 := TSFNode.Create;
SFNode67.NameField := 'endnode';
X3DPrototype68.NameField := 'point';
X3DPrototype68 := X3DPrototype61;
{ .SetX3DPrototype }
SFNode67.X3DPrototype := X3DPrototype68;
{ .AddSFNode }
X3DPrototype64.SFNode := SFNode67;
SFVec3f69 := TSFVec3f.Create(x3dconnector2, false, 'set_startpoint', Vector3(0, 0, 0); { null });
SFVec3f69.NameField := 'set_startpoint';
{ .AddSFVec3f }
X3DPrototype64.SFVec3f := SFVec3f69;
SFVec3f70 := TSFVec3f.Create(x3dconnector2, false, 'set_endpoint', Vector3(0, 0, 0); { null });
SFVec3f70.NameField := 'set_endpoint';
{ .AddSFVec3f }
X3DPrototype64.SFVec3f := SFVec3f70;
{ .AddX3DPrototype }
Group7.X3DPrototype := X3DPrototype64;
X3DPrototype71 := TX3DPrototypeNode.Create;
X3DPrototype71.NameField := 'x3dconnector';
SFNode72 := TSFNode.Create;
SFNode72.NameField := 'startnode';
X3DPrototype73.NameField := 'point';
X3DPrototype73 := X3DPrototype60;
{ .SetX3DPrototype }
SFNode72.X3DPrototype := X3DPrototype73;
{ .SetSFNode }
X3DPrototype71.SFNode := SFNode72;
SFNode74 := TSFNode.Create;
SFNode74.NameField := 'endnode';
X3DPrototype75.NameField := 'point';
X3DPrototype75 := X3DPrototype62;
{ .SetX3DPrototype }
SFNode74.X3DPrototype := X3DPrototype75;
{ .AddSFNode }
X3DPrototype71.SFNode := SFNode74;
SFVec3f76 := TSFVec3f.Create(x3dconnector2, false, 'set_startpoint', Vector3(0, 0, 0); { null });
SFVec3f76.NameField := 'set_startpoint';
{ .AddSFVec3f }
X3DPrototype71.SFVec3f := SFVec3f76;
SFVec3f77 := TSFVec3f.Create(x3dconnector2, false, 'set_endpoint', Vector3(0, 0, 0); { null });
SFVec3f77.NameField := 'set_endpoint';
{ .AddSFVec3f }
X3DPrototype71.SFVec3f := SFVec3f77;
{ .AddX3DPrototype }
Group7.X3DPrototype := X3DPrototype71;
X3DPrototype78 := TX3DPrototypeNode.Create;
X3DPrototype78.NameField := 'x3dconnector';
SFNode79 := TSFNode.Create;
SFNode79.NameField := 'startnode';
X3DPrototype80.NameField := 'point';
X3DPrototype80 := X3DPrototype60;
{ .SetX3DPrototype }
SFNode79.X3DPrototype := X3DPrototype80;
{ .SetSFNode }
X3DPrototype78.SFNode := SFNode79;
SFNode81 := TSFNode.Create;
SFNode81.NameField := 'endnode';
X3DPrototype82.NameField := 'point';
X3DPrototype82 := X3DPrototype63;
{ .SetX3DPrototype }
SFNode81.X3DPrototype := X3DPrototype82;
{ .AddSFNode }
X3DPrototype78.SFNode := SFNode81;
SFVec3f83 := TSFVec3f.Create(x3dconnector2, false, 'set_startpoint', Vector3(0, 0, 0); { null });
SFVec3f83.NameField := 'set_startpoint';
{ .AddSFVec3f }
X3DPrototype78.SFVec3f := SFVec3f83;
SFVec3f84 := TSFVec3f.Create(x3dconnector2, false, 'set_endpoint', Vector3(0, 0, 0); { null });
SFVec3f84.NameField := 'set_endpoint';
{ .AddSFVec3f }
X3DPrototype78.SFVec3f := SFVec3f84;
{ .AddX3DPrototype }
Group7.X3DPrototype := X3DPrototype78;
Group7.AddRoute(X3DPrototype60.FdTranslation, X3DPrototype64.EventSet_startpoint);
{ .AddX3DRoute }
Group7.AddRoute(X3DPrototype61.FdTranslation, X3DPrototype64.EventSet_endpoint);
{ .AddX3DRoute }
Group7.AddRoute(X3DPrototype60.FdTranslation, X3DPrototype71.EventSet_startpoint);
{ .AddX3DRoute }
Group7.AddRoute(X3DPrototype62.FdTranslation, X3DPrototype71.EventSet_endpoint);
{ .AddX3DRoute }
Group7.AddRoute(X3DPrototype60.FdTranslation, X3DPrototype78.EventSet_startpoint);
{ .AddX3DRoute }
Group7.AddRoute(X3DPrototype63.FdTranslation, X3DPrototype78.EventSet_endpoint);
{ .AddX3DRoute }
{ .AddGroup }
X3D0.AddChildren([Group7]);
Result := X3D0;
end;

begin
end.

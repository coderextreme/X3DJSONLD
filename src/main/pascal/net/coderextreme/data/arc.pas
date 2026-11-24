unit arc;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

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
X3DPrototype31: TX3DPrototype;
X3DInterfaceDeclaration32: TX3DInterfaceDeclaration;
SFNode33: TSFNode;
SFNode34: TSFNode;
SFVec3f35: TSFVec3f;
SFVec3f36: TSFVec3f;
X3DPrototype37: TX3DPrototype;
Group38: TGroupNode;
Transform39: TTransformNode;
Transform40: TTransformNode;
Shape41: TShapeNode;
Appearance42: TAppearanceNode;
Material43: TMaterialNode;
Cylinder44: TCylinderNode;
Script45: TScriptNode;
SFNode46: TSFNode;
SFNode47: TSFNode;
SFNode48: TSFNode;
Transform49: TTransformNode;
SFNode50: TSFNode;
Transform51: TTransformNode;
SFVec3f52: TSFVec3f;
SFVec3f53: TSFVec3f;
X3DPrototype55: TX3DPrototypeNode;
X3DPrototype56: TX3DPrototypeNode;
X3DPrototype57: TX3DPrototypeNode;
X3DPrototype58: TX3DPrototypeNode;
X3DPrototype59: TX3DPrototypeNode;
SFNode60: TSFNode;
X3DPrototype61: TX3DPrototypeNode;
SFNode62: TSFNode;
X3DPrototype63: TX3DPrototypeNode;
SFVec3f64: TSFVec3f;
SFVec3f65: TSFVec3f;
X3DPrototype66: TX3DPrototypeNode;
SFNode67: TSFNode;
X3DPrototype68: TX3DPrototypeNode;
SFNode69: TSFNode;
X3DPrototype70: TX3DPrototypeNode;
SFVec3f71: TSFVec3f;
SFVec3f72: TSFVec3f;
X3DPrototype73: TX3DPrototypeNode;
SFNode74: TSFNode;
X3DPrototype75: TX3DPrototypeNode;
SFNode76: TSFNode;
X3DPrototype77: TX3DPrototypeNode;
SFVec3f78: TSFVec3f;
SFVec3f79: TSFVec3f;

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

procedure InitarcPart1;
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
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(keyValue);\n"+
"		}''');
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
{ METHOD .AddTransform }
X3DPrototype13.AddTransform([Transform14]);
{ METHOD .AddX3DPrototype }
X3DPrototype10.AddX3DPrototype([X3DPrototype13]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype10]);
X3DPrototype31 := TX3DPrototype.Create;;
X3DInterfaceDeclaration32 := TX3DInterfaceDeclaration.Create(nil);;
SFNode33 := TSFNode.CreateUndefined(X3DInterfaceDeclaration32, false, 'startnode');
{ METHOD .AddSFNode }
X3DInterfaceDeclaration32.AddSFNode([SFNode33]);
SFNode34 := TSFNode.CreateUndefined(X3DInterfaceDeclaration32, false, 'endnode');
{ METHOD .AddSFNode }
X3DInterfaceDeclaration32.AddSFNode([SFNode34]);
SFVec3f35 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration32, false, 'set_startpoint');
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration32.AddSFVec3f([SFVec3f35]);
SFVec3f36 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration32, false, 'set_endpoint');
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration32.AddSFVec3f([SFVec3f36]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype31.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration32]);
X3DPrototype37 := TX3DPrototype.Create;;
Group38 := TGroupNode.Create;;
Transform39 := TTransformNode.Create;;
Transform40 := TTransformNode.Create;;
Shape41 := TShapeNode.Create;;
Appearance42 := TAppearanceNode.Create;;
Material43 := TMaterialNode.Create;;
Material43.DiffuseColor := Vector3(0.2,0.7,0.7);
Material43.Transparency := 0.5;
{ METHOD .SetMaterial }
Appearance42.Material := Material43;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape41.Appearance := Appearance42;
Cylinder44 := TCylinderNode.Create;;
Cylinder44.Radius := 0.05;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape41.Geometry := Cylinder44;
{ METHOD .FdChildren.Add }
Transform40.FdChildren.Add(Shape41);
{ METHOD .FdChildren.Add }
Transform39.FdChildren.Add(Transform40);
{ METHOD .FdChildren.Add }
Group38.FdChildren.Add(Transform39);
Script45 := TScriptNode.Create;;
SFNode46 := TSFNode.CreateUndefined(Script45, false, 'startnode');
{ METHOD .Fd.AddCustomField }
Script45.AddCustomField(SFNode46);
SFNode47 := TSFNode.CreateUndefined(Script45, false, 'endnode');
{ METHOD .Fd.AddCustomField }
Script45.AddCustomField(SFNode47);
SFNode48 := TSFNode.CreateUndefined(Script45, false, 'position');
{ METHOD .Fd.Value }
SFNode48.Value := Transform39;
{ METHOD .Fd.AddCustomField }
Script45.AddCustomField(SFNode48);
SFNode50 := TSFNode.CreateUndefined(Script45, false, 'rotscale');
{ METHOD .Fd.Value }
SFNode50.Value := Transform40;
{ METHOD .Fd.AddCustomField }
Script45.AddCustomField(SFNode50);
SFVec3f52 := TSFVec3f.CreateUndefined(Script45, false, 'set_startpoint');
{ METHOD .Fd.AddCustomField }
Script45.AddCustomField(SFVec3f52);
SFVec3f53 := TSFVec3f.CreateUndefined(Script45, false, 'set_endpoint');
{ METHOD .Fd.AddCustomField }
Script45.AddCustomField(SFVec3f53);

Script45.SetSourceCode('''ecmascript:\n"+
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
Group38.FdChildren.Add(Script45);
{ METHOD .AddGroup }
X3DPrototype37.AddChildren([Group38]);
{ METHOD .AddX3DPrototype }
X3DPrototype31.AddX3DPrototype([X3DPrototype37]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype31]);
X3DPrototype55 := TX3DPrototypeNode;
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype55]);
X3DPrototype56 := TX3DPrototypeNode;
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype56]);
X3DPrototype57 := TX3DPrototypeNode;
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype57]);
X3DPrototype58 := TX3DPrototypeNode;
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype58]);
X3DPrototype59 := TX3DPrototypeNode;
SFNode60 := TSFNode.CreateUndefined(X3DPrototype59, false, 'startnode');
{ METHOD .AddX3DPrototype }
SFNode60.AddX3DPrototype([X3DPrototype55]);
{ METHOD .AddSFNode }
X3DPrototype59.AddSFNode([SFNode60]);
SFNode62 := TSFNode.CreateUndefined(X3DPrototype59, false, 'endnode');
{ METHOD .AddX3DPrototype }
SFNode62.AddX3DPrototype([X3DPrototype56]);
{ METHOD .AddSFNode }
X3DPrototype59.AddSFNode([SFNode62]);
SFVec3f64 := TSFVec3f.CreateUndefined(X3DPrototype59, false, 'set_startpoint');
{ METHOD .AddSFVec3f }
X3DPrototype59.AddSFVec3f([SFVec3f64]);
SFVec3f65 := TSFVec3f.CreateUndefined(X3DPrototype59, false, 'set_endpoint');
{ METHOD .AddSFVec3f }
X3DPrototype59.AddSFVec3f([SFVec3f65]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype59]);
X3DPrototype66 := TX3DPrototypeNode;
SFNode67 := TSFNode.CreateUndefined(X3DPrototype66, false, 'startnode');
{ METHOD .AddX3DPrototype }
SFNode67.AddX3DPrototype([X3DPrototype55]);
{ METHOD .AddSFNode }
X3DPrototype66.AddSFNode([SFNode67]);
SFNode69 := TSFNode.CreateUndefined(X3DPrototype66, false, 'endnode');
{ METHOD .AddX3DPrototype }
SFNode69.AddX3DPrototype([X3DPrototype57]);
{ METHOD .AddSFNode }
X3DPrototype66.AddSFNode([SFNode69]);
SFVec3f71 := TSFVec3f.CreateUndefined(X3DPrototype66, false, 'set_startpoint');
{ METHOD .AddSFVec3f }
X3DPrototype66.AddSFVec3f([SFVec3f71]);
SFVec3f72 := TSFVec3f.CreateUndefined(X3DPrototype66, false, 'set_endpoint');
{ METHOD .AddSFVec3f }
X3DPrototype66.AddSFVec3f([SFVec3f72]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype66]);
X3DPrototype73 := TX3DPrototypeNode;
SFNode74 := TSFNode.CreateUndefined(X3DPrototype73, false, 'startnode');
{ METHOD .AddX3DPrototype }
SFNode74.AddX3DPrototype([X3DPrototype55]);
{ METHOD .AddSFNode }
X3DPrototype73.AddSFNode([SFNode74]);
SFNode76 := TSFNode.CreateUndefined(X3DPrototype73, false, 'endnode');
{ METHOD .AddX3DPrototype }
SFNode76.AddX3DPrototype([X3DPrototype58]);
{ METHOD .AddSFNode }
X3DPrototype73.AddSFNode([SFNode76]);
SFVec3f78 := TSFVec3f.CreateUndefined(X3DPrototype73, false, 'set_startpoint');
{ METHOD .AddSFVec3f }
X3DPrototype73.AddSFVec3f([SFVec3f78]);
SFVec3f79 := TSFVec3f.CreateUndefined(X3DPrototype73, false, 'set_endpoint');
{ METHOD .AddSFVec3f }
X3DPrototype73.AddSFVec3f([SFVec3f79]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype73]);
{ Original "G1.EventTranslation TO connector1.EventSet_startpoint }
{ Sample G1.EventTranslation TO connector1.EventSet_startpoint}
Group7.AddRoute(X3DPrototype55.EventTranslation, X3DPrototype59.EventSet_startpoint);
{ METHOD .AddX3DROUTE }
{ Original "G2.EventTranslation TO connector1.EventSet_endpoint }
{ Sample G2.EventTranslation TO connector1.EventSet_endpoint}
Group7.AddRoute(X3DPrototype56.EventTranslation, X3DPrototype59.EventSet_endpoint);
{ METHOD .AddX3DROUTE }
{ Original "G1.EventTranslation TO connector2.EventSet_startpoint }
{ Sample G1.EventTranslation TO connector2.EventSet_startpoint}
Group7.AddRoute(X3DPrototype55.EventTranslation, X3DPrototype66.EventSet_startpoint);
{ METHOD .AddX3DROUTE }
{ Original "G3.EventTranslation TO connector2.EventSet_endpoint }
{ Sample G3.EventTranslation TO connector2.EventSet_endpoint}
Group7.AddRoute(X3DPrototype57.EventTranslation, X3DPrototype66.EventSet_endpoint);
{ METHOD .AddX3DROUTE }
{ Original "G1.EventTranslation TO connector3.EventSet_startpoint }
{ Sample G1.EventTranslation TO connector3.EventSet_startpoint}
Group7.AddRoute(X3DPrototype55.EventTranslation, X3DPrototype73.EventSet_startpoint);
{ METHOD .AddX3DROUTE }
{ Original "G4.EventTranslation TO connector3.EventSet_endpoint }
{ Sample G4.EventTranslation TO connector3.EventSet_endpoint}
Group7.AddRoute(X3DPrototype58.EventTranslation, X3DPrototype73.EventSet_endpoint);
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
